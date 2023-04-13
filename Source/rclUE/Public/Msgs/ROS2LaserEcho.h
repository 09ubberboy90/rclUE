// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/LaserEcho.msg - do not
// modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/laser_echo.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2LaserEcho.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSLaserEcho {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<float> Echoes;

  FROSLaserEcho() {}

  void SetFromROS2(const sensor_msgs__msg__LaserEcho &in_ros_data) {
    UROS2Utils::SequenceROSToUEArray<float, float>(
        in_ros_data.echoes.data, Echoes, in_ros_data.echoes.size);
  }

  void SetROS2(sensor_msgs__msg__LaserEcho &out_ros_data) const {
    if (out_ros_data.echoes.data) {
      rosidl_runtime_c__float32__Sequence__fini(&out_ros_data.echoes);
    }
    if (!rosidl_runtime_c__float32__Sequence__init(&out_ros_data.echoes,
                                                   Echoes.Num())) {
      UE_LOG(LogTemp, Error,
             TEXT("failed to create array for field out_ros_data.echoes  "));
    }
    UROS2Utils::ArrayUEToROSSequence<float, float>(
        Echoes, out_ros_data.echoes.data, Echoes.Num());
  }
};

UCLASS()
class RCLUE_API UROS2LaserEchoMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSLaserEcho &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSLaserEcho &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  sensor_msgs__msg__LaserEcho laser_echo_msg;
};