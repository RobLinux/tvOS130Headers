/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <CloudPhotoLibrary/CPLAbstractObject.h>

@class NSDate, NSMutableSet, NSMutableDictionary, NSString, CPLPlatformObject;

@interface CPLEngineStatusCenter : CPLEngineStorage <CPLAbstractObject> {

	unsigned long long _currentGeneration;
	NSDate* _transactionStartDate;
	NSMutableSet* _persistedScopedIdentifiers;
	NSMutableDictionary* _pendingTransientStatuses;
	NSMutableSet* _pendingDeletedTransientStatuses;
	NSMutableDictionary* _transientStatuses;

}

@property (nonatomic,readonly) BOOL hasStatusChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(id)status;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(unsigned long long)scopeType;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)hasStatusChanges;
-(BOOL)notifyStatusForRecordHasChanged:(id)arg1 persist:(BOOL)arg2 error:(id*)arg3 ;
-(id)statusChanges;
-(id)_allScopedIdentifierInCollection:(id)arg1 withScopeIdentifier:(id)arg2 ;
-(void)_removeStatusesInDictionary:(id)arg1 withScopeIdentifier:(id)arg2 ;
-(void)_removeScopedIdentifiersFromSet:(id)arg1 withScopeIdentifier:(id)arg2 ;
-(void)resetTransientStatusesWithScopeIdentifier:(id)arg1 ;
-(void)resetAllTransientStatuses;
-(id)statusesForRecordsWithScopedIdentifiers:(id)arg1 ;
-(id)statusesForRecordsWithIdentifiers:(id)arg1 ;
-(BOOL)acknowledgeChangedStatuses:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardNotificationForRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_fillStatus:(id)arg1 withClientCacheRecord:(id)arg2 cloudCacheRecord:(id)arg3 isConfirmed:(BOOL)arg4 isStaged:(BOOL)arg5 isInIDMapping:(BOOL)arg6 ;
-(void)_fillStatus:(id)arg1 ;
-(id)_statusFromCachesWithRecordScopedIdentifier:(id)arg1 ;
-(id)recordForStatusWithScopedIdentifier:(id)arg1 ;
-(id)allStatusChanges;
@end

