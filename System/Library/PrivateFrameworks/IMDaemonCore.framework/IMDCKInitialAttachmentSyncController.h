/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDCKAttachmentSyncController.h>

@class CKServerChangeToken;

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController {

	CKServerChangeToken* _syncToken;

}

@property (nonatomic,retain) CKServerChangeToken * syncToken;              //@synthesize syncToken=_syncToken - In the implementation block
-(void)dealloc;
-(CKServerChangeToken *)syncToken;
-(void)setSyncToken:(CKServerChangeToken *)arg1 ;
-(id)ckUtilities;
-(BOOL)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(BOOL)arg1 ;
-(BOOL)_deviceConditionsAllowsMessageSync;
-(BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2 ;
-(BOOL)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLatestSyncToken:(id)arg1 ;
-(id)latestSyncToken;
@end

