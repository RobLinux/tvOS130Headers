/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMCameraControl.h>

@protocol _HMCameraSnapshotControlDelegate;
@class HMCameraSnapshot;

@interface _HMCameraSnapshotControl : _HMCameraControl {

	HMCameraSnapshot* _mostRecentSnapshot;
	id<_HMCameraSnapshotControlDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_HMCameraSnapshotControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HMCameraSnapshot * mostRecentSnapshot;                             //@synthesize mostRecentSnapshot=_mostRecentSnapshot - In the implementation block
-(id<_HMCameraSnapshotControlDelegate>)delegate;
-(void)setDelegate:(id<_HMCameraSnapshotControlDelegate>)arg1 ;
-(void)_handleMostSnapshot:(id)arg1 ;
-(void)_takeSnapshot;
-(void)_callDelegate:(id)arg1 error:(id)arg2 ;
-(void)_handleSnapshot:(id)arg1 error:(id)arg2 cameraSessionID:(id)arg3 mostRecent:(BOOL)arg4 ;
-(HMCameraSnapshot *)mostRecentSnapshot;
-(void)setMostRecentSnapshot:(HMCameraSnapshot *)arg1 ;
-(void)_callMostRecentSnapshotUpdateDelegate;
-(void)_fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleCreateSnapshotWithBulletinContext:(id)arg1 error:(id)arg2 cameraSessionID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 mostRecentSnapshot:(id)arg4 ;
-(void)_registerNotificationHandlers;
-(void)takeSnapshot;
-(void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_mergeNewSnapshot:(id)arg1 operations:(id)arg2 ;
@end

