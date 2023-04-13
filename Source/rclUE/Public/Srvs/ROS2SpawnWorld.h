// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/SpawnWorld.srv - do not
// modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "ue_msgs/srv/spawn_world.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Pose.h"

// Generated
#include "ROS2SpawnWorld.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSpawnWorldReq {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString WorldModel;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString WorldInstanceName;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSPose Pose;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString JsonParameters;

  FROSSpawnWorldReq() {}

  void SetFromROS2(const ue_msgs__srv__SpawnWorld_Request &in_ros_data) {
    WorldModel = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(
        in_ros_data.world_model);

    WorldInstanceName = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(
        in_ros_data.world_instance_name);

    Pose.SetFromROS2(in_ros_data.pose);

    JsonParameters = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(
        in_ros_data.json_parameters);
  }

  void SetROS2(ue_msgs__srv__SpawnWorld_Request &out_ros_data) const {
    UROS2Utils::StringUEToROS(WorldModel, out_ros_data.world_model);

    UROS2Utils::StringUEToROS(WorldInstanceName,
                              out_ros_data.world_instance_name);

    Pose.SetROS2(out_ros_data.pose);

    UROS2Utils::StringUEToROS(JsonParameters, out_ros_data.json_parameters);
  }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSpawnWorldRes {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  bool bSuccess = false;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString StatusMessage;

  FROSSpawnWorldRes() {}

  void SetFromROS2(const ue_msgs__srv__SpawnWorld_Response &in_ros_data) {
    bSuccess = in_ros_data.success;

    StatusMessage = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(
        in_ros_data.status_message);
  }

  void SetROS2(ue_msgs__srv__SpawnWorld_Response &out_ros_data) const {
    out_ros_data.success = bSuccess;

    UROS2Utils::StringUEToROS(StatusMessage, out_ros_data.status_message);
  }
};

UCLASS()
class RCLUE_API UROS2SpawnWorldSrv : public UROS2GenericSrv {
  GENERATED_BODY()

public:
  UFUNCTION(BlueprintCallable)
  virtual void Init() override;

  UFUNCTION(BlueprintCallable)
  virtual void Fini() override;

  virtual const rosidl_service_type_support_t *GetTypeSupport() const override;

  // used by client
  UFUNCTION(BlueprintCallable)
  void SetRequest(const FROSSpawnWorldReq &Request);

  // used by service
  UFUNCTION(BlueprintCallable)
  void GetRequest(FROSSpawnWorldReq &Request) const;

  // used by service
  UFUNCTION(BlueprintCallable)
  void SetResponse(const FROSSpawnWorldRes &Response);

  // used by client
  UFUNCTION(BlueprintCallable)
  void GetResponse(FROSSpawnWorldRes &Response) const;

  virtual void *GetRequest() override;
  virtual void *GetResponse() override;

private:
  virtual FString SrvRequestToString() const override;
  virtual FString SrvResponseToString() const override;

  ue_msgs__srv__SpawnWorld_Request SpawnWorld_req;
  ue_msgs__srv__SpawnWorld_Response SpawnWorld_res;
};