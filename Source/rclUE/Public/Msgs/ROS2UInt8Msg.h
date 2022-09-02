// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/UInt8.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "example_interfaces/msg/u_int8.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2UInt8Msg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSUInt8
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Data = 0;

	

	void SetFromROS2(const example_interfaces__msg__UInt8& in_ros_data)
	{
    	Data = in_ros_data.data;

		
	}

	void SetROS2(example_interfaces__msg__UInt8& out_ros_data) const
	{
    	out_ros_data.data = Data;

		
	}
};

UCLASS()
class RCLUE_API UROS2UInt8Msg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSUInt8& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSUInt8& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	example_interfaces__msg__UInt8 u_int8_msg;
};