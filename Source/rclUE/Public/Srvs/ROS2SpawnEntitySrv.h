// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/SpawnEntity.srv - do not modify

#pragma once

#include <CoreMinimal.h>

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "ue_msgs/srv/spawn_entity.h"

#include "ROS2SpawnEntitySrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSpawnEntity_Request
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString xml;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString robot_namespace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString state_name;

	double state_pose_position_x;

	double state_pose_position_y;

	double state_pose_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat state_pose_orientation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector state_twist_linear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector state_twist_angular;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString state_reference_frame;

	

	void SetFromROS2(const ue_msgs__srv__SpawnEntity_Request& in_ros_data)
	{
    	xml.AppendChars(in_ros_data.xml.data, in_ros_data.xml.size);

		robot_namespace.AppendChars(in_ros_data.robot_namespace.data, in_ros_data.robot_namespace.size);

		state_name.AppendChars(in_ros_data.state.name.data, in_ros_data.state.name.size);

		state_pose_position_x = in_ros_data.state.pose.position.x;

		state_pose_position_y = in_ros_data.state.pose.position.y;

		state_pose_position_z = in_ros_data.state.pose.position.z;

		state_pose_orientation.X = in_ros_data.state.pose.orientation.x;
		state_pose_orientation.Y = in_ros_data.state.pose.orientation.y;
		state_pose_orientation.Z = in_ros_data.state.pose.orientation.z;
		state_pose_orientation.W = in_ros_data.state.pose.orientation.w;

		state_twist_linear.X = in_ros_data.state.twist.linear.x;
		state_twist_linear.Y = in_ros_data.state.twist.linear.y;
		state_twist_linear.Z = in_ros_data.state.twist.linear.z;

		state_twist_angular.X = in_ros_data.state.twist.angular.x;
		state_twist_angular.Y = in_ros_data.state.twist.angular.y;
		state_twist_angular.Z = in_ros_data.state.twist.angular.z;

		state_reference_frame.AppendChars(in_ros_data.state.reference_frame.data, in_ros_data.state.reference_frame.size);

		
	}

	void SetROS2(ue_msgs__srv__SpawnEntity_Request& out_ros_data) const
	{
    	{
			FTCHARToUTF8 strUtf8( *xml );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.xml.data != nullptr)
		{
			free(out_ros_data.xml.data);
		}
		out_ros_data.xml.data = (decltype(out_ros_data.xml.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.xml.data)));
		memcpy(out_ros_data.xml.data, TCHAR_TO_UTF8(*xml), (strLength+1)*sizeof(char));
			out_ros_data.xml.size = strLength;
			out_ros_data.xml.capacity = strLength + 1;
		}

		{
			FTCHARToUTF8 strUtf8( *robot_namespace );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.robot_namespace.data != nullptr)
		{
			free(out_ros_data.robot_namespace.data);
		}
		out_ros_data.robot_namespace.data = (decltype(out_ros_data.robot_namespace.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.robot_namespace.data)));
		memcpy(out_ros_data.robot_namespace.data, TCHAR_TO_UTF8(*robot_namespace), (strLength+1)*sizeof(char));
			out_ros_data.robot_namespace.size = strLength;
			out_ros_data.robot_namespace.capacity = strLength + 1;
		}

		{
			FTCHARToUTF8 strUtf8( *state_name );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.state.name.data != nullptr)
		{
			free(out_ros_data.state.name.data);
		}
		out_ros_data.state.name.data = (decltype(out_ros_data.state.name.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.state.name.data)));
		memcpy(out_ros_data.state.name.data, TCHAR_TO_UTF8(*state_name), (strLength+1)*sizeof(char));
			out_ros_data.state.name.size = strLength;
			out_ros_data.state.name.capacity = strLength + 1;
		}

		out_ros_data.state.pose.position.x = state_pose_position_x;

		out_ros_data.state.pose.position.y = state_pose_position_y;

		out_ros_data.state.pose.position.z = state_pose_position_z;

		out_ros_data.state.pose.orientation.x = state_pose_orientation.X;
		out_ros_data.state.pose.orientation.y = state_pose_orientation.Y;
		out_ros_data.state.pose.orientation.z = state_pose_orientation.Z;
		out_ros_data.state.pose.orientation.w = state_pose_orientation.W;

		out_ros_data.state.twist.linear.x = state_twist_linear.X;
		out_ros_data.state.twist.linear.y = state_twist_linear.Y;
		out_ros_data.state.twist.linear.z = state_twist_linear.Z;

		out_ros_data.state.twist.angular.x = state_twist_angular.X;
		out_ros_data.state.twist.angular.y = state_twist_angular.Y;
		out_ros_data.state.twist.angular.z = state_twist_angular.Z;

		{
			FTCHARToUTF8 strUtf8( *state_reference_frame );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.state.reference_frame.data != nullptr)
		{
			free(out_ros_data.state.reference_frame.data);
		}
		out_ros_data.state.reference_frame.data = (decltype(out_ros_data.state.reference_frame.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.state.reference_frame.data)));
		memcpy(out_ros_data.state.reference_frame.data, TCHAR_TO_UTF8(*state_reference_frame), (strLength+1)*sizeof(char));
			out_ros_data.state.reference_frame.size = strLength;
			out_ros_data.state.reference_frame.capacity = strLength + 1;
		}

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSpawnEntity_Response
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString status_message;

	

	void SetFromROS2(const ue_msgs__srv__SpawnEntity_Response& in_ros_data)
	{
    	success = in_ros_data.success;

		status_message.AppendChars(in_ros_data.status_message.data, in_ros_data.status_message.size);

		
	}

	void SetROS2(ue_msgs__srv__SpawnEntity_Response& out_ros_data) const
	{
    	out_ros_data.success = success;

		{
			FTCHARToUTF8 strUtf8( *status_message );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.status_message.data != nullptr)
		{
			free(out_ros_data.status_message.data);
		}
		out_ros_data.status_message.data = (decltype(out_ros_data.status_message.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.status_message.data)));
		memcpy(out_ros_data.status_message.data, TCHAR_TO_UTF8(*status_message), (strLength+1)*sizeof(char));
			out_ros_data.status_message.size = strLength;
			out_ros_data.status_message.capacity = strLength + 1;
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2SpawnEntitySrv : public UROS2GenericSrv
{
	GENERATED_BODY()

public:
  	UFUNCTION(BlueprintCallable)
	virtual void Init() override;

  	UFUNCTION(BlueprintCallable)
	virtual void Fini() override;

	virtual const rosidl_service_type_support_t* GetTypeSupport() const override;
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void SetRequest(const FROSSpawnEntity_Request& Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FROSSpawnEntity_Request& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FROSSpawnEntity_Response& Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FROSSpawnEntity_Response& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	ue_msgs__srv__SpawnEntity_Request SpawnEntity_req;
	ue_msgs__srv__SpawnEntity_Response SpawnEntity_res;
};