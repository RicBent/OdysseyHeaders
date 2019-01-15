#pragma once

namespace alCameraPoserFunction {

getViewIndex(al::CameraPoser const*);
getLookAtCamera(al::CameraPoser const*);
getProjectionSead(al::CameraPoser const*);
getProjection(al::CameraPoser const*);
getProjectionMtx(al::CameraPoser const*);
getNear(al::CameraPoser const*);
getFar(al::CameraPoser const*);
getAspect(al::CameraPoser const*);
getPreCameraPos(al::CameraPoser const*);
getPreLookAtPos(al::CameraPoser const*);
getPreUpDir(al::CameraPoser const*);
getPreFovyDegree(al::CameraPoser const*);
getPreFovyRadian(al::CameraPoser const*);
isPrePriorityDemo(al::CameraStartInfo const&);
isPrePriorityDemo2(al::CameraStartInfo const&);
isPrePriorityDemoTalk(al::CameraStartInfo const&);
isPrePriorityDemoAll(al::CameraStartInfo const&);
isPrePriorityEntranceAll(al::CameraStartInfo const&);
isPrePriorityPlayer(al::CameraStartInfo const&);
isEqualPreCameraName(al::CameraStartInfo const&, char const*);
isPreCameraFixAbsolute(al::CameraStartInfo const&);
isInvalidCollidePreCamera(al::CameraStartInfo const&);
isInvalidKeepPreCameraDistance(al::CameraStartInfo const&);
isInvalidKeepPreCameraDistanceIfNoCollide(al::CameraStartInfo const&);
isValidResetPreCameraPose(al::CameraStartInfo const&);
isValidKeepPreSelfCameraPose(al::CameraStartInfo const&);
getPreCameraSwingAngleH(al::CameraStartInfo const&);
getPreCameraSwingAngleV(al::CameraStartInfo const&);
getPreCameraMaxSwingAngleH(al::CameraStartInfo const&);
getPreCameraMaxSwingAngleV(al::CameraStartInfo const&);
isExistAreaAngleH(al::CameraStartInfo const&);
isExistAreaAngleV(al::CameraStartInfo const&);
getAreaAngleH(al::CameraStartInfo const&);
getAreaAngleV(al::CameraStartInfo const&);
isExistNextPoseByPreCamera(al::CameraStartInfo const&);
getNextAngleHByPreCamera(al::CameraStartInfo const&);
getNextAngleVByPreCamera(al::CameraStartInfo const&);
calcCameraPose(sead::Quat<float>*, al::CameraPoser const*);
calcLookDir(sead::Vector3<float>*, al::CameraPoser const*);
calcCameraDir(sead::Vector3<float>*, al::CameraPoser const*);
calcCameraDirH(sead::Vector3<float>*, al::CameraPoser const*);
calcLookDirH(sead::Vector3<float>*, al::CameraPoser const*);
calcSideDir(sead::Vector3<float>*, al::CameraPoser const*);
calcPreCameraDir(sead::Vector3<float>*, al::CameraPoser const*);
calcPreCameraDirH(sead::Vector3<float>*, al::CameraPoser const*);
calcPreLookDir(sead::Vector3<float>*, al::CameraPoser const*);
calcPreLookDirH(sead::Vector3<float>*, al::CameraPoser const*);
calcPreCameraAngleH(al::CameraPoser const*);
calcPreCameraAngleV(al::CameraPoser const*);
setLookAtPosToTarget(al::CameraPoser*);
calcTargetTrans(sead::Vector3<float>*, al::CameraPoser const*);
setLookAtPosToTargetAddOffset(al::CameraPoser*, sead::Vector3<float> const&);
setCameraPosToTarget(al::CameraPoser*);
setCameraPosToTargetAddOffset(al::CameraPoser*, sead::Vector3<float> const&);
calcTargetTransWithOffset(sead::Vector3<float>*, al::CameraPoser const*);
calcTargetVelocity(sead::Vector3<float>*, al::CameraPoser const*);
calcTargetVelocityH(sead::Vector3<float>*, al::CameraPoser const*);
calcTargetUp(sead::Vector3<float>*, al::CameraPoser const*);
calcTargetSpeedV(al::CameraPoser const*);
calcTargetPose(sead::Quat<float>*, al::CameraPoser const*);
calcTargetFront(sead::Vector3<float>*, al::CameraPoser const*);
calcTargetSide(sead::Vector3<float>*, al::CameraPoser const*);
calcTargetGravity(sead::Vector3<float>*, al::CameraPoser const*);
calcTargetSpeedH(al::CameraPoser const*);
calcTargetJumpSpeed(al::CameraPoser const*);
calcTargetFallSpeed(al::CameraPoser const*);
isChangeTarget(al::CameraPoser const*);
tryGetTargetRequestDistance(float*, al::CameraPoser const*);
tryGetBossDistanceCurve(al::CameraPoser const*);
tryGetEquipmentDistanceCurve(al::CameraPoser const*);
isExistCollisionUnderTarget(al::CameraPoser const*);
getUnderTargetCollisionPos(al::CameraPoser const*);
getUnderTargetCollisionNormal(al::CameraPoser const*);
isExistSlopeCollisionUnderTarget(al::CameraPoser const*);
isExistWallCollisionUnderTarget(al::CameraPoser const*);
tryCalcSlopeCollisionDownFrontDirH(sead::Vector3<float>*, al::CameraPoser const*);
getSlopeCollisionUpSpeed(al::CameraPoser const*);
getSlopeCollisionDownSpeed(al::CameraPoser const*);
isExistSubTarget(al::CameraPoser const*);
checkValidTurnToSubTarget(al::CameraPoser const*);
calcSubTargetBack(sead::Vector3<float>*, al::CameraPoser const*);
calcSubTargetTrans(sead::Vector3<float>*, al::CameraPoser const*);
isChangeSubTarget(al::CameraPoser const*);
calcSubTargetFront(sead::Vector3<float>*, al::CameraPoser const*);
getSubTargetRequestDistance(al::CameraPoser const*);
getSubTargetTurnSpeedRate1(al::CameraPoser const*);
getSubTargetTurnSpeedRate2(al::CameraPoser const*);
getSubTargetTurnRestartStep(al::CameraPoser const*);
tryCalcSubTargetTurnBrakeDistanceRate(float*, al::CameraPoser const*);
isValidSubTargetTurnV(al::CameraPoser const*);
isValidSubTargetResetAfterTurnV(al::CameraPoser const*);
clampAngleSubTargetTurnRangeV(float*, al::CameraPoser const*);
initCameraVerticalAbsorber(al::CameraPoser*);
initCameraVerticalAbsorberNoCameraPosAbsorb(al::CameraPoser*);
getCameraVerticalAbsorbPosUp(al::CameraPoser const*);
getCameraVerticalAbsorbPosDown(al::CameraPoser const*);
liberateVerticalAbsorb(al::CameraPoser*);
stopUpdateVerticalAbsorb(al::CameraPoser*);
stopUpdateVerticalAbsorbForSnapShotMode(al::CameraPoser*, sead::Vector3<float> const&);
restartUpdateVerticalAbsorb(al::CameraPoser*);
validateVerticalAbsorbKeepInFrame(al::CameraPoser*);
invalidateVerticalAbsorbKeepInFrame(al::CameraPoser*);
setVerticalAbsorbKeepInFrameScreenOffsetUp(al::CameraPoser*, float);
setVerticalAbsorbKeepInFrameScreenOffsetDown(al::CameraPoser*, float);
initCameraArrowCollider(al::CameraPoser*);
initCameraArrowColliderWithoutThroughPassCollision(al::CameraPoser*);
initCameraMoveLimit(al::CameraPoser*);
initCameraAngleCtrl(al::CameraPoser*);
initCameraAngleCtrlWithRelativeH(al::CameraPoser*);
initCameraDefaultAngleRangeV(al::CameraPoser*, float, float);
setCameraStartAngleV(al::CameraPoser*, float);
setCameraAngleV(al::CameraPoser*, float);
getCameraAngleH(al::CameraPoser const*);
getCameraAngleV(al::CameraPoser const*);
initAngleSwing(al::CameraPoser*);
isValidAngleSwing(al::CameraPoser const*);
initCameraOffsetCtrlPreset(al::CameraPoser*);
getOffset(al::CameraPoser const*);
initGyroCameraCtrl(al::CameraPoser*);
resetGyro(al::CameraPoser*);
calcCameraGyroPose(al::CameraPoser const*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*);
getGyroFront(al::CameraPoser*);
getGyroAngleV(al::CameraPoser*);
getGyroAngleH(al::CameraPoser*);
setGyroLimitAngleV(al::CameraPoser*, float, float);
setGyroSensitivity(al::CameraPoser*, float, float);
reduceGyroSencitivity(al::CameraPoser*);
stopUpdateGyro(al::CameraPoser*);
restartUpdateGyro(al::CameraPoser*);
isStopUpdateGyro(al::CameraPoser const*);
isTargetCollideGround(al::CameraPoser const*);
isTargetInWater(al::CameraPoser const*);
isTargetInMoonGravity(al::CameraPoser const*);
isTargetClimbPole(al::CameraPoser const*);
isTargetGrabCeil(al::CameraPoser const*);
isTargetInvalidMoveByInput(al::CameraPoser const*);
isTargetEnableEndAfterInterpole(al::CameraPoser const*);
isTargetWallCatch(al::CameraPoser const*);
isSnapShotMode(al::CameraPoser const*);
initSnapShotCameraCtrl(al::CameraPoser*);
initSnapShotCameraCtrlZoomAutoReset(al::CameraPoser*);
initSnapShotCameraCtrlZoomRollMove(al::CameraPoser*);
validateSnapShotCameraLookAtOffset(al::CameraPoser*);
validateSnapShotCameraZoomFovy(al::CameraPoser*);
validateSnapShotCameraRoll(al::CameraPoser*);
updateSnapShotCameraCtrl(al::CameraPoser*);
startResetSnapShotCameraCtrl(al::CameraPoser*, int);
setSnapShotMaxZoomOutFovyDegree(al::CameraPoser*, float);
getSnapShotRollDegree(al::CameraPoser const*);
getSnapShotLookAtOffset(al::CameraPoser const*);
isOffVerticalAbsorb(al::CameraPoser const*);
onVerticalAbsorb(al::CameraPoser*);
offVerticalAbsorb(al::CameraPoser*);
invalidateCameraBlur(al::CameraPoser*);
isRequestStopVerticalAbsorb(al::CameraObjectRequestInfo const&);
isRequestResetPosition(al::CameraObjectRequestInfo const&);
isRequestResetAngleV(al::CameraObjectRequestInfo const&);
isRequestDownToDefaultAngleBySpeed(al::CameraObjectRequestInfo const&);
isRequestUpToTargetAngleBySpeed(al::CameraObjectRequestInfo const&);
getRequestTargetAngleV(al::CameraObjectRequestInfo const&);
getRequestAngleSpeed(al::CameraObjectRequestInfo const&);
isRequestMoveDownAngleV(al::CameraObjectRequestInfo const&);
isRequestSetAngleV(al::CameraObjectRequestInfo const&);
getRequestAngleV(al::CameraObjectRequestInfo const&);
isInvalidCollider(al::CameraPoser const*);
validateCollider(al::CameraPoser*);
invalidateCollider(al::CameraPoser*);
validateCtrlSubjective(al::CameraPoser*);
invalidateChangeSubjective(al::CameraPoser*);
invalidateKeepDistanceNextCamera(al::CameraPoser*);
invalidateKeepDistanceNextCameraIfNoCollide(al::CameraPoser*);
invalidatePreCameraEndAfterInterpole(al::CameraPoser*);
isInvalidPreCameraEndAfterInterpole(al::CameraPoser const*);
isSceneCameraFirstCalc(al::CameraPoser const*);
isActiveInterpole(al::CameraPoser const*);
isInvalidEndEntranceCamera(al::CameraPoser const*);
isPause(al::CameraPoser const*);
checkFirstCameraCollisionArrow(sead::Vector3<float>*, sead::Vector3<float>*, al::IUseCollision const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
checkFirstCameraCollisionArrow(alCameraPoserFunction::CameraCollisionHitResult*, al::IUseCollision const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
checkFirstCameraCollisionArrowOnlyCeiling(sead::Vector3<float>*, sead::Vector3<float>*, al::IUseCollision const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
checkCameraCollisionMoveSphere(sead::Vector3<float>*, al::IUseCollision const*, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
calcZoneRotateAngleH(float, al::CameraPoser const*);
calcZoneRotateAngleH(float, sead::Matrix34<float> const&);
calcZoneInvRotateAngleH(float, sead::Matrix34<float> const&);
multVecZone(sead::Vector3<float>*, sead::Vector3<float> const&, al::CameraPoser const*);
multVecInvZone(sead::Vector3<float>*, sead::Vector3<float> const&, al::CameraPoser const*);
rotateVecZone(sead::Vector3<float>*, sead::Vector3<float> const&, al::CameraPoser const*);
calcOffsetCameraKeepInFrameV(sead::Vector3<float>*, sead::LookAtCamera*, sead::Vector3<float> const&, al::CameraPoser const*, float, float);
makeCameraKeepInFrameV(sead::LookAtCamera*, sead::Vector3<float> const&, al::CameraPoser const*, float, float);
initCameraRail(al::CameraPoser*, al::PlacementInfo const&, char const*);
tryGetCameraRailArg(float*, al::PlacementInfo const&, char const*, char const*);
getCameraRailPointObjId(al::CameraPoser const*, int);
tryFindNearestLimitRailKeeper(al::CameraPoser const*, sead::Vector3<float> const&);
calcCameraRotateStick(sead::Vector2<float>*, al::CameraPoser const*);
calcCameraRotateStickH(al::CameraPoser const*);
calcCameraRotateStickV(al::CameraPoser const*);
calcCameraRotateStickPower(al::CameraPoser const*);
getStickSensitivityLevel(al::CameraPoser const*);
getStickSensitivityScale(al::CameraPoser const*);
isValidGyro(al::CameraPoser const*);
getGyroSensitivityLevel(al::CameraPoser const*);
getGyroSensitivityScale(al::CameraPoser const*);
isTriggerCameraResetRotate(al::CameraPoser const*);
isHoldCameraZoom(al::CameraPoser const*);
isHoldCameraSnapShotZoomIn(al::CameraPoser const*);
isHoldCameraSnapShotZoomOut(al::CameraPoser const*);
isHoldCameraSnapShotRollLeft(al::CameraPoser const*);
isHoldCameraSnapShotRollRight(al::CameraPoser const*);
tryCalcCameraSnapShotMoveStick(sead::Vector2<float>*, al::CameraPoser const*);
isPlayerTypeFlyer(al::CameraPoser const*);
isPlayerTypeHighSpeedMove(al::CameraPoser const*);
isPlayerTypeHighJump(al::CameraPoser const*);
isPlayerTypeNotTouchGround(al::CameraPoser const*);
isOnRideObj(al::CameraPoser const*);

} 