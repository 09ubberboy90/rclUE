// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/UInt8MultiArray.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "example_interfaces/msg/u_int8_multi_array.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2UInt8MultiArrayMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSUInt8MultiArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> LayoutDimLabel;

	UPROPERTY(EditAnywhere)
	TArray<unsigned int> LayoutDimSize;

	UPROPERTY(EditAnywhere)
	TArray<unsigned int> LayoutDimStride;

	UPROPERTY(EditAnywhere)
	unsigned int LayoutDataOffset = 0;

	UPROPERTY(EditAnywhere)
	TArray<uint8> Data;

	

	void SetFromROS2(const example_interfaces__msg__UInt8MultiArray& in_ros_data)
	{
    	for (auto i = 0; i < in_ros_data.layout.dim.size; ++i)
		{
			LayoutDimLabel.Emplace("");
			LayoutDimLabel[i].AppendChars(in_ros_data.layout.dim.data[i].label.data,in_ros_data.layout.dim.data[i].label.size);
		}

		for (auto i = 0; i < in_ros_data.layout.dim.size; ++i)
		{
			LayoutDimSize.Emplace(in_ros_data.layout.dim.data[i].size);
		}

		for (auto i = 0; i < in_ros_data.layout.dim.size; ++i)
		{
			LayoutDimStride.Emplace(in_ros_data.layout.dim.data[i].stride);
		}

		LayoutDataOffset = in_ros_data.layout.data_offset;

		for (auto i = 0; i < in_ros_data.data.size; ++i)
		{
			Data.Emplace(in_ros_data.data.data[i]);
		}

		
	}

	void SetROS2(example_interfaces__msg__UInt8MultiArray& out_ros_data) const
	{
    	out_ros_data.layout.data_offset = LayoutDataOffset;

		if (out_ros_data.layout.dim.data != nullptr)
		{
			free(out_ros_data.layout.dim.data);
		}
		out_ros_data.layout.dim.data = (decltype(out_ros_data.layout.dim.data))malloc(LayoutDimLabel.Num() * (sizeof(LayoutDimLabel) + sizeof(LayoutDimSize) + sizeof(LayoutDimStride)));
		out_ros_data.layout.dim.size = LayoutDimLabel.Num();
		out_ros_data.layout.dim.capacity = LayoutDimLabel.Num();
		for (auto i = 0; i < LayoutDimLabel.Num(); ++i)
		{
			{
				FTCHARToUTF8 strUtf8( *LayoutDimLabel[i] );
			int32 strLength = strUtf8.Length();
				out_ros_data.layout.dim.data[i].label.data = (decltype(out_ros_data.layout.dim.data[i].label.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.layout.dim.data[i].label.data)));
		memcpy(out_ros_data.layout.dim.data[i].label.data, TCHAR_TO_UTF8(*LayoutDimLabel[i]), (strLength+1)*sizeof(char));
				out_ros_data.layout.dim.data[i].label.size = strLength;
				out_ros_data.layout.dim.data[i].label.capacity = strLength + 1;
			}

			out_ros_data.layout.dim.data[i].size = LayoutDimSize[i];

			out_ros_data.layout.dim.data[i].stride = LayoutDimStride[i];

			}
	if (out_ros_data.data.data != nullptr)
		{
			free(out_ros_data.data.data);
		}
		out_ros_data.data.data = (decltype(out_ros_data.data.data))malloc((Data.Num())*sizeof(decltype(*out_ros_data.data.data)));
		
		for (auto i = 0; i < Data.Num(); ++i)
		{
			out_ros_data.data.data[i] = Data[i];
		}

		out_ros_data.data.size = Data.Num();
		out_ros_data.data.capacity = Data.Num();

		
	}
};

UCLASS()
class RCLUE_API UROS2UInt8MultiArrayMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSUInt8MultiArray& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSUInt8MultiArray& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	example_interfaces__msg__UInt8MultiArray u_int8_multi_array_msg;
};