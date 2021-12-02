// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/Int64MultiArray.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "example_interfaces/msg/int64_multi_array.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2Int64MultiArrayMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSInt64MultiArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> layout_dim_label;

	TArray<unsigned int> layout_dim_size;

	TArray<unsigned int> layout_dim_stride;

	unsigned int layout_data_offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int64> data;

	

	void SetFromROS2(const example_interfaces__msg__Int64MultiArray& in_ros_data)
	{
    	for (int i = 0; i < in_ros_data.layout.dim.size; i++)
		{
			layout_dim_label.Add("");
			layout_dim_label[i].AppendChars(in_ros_data.layout.dim.data[i].label.data,in_ros_data.layout.dim.data[i].label.size);
		}

		for (int i = 0; i < in_ros_data.layout.dim.size; i++)
		{
			layout_dim_size.Add(in_ros_data.layout.dim.data[i].size);
		}

		for (int i = 0; i < in_ros_data.layout.dim.size; i++)
		{
			layout_dim_stride.Add(in_ros_data.layout.dim.data[i].stride);
		}

		layout_data_offset = in_ros_data.layout.data_offset;

		for (int i = 0; i < in_ros_data.data.size; i++)
		{
			data.Add(in_ros_data.data.data[i]);
		}

		
	}

	void SetROS2(example_interfaces__msg__Int64MultiArray& out_ros_data) const
	{
    	out_ros_data.layout.data_offset = layout_data_offset;

		if (out_ros_data.layout.dim.data != nullptr)
		{
			free(out_ros_data.layout.dim.data);
		}
		out_ros_data.layout.dim.data = (decltype(out_ros_data.layout.dim.data))malloc(layout_dim_label.Num() * (sizeof(layout_dim_label) + sizeof(layout_dim_size) + sizeof(layout_dim_stride)));
		out_ros_data.layout.dim.size = layout_dim_label.Num();
		out_ros_data.layout.dim.capacity = layout_dim_label.Num();
		for (int i = 0; i < layout_dim_label.Num(); i++)
		{
			{
				FTCHARToUTF8 strUtf8( *layout_dim_label[i] );
			int32 strLength = strUtf8.Length();
				out_ros_data.layout.dim.data[i].label.data = (decltype(out_ros_data.layout.dim.data[i].label.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.layout.dim.data[i].label.data)));
		memcpy(out_ros_data.layout.dim.data[i].label.data, TCHAR_TO_UTF8(*layout_dim_label[i]), (strLength+1)*sizeof(char));
				out_ros_data.layout.dim.data[i].label.size = strLength;
				out_ros_data.layout.dim.data[i].label.capacity = strLength + 1;
			}

			out_ros_data.layout.dim.data[i].size = layout_dim_size[i];

			out_ros_data.layout.dim.data[i].stride = layout_dim_stride[i];

			}
	if (out_ros_data.data.data != nullptr)
		{
			free(out_ros_data.data.data);
		}
		out_ros_data.data.data = (decltype(out_ros_data.data.data))malloc((data.Num())*sizeof(decltype(*out_ros_data.data.data)));
		
		for (int i = 0; i < data.Num(); i++)
		{
			out_ros_data.data.data[i] = data[i];
		}

		out_ros_data.data.size = data.Num();
		out_ros_data.data.capacity = data.Num();

		
	}
};

UCLASS()
class RCLUE_API UROS2Int64MultiArrayMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSInt64MultiArray& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSInt64MultiArray& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	example_interfaces__msg__Int64MultiArray int64_multi_array_msg;
};