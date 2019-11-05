/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSDuetInterfaceDelegate;
@class NSMutableSet;

@interface IDSDuetInterface : NSObject {

	id<IDSDuetInterfaceDelegate> _delegate;
	NSMutableSet* _initialSyncClientIDs;
	NSMutableSet* _reunionSyncClientIDs;

}

@property (nonatomic,retain) NSMutableSet * initialSyncClientIDs;                       //@synthesize initialSyncClientIDs=_initialSyncClientIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * reunionSyncClientIDs;                       //@synthesize reunionSyncClientIDs=_reunionSyncClientIDs - In the implementation block
@property (assign,nonatomic,__weak) id<IDSDuetInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<IDSDuetInterfaceDelegate>)delegate;
-(void)setDelegate:(id<IDSDuetInterfaceDelegate>)arg1 ;
-(void)_setupPairedSystemContext;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 ;
-(void)setInitialSyncInProgress:(BOOL)arg1 forClientID:(id)arg2 ;
-(BOOL)initialSyncInProgress;
-(void)setReunionSyncInProgress:(BOOL)arg1 forClientID:(id)arg2 ;
-(BOOL)reunionSyncInProgress;
-(id)_newKeyForValues:(id)arg1 priority:(long long)arg2 ;
-(void)_checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)forceCheckAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)clearAdmissionCheckCache;
-(NSMutableSet *)initialSyncClientIDs;
-(void)setInitialSyncClientIDs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)reunionSyncClientIDs;
-(void)setReunionSyncClientIDs:(NSMutableSet *)arg1 ;
@end

