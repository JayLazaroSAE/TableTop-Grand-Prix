#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
class UCameraComponent;
class USpringArmComponent;
class UStaticMeshComponent;
class UButton;
class UClass;
class UPrimitiveComponent;
class AActor;
#include "PhysicsBallBP__pf2934795416.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/PhysicsBallBP.PhysicsBallBP_C", OverrideNativeName="PhysicsBallBP_C"))
class APhysicsBallBP_C__pf2934795416 : public APawn
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="GoLR__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGoLR__pf__PhysicsBallBP_C__pf__MulticastDelegate );
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MainCamera"))
	UCameraComponent* bpv__MainCamera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpringArm"))
	USpringArmComponent* bpv__SpringArm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Ball"))
	UStaticMeshComponent* bpv__Ball__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Jump Impulse", Category="Default", Tooltip="Vertical impulse to apply when pressing jump", OverrideNativeName="JumpImpulse"))
	float bpv__JumpImpulse__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Jump", Category="Default", Tooltip=" Indicates whether we can currently jump, use to prevent double jumping", OverrideNativeName="CanJump"))
	bool bpv__CanJump__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Roll Torque", Category="Default", Tooltip="Torque to apply when trying to roll ball", OverrideNativeName="RollTorque"))
	float bpv__RollTorque__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", MultiLine="true", OverrideNativeName="NewVar_0"))
	uint8 bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 1", Category="Default", MultiLine="true", OverrideNativeName="NewVar_1"))
	float bpv__NewVar_1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Turn Mutliply", Category="Default", MultiLine="true", UIMin="0", UIMax="1", ClampMin="0", ClampMax="1", OverrideNativeName="TurnMutliply"))
	float bpv__TurnMutliply__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Struct Out", Category="Default", MultiLine="true", OverrideNativeName="Struct Out"))
	FInputAxisKeyMapping bpv__StructxOut__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Axis Value", Category="Default", MultiLine="true", OverrideNativeName="AxisValue"))
	float bpv__AxisValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Button", Category="Default", MultiLine="true", OverrideNativeName="Button"))
	UClass* bpv__Button__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Go LR", Category="Default", MultiLine="true", OverrideNativeName="GoLR"))
	FGoLR__pf__PhysicsBallBP_C__pf__MulticastDelegate bpv__GoLR__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<ETouchIndex::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FVector b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyComp"))
	UPrimitiveComponent* b0l__K2Node_Event_MyComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Other"))
	AActor* b0l__K2Node_Event_Other__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_Event_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_bSelfMoved"))
	bool b0l__K2Node_Event_bSelfMoved__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HitLocation"))
	FVector b0l__K2Node_Event_HitLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HitNormal"))
	FVector b0l__K2Node_Event_HitNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NormalImpulse"))
	FVector b0l__K2Node_Event_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Hit"))
	FHitResult b0l__K2Node_Event_Hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_2"))
	float b0l__K2Node_InputAxisEvent_AxisValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_FingerIndex_1"))
	TEnumAsByte<ETouchIndex::Type> b0l__K2Node_InputTouchEvent_FingerIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_Location_1"))
	FVector b0l__K2Node_InputTouchEvent_Location_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_1"))
	float b0l__K2Node_InputAxisEvent_AxisValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_FingerIndex"))
	TEnumAsByte<ETouchIndex::Type> b0l__K2Node_InputTouchEvent_FingerIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_Location"))
	FVector b0l__K2Node_InputTouchEvent_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	APhysicsBallBP_C__pf2934795416(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_29"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_29__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LRMove_K2Node_InputAxisEvent_0"))
	virtual void bpf__InpAxisEvt_LRMove_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveForward_K2Node_InputAxisEvent_112"))
	virtual void bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_112__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Category="Collision", Comment="/** \t * Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.\t * This could happen due to things like Character movement, using Set Location with \'sweep\' enabled, or physics simulation.\t * For events when objects overlap (e.g. walking into a trigger) see the \'Overlap\' event.\t *\t * @note For collisions during physics simulation to generate hit events, \'Simulation Generates Hit Events\' must be enabled.\t * @note When receiving a hit from another object\'s movement (bSelfMoved is false), the directions of \'Hit.Normal\' and \'Hit.ImpactNormal\'\t * will be adjusted to indicate force from the other object against this object.\t * @note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions.\t */", DisplayName="Hit", ToolTip="Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.This could happen due to things like Character movement, using Set Location with \'sweep\' enabled, or physics simulation.For events when objects overlap (e.g. walking into a trigger) see the \'Overlap\' event.@note For collisions during physics simulation to generate hit events, \'Simulation Generates Hit Events\' must be enabled.@note When receiving a hit from another object\'s movement (bSelfMoved is false), the directions of \'Hit.Normal\' and \'Hit.ImpactNormal\'will be adjusted to indicate force from the other object against this object.@note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions.", CppFromBpEvent, OverrideNativeName="ReceiveHit"))
	virtual void bpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Z_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpTchEvt_Pressed"))
	virtual void bpf__InpTchEvt_Pressed__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf);
	UFUNCTION(meta=(OverrideNativeName="InpTchEvt_Released"))
	virtual void bpf__InpTchEvt_Released__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf);
public:
};
