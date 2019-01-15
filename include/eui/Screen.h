#pragma once

namespace eui { 

class Screen
{
public:
    Screen();
    ~Screen();
    deleteLayout_();
    initialize(eui::ScreenMgr*, sead::Heap*, char const*, int, signed char, bool);
    iteratePaneForSetupPaneAfterBuild_(nn::ui2d::Pane*, eui::LayoutEx*, unsigned int*);
    updateStaticControl_();
    open(eui::Screen::OpenOption);
    close(eui::Screen::CloseOption);
    isOpened() const;
    isClosed() const;
    isOpening() const;
    isClosing() const;
    getViewerType() const;
    adjstBoxCursor(sead::BoundBox2<float>*, eui::BoxCursorNode const*) const;
    createBoxCursorNode(sead::Heap*);
    setAnimatorActive(eui::Animator*);
    eraseAnimatorFromActiveList(eui::Animator*);
    setOwnInitializeHeap(bool);
    eraseBoxCursorNodeFromRouteNodes(eui::BoxCursorNode const*);
    isOpenedInitial() const;
    moveBoxCursorByButton(eui::AnimButton const*);
    getDrawTarget() const;
    findBoxCursorNodeByButton_(eui::AnimButton const*);
    update();
    setDisallowHitLowerScreen_();
    getOpenFrameSize() const;
    getCloseFrameSize() const;
    stopOpenAtFrame(float);
    stopCloseAtFrame(float);
    initializeForMinimum(eui::ScreenMgr*, char const*);
    clearFlagsAfterCalculateMtxForMinimum();
    setLayoutForMinimunDebug(eui::LayoutEx*);
    doUpdate_();
    updateButton_();
    isAllowedHit_() const;
    buttonStateChangeCallback(eui::AnimButton*, eui::ButtonBase::State, eui::ButtonBase::State);
    updateControl_();
    updateAnimator_();
    registerController_();
    unregisterController_();
    setupPaneAfterBuild_(nn::ui2d::Pane*, eui::LayoutEx*, unsigned int*);
    iteratePaneForAdjustPaneSizeToTextSize_(nn::ui2d::Pane*, eui::LayoutEx*);
    setPropertyDefinitionCallbackStatic_(void*, xlink2::UserInstanceSLink*);
    openStart_(eui::Screen::OpenOption);
    isOpenEnd_();
    openEnd_();
    closeStart_(eui::Screen::CloseOption);
    isCloseEnd_();
    closeEnd_();
    draw(eui::DrawInfoEx::RenderBufferInfo const*);
    replacePartsLayoutName(char const*, eui::PartsEx*, eui::LayoutEx*);
    isEnableControl() const;
    getLayoutName_() const;
    getMessageName_() const;
    getArchiveName_() const;
    isPlayPartsInOut_() const;
    isDisallowHitLowerScreenOnButtonHit_() const;
    doCreateLayout_(sead::Heap*);
    doCreateDrawInfoEx_(sead::Heap*);
    doCreateButtonGroup_(sead::Heap*);
    doAfterBuildLayout_(sead::Heap*);
    doSetupDrawInfo_();
    doCreateUIController_(sead::Heap*);
    doCreateResourceAccessor_(sead::Heap*);
    doCreateTagProcessor_(sead::Heap*);
    doLoadResource_(sead::Heap*);
    doBuildLayout_(sead::SafeStringBase<char> const&, nn::ui2d::ResourceAccessor*);
    getLayoutMessageSet_() const;
    doInitialize_(sead::Heap*);
    doOpenStart_();
    doOpenEnd_();
    doCloseStart_();
    doCloseEnd_();
    isForceGlbMtxDirty_() const;
    getAnimationStep_() const;
    doDraw_(eui::DrawInfoEx::RenderBufferInfo const*);
    doButtonOnStart_(eui::AnimButton*);
    doButtonOnEnd_(eui::AnimButton*);
    doButtonOffStart_(eui::AnimButton*);
    doButtonOffEnd_(eui::AnimButton*);
    doButtonDownStart_(eui::AnimButton*);
    doButtonDownEnd_(eui::AnimButton*);
    doButtonCancelStart_(eui::AnimButton*);
    doButtonCancelEnd_(eui::AnimButton*);
    getElinkSystem_() const;
    getSlink2ResourceList_(xlink2::UserInstanceSLink*) const;
    getSlink2LocalPropertyNum_() const;
    setSlink2PropertyDefinition_(xlink2::UserInstanceSLink*);
    setDrawUnitId_(signed char);
    isActive_() const;
    setTouch_(bool);
    requestCapture_();
    findLayoutMessage_(char const*);
    findPane_(char const*);
    findPartsLayout_(char const*);
    findControl_(char const*);
    findControlWithParentParts_(char const*, char const*);
    findControlWithParentLayout_(char const*, eui::LayoutEx const*);
    findControlWithParts_(char const*, char const*);
    findControlWithLayout_(char const*, eui::LayoutEx const*);
    findStaticControl_(char const*);
    setPrimaryBoxCursorNode_(eui::BoxCursorNode*);
    setPrimaryBoxCursorNodeByName_(char const*);
    findBoxCursorNodeByName_(char const*);
    setPrimaryBoxCursorNodeByTag_(int);
    findBoxCursorNodeByTag_(int);
    setPrimaryBoxCursorNodeByButton_(eui::AnimButton const*);
    moveBoxCursor_(eui::BoxCursorNode*);
    moveBoxCursorByName_(char const*);
    moveBoxCursorByTag_(int);
    moveBoxCursorByButton_(eui::AnimButton const*);
    findBoxCursorNodeByNameWithParentParts_(char const*, char const*);
    findBoxCursorNodeByNameWithParentLayout_(char const*, eui::LayoutEx const*);
    setBoxCursorNodeRoute_(eui::BoxCursorNode*, eui::Direction, eui::BoxCursorNode*);
    setBoxCursorNodeRouteByName_(char const*, eui::Direction, char const*);
    setBoxCursorNodeRouteByTag_(int, eui::Direction, int);
    setBoxCursorNodeRouteByButton_(eui::AnimButton const*, eui::Direction, eui::AnimButton const*);
    setBoxCursorNodeRouteEach_(eui::BoxCursorNode*, eui::Direction, eui::BoxCursorNode*);
    setBoxCursorNodeRouteEachByName_(char const*, eui::Direction, char const*);
    setBoxCursorNodeRouteEachByTag_(int, eui::Direction, int);
    setBoxCursorNodeRouteEachByButton_(eui::AnimButton const*, eui::Direction, eui::AnimButton const*);
    clearBoxCursorNodeRouteAll_();
    adjustPaneSizeToTextSizeAll_(eui::LayoutEx*);
    createRestAnimators_();
    endExtendClose_();
    muteNextNoOperationButtonOnSE_();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    countEffectLinkPane_(nn::ui2d::Pane*, unsigned int*);
    createEffectLinkUser_(sead::Heap*, unsigned int);
    createSoundLink2User_(sead::Heap*);
    invokeSoundLink2Event_(char const*);
    invokeSoundLink2ButtonEvent_(eui::AnimButton*, char const*);
    invokeSoundLink2AnimPlayEvent(eui::Animator*, char const*);
};

} 