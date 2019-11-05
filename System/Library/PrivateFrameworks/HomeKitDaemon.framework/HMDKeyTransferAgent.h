/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HomeKitDaemon/HMFLogging.h>
#import <HomeKitDaemon/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, HMDHomeManager, NSUUID, HMFMessageDestination;

@interface HMDKeyTransferAgent : HMFObject <HMFLogging, HMFMessageReceiver> {

	NSString* _progressState;
	unsigned long long _residentProvisioningStatus;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHomeManager* _homeManager;
	NSUUID* _uuid;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                             //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * progressState;                                        //@synthesize progressState=_progressState - In the implementation block
@property (copy,readonly) HMFMessageDestination * messageDestination; 
@property (readonly) unsigned long long residentProvisioningStatus;                           //@synthesize residentProvisioningStatus=_residentProvisioningStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDHomeManager *)homeManager;
-(HMFMessageDestination *)messageDestination;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(unsigned long long)residentProvisioningStatus;
-(NSString *)progressState;
-(void)beginPairingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetConfig;
-(void)setProgressState:(NSString *)arg1 ;
@end

