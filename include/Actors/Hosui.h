#pragma once

class Hosui
{
public:
    Hosui(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    isEmpty() const;
    isHack() const;
    tryTrample(al::HitSensor*, al::HitSensor*);
    isEnablePunch(al::HitSensor*, al::HitSensor*) const;
    reactionBody();
    isSwoon() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isEnableDamage() const;
    incAmount();
    isOnGround() const;
    startHackLocal(al::HitSensor*, al::HitSensor*);
    endHackLocal(bool);
    forceKillAllWaterBall();
    tryReceiveMsgHackCommon(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryReceiveKick(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryReceiveHosuiAttack(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryBlowDown(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryReceiveKillBySomething(al::SensorMsg const*);
    tryReceivePush(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryReceiveTrample(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    startActionForce(char const*);
    updateGravity();
    scaleVelocityCommon();
    tryShiftTurnOrFind();
    endWait();
    exeWaitFar();
    exeJump();
    updateWaterBall(sead::Vector3<float> const&, unsigned int, bool);
    exeJumpFar();
    exeFall();
    exeLand();
    exeTurn();
    exeFind();
    exeAttackSign();
    exeAttack();
    exeSwoonStart();
    exeSwoonAir();
    exeSwoonLand();
    exeSwoonGround();
    exeSwoonEnd();
    exeRecover();
    exeTrampled();
    exeHackStart();
    endHackStart();
    exeHackWait();
    startActionWeak(char const*);
    recordHoverStartPos();
    trySpin();
    isEnableHover() const;
    tryShiftHackNoWaterReaction();
    exeHackWalk();
    exeHackHover();
    decAmount(float);
    controlSlopeHover(sead::Vector3<float> const&);
    controlVerticalHover(sead::Vector3<float> const&);
    controlHorizontalHover(sead::Vector3<float> const&);
    tryEmpty();
    startAttackWide();
    endHackHover();
    exeHackEmpty();
    controlFall(bool);
    exeHackFall();
    tryShiftNextNerveWhileHackFalling();
    exeHackTrample();
    exeHackSpin();
    shootHorizontal(unsigned int);
    endHackSpin();
    exeHackNoWaterReaction();
    exeHit();
    exeOversupply();
    exeDamage();
    exeBlowDown();
    exeKickDamage();
    exePressDown();
    exeReset();
    endReset();
    exeAppear();
    control();
    controlWaterSurfaceContact();
    controlWaterSupply();
    controlHosuiAttackHit();
    controlBodyAnim();
    controlBodySize();
    controlReactionAnimEnd();
    controlEnvironmentDamage();
    controlCollisionJump();
    controlMaterialCode();
    controlSilhouette();
    controlCameraOffset();
    updateCollider();
    tryGetWaterBall();
    isAttackTarget(al::HitSensor const*) const;
    isRecordableNormal() const;
    isWaterSnapNerve() const;
    calcPushVelocity(al::HitSensor*, al::HitSensor*);
    calcPushVelocity(al::HitSensor*, sead::Vector3<float> const&, float);
    isEnableWaterSupply() const;
};
