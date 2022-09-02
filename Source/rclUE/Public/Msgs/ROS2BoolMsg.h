// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Bool.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "example_interfaces/msg/bool.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2BoolMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSBool
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bData = false;

	

	void SetFromROS2(const example_interfaces__msg__Bool& in_ros_data)
	{
    	bData = in_ros_data.data;

		
	}

	void SetROS2(example_interfaces__msg__Bool& out_ros_data) const
	{
    	out_ros_data.data = bData;

		
	}
};

UCLASS()
class RCLUE_API UROS2BoolMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSBool& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSBool& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	example_interfaces__msg__Bool bool_msg;
};