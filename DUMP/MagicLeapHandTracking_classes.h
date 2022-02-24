// Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkMagicLeapHandTrackingSourceFactory : ULiveLinkSourceFactory {
};

// Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapHandTrackingFunctionLibrary : UBlueprintFunctionLibrary {

	void SetStaticGestureConfidenceThreshold(enum class EMagicLeapHandTrackingGesture Gesture, float Confidence); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd62210
	bool SetConfiguration(struct TArray<enum class EMagicLeapHandTrackingGesture> StaticGesturesToActivate, enum class EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, enum class EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd62090
	bool IsHoldingControl(enum class EControllerHand Hand); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd62010
	float GetStaticGestureConfidenceThreshold(enum class EMagicLeapHandTrackingGesture Gesture); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd61f90
	bool GetMotionSourceForHandKeypoint(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingKeypoint Keypoint, struct FName OutMotionSource); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd61e80
	bool GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle SourceHandle); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd61db0
	bool GetHandThumbTip(enum class EControllerHand Hand, enum class EMagicLeapGestureTransformSpace TransformSpace, struct FTransform Secondary); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd61c50
	bool GetHandKeypointForMotionSource(struct FName MotionSource, enum class EMagicLeapHandTrackingKeypoint OutKeyPoint); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd61b70
	bool GetHandIndexFingerTip(enum class EControllerHand Hand, enum class EMagicLeapGestureTransformSpace TransformSpace, struct FTransform Pointer); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd61a10
	bool GetHandCenterNormalized(enum class EControllerHand Hand, struct FVector HandCenterNormalized); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd61940
	bool GetHandCenter(enum class EControllerHand Hand, struct FTransform HandCenter); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd61820
	bool GetGestureKeypointTransform(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingKeypoint Keypoint, enum class EMagicLeapGestureTransformSpace TransformSpace, struct FTransform Transform); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd61580
	bool GetGestureKeypoints(enum class EControllerHand Hand, struct TArray<struct FTransform> Keypoints); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd61730
	bool GetCurrentGestureConfidence(enum class EControllerHand Hand, float Confidence); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd614a0
	bool GetCurrentGesture(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingGesture Gesture); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd613c0
	bool GetConfiguration(struct TArray<enum class EMagicLeapHandTrackingGesture> ActiveStaticGestures, enum class EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, enum class EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled); // Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd61220
};

