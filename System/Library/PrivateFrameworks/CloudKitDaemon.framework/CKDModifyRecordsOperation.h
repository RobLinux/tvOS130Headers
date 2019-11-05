/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_queue;
@class CKDDecryptRecordsOperation, NSData, NSArray, NSDictionary, NSMapTable, NSMutableDictionary, CKDRecordCache, CKDProtocolTranslator, NSObject;

@interface CKDModifyRecordsOperation : CKDDatabaseOperation {

	CKDDecryptRecordsOperation* _decryptOperation;
	BOOL _retryPCSFailures;
	BOOL _canSetPreviousProtectionEtag;
	BOOL _trustProtectionData;
	BOOL _shouldModifyRecordsInDatabase;
	BOOL _retriedRecords;
	BOOL _shouldOnlySaveAssetContent;
	BOOL _haveOutstandingHandlers;
	BOOL _atomic;
	BOOL _shouldReportRecordsInFlight;
	BOOL _originatingFromDaemon;
	BOOL _markAsParticipantNeedsNewInvitationToken;
	BOOL _requestNeedsUserPublicKeys;
	int _saveAttempts;
	NSData* _cachedUserBoundaryKeyData;
	/*^block*/id _saveProgressBlock;
	/*^block*/id _saveCompletionBlock;
	/*^block*/id _deleteCompletionBlock;
	/*^block*/id _uploadCompletionBlock;
	/*^block*/id _recordsInFlightBlock;
	NSArray* _recordsToSave;
	NSArray* _recordIDsToDelete;
	NSDictionary* _recordIDsToDeleteToEtags;
	NSDictionary* _conflictLosersToResolveByRecordID;
	NSDictionary* _pluginFieldsForRecordDeletesByID;
	NSDictionary* _handlersByRecordID;
	NSDictionary* _parentsByRecordID;
	NSMapTable* _handlersByAssetNeedingRecordFetch;
	NSMapTable* _handlersByAsset;
	NSMutableDictionary* _modifyHandlersByZoneID;
	long long _savePolicy;
	NSData* _clientChangeTokenData;
	CKDRecordCache* _cache;
	CKDProtocolTranslator* _translator;
	NSObject*<OS_dispatch_queue> _modifyRecordsQueue;
	NSDictionary* _assetUUIDToExpectedProperties;
	NSDictionary* _packageUUIDToExpectedProperties;
	NSArray* _userPublicKeys;

}

@property (nonatomic,retain) NSArray * recordsToSave;                                            //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToDelete;                                        //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToDeleteToEtags;                            //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictLosersToResolveByRecordID;                   //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (nonatomic,retain) NSDictionary * pluginFieldsForRecordDeletesByID;                    //@synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID - In the implementation block
@property (nonatomic,retain) NSDictionary * handlersByRecordID;                                  //@synthesize handlersByRecordID=_handlersByRecordID - In the implementation block
@property (nonatomic,retain) NSDictionary * parentsByRecordID;                                   //@synthesize parentsByRecordID=_parentsByRecordID - In the implementation block
@property (nonatomic,retain) NSMapTable * handlersByAssetNeedingRecordFetch;                     //@synthesize handlersByAssetNeedingRecordFetch=_handlersByAssetNeedingRecordFetch - In the implementation block
@property (nonatomic,retain) NSMapTable * handlersByAsset;                                       //@synthesize handlersByAsset=_handlersByAsset - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * modifyHandlersByZoneID;                       //@synthesize modifyHandlersByZoneID=_modifyHandlersByZoneID - In the implementation block
@property (assign,nonatomic) int saveAttempts;                                                   //@synthesize saveAttempts=_saveAttempts - In the implementation block
@property (assign,nonatomic) long long savePolicy;                                               //@synthesize savePolicy=_savePolicy - In the implementation block
@property (nonatomic,copy) NSData * clientChangeTokenData;                                       //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (nonatomic,retain) CKDRecordCache * cache;                                             //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) BOOL retriedRecords;                                                //@synthesize retriedRecords=_retriedRecords - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlySaveAssetContent;                                    //@synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent - In the implementation block
@property (assign,nonatomic) BOOL haveOutstandingHandlers;                                       //@synthesize haveOutstandingHandlers=_haveOutstandingHandlers - In the implementation block
@property (assign,nonatomic) BOOL atomic;                                                        //@synthesize atomic=_atomic - In the implementation block
@property (nonatomic,retain) CKDProtocolTranslator * translator;                                 //@synthesize translator=_translator - In the implementation block
@property (assign,nonatomic) BOOL shouldReportRecordsInFlight;                                   //@synthesize shouldReportRecordsInFlight=_shouldReportRecordsInFlight - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modifyRecordsQueue;                    //@synthesize modifyRecordsQueue=_modifyRecordsQueue - In the implementation block
@property (nonatomic,readonly) CKDDecryptRecordsOperation * recordDecryptOperation; 
@property (nonatomic,readonly) BOOL hasDecryptOperation; 
@property (nonatomic,copy) NSData * cachedUserBoundaryKeyData;                                   //@synthesize cachedUserBoundaryKeyData=_cachedUserBoundaryKeyData - In the implementation block
@property (nonatomic,retain) NSDictionary * assetUUIDToExpectedProperties;                       //@synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * packageUUIDToExpectedProperties;                     //@synthesize packageUUIDToExpectedProperties=_packageUUIDToExpectedProperties - In the implementation block
@property (assign,nonatomic) BOOL originatingFromDaemon;                                         //@synthesize originatingFromDaemon=_originatingFromDaemon - In the implementation block
@property (assign,nonatomic) BOOL markAsParticipantNeedsNewInvitationToken;                      //@synthesize markAsParticipantNeedsNewInvitationToken=_markAsParticipantNeedsNewInvitationToken - In the implementation block
@property (assign,nonatomic) BOOL requestNeedsUserPublicKeys;                                    //@synthesize requestNeedsUserPublicKeys=_requestNeedsUserPublicKeys - In the implementation block
@property (nonatomic,retain) NSArray * userPublicKeys;                                           //@synthesize userPublicKeys=_userPublicKeys - In the implementation block
@property (assign,nonatomic) BOOL retryPCSFailures;                                              //@synthesize retryPCSFailures=_retryPCSFailures - In the implementation block
@property (assign,nonatomic) BOOL canSetPreviousProtectionEtag;                                  //@synthesize canSetPreviousProtectionEtag=_canSetPreviousProtectionEtag - In the implementation block
@property (assign,nonatomic) BOOL trustProtectionData;                                           //@synthesize trustProtectionData=_trustProtectionData - In the implementation block
@property (assign,nonatomic) BOOL shouldModifyRecordsInDatabase;                                 //@synthesize shouldModifyRecordsInDatabase=_shouldModifyRecordsInDatabase - In the implementation block
@property (nonatomic,copy) id saveProgressBlock;                                                 //@synthesize saveProgressBlock=_saveProgressBlock - In the implementation block
@property (nonatomic,copy) id saveCompletionBlock;                                               //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,copy) id deleteCompletionBlock;                                             //@synthesize deleteCompletionBlock=_deleteCompletionBlock - In the implementation block
@property (nonatomic,copy) id uploadCompletionBlock;                                             //@synthesize uploadCompletionBlock=_uploadCompletionBlock - In the implementation block
@property (nonatomic,copy) id recordsInFlightBlock;                                              //@synthesize recordsInFlightBlock=_recordsInFlightBlock - In the implementation block
+(long long)isPredominatelyDownload;
+(BOOL)_claimPackagesInRecord:(id)arg1 error:(id*)arg2 ;
-(void)main;
-(CKDRecordCache *)cache;
-(void)finishWithError:(id)arg1 ;
-(void)setSavePolicy:(long long)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSArray *)recordsToSave;
-(NSArray *)recordIDsToDelete;
-(void)setAtomic:(BOOL)arg1 ;
-(NSData *)clientChangeTokenData;
-(void)setClientChangeTokenData:(NSData *)arg1 ;
-(void)setRecordsToSave:(NSArray *)arg1 ;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(long long)savePolicy;
-(BOOL)shouldOnlySaveAssetContent;
-(void)setShouldOnlySaveAssetContent:(BOOL)arg1 ;
-(NSDictionary *)recordIDsToDeleteToEtags;
-(void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg1 ;
-(BOOL)atomic;
-(NSDictionary *)conflictLosersToResolveByRecordID;
-(void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg1 ;
-(NSDictionary *)pluginFieldsForRecordDeletesByID;
-(void)setPluginFieldsForRecordDeletesByID:(NSDictionary *)arg1 ;
-(id)recordsInFlightBlock;
-(void)setShouldReportRecordsInFlight:(BOOL)arg1 ;
-(NSDictionary *)assetUUIDToExpectedProperties;
-(void)setAssetUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)packageUUIDToExpectedProperties;
-(void)setPackageUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(BOOL)markAsParticipantNeedsNewInvitationToken;
-(void)setMarkAsParticipantNeedsNewInvitationToken:(BOOL)arg1 ;
-(void)setRecordsInFlightBlock:(id)arg1 ;
-(BOOL)shouldReportRecordsInFlight;
-(BOOL)originatingFromDaemon;
-(void)setOriginatingFromDaemon:(BOOL)arg1 ;
-(void)setCache:(CKDRecordCache *)arg1 ;
-(id)analyticsPayload;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setSaveCompletionBlock:(id)arg1 ;
-(void)setDeleteCompletionBlock:(id)arg1 ;
-(void)setSaveProgressBlock:(id)arg1 ;
-(void)setUploadCompletionBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(CKDProtocolTranslator *)translator;
-(void)_fetchContainerScopedUserID;
-(void)setTranslator:(CKDProtocolTranslator *)arg1 ;
-(void)setRetryPCSFailures:(BOOL)arg1 ;
-(void)setCanSetPreviousProtectionEtag:(BOOL)arg1 ;
-(void)setTrustProtectionData:(BOOL)arg1 ;
-(id)saveCompletionBlock;
-(id)deleteCompletionBlock;
-(void)_prepareForUpload;
-(id)uploadCompletionBlock;
-(NSObject*<OS_dispatch_queue>)modifyRecordsQueue;
-(void)_fetchSharePCSData;
-(NSDictionary *)parentsByRecordID;
-(BOOL)canSetPreviousProtectionEtag;
-(int)saveAttempts;
-(NSDictionary *)handlersByRecordID;
-(BOOL)retryPCSFailures;
-(id)saveProgressBlock;
-(void)setSaveAttempts:(int)arg1 ;
-(void)setShouldModifyRecordsInDatabase:(BOOL)arg1 ;
-(CKDDecryptRecordsOperation *)recordDecryptOperation;
-(NSMutableDictionary *)modifyHandlersByZoneID;
-(void)_performHandlerCallbacks;
-(void)_determineEnvironment;
-(void)_fetchUserPublicKeys;
-(void)_applySideEffects;
-(BOOL)_topoSortRecords;
-(void)_prepareParentPCS;
-(void)_fetchRecordPCSData;
-(void)_fetchAssetRecordsForRereferencing;
-(void)_uploadAssets;
-(void)_markRecordHandlersAsUploaded;
-(BOOL)_prepareRecordsForSave;
-(void)_verifyRecordEncryption;
-(void)_reportRecordsInFlight;
-(BOOL)shouldModifyRecordsInDatabase;
-(void)_continueRecordsModify;
-(BOOL)_hasHandlerInState:(unsigned long long)arg1 ;
-(void)_fetchShareParticipants;
-(BOOL)haveOutstandingHandlers;
-(void)deleteCallbackWithMetadata:(id)arg1 error:(id)arg2 ;
-(void)saveCallbackWithMetadata:(id)arg1 error:(id)arg2 ;
-(void)setHaveOutstandingHandlers:(BOOL)arg1 ;
-(void)callbackWithMetadata:(id)arg1 error:(id)arg2 ;
-(void)_performCallbacksForNonAtomicZoneHandlers:(id)arg1 ;
-(void)_performCallbacksForAtomicZoneHandlers:(id)arg1 ;
-(BOOL)requestNeedsUserPublicKeys;
-(NSArray *)userPublicKeys;
-(void)setUserPublicKeys:(NSArray *)arg1 ;
-(void)_enumerateHandlersInState:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_shouldToposortInContainerID:(id)arg1 ;
-(id)_topoSortRecordsForHandlers:(id)arg1 ;
-(void)setParentsByRecordID:(NSDictionary *)arg1 ;
-(NSMapTable *)handlersByAssetNeedingRecordFetch;
-(void)setHandlersByAssetNeedingRecordFetch:(NSMapTable *)arg1 ;
-(void)assetArrayByRecordID:(id)arg1 didFetchRecord:(id)arg2 recordID:(id)arg3 error:(id)arg4 ;
-(void)_didCompleteRecordFetchOperation:(id)arg1 assetArrayByRecordID:(id)arg2 ;
-(id)_prepareAssetsForUpload;
-(void)setHandlersByAsset:(NSMapTable *)arg1 ;
-(NSMapTable *)handlersByAsset;
-(NSData *)cachedUserBoundaryKeyData;
-(void)_fetchUserBoundaryKey;
-(void)setCachedUserBoundaryKeyData:(NSData *)arg1 ;
-(void)_setBoundaryKeyOnAssetsToUpload:(id)arg1 ;
-(void)_handleDecryptionFailure:(id)arg1 forRecordID:(id)arg2 ;
-(void)_reallyHandleRecordSaved:(id)arg1 handler:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 decryptedServerRecord:(id)arg8 ;
-(id)requestedFieldsByRecordIDForRecords:(id)arg1 ;
-(void)_handleRecordSaved:(id)arg1 handler:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 serverRecord:(id)arg8 ;
-(void)_handleRecordDeleted:(id)arg1 handler:(id)arg2 responseCode:(id)arg3 ;
-(id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 handlersByRecordID:(id)arg4 ;
-(void)_clearProtectionDataIfNotEntitled;
-(BOOL)trustProtectionData;
-(BOOL)hasDecryptOperation;
-(id)_containerIDsNotToTopoSort;
-(void)setHandlersByRecordID:(NSDictionary *)arg1 ;
-(void)setModifyHandlersByZoneID:(NSMutableDictionary *)arg1 ;
-(BOOL)retriedRecords;
-(void)setRetriedRecords:(BOOL)arg1 ;
-(void)setModifyRecordsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRequestNeedsUserPublicKeys:(BOOL)arg1 ;
@end

