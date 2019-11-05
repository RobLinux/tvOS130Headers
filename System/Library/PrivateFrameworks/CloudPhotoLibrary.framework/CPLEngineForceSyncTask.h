/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLForceSyncTask.h>
#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate.h>

@protocol OS_dispatch_queue, CPLEngineForceSyncTaskDelegate;
@class NSObject, CPLEngineSyncTask, CPLPushToTransportTask, CPLPullFromTransportTask, CPLMinglePulledChangesTask, CPLSyncSession, CPLScopeFilter, CPLEngineLibrary, NSString;

@interface CPLEngineForceSyncTask : CPLForceSyncTask <CPLEngineSyncTaskDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _reallyCancelled;
	CPLEngineSyncTask* _currentTask;
	CPLPushToTransportTask* _pushTask;
	CPLPullFromTransportTask* _pullTask;
	CPLMinglePulledChangesTask* _mingleTask;
	CPLSyncSession* _fakeSession;
	BOOL _bypassForceSyncLimitations;
	CPLScopeFilter* _filter;
	CPLEngineLibrary* _engineLibrary;
	id<CPLEngineForceSyncTaskDelegate> _delegate;
	/*^block*/id _taskDidFinishWithErrorBlock;

}

@property (nonatomic,retain) CPLScopeFilter * filter;                                         //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) CPLEngineLibrary * engineLibrary;                                //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (assign,nonatomic,__weak) id<CPLEngineForceSyncTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id taskDidFinishWithErrorBlock;                                    //@synthesize taskDidFinishWithErrorBlock=_taskDidFinishWithErrorBlock - In the implementation block
@property (assign,nonatomic) BOOL bypassForceSyncLimitations;                                 //@synthesize bypassForceSyncLimitations=_bypassForceSyncLimitations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CPLEngineForceSyncTaskDelegate>)delegate;
-(void)setDelegate:(id<CPLEngineForceSyncTaskDelegate>)arg1 ;
-(void)launch;
-(CPLScopeFilter *)filter;
-(void)setFilter:(CPLScopeFilter *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)cancelTask;
-(CPLEngineLibrary *)engineLibrary;
-(void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3 ;
-(id)initWithScopeIdentifiers:(id)arg1 engineLibrary:(id)arg2 filter:(id)arg3 delegate:(id)arg4 ;
-(void)_dispatchSyncTask:(id)arg1 ;
-(void)_dispatchPushTask;
-(void)_dispatchPullTask;
-(void)_dispatchMingleTask;
-(void)reallyCancel;
-(void)setEngineLibrary:(CPLEngineLibrary *)arg1 ;
-(id)taskDidFinishWithErrorBlock;
-(void)setTaskDidFinishWithErrorBlock:(id)arg1 ;
-(BOOL)bypassForceSyncLimitations;
-(void)setBypassForceSyncLimitations:(BOOL)arg1 ;
@end

