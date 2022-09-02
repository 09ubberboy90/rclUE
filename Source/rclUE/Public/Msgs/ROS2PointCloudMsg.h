// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/PointCloud.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "sensor_msgs/msg/point_cloud.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2PointCloudMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPointCloud
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int HeaderStampSec = 0;

	UPROPERTY(EditAnywhere)
	unsigned int HeaderStampNanosec = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HeaderFrameId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> PointsX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> PointsY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> PointsZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ChannelsName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> ChannelsValues;

	

	void SetFromROS2(const sensor_msgs__msg__PointCloud& in_ros_data)
	{
    	HeaderStampSec = in_ros_data.header.stamp.sec;

		HeaderStampNanosec = in_ros_data.header.stamp.nanosec;

		HeaderFrameId.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		for (auto i = 0; i < in_ros_data.points.size; ++i)
		{
			PointsX.Emplace(in_ros_data.points.data[i].x);
		}

		for (auto i = 0; i < in_ros_data.points.size; ++i)
		{
			PointsY.Emplace(in_ros_data.points.data[i].y);
		}

		for (auto i = 0; i < in_ros_data.points.size; ++i)
		{
			PointsZ.Emplace(in_ros_data.points.data[i].z);
		}

		for (auto i = 0; i < in_ros_data.channels.size; ++i)
		{
			ChannelsName.Emplace("");
			ChannelsName[i].AppendChars(in_ros_data.channels.data[i].name.data,in_ros_data.channels.data[i].name.size);
		}

		for (auto i = 0; i < in_ros_data.channels.size; ++i)
		{
			ChannelsValues.Emplace(in_ros_data.channels.data[i].values.data[i]);
		}

		
	}

	void SetROS2(sensor_msgs__msg__PointCloud& out_ros_data) const
	{
    	out_ros_data.header.stamp.sec = HeaderStampSec;

		out_ros_data.header.stamp.nanosec = HeaderStampNanosec;

		{
			FTCHARToUTF8 strUtf8( *HeaderFrameId );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.header.frame_id.data != nullptr)
		{
			free(out_ros_data.header.frame_id.data);
		}
		out_ros_data.header.frame_id.data = (decltype(out_ros_data.header.frame_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.header.frame_id.data)));
		memcpy(out_ros_data.header.frame_id.data, TCHAR_TO_UTF8(*HeaderFrameId), (strLength+1)*sizeof(char));
			out_ros_data.header.frame_id.size = strLength;
			out_ros_data.header.frame_id.capacity = strLength + 1;
		}

		if (out_ros_data.points.data != nullptr)
		{
			free(out_ros_data.points.data);
		}
		out_ros_data.points.data = (decltype(out_ros_data.points.data))malloc(PointsX.Num() * (sizeof(PointsX) + sizeof(PointsY) + sizeof(PointsZ)));
		out_ros_data.points.size = PointsX.Num();
		out_ros_data.points.capacity = PointsX.Num();
		for (auto i = 0; i < PointsX.Num(); ++i)
		{
			out_ros_data.points.data[i].x = PointsX[i];

			out_ros_data.points.data[i].y = PointsY[i];

			out_ros_data.points.data[i].z = PointsZ[i];

			}
	if (out_ros_data.channels.data != nullptr)
		{
			free(out_ros_data.channels.data);
		}
		out_ros_data.channels.data = (decltype(out_ros_data.channels.data))malloc(ChannelsName.Num() * (sizeof(ChannelsName) + sizeof(ChannelsValues)));
		out_ros_data.channels.size = ChannelsName.Num();
		out_ros_data.channels.capacity = ChannelsName.Num();
		for (auto i = 0; i < ChannelsName.Num(); ++i)
		{
			{
				FTCHARToUTF8 strUtf8( *ChannelsName[i] );
			int32 strLength = strUtf8.Length();
				out_ros_data.channels.data[i].name.data = (decltype(out_ros_data.channels.data[i].name.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.channels.data[i].name.data)));
		memcpy(out_ros_data.channels.data[i].name.data, TCHAR_TO_UTF8(*ChannelsName[i]), (strLength+1)*sizeof(char));
				out_ros_data.channels.data[i].name.size = strLength;
				out_ros_data.channels.data[i].name.capacity = strLength + 1;
			}

			out_ros_data.channels.data[i].values.data[i] = ChannelsValues[i];

			}
	
	}
};

UCLASS()
class RCLUE_API UROS2PointCloudMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSPointCloud& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSPointCloud& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__PointCloud point_cloud_msg;
};