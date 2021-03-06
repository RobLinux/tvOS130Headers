/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DAStoreSyncStatusUpdater : NSObject
+(id)_eventStore;
+(id)_eventStorePurger;
+(void)_updateStatusForStoreWithExternalID:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(unsigned long long*)arg4 canceled:(BOOL)arg5 ;
+(unsigned long long)_accountErrorForNSError:(id)arg1 ;
+(BOOL)_isCanceledError:(id)arg1 ;
+(void)_updateStatusForSource:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(unsigned long long*)arg4 canceled:(BOOL)arg5 ;
+(unsigned long long)_ekAccountErrorFromCoreDAVErrorCode:(int)arg1 ;
+(unsigned long long)_ekAccountErrorFromDAErrorCode:(long long)arg1 ;
+(unsigned long long)_ekAccountErrorFromDAValidationErrorCode:(unsigned long long)arg1 ;
+(unsigned long long)_ekAccountErrorFromCoreDAVHTTPError:(id)arg1 ;
+(unsigned long long)_ekAccountErrorFromURLError:(id)arg1 ;
+(unsigned long long)_ekAccountErrorFromSubCalErrorCode:(long long)arg1 ;
+(void)syncStartedForStoreWithExternalID:(id)arg1 ;
+(void)syncEndedForStoreWithExternalID:(id)arg1 withError:(id)arg2 ;
+(void)resetSyncStatusForAllStoresIfNecessary;
+(void)resetSyncStatusIfNecessaryForStoresOfType:(unsigned long long)arg1 ;
@end

