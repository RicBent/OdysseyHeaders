#pragma once

class PlayerConst
{
public:
    PlayerConst();
    PlayerConst(al::ByamlIter const&);
    getGravity() const;
    getFrictionAttack() const;
    getPushPower() const;
    getWaitPoseDegreeMax() const;
    getHillPoseDegreeMax() const;
    getTiltPoseDegreeMax() const;
    getSlerpQuatRate() const;
    getSlerpQuatRateWait() const;
    getSlerpQuatGrav() const;
    getPreInputFrameCapThrow() const;
    getEnableActionFrameCapCatch() const;
    getJumpPowerCapCatch() const;
    getJumpGravityCapCatch() const;
    getRunTimeContinuousThrow() const;
    getRunSpeedMaxContinuousThrow() const;
    getRunAccelFrameContinuousThrow() const;
    getSeparateCheckHeight() const;
    getSeparateOffsetLerpRate() const;
    getSeparateEnableThrowHeight() const;
    getTall() const;
    getCollisionRadius() const;
    getCollisionRadiusSquat() const;
    getCollisionRadiusStand() const;
    getCollisionSmallStepHeight() const;
    getCollisionResetLimit() const;
    getReflectCeilingPower() const;
    getReflectTossPower() const;
    getReflectUpperPunchScaleH() const;
    getCollisionHitDownAngleH() const;
    getCollisionHitDownEscapeAngleV() const;
    getShadowDropHeightScale() const;
    getShadowDropNormalAdd() const;
    getShadowDropLengthMin() const;
    getShadowDropLengthMax() const;
    getShadowDropLengthExtend() const;
    getGravityDamage() const;
    getHopPowerDamage() const;
    getPushPowerDamage() const;
    getDamageCancelFrame() const;
    getDamageInvalidCount() const;
    getDamageInvalidCountRecovery() const;
    getDamageInvalidCountAbyss() const;
    getNormalMinSpeed2D() const;
    getNormalMaxSpeed2D() const;
    getDashMaxSpeed2D() const;
    getNormalAccelFrame2D() const;
    getDashAccelFrame2D() const;
    getNormalDashAnimFrame2D() const;
    getNormalBrakeFrame2D() const;
    getStickOnBrakeFrame2D() const;
    getBrakeTurnStartFrame2D() const;
    getTurnEndSpeedRate2D() const;
    getJumpPowerMin2DArea() const;
    getJumpPowerMax2DArea() const;
    getJumpPowerMinBorder2D() const;
    getJumpPowerMaxBorder2D() const;
    getGravityMove() const;
    getNormalMaxSpeed() const;
    getNormalMinSpeed() const;
    getNormalAccelFrame() const;
    getRunAccelAverageScale() const;
    getNormalBrakeFrame() const;
    getDashJudgeSpeed() const;
    getStickOnBrakeFrame() const;
    getNormalDashAnimFrame() const;
    getRunAfterTurnSpeedMax() const;
    getRunAfterTurnScale() const;
    getRunAfterTurnFrame() const;
    getBrakeTurnStartFrame() const;
    getBrakeOnSpeedRate() const;
    getBrakeOnCounterBorder() const;
    getWallPushFrame() const;
    getRunDeepDownFrame() const;
    getRunDeepDownMargine() const;
    getQuickTurnJumpFrame() const;
    getRoundAccelFrame() const;
    getRoundBrakeFrame() const;
    getRoundFastDegree() const;
    getRoundAccelFrameFast() const;
    getRoundMinDegree() const;
    getRoundBrakeFrameForce() const;
    getRoundFastDegreeForce() const;
    getRoundLimitDegreeForce() const;
    getRoundLimitDegreeForceFast() const;
    getRoundAccelFrameForceFast() const;
    getRoundLimitDegreeMin() const;
    getRoundLimitDegree() const;
    getIceAccelFrame() const;
    getIceBrakeFrame() const;
    getIceBrakeFrameHigh() const;
    getIceBrakeFrameWall() const;
    getIceRoundAccelFrame() const;
    getIceRoundAccelFrameFast() const;
    getIceRoundBrakeFrame() const;
    getIceRoundFastDegree() const;
    getIceRoundMinDegree() const;
    getIceRoundLimitDegree() const;
    getHillAddSpeed() const;
    getHillSubSpeed() const;
    getHillAccelAddFrame() const;
    getHillAccelSubFrame() const;
    getHillAccelSubAngleMin() const;
    getHillAccelSubAngleMax() const;
    getStandAngleMin() const;
    getStandAngleMax() const;
    getHillAngleSpeedMin() const;
    getHillAngleSpeedMax() const;
    getSpinCapThrowFrame() const;
    getSpinCapThrowFrameAir() const;
    getSpinCapThrowFrameSwim() const;
    getSpinCapThrowFrameSwing() const;
    getSpinCapThrowFrameContinuous() const;
    getSpinAttackFrame() const;
    getSpinBrakeFrame() const;
    getSpinAirJumpPower() const;
    getSpinAirSpeedMax() const;
    getGravitySpinAir() const;
    getSlerpQuatRateSpinAir() const;
    getSpinBrakeRate() const;
    getSpinBrakeSideAccel() const;
    getSpinBrakeSideBrakeRate() const;
    getSpinBrakeSideMaxSpeedRate() const;
    getSpinRoundLimitDegree() const;
    getDamageFireJumpPower1st() const;
    getDamageFireJumpPower2nd() const;
    getDamageFireJumpMoveSpeed() const;
    getDamageFireCeilHitSpeed() const;
    getDamageFireGravity() const;
    getDamageFireNoGravityFrame() const;
    getDamageFireRunTime() const;
    getDamageFireRunSpeed() const;
    getDamageFireRunBrakeFrame() const;
    getSandSinkDeadTime() const;
    getSandSinkBrakeHeightH() const;
    getSandSinkBrakeHeightV() const;
    getSandSinkHeight() const;
    getSandSinkCapThrow() const;
    getSandSinkBrakeMinH() const;
    getSandSinkBrakeMaxH() const;
    getSandSinkBrakeMinV() const;
    getSandSinkBrakeMaxV() const;
    getSlopeSlideAngleStart() const;
    getSlopeSlideAngleEnd() const;
    getSlopeSlideAccel() const;
    getSlopeSlideBrake() const;
    getSlopeSlideMaxSpeed() const;
    getSlopeSlideSpeedEnd() const;
    getSlopeSlideSideAccel() const;
    getSlopeSlideSideBrake() const;
    getSlopeSlideSideMaxSpeed() const;
    getSlopeTurnDegree() const;
    getSlideInvalidFrame() const;
    getSlopeForceFrame() const;
    getSlopeSlideForceSideAccel() const;
    getSlopeSlideForceSideBrake() const;
    getSlopeSlideForceSideMaxSpeed() const;
    getSlopeSlideForceTurnDegree() const;
    getSlopeRollingSpeedStart() const;
    getSlopeRollingSpeedBoost() const;
    getSlopeRollingMaxSpeed() const;
    getSlopeRollingFrameMinBoost() const;
    getSlopeRollingFrameMin() const;
    getSlopeRollingStartJumpPower() const;
    getSlopeRollingStartSlideSpeed() const;
    getSlopeRollingAccel() const;
    getSlopeRollingBrake() const;
    getSlopeRollingAgainst() const;
    getSlopeRollingAnglePowerMax() const;
    getSlopeRollingSpeedEnd() const;
    getSlopeRollingSideAccel() const;
    getSlopeRollingSideBrake() const;
    getSlopeRollingSideMaxSpeed() const;
    getSlopeRollingUnRollFrame() const;
    getSlopeRollingEndBrake() const;
    getSlopeRollingEndBrakeEndSpeed() const;
    getSlopeRollingReStartAccel() const;
    getSlopeRollingReStartMaxAdd() const;
    getSlopeRollingReStartInterval() const;
    getSlopeRollingReStartSwing() const;
    getSlopeRollingReStartCharge() const;
    getSlopeRollingReStartForce() const;
    getSlopeRollingAccelOnSkate() const;
    getSlopeRollingSideAccelOnSkate() const;
    getSlopeRollingBrakeOnSkate() const;
    getExtendFrame() const;
    getJumpInertiaRate() const;
    getJumpPowerMin() const;
    getJumpPowerMax() const;
    getJumpGravity() const;
    getJumpBaseSpeedMax() const;
    getJumpMoveSpeedMin() const;
    getJumpMoveSpeedMax() const;
    getJumpAccelFront() const;
    getJumpAccelBack() const;
    getJumpAccelTurn() const;
    getJumpTurnAngleStart() const;
    getJumpTurnAngleLimit() const;
    getJumpTurnAngleFast() const;
    getJumpTurnAngleFastLimit() const;
    getJumpTurnAccelFrame() const;
    getJumpTurnAccelFrameFast() const;
    getJumpTurnBrakeFrame() const;
    getTrampleGravity() const;
    getTrampleJumpPower() const;
    getTrampleHighGravity() const;
    getTrampleHighJumpPower() const;
    getTrampleGravity2D() const;
    getTrampleJumpPower2D() const;
    getTrampleHighGravity2D() const;
    getTrampleHighJumpPower2D() const;
    getTrampleHipDropGravity() const;
    getTrampleHipDropJumpPower() const;
    getTrampleRisingBrakeVelH() const;
    getTrampleJumpCodePower() const;
    getTrampleJumpCodePowerSmall() const;
    getCapLeapFrogJumpGravity() const;
    getCapLeapFrogJumpPower() const;
    getCapLeapFrogJumpPowerAir() const;
    getObjLeapFrogJumpPower() const;
    getObjLeapFrogJumpPowerHigh() const;
    getCapHeadSpringJumpGravity() const;
    getCapHeadSpringJumpPower() const;
    getCapHeadSpringJumpGravityHigh() const;
    getCapHeadSpringJumpPowerHigh() const;
    getCapHeadSpringSpeedMax() const;
    getContinuousJumpPreInputFrame() const;
    getContinuousJumpCount() const;
    getContinuousJumpTimer() const;
    getContinuousJumpPowerMin() const;
    getJumpPowerMax2nd() const;
    getJumpGravity2nd() const;
    getJumpPowerMax3rd() const;
    getJumpGravity3rd() const;
    getSpinFlowerJumpGravity() const;
    getSpinFlowerJumpFallSpeedMax() const;
    getSpinFlowerJumpMovePower() const;
    getSpinFlowerJumpVelMax() const;
    getSpinFlowerJumpStayFrame() const;
    getSpinFlowerJumpStaySpeedMax() const;
    getSpinFlowerJumpNoInputBrake() const;
    getSpinFlowerJumpDownFallInitSpeed() const;
    getSpinFlowerJumpDownFallPower() const;
    getSpinFlowerJumpDownFallSpeedMax() const;
    getJumpGravityForceRun() const;
    getJumpPowerForceRun() const;
    getCapCatchPopPower() const;
    getCapCatchPopGravity() const;
    getSquatJumpGravity() const;
    getSquatJumpPower() const;
    getSquatJumpBackPower() const;
    getSquatJumpMovePowerFront() const;
    getSquatJumpMovePowerSide() const;
    getSquatJumpMoveSpeedMax() const;
    getTurnJumpGravity() const;
    getTurnJumpPower() const;
    getTurnJumpVelH() const;
    getTurnJumpBrake() const;
    getTurnJumpAccel() const;
    getTurnJumpSideAccel() const;
    getLongJumpAccel() const;
    getLongJumpBrake() const;
    getLongJumpSideAccel() const;
    getLongJumpGravity() const;
    getLongJumpJumpPow() const;
    getLongJumpMovePow() const;
    getLongJumpInitSpeed() const;
    getLongJumpSpeed() const;
    getLongJumpSpeedMin() const;
    getContinuousLongJumpCount() const;
    getContinuousLongJumpTimer() const;
    getGravityAir() const;
    getFrictionAir() const;
    getFallSpeedMax() const;
    getLongFallDistance() const;
    getFallWallScaleVelocity() const;
    getDownFallFrameMin() const;
    getGravityWallSlide() const;
    getWallHeightLowLimit() const;
    getWallKeepDegree() const;
    getWallKeepFrame() const;
    getWallJumpGravity() const;
    getWallJumpHSpeed() const;
    getWallJumpPower() const;
    getWallJumpInvalidateInputFrame() const;
    getWallInhibitAfterPunch() const;
    getWallFollowAngleH() const;
    getWallFollowAngleV() const;
    getWallCatchDegree() const;
    getWallCatchHeightEdgeTop() const;
    getWallCatchHeightBottom() const;
    getWallCatchKeepDegree() const;
    getWallCatchMoveDegree() const;
    getWallCatchMoveSpeed() const;
    getWallCatchMoveHeightRange() const;
    getWallCatchMoveInterpolate() const;
    getWallCatchMoveFrame() const;
    getWallCatchMoveFrameFast() const;
    getWallCatchMoveFrameSwing() const;
    getWallCatchInputRepeatAngle() const;
    getWallClimbDegree() const;
    getWallClimbJumpStartFrame() const;
    getWallClimbJumpEndFrame() const;
    getWallClimbStartFrame() const;
    getWallClimbGravity() const;
    getWallFallJumpSpeed() const;
    getWallClimbJumpSpeedV() const;
    getWallClimbJumpSpeedH() const;
    getWallClimbJumpGravity() const;
    getWallClimbJumpInvalidFrame() const;
    getWallCatchHipLocalOffset() const;
    getWallCatchHipStability() const;
    getWallCatchHipFriction() const;
    getWallCatchHipLimitDegree() const;
    getWallCatchStainAreaOffset() const;
    getGrabCeilRange() const;
    getGrabCeilBodyRadius() const;
    getGrabCeilLeaveSpeedMin() const;
    getGrabCeilLeavePopPower() const;
    getGrabCeilLeavePopGravity() const;
    getGrabCeilSwingStartOffset() const;
    getGrabCeilReverseInputBorder() const;
    getGrabCeilInputPowerBorder() const;
    getGrabCeilSwingWaitEnergy() const;
    getGrabCeilEnableJumpEnergy() const;
    getGrabCeilEnableJumpEnergyMax() const;
    getGrabCeilJumpForceAngle() const;
    getGrabCeilJumpPower() const;
    getGrabCeilJumpMoveMin() const;
    getGrabCeilJumpMoveMax() const;
    getGrabCeilJumpGravity() const;
    getGrabCeilJumpInvalidFrame() const;
    getGrabCeilEnableNextFrame() const;
    getGrabCeilEnableFallSnapFrame() const;
    getPoleClimbPreInputSwing() const;
    getPoleClimbInputRepeatAngle() const;
    getPoleClimbInputDegreeMove() const;
    getPoleClimbCatchRange() const;
    getPoleClimbCatchRangeMin() const;
    getPoleClimbCatchRangeMax() const;
    getPoleClimbJointAngleMin() const;
    getPoleClimbJointAngleMax() const;
    getPoleClimbJointRangeMin() const;
    getPoleClimbJointRangeMax() const;
    getPoleClimbMoveWallDegree() const;
    getPoleClimbUpMargine() const;
    getPoleClimbUpSpeed() const;
    getPoleClimbUpFrame() const;
    getPoleClimbUpFrameFast() const;
    getPoleClimbUpFrameSwing() const;
    getPoleClimbDownSpeed() const;
    getPoleClimbDownSpeedFast() const;
    getPoleClimbDownSpeedSwing() const;
    getPoleClimbDownFrame() const;
    getPoleClimbDownKeepTime() const;
    getPoleClimbTurnDist() const;
    getPoleClimbTurnFrame() const;
    getPoleClimbTurnStopFrame() const;
    getPoleTopStartFrame() const;
    getPoleTopEndFrame() const;
    getPoleTopTurnSpeed() const;
    getPoleTopEndUnderOffsetY() const;
    getGroundSpinFrame() const;
    getGroundSpinMoveSpeedMax() const;
    getGroundSpinAccelRate() const;
    getGroundSpinBrakeRate() const;
    getSpinJumpGravity() const;
    getSpinJumpPower() const;
    getSpinJumpMoveSpeedMax() const;
    getSpinJumpDownFallInitSpeed() const;
    getSpinJumpDownFallPower() const;
    getSpinJumpDownFallSpeedMax() const;
    getSquatBrakeEndSpeed() const;
    getSquatAccelRate() const;
    getSquatBrakeRate() const;
    getSquatBrakeRateOnSkate() const;
    getSquatBrakeSideAccel() const;
    getSquatBrakeSideRate() const;
    getSquatBrakeSideAccelOnSkate() const;
    getSquatBrakeSideRateOnSkate() const;
    getSquatBrakeSideMaxSpeedRate() const;
    getSquatWalkSpeed() const;
    getSquatWalkTurnSpeed() const;
    getSquatWalkTurnFrame() const;
    getSquatJumpCeilSlideSpeed2D() const;
    getHipDropSpeed() const;
    getHipDropGravity() const;
    getHipDropSpeedMax() const;
    getHipDropLandCancelFrame() const;
    getHipDropHeight() const;
    getHipDropMsgInterval() const;
    getJumpHipDropPower() const;
    getJumpHipDropPermitBeginFrame() const;
    getJumpHipDropPermitEndFrame() const;
    getHeadSlidingSpeed() const;
    getHeadSlidingSpeedMin() const;
    getHeadSlidingBrake() const;
    getHeadSlidingSideAccel() const;
    getHeadSlidingJump() const;
    getHeadSlidingGravityAir() const;
    getSwimCenterOffset() const;
    getSwimWallCatchOffset() const;
    getSwimRisePower() const;
    getSwimRiseSpeedMax() const;
    getSwimRiseFrame() const;
    getSwimGravity() const;
    getSwimGravityWalk() const;
    getSwimFallSpeedMax() const;
    getSwimFloorAccelH() const;
    getSwimFloorSpeedMaxH() const;
    getSwimHighAccelH() const;
    getSwimHighSpeedMaxH() const;
    getSwimLowAccelH() const;
    getSwimLowSpeedMaxH() const;
    getSwimBrakeRateH() const;
    getSwimWallHitSpeedMinH() const;
    getSwimHighAccelPermitFrame() const;
    getSwimFlowFieldBlend() const;
    getSwimWalkAnimMinRate() const;
    getSwimWalkAnimMaxRate() const;
    getSwimWalkMaxSpeed() const;
    getSwimSpinCapUpPower() const;
    getSwimSpinCapUpSpeedMax() const;
    getSwimRotStartAngle() const;
    getSwimRotFastAngle() const;
    getSwimRotAccelFrame() const;
    getSwimRotAccelFrameFast() const;
    getSwimRotBrakeFrame() const;
    getSwimRotSpeedChangeStart() const;
    getSwimRotSpeedForward() const;
    getSwimRotSpeedMax() const;
    getSwimSurfaceAccelH() const;
    getSwimSurfaceSpeedMaxH() const;
    getSwimSurfaceSpinCapFrame() const;
    getSwimSurfaceSpinCapSpeedMaxH() const;
    getSwimSurfaceStartDist() const;
    getSwimSurfaceEndDist() const;
    getSwimSurfaceGravity() const;
    getSwimSurfaceBaseHeight() const;
    getSwimSurfaceSpring() const;
    getSwimSurfaceDamper() const;
    getSwimSurfaceDamperStart() const;
    getSwimSurfaceDamperFrame() const;
    getSwimSurfaceEnableJumpHeight() const;
    getSwimSurfacePreInputJumpFrame() const;
    getSwimSurfaceMoveSpring() const;
    getSwimSurfaceMoveDamper() const;
    getSwimSurfaceMoveBaseHeight() const;
    getSwimRunSurfaceBaseHeight() const;
    getSwimRunSurfaceApproachRate() const;
    getSwimRunSurfaceApproachLimit() const;
    getSwimRunSurfaceBrakeBorder() const;
    getSwimRunSurfaceBrakeH() const;
    getSwimRunSurfaceApproachBorderMax() const;
    getSwimRunSurfaceApproachBorderMin() const;
    getSwimRunSurfaceApproachRateMin() const;
    getSwimFallInSpeed() const;
    getSwimFallInBrakeH() const;
    getSwimFallInBrakeV() const;
    getSwimHeadInBrakeH() const;
    getSwimHeadInBrakeV() const;
    getSwimHeadInRisePower() const;
    getSwimHeadInRiseSpeedMax() const;
    getSwimHeadInSurfaceHeight() const;
    getSwimFallInForceSurfaceFrame() const;
    getSwimFallInvalidJumpFrame() const;
    getSwimDiveStartSpeed() const;
    getSwimDiveBrake() const;
    getSwimDiveEndSpeed() const;
    getSwimDiveLandCount() const;
    getSwimDiveLandCancelFrame() const;
    getSwimDiveNoBrakeFrame() const;
    getSwimDiveButtonValidFrame() const;
    getSwimDiveEndFrame() const;
    getSwimDiveInBrakeH() const;
    getSwimDiveInBrakeV() const;
    getSwimDiveInRisePower() const;
    getSwimDiveInRiseSpeedMax() const;
    getSwimDiveInSurfaceHeight() const;
    getSwimDiveInKeepFrame() const;
    getSwimHeadSlidingFrame() const;
    getSwimHeadSlidingBrakeFrame() const;
    getSwimHeadSlidingSpeed() const;
    getSwimHeadSlidingSpeedEnd() const;
    getSwimHeadSlidingBrake() const;
    getSwimHeadSlidingSideAccel() const;
    getSwimHeadSlidingJump() const;
    getSwimHeadSlidingGravity() const;
    getSwimHeadSlidingEndBrakeFrame() const;
    getSwimHeadSlidingEndSpeedMin() const;
    getSwimJumpHipDropSpeed() const;
    getSwimJumpHipDropBrakeV() const;
    getSwimJumpHipDropBrakeVCeiling() const;
    getSwimJumpHipDropGravity() const;
    getSwimJumpHipDropCancelSpeed() const;
    getSwimJumpHipDropAccelH() const;
    getSwimJumpHipDropMoveSpeedH() const;
    getSwimJumpHipDropPopSpeed() const;
    getSwimJumpHipDropPopJumpAdd() const;
    getSwimTramplePower() const;
    getDiveTramplePower() const;
    getDiveTrampleCancelFrame() const;
    getDamageSwimPushPower() const;
    getDamageSwimGravity() const;
    getDamageSwimCancelFrame() const;
    getDamageSwimSurfaceGravity() const;
    getDamageSwimSurfaceHopPower() const;
    getDamageSwimSurfacePushPower() const;
    getDamageSwimSurfaceLandSpeed() const;
    getDamageSwimSurfaceLandBrake() const;
    getDamageSwimSurfaceLandEndSpeed() const;
    getDamageSwimSurfaceCancelFrame() const;
    getDamageSwimBrakeRateGround() const;
    getOxygenReduceFrame() const;
    getOxygenNoReduceFrame() const;
    getOxygenRecoveryFrame() const;
    getOxygenDamageInterval() const;
    getIceWaterDamageInterval() const;
    getIceWaterRecoveryFrame() const;
    getMoveAnimSpeedMax() const;
    getAnimFrameRateSpeedMin() const;
    getRunBorderSpeed() const;
    getRunBlendRange() const;
    getDashBorderSpeed() const;
    getDashBlendRange() const;
    getDashFastBorderSpeed() const;
    getDashFastBlendRange() const;
    getAnimFrameRateSpeedMax() const;
    getAnimFrameRateRunStart() const;
    getAnimFrameRateMinRun() const;
    getAnimFrameRateMaxRun() const;
    getAnimFrameRateMaxDash() const;
    getAnimFrameRateMaxDashFast() const;
    getRunStartPlayFrameScale() const;
    getRunStartBlendFrame() const;
    getDamageFireRunAnimRate() const;
    getRunSkateAnimSpeedOffset() const;
    getAnimFrameRateRange2D() const;
    getAnimFrameRateMinRun2D() const;
    getAnimFrameRateMaxRun2D() const;
    getIKBlendFrameRun() const;
    getIKBlendRateRunMin() const;
    getIKBlendRateRunMax() const;
    getRollingAnimBorderSpeedMin() const;
    getRollingAnimBorderSpeedMax() const;
    getRollingAnimFrameRateMin() const;
    getRollingAnimFrameRateMax() const;
    getSwimPaddleAnimInterval() const;
    getSwimPaddleAnimRateIntervalMax() const;
    getSwimPaddleAnimRateIntervalMin() const;
    getSwimPaddleAnimMaxRate() const;
    getSwimBentForwardMax() const;
    getSwimBentForwardBlendRate() const;
    getSwimBentSideMax() const;
    getSwimBentSpineMax() const;
    getSwimBentSideBlendRate() const;
    getSwimBentFrontMax() const;
    getSwimBentFrontBlendRate() const;
    getSwimWalkAnimSpeedMax() const;
    getSwimWalkAnimSpeedMin() const;
    getSwimWalkAnimFrameRateMax() const;
    getSwimWalkAnimFrameRateMin() const;
    getSandSinkBorderMin() const;
    getSandSinkBorderMax() const;
    getSandSinkBorderRateMin() const;
    getSandSinkBorderRateMax() const;
    getSandSinkFrameRateMin() const;
    getSandSinkFrameRateMax() const;
    getLookAtEyeKeepFrame() const;
    getLookAtEyeKeepFrameInSight() const;
    getLookAtEyeKeepFrameWait() const;
    getLookAtEyeDistance() const;
    getLookAtEyeAngleMinH() const;
    getLookAtEyeAngleMinInSightH() const;
    getLookAtEyeAngleMaxH() const;
    getLookAtEyeAngleMinV() const;
    getLookAtEyeAngleMinInSightV() const;
    getLookAtEyeAngleMaxV() const;
    getTiltEyeBorderStart() const;
    getTiltEyeBorderEnd() const;
    getTiltEyeAngleScale() const;
    getCenterTiltRateMax() const;
    getNoseChildLocalOffset() const;
    getNoseStability() const;
    getNoseFriction() const;
    getNoseLimitDegree() const;
    getMustacheChildLocalOffset() const;
    getMustacheStability() const;
    getMustacheFriction() const;
    getMustacheLimitDegree() const;
    getCapInterpolateFrame() const;
    getCapChildLocalOffset() const;
    getCapStability() const;
    getCapFriction() const;
    getCapLimitDegree() const;
    getCapTransStability() const;
    getCapTransFriction() const;
    getCapTransLimit() const;
    getCapManHeroEyesWaitAppearFrame() const;
    getDeadWipeStartDamage() const;
    getDeadWipeWaitDamage() const;
    getDeadWipeStartAbyss() const;
    getDeadWipeWaitAbyss() const;
    getDeadWipeStartAbyssWithCapMsg() const;
    getDeadWipeWaitAbyssWithCapMsg() const;
    getDeadWipeStartPress() const;
    getDeadWipeWaitPress() const;
    getDeadWipeStartSandSink() const;
    getDeadWipeWaitSandSink() const;
    getDeadWipeStartNoOxygen() const;
    getDeadWipeWaitNoOxygen() const;
    getDeadWipeStartIceWater() const;
    getDeadWipeWaitIceWater() const;
    getCoinDashSpeed() const;
    getCoinDashSpeedLimit() const;
    getAdditionalSpeedLimit() const;
};