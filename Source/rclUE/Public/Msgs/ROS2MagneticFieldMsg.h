// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/MagneticField.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "sensor_msgs/msg/magnetic_field.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2MagneticFieldMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMagneticField
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int HeaderStampSec = 0;

	UPROPERTY(EditAnywhere)
	unsigned int HeaderStampNanosec = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HeaderFrameId;

	UPROPERTY(EditAnywhere)
	double MagneticFieldX = 0.f;

	UPROPERTY(EditAnywhere)
	double MagneticFieldY = 0.f;

	UPROPERTY(EditAnywhere)
	double MagneticFieldZ = 0.f;

	UPROPERTY(EditAnywhere)
	TArray<double> MagneticFieldCovariance;

	

	void SetFromROS2(const sensor_msgs__msg__MagneticField& in_ros_data)
	{
    	HeaderStampSec = in_ros_data.header.stamp.sec;

		HeaderStampNanosec = in_ros_data.header.stamp.nanosec;

		HeaderFrameId.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		MagneticFieldX = in_ros_data.magnetic_field.x;

		MagneticFieldY = in_ros_data.magnetic_field.y;

		MagneticFieldZ = in_ros_data.magnetic_field.z;

		for (auto i = 0; i < 9; ++i)
		{
			MagneticFieldCovariance.Emplace(in_ros_data.magnetic_field_covariance[i]);
		}

		
	}

	void SetROS2(sensor_msgs__msg__MagneticField& out_ros_data) const
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

		out_ros_data.magnetic_field.x = MagneticFieldX;

		out_ros_data.magnetic_field.y = MagneticFieldY;

		out_ros_data.magnetic_field.z = MagneticFieldZ;

		for (auto i = 0; i < 9; ++i)
		{
			out_ros_data.magnetic_field_covariance[i] = MagneticFieldCovariance[i];
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2MagneticFieldMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSMagneticField& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSMagneticField& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__MagneticField magnetic_field_msg;
};