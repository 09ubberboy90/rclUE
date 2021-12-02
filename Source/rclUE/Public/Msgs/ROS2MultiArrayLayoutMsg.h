// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/MultiArrayLayout.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "example_interfaces/msg/multi_array_layout.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2MultiArrayLayoutMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMultiArrayLayout
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> dim_label;

	TArray<unsigned int> dim_size;

	TArray<unsigned int> dim_stride;

	unsigned int data_offset;

	

	void SetFromROS2(const example_interfaces__msg__MultiArrayLayout& in_ros_data)
	{
    	for (int i = 0; i < in_ros_data.dim.size; i++)
		{
			dim_label.Add("");
			dim_label[i].AppendChars(in_ros_data.dim.data[i].label.data,in_ros_data.dim.data[i].label.size);
		}

		for (int i = 0; i < in_ros_data.dim.size; i++)
		{
			dim_size.Add(in_ros_data.dim.data[i].size);
		}

		for (int i = 0; i < in_ros_data.dim.size; i++)
		{
			dim_stride.Add(in_ros_data.dim.data[i].stride);
		}

		data_offset = in_ros_data.data_offset;

		
	}

	void SetROS2(example_interfaces__msg__MultiArrayLayout& out_ros_data) const
	{
    	if (out_ros_data.dim.data != nullptr)
		{
			free(out_ros_data.dim.data);
		}
		out_ros_data.dim.data = (decltype(out_ros_data.dim.data))malloc(dim_label.Num() * (sizeof(dim_label) + sizeof(dim_size) + sizeof(dim_stride)));
		out_ros_data.dim.size = dim_label.Num();
		out_ros_data.dim.capacity = dim_label.Num();
		for (int i = 0; i < dim_label.Num(); i++)
		{
			{
				FTCHARToUTF8 strUtf8( *dim_label[i] );
			int32 strLength = strUtf8.Length();
				out_ros_data.dim.data[i].label.data = (decltype(out_ros_data.dim.data[i].label.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.dim.data[i].label.data)));
		memcpy(out_ros_data.dim.data[i].label.data, TCHAR_TO_UTF8(*dim_label[i]), (strLength+1)*sizeof(char));
				out_ros_data.dim.data[i].label.size = strLength;
				out_ros_data.dim.data[i].label.capacity = strLength + 1;
			}

			out_ros_data.dim.data[i].size = dim_size[i];

			out_ros_data.dim.data[i].stride = dim_stride[i];

			}
	out_ros_data.data_offset = data_offset;

		
	}
};

UCLASS()
class RCLUE_API UROS2MultiArrayLayoutMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSMultiArrayLayout& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSMultiArrayLayout& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	example_interfaces__msg__MultiArrayLayout multi_array_layout_msg;
};