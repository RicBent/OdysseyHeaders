#pragma once

namespace nn { namespace nex { 

class DataStoreLogicServerClient
{
public:
    DataStoreLogicServerClient();
    ~DataStoreLogicServerClient();
    PostMetaBinary(nn::nex::ProtocolCallContext*, nn::nex::DataStorePreparePostParam const&, unsigned long*);
    PostMetaBinaryWithDataId(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::DataStorePreparePostParam const&);
    PostMetaBinariesWithDataId(nn::nex::ProtocolCallContext*, nn::nex::qVector<std::__1::pair<unsigned long, nn::nex::DataStorePreparePostParam> > const&, bool, nn::nex::qVector<nn::nex::qResult>*);
    PostMetaBinaryWithDataIds(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::DataStorePreparePostParam const&, bool, nn::nex::qVector<nn::nex::qResult>*);
    GetRating(nn::nex::ProtocolCallContext*, nn::nex::DataStoreRatingTarget const&, nn::nex::DataStoreRatingInfo*, unsigned long);
    GetRating(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::qVector<nn::nex::qVector<nn::nex::DataStoreRatingInfoWithSlot> >*, nn::nex::qVector<nn::nex::qResult>*, unsigned long);
    GetRatingWithLog(nn::nex::ProtocolCallContext*, nn::nex::DataStoreRatingTarget const&, nn::nex::DataStoreRatingInfo*, nn::nex::DataStoreRatingLog*, unsigned long);
    Bind(nn::nex::Credentials*);
    Unbind();
    UpdateProtocolsDefaultCredentials(nn::nex::Credentials*);
    PrepareGetObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareGetParam const&, nn::nex::DataStoreReqGetInfo*);
    CreateExtraData(nn::nex::qVector<nn::nex::String>&) const;
    PrepareGetObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareGetParamV1 const&, nn::nex::DataStoreReqGetInfoV1*);
    PrepareGetObjectOrMetaBinary(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareGetParam const&, nn::nex::DataStoreReqGetInfo*, nn::nex::DataStoreReqGetAdditionalMeta*);
    PrepareGetObjectOrMetaBinary(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareGetParamV1 const&, nn::nex::DataStoreReqGetInfoV1*, nn::nex::DataStoreReqGetAdditionalMeta*);
    PreparePostObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePreparePostParam const&, nn::nex::DataStoreReqPostInfo*);
    PreparePostObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePreparePostParamV1 const&, nn::nex::DataStoreReqPostInfoV1*);
    CompletePostObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreCompletePostParam const&);
    CompletePostObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreCompletePostParamV1 const&);
    CompleteSuspendedPostObject(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&);
    PrepareUpdateObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareUpdateParam const&, nn::nex::DataStoreReqUpdateInfo*);
    CompleteUpdateObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreCompleteUpdateParam const&);
    DeleteObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreDeleteParam const&);
    DeleteObject(nn::nex::ProtocolCallContext*, unsigned long const&);
    DeleteObject(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::DataStoreDeleteParam> const&, bool, nn::nex::qVector<nn::nex::qResult>*);
    DeleteObject(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, bool, nn::nex::qVector<nn::nex::qResult>*);
    ChangeMeta(nn::nex::ProtocolCallContext*, nn::nex::DataStoreChangeMetaParam const&);
    ChangeMeta(nn::nex::ProtocolCallContext*, nn::nex::DataStoreChangeMetaParamV1 const&);
    ChangeMeta(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::DataStoreChangeMetaParam const&, bool, nn::nex::qVector<nn::nex::qResult>*);
    ChangeMeta(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::DataStoreChangeMetaParamV1 const&, bool, nn::nex::qVector<nn::nex::qResult>*);
    ChangeMeta(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::DataStoreChangeMetaParam> const&, bool, nn::nex::qVector<nn::nex::qResult>*);
    ChangeMeta(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::DataStoreChangeMetaParamV1> const&, bool, nn::nex::qVector<nn::nex::qResult>*);
    GetMeta(nn::nex::ProtocolCallContext*, nn::nex::DataStoreGetMetaParam const&, nn::nex::DataStoreMetaInfo*);
    GetMeta(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::DataStoreGetMetaParam const&, nn::nex::qVector<nn::nex::DataStoreMetaInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    GetMeta(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::DataStoreGetMetaParam> const&, nn::nex::qVector<nn::nex::DataStoreMetaInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    SearchObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreSearchParam const&, nn::nex::DataStoreSearchResult*);
    SearchObjectLight(nn::nex::ProtocolCallContext*, nn::nex::DataStoreSearchParam const&, nn::nex::DataStoreSearchResult*);
    GetNotificationUrl(nn::nex::ProtocolCallContext*, nn::nex::DataStoreGetNotificationUrlParam const&, nn::nex::DataStoreReqGetNotificationUrlInfo*);
    GetNewArrivedNotifications(nn::nex::ProtocolCallContext*, nn::nex::DataStoreGetNewArrivedNotificationsParam const&, nn::nex::qVector<nn::nex::DataStoreNotification>*, bool*);
    GetNewArrivedNotifications(nn::nex::ProtocolCallContext*, nn::nex::DataStoreGetNewArrivedNotificationsParam const&, nn::nex::qVector<nn::nex::DataStoreNotificationV1>*, bool*);
    RateObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreRatingTarget const&, nn::nex::DataStoreRateObjectParam const&, nn::nex::DataStoreRatingInfo*);
    RateObject(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::DataStoreRatingTarget> const&, nn::nex::DataStoreRateObjectParam const&, bool, nn::nex::qVector<nn::nex::DataStoreRatingInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    RateObject(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::DataStoreRatingTarget> const&, nn::nex::qVector<nn::nex::DataStoreRateObjectParam> const&, bool, nn::nex::qVector<nn::nex::DataStoreRatingInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    RateObjectsWithPosting(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::DataStoreRatingTarget> const&, nn::nex::qVector<nn::nex::DataStoreRateObjectParam> const&, nn::nex::qVector<nn::nex::DataStorePreparePostParam> const&, bool, nn::nex::qVector<nn::nex::DataStoreRatingInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    RateObjectsWithPosting(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::DataStoreRatingTarget> const&, nn::nex::DataStoreRateObjectParam const&, nn::nex::DataStorePreparePostParam const&, bool, nn::nex::qVector<nn::nex::DataStoreRatingInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    RateObjectWithPosting(nn::nex::ProtocolCallContext*, nn::nex::DataStoreRatingTarget const&, nn::nex::DataStoreRateObjectParam const&, nn::nex::DataStorePreparePostParam const&, nn::nex::DataStoreRatingInfo*);
    ResetRating(nn::nex::ProtocolCallContext*, nn::nex::DataStoreRatingTarget const&, unsigned long);
    ResetRating(nn::nex::ProtocolCallContext*, unsigned long const&);
    ResetRating(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, bool, nn::nex::qVector<nn::nex::qResult>*);
    GetSpecificMeta(nn::nex::ProtocolCallContext*, nn::nex::DataStoreGetSpecificMetaParam const&, nn::nex::qVector<nn::nex::DataStoreSpecificMetaInfo>*);
    GetSpecificMeta(nn::nex::ProtocolCallContext*, nn::nex::DataStoreGetSpecificMetaParamV1 const&, nn::nex::qVector<nn::nex::DataStoreSpecificMetaInfoV1>*);
    TouchObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreTouchObjectParam const&);
    GetPersistenceInfo(nn::nex::ProtocolCallContext*, unsigned long, unsigned short, nn::nex::DataStorePersistenceInfo*);
    GetPersistenceInfo(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::qVector<unsigned short>, nn::nex::qVector<nn::nex::DataStorePersistenceInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    PerpetuateObject(nn::nex::ProtocolCallContext*, unsigned short, unsigned long, bool);
    UnperpetuateObject(nn::nex::ProtocolCallContext*, unsigned short, bool);
    GetPasswordInfo(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::DataStorePasswordInfo*);
    GetPasswordInfo(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::qVector<nn::nex::DataStorePasswordInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    GetObjectInfo(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::qVector<nn::nex::DataStoreReqGetInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    AddToBufferQueue(nn::nex::ProtocolCallContext*, nn::nex::BufferQueueParam const&, nn::nex::qBuffer const&);
    AddToBufferQueue(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::BufferQueueParam> const&, nn::nex::qVector<nn::nex::qBuffer> const&, nn::nex::qVector<nn::nex::qResult>*);
    GetBufferQueue(nn::nex::ProtocolCallContext*, nn::nex::BufferQueueParam const&, nn::nex::qVector<nn::nex::qBuffer>*);
    GetBufferQueue(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::BufferQueueParam> const&, nn::nex::qVector<nn::nex::qVector<nn::nex::qBuffer> >*, nn::nex::qVector<nn::nex::qResult>*);
    ClearBufferQueue(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::BufferQueueParam> const&, nn::nex::qVector<nn::nex::qResult>*);
    SearchBalloon(nn::nex::ProtocolCallContext*, nn::nex::DataStoreSearchBalloonParam const&, nn::nex::qVector<nn::nex::DataStoreSearchBalloonResultSet>*);
    FetchMyInfos(nn::nex::ProtocolCallContext*, nn::nex::DataStoreFetchMyInfosParam const&, nn::nex::DataStoreFetchMyInfosResult*);
    GetMyPrincipalId() const;
    IsCredentialsNeeded() const;
};

} } 
