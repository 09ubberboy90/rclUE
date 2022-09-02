// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/SpawnEntity.srv - do not modify

#pragma once

#include <CoreMinimal.h>

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "ue_msgs/srv/spawn_entity.h"

#include "ROS2SpawnEntitySrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSpawnEntityRequest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Xml;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RobotNamespace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StateName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector StatePosePosition = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat StatePoseOrientation = FQuat::Identity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector StateTwistLinear = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector StateTwistAngular = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StateReferenceFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Tags;

	

	void SetFromROS2(const ue_msgs__srv__SpawnEntity_Request& in_ros_data)
	{
    	Xml.AppendChars(in_ros_data.xml.data, in_ros_data.xml.size);

		RobotNamespace.AppendChars(in_ros_data.robot_namespace.data, in_ros_data.robot_namespace.size);

		StateName.AppendChars(in_ros_data.state.name.data, in_ros_data.state.name.size);

		StatePosePosition.X = in_ros_data.state.pose.position.x;
		StatePosePosition.Y = in_ros_data.state.pose.position.y;
		StatePosePosition.Z = in_ros_data.state.pose.position.z;

		StatePoseOrientation.X = in_ros_data.state.pose.orientation.x;
		StatePoseOrientation.Y = in_ros_data.state.pose.orientation.y;
		StatePoseOrientation.Z = in_ros_data.state.pose.orientation.z;
		StatePoseOrientation.W = in_ros_data.state.pose.orientation.w;

		StateTwistLinear.X = in_ros_data.state.twist.linear.x;
		StateTwistLinear.Y = in_ros_data.state.twist.linear.y;
		StateTwistLinear.Z = in_ros_data.state.twist.linear.z;

		StateTwistAngular.X = in_ros_data.state.twist.angular.x;
		StateTwistAngular.Y = in_ros_data.state.twist.angular.y;
		StateTwistAngular.Z = in_ros_data.state.twist.angular.z;

		StateReferenceFrame.AppendChars(in_ros_data.state.reference_frame.data, in_ros_data.state.reference_frame.size);

		for (auto i = 0; i < in_ros_data.tags.size; ++i)
		{
			Tags.Emplace("");
			Tags[i].AppendChars(in_ros_data.tags.data[i].data,in_ros_data.tags.data[i].size);
		}

		
	}

	void SetROS2(ue_msgs__srv__SpawnEntity_Request& out_ros_data) const
	{
    	{
			FTCHARToUTF8 strUtf8( *Xml );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.xml.data != nullptr)
		{
			free(out_ros_data.xml.data);
		}
		out_ros_data.xml.data = (decltype(out_ros_data.xml.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.xml.data)));
		memcpy(out_ros_data.xml.data, TCHAR_TO_UTF8(*Xml), (strLength+1)*sizeof(char));
			out_ros_data.xml.size = strLength;
			out_ros_data.xml.capacity = strLength + 1;
		}

		{
			FTCHARToUTF8 strUtf8( *RobotNamespace );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.robot_namespace.data != nullptr)
		{
			free(out_ros_data.robot_namespace.data);
		}
		out_ros_data.robot_namespace.data = (decltype(out_ros_data.robot_namespace.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.robot_namespace.data)));
		memcpy(out_ros_data.robot_namespace.data, TCHAR_TO_UTF8(*RobotNamespace), (strLength+1)*sizeof(char));
			out_ros_data.robot_namespace.size = strLength;
			out_ros_data.robot_namespace.capacity = strLength + 1;
		}

		{
			FTCHARToUTF8 strUtf8( *StateName );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.state.name.data != nullptr)
		{
			free(out_ros_data.state.name.data);
		}
		out_ros_data.state.name.data = (decltype(out_ros_data.state.name.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.state.name.data)));
		memcpy(out_ros_data.state.name.data, TCHAR_TO_UTF8(*StateName), (strLength+1)*sizeof(char));
			out_ros_data.state.name.size = strLength;
			out_ros_data.state.name.capacity = strLength + 1;
		}

		out_ros_data.state.pose.position.x = StatePosePosition.X;
		out_ros_data.state.pose.position.y = StatePosePosition.Y;
		out_ros_data.state.pose.position.z = StatePosePosition.Z;

		out_ros_data.state.pose.orientation.x = StatePoseOrientation.X;
		out_ros_data.state.pose.orientation.y = StatePoseOrientation.Y;
		out_ros_data.state.pose.orientation.z = StatePoseOrientation.Z;
		out_ros_data.state.pose.orientation.w = StatePoseOrientation.W;

		out_ros_data.state.twist.linear.x = StateTwistLinear.X;
		out_ros_data.state.twist.linear.y = StateTwistLinear.Y;
		out_ros_data.state.twist.linear.z = StateTwistLinear.Z;

		out_ros_data.state.twist.angular.x = StateTwistAngular.X;
		out_ros_data.state.twist.angular.y = StateTwistAngular.Y;
		out_ros_data.state.twist.angular.z = StateTwistAngular.Z;

		{
			FTCHARToUTF8 strUtf8( *StateReferenceFrame );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.state.reference_frame.data != nullptr)
		{
			free(out_ros_data.state.reference_frame.data);
		}
		out_ros_data.state.reference_frame.data = (decltype(out_ros_data.state.reference_frame.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.state.reference_frame.data)));
		memcpy(out_ros_data.state.reference_frame.data, TCHAR_TO_UTF8(*StateReferenceFrame), (strLength+1)*sizeof(char));
			out_ros_data.state.reference_frame.size = strLength;
			out_ros_data.state.reference_frame.capacity = strLength + 1;
		}

		if (out_ros_data.tags.data != nullptr)
		{
			free(out_ros_data.tags.data);
		}
		out_ros_data.tags.data = (decltype(out_ros_data.tags.data))malloc((Tags.Num())*sizeof(decltype(*out_ros_data.tags.data)));
		for (auto i = 0; i < Tags.Num(); ++i)
		{
			{
				FTCHARToUTF8 strUtf8( *Tags[i] );
				int32 strLength = strUtf8.Length();
				if (out_ros_data.tags.data[i].data != nullptr)
				{
					free(out_ros_data.tags.data[i].data);
				}
				out_ros_data.tags.data[i].data = (char*)malloc((strLength+1)*sizeof(char));
				memcpy(out_ros_data.tags.data[i].data, TCHAR_TO_UTF8(*Tags[i]), (strLength+1)*sizeof(char));
				out_ros_data.tags.data[i].size = strLength;
				out_ros_data.tags.data[i].capacity = strLength + 1;
			}
		}

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSpawnEntityResponse
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSuccess = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StatusMessage;

	

	void SetFromROS2(const ue_msgs__srv__SpawnEntity_Response& in_ros_data)
	{
    	bSuccess = in_ros_data.success;

		StatusMessage.AppendChars(in_ros_data.status_message.data, in_ros_data.status_message.size);

		
	}

	void SetROS2(ue_msgs__srv__SpawnEntity_Response& out_ros_data) const
	{
    	out_ros_data.success = bSuccess;

		{
			FTCHARToUTF8 strUtf8( *StatusMessage );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.status_message.data != nullptr)
		{
			free(out_ros_data.status_message.data);
		}
		out_ros_data.status_message.data = (decltype(out_ros_data.status_message.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.status_message.data)));
		memcpy(out_ros_data.status_message.data, TCHAR_TO_UTF8(*StatusMessage), (strLength+1)*sizeof(char));
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
	void SetRequest(const FROSSpawnEntityRequest& Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FROSSpawnEntityRequest& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FROSSpawnEntityResponse& Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FROSSpawnEntityResponse& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	ue_msgs__srv__SpawnEntity_Request SpawnEntity_req;
	ue_msgs__srv__SpawnEntity_Response SpawnEntity_res;
};