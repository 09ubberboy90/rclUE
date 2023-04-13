// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/SetEntityState.srv - do not
// modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "ue_msgs/srv/set_entity_state.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2EntityState.h"

// Generated
#include "ROS2SetEntityState.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSetEntityStateReq {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSEntityState State;

  FROSSetEntityStateReq() {}

  void SetFromROS2(const ue_msgs__srv__SetEntityState_Request &in_ros_data) {
    State.SetFromROS2(in_ros_data.state);
  }

  void SetROS2(ue_msgs__srv__SetEntityState_Request &out_ros_data) const {
    State.SetROS2(out_ros_data.state);
  }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSetEntityStateRes {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  bool bSuccess = false;

  FROSSetEntityStateRes() {}

  void SetFromROS2(const ue_msgs__srv__SetEntityState_Response &in_ros_data) {
    bSuccess = in_ros_data.success;
  }

  void SetROS2(ue_msgs__srv__SetEntityState_Response &out_ros_data) const {
    out_ros_data.success = bSuccess;
  }
};

UCLASS()
class RCLUE_API UROS2SetEntityStateSrv : public UROS2GenericSrv {
  GENERATED_BODY()

public:
  UFUNCTION(BlueprintCallable)
  virtual void Init() override;

  UFUNCTION(BlueprintCallable)
  virtual void Fini() override;

  virtual const rosidl_service_type_support_t *GetTypeSupport() const override;

  // used by client
  UFUNCTION(BlueprintCallable)
  void SetRequest(const FROSSetEntityStateReq &Request);

  // used by service
  UFUNCTION(BlueprintCallable)
  void GetRequest(FROSSetEntityStateReq &Request) const;

  // used by service
  UFUNCTION(BlueprintCallable)
  void SetResponse(const FROSSetEntityStateRes &Response);

  // used by client
  UFUNCTION(BlueprintCallable)
  void GetResponse(FROSSetEntityStateRes &Response) const;

  virtual void *GetRequest() override;
  virtual void *GetResponse() override;

private:
  virtual FString SrvRequestToString() const override;
  virtual FString SrvResponseToString() const override;

  ue_msgs__srv__SetEntityState_Request SetEntityState_req;
  ue_msgs__srv__SetEntityState_Response SetEntityState_res;
};