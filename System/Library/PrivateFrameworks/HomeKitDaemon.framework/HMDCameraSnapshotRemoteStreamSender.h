/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraSnapshotSender.h>
#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotSenderProtocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotLocalDelegate.h>
#import <HomeKitDaemon/HMDCameraSnapshotIDSStreamInitiatorDelegate.h>
#import <HomeKitDaemon/HMFLogging.h>

@protocol HMDCameraSnapshotRemoteStreamSenderDelegate;
@class HMDCameraSnapshotLocal, HMDCameraSnapshotIDSStreamInitiator, NSString;

@interface HMDCameraSnapshotRemoteStreamSender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSStreamInitiatorDelegate, HMFLogging> {

	HMDCameraSnapshotLocal* _snapshotLocal;
	id<HMDCameraSnapshotRemoteStreamSenderDelegate> _delegate;
	HMDCameraSnapshotIDSStreamInitiator* _streamInitiator;

}

@property (nonatomic,readonly) HMDCameraSnapshotLocal * snapshotLocal;                                       //@synthesize snapshotLocal=_snapshotLocal - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDCameraSnapshotRemoteStreamSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMDCameraSnapshotIDSStreamInitiator * streamInitiator;                        //@synthesize streamInitiator=_streamInitiator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraSnapshotRemoteStreamSenderDelegate>)delegate;
-(id)logIdentifier;
-(HMDCameraSnapshotLocal *)snapshotLocal;
-(void)getSnapshot:(unsigned long long)arg1 ;
-(void)_callDidStartCaptureImageDelegate:(id)arg1 ;
-(HMDCameraSnapshotIDSStreamInitiator *)streamInitiator;
-(void)_callDidCompleteSendImageDelegate:(id)arg1 ;
-(void)snapShotTransferComplete;
-(void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(void)streamInitiator:(id)arg1 didFailToSendFile:(id)arg2 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 device:(id)arg4 accessory:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 uniqueIdentifier:(id)arg8 snapshotRequestHandler:(id)arg9 ;
-(void)sendSnapshotAtPath:(id)arg1 ;
@end

