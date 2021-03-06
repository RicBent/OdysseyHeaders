#pragma once

class Dokan
{
public:
    Dokan(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    kill();
    control();
    endClipped();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startAppear();
    startDisappear();
    tryStartObjectCamera();
    tryEndObjectCamera();
    tryStartKeyMoveCamera();
    isEndKeyMoveCamera() const;
    exeWait();
    exeReadyBind();
    exeIn();
    exeWaitCameraInterpolate();
    exeWaitCameraKeyMove();
    exeWaitAppear();
    exeOut();
    exeWaitDisappear();
    exeAppear();
    exeDisappear();
    getActorDimensionKeeper() const;
};
