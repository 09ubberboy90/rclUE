// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/JoyFeedbackArray.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "sensor_msgs/msg/joy_feedback_array.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2JoyFeedbackArrayMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSJoyFeedbackArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<uint8> ArrayType;

	UPROPERTY(EditAnywhere)
	TArray<uint8> ArrayId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> ArrayIntensity;

	

	void SetFromROS2(const sensor_msgs__msg__JoyFeedbackArray& in_ros_data)
	{
    	for (auto i = 0; i < in_ros_data.array.size; ++i)
		{
			ArrayType.Emplace(in_ros_data.array.data[i].type);
		}

		for (auto i = 0; i < in_ros_data.array.size; ++i)
		{
			ArrayId.Emplace(in_ros_data.array.data[i].id);
		}

		for (auto i = 0; i < in_ros_data.array.size; ++i)
		{
			ArrayIntensity.Emplace(in_ros_data.array.data[i].intensity);
		}

		
	}

	void SetROS2(sensor_msgs__msg__JoyFeedbackArray& out_ros_data) const
	{
    	if (out_ros_data.array.data != nullptr)
		{
			free(out_ros_data.array.data);
		}
		out_ros_data.array.data = (decltype(out_ros_data.array.data))malloc(ArrayType.Num() * (sizeof(ArrayType) + sizeof(ArrayId) + sizeof(ArrayIntensity)));
		out_ros_data.array.size = ArrayType.Num();
		out_ros_data.array.capacity = ArrayType.Num();
		for (auto i = 0; i < ArrayType.Num(); ++i)
		{
			out_ros_data.array.data[i].type = ArrayType[i];

			out_ros_data.array.data[i].id = ArrayId[i];

			out_ros_data.array.data[i].intensity = ArrayIntensity[i];

			}
	
	}
};

UCLASS()
class RCLUE_API UROS2JoyFeedbackArrayMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSJoyFeedbackArray& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSJoyFeedbackArray& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__JoyFeedbackArray joy_feedback_array_msg;
};