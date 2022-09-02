// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/AccelStamped.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "geometry_msgs/msg/accel_stamped.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2AccelStampedMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSAccelStamped
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
	FVector AccelLinear = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector AccelAngular = FVector::ZeroVector;

	

	void SetFromROS2(const geometry_msgs__msg__AccelStamped& in_ros_data)
	{
    	HeaderStampSec = in_ros_data.header.stamp.sec;

		HeaderStampNanosec = in_ros_data.header.stamp.nanosec;

		HeaderFrameId.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		AccelLinear.X = in_ros_data.accel.linear.x;
		AccelLinear.Y = in_ros_data.accel.linear.y;
		AccelLinear.Z = in_ros_data.accel.linear.z;

		AccelAngular.X = in_ros_data.accel.angular.x;
		AccelAngular.Y = in_ros_data.accel.angular.y;
		AccelAngular.Z = in_ros_data.accel.angular.z;

		
	}

	void SetROS2(geometry_msgs__msg__AccelStamped& out_ros_data) const
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

		out_ros_data.accel.linear.x = AccelLinear.X;
		out_ros_data.accel.linear.y = AccelLinear.Y;
		out_ros_data.accel.linear.z = AccelLinear.Z;

		out_ros_data.accel.angular.x = AccelAngular.X;
		out_ros_data.accel.angular.y = AccelAngular.Y;
		out_ros_data.accel.angular.z = AccelAngular.Z;

		
	}
};

UCLASS()
class RCLUE_API UROS2AccelStampedMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSAccelStamped& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSAccelStamped& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__AccelStamped accel_stamped_msg;
};