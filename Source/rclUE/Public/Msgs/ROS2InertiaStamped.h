// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/InertiaStamped.msg -
// do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/inertia_stamped.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Inertia.h"

// Generated
#include "ROS2InertiaStamped.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSInertiaStamped {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSHeader Header;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSInertia Inertia;

  FROSInertiaStamped() {}

  void SetFromROS2(const geometry_msgs__msg__InertiaStamped &in_ros_data) {
    Header.SetFromROS2(in_ros_data.header);

    Inertia.SetFromROS2(in_ros_data.inertia);
  }

  void SetROS2(geometry_msgs__msg__InertiaStamped &out_ros_data) const {
    Header.SetROS2(out_ros_data.header);

    Inertia.SetROS2(out_ros_data.inertia);
  }
};

UCLASS()
class RCLUE_API UROS2InertiaStampedMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSInertiaStamped &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSInertiaStamped &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  geometry_msgs__msg__InertiaStamped inertia_stamped_msg;
};