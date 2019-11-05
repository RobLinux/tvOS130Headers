/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HomeKitDaemon/HMFTimerDelegate.h>
#import <HomeKitDaemon/HMFMessageReceiver.h>
#import <HomeKitDaemon/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDHomeManager, HMDMessageDispatcher, NSMutableArray, HMDResidentMeshMeshStorage, NSObject, HMFTimer, NSSet, NSMutableDictionary, NSString;

@interface HMDResidentMesh : HMFObject <HMFTimerDelegate, HMFMessageReceiver, HMFLogging> {

	NSUUID* _uuid;
	unsigned long long _broadcastRate;
	HMDHomeManager* _homeManager;
	HMDMessageDispatcher* _remoteMessageDispatcher;
	NSMutableArray* _residents;
	HMDResidentMeshMeshStorage* _resident;
	NSMutableArray* _reachableAccessories;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFTimer* _startupTimer;
	long long _startupTickCount;
	HMFTimer* _devicesChangedTimer;
	NSSet* _primaryResidentForHomes;
	HMFTimer* _linkQualityMonitorTimer;
	NSMutableDictionary* _loadMetrics;

}

@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                                //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,nonatomic,__weak) HMDMessageDispatcher * remoteMessageDispatcher;              //@synthesize remoteMessageDispatcher=_remoteMessageDispatcher - In the implementation block
@property (nonatomic,retain) NSMutableArray * residents;                                         //@synthesize residents=_residents - In the implementation block
@property (assign,nonatomic,__weak) HMDResidentMeshMeshStorage * resident;                       //@synthesize resident=_resident - In the implementation block
@property (nonatomic,retain) NSMutableArray * reachableAccessories;                              //@synthesize reachableAccessories=_reachableAccessories - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMFTimer * startupTimer;                                          //@synthesize startupTimer=_startupTimer - In the implementation block
@property (assign,nonatomic) long long startupTickCount;                                         //@synthesize startupTickCount=_startupTickCount - In the implementation block
@property (nonatomic,readonly) HMFTimer * devicesChangedTimer;                                   //@synthesize devicesChangedTimer=_devicesChangedTimer - In the implementation block
@property (nonatomic,retain) NSSet * primaryResidentForHomes;                                    //@synthesize primaryResidentForHomes=_primaryResidentForHomes - In the implementation block
@property (nonatomic,readonly) HMFTimer * linkQualityMonitorTimer;                               //@synthesize linkQualityMonitorTimer=_linkQualityMonitorTimer - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * loadMetrics;                                //@synthesize loadMetrics=_loadMetrics - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                      //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned long long broadcastRate;                                             //@synthesize broadcastRate=_broadcastRate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)dumpState;
-(id)_dumpState;
-(void)timerDidFire:(id)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDHomeManager *)homeManager;
-(id)messageDestination;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(HMDResidentMeshMeshStorage *)resident;
-(HMDMessageDispatcher *)remoteMessageDispatcher;
-(id)deviceForAccessory:(id)arg1 residentOrder:(unsigned long long)arg2 reachableResidents:(unsigned long long*)arg3 ;
-(NSMutableArray *)reachableAccessories;
-(id)balancedResidentMapForAccessories:(id)arg1 ;
-(id)bestResidentForAccessory:(id)arg1 ;
-(void)setResident:(HMDResidentMeshMeshStorage *)arg1 ;
-(void)dumpDebug;
-(void)__accessoryIsReachable:(id)arg1 ;
-(void)__accessoryIsNotReachable:(id)arg1 ;
-(void)setRemoteMessageDispatcher:(HMDMessageDispatcher *)arg1 ;
-(void)_sendMessage:(id)arg1 payload:(id)arg2 target:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)_findDeviceInMesh:(id)arg1 ;
-(void)_buildResidentsWithElection:(id)arg1 device:(id)arg2 ;
-(void)__rebuildResidentsViaElection:(id)arg1 ;
-(void)__rebuildResidents:(id)arg1 ;
-(void)__deviceResidentChanged:(id)arg1 ;
-(void)__deviceIsNotReachable:(id)arg1 ;
-(void)__deviceIsReachable:(id)arg1 ;
-(void)_handleMeshUpdateRequestMessage:(id)arg1 ;
-(void)_handleMeshUpdateMessage:(id)arg1 ;
-(void)_addConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(BOOL)arg2 ;
-(void)_removeConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(BOOL)arg2 ;
-(void)_deviceIsReachable:(id)arg1 ;
-(void)_deviceIsNotReachable:(id)arg1 ;
-(BOOL)_checkReachabilityWithTimerActivation:(BOOL)arg1 ;
-(HMFTimer *)startupTimer;
-(long long)startupTickCount;
-(void)setStartupTickCount:(long long)arg1 ;
-(HMFTimer *)devicesChangedTimer;
-(HMFTimer *)linkQualityMonitorTimer;
-(void)_updateAccessoryLinkQuality;
-(id)_addDeviceInResidents:(id)arg1 ;
-(NSMutableArray *)residents;
-(void)setPrimaryResidentForHomes:(NSSet *)arg1 ;
-(id)_addDeviceInMesh:(id)arg1 ;
-(NSMutableDictionary *)loadMetrics;
-(NSSet *)primaryResidentForHomes;
-(id)_findDeviceInResidents:(id)arg1 ;
-(id)_findDeviceInMeshByUUID:(id)arg1 ;
-(id)_availableResidentsForHome:(id)arg1 ;
-(id)_residentMapForAccessories:(id)arg1 ;
-(id)initWithHomeManager:(id)arg1 residentEnabled:(BOOL)arg2 ;
-(id)residentsForCameraAccessory:(id)arg1 excludeResident:(/*^block*/id)arg2 sortedBy:(/*^block*/id)arg3 ;
-(void)_flushWorkQueue;
-(void)setMetricForCurrentDevice:(id)arg1 withValue:(id)arg2 isUrgent:(BOOL)arg3 ;
-(void)_dumpDebug;
-(unsigned long long)broadcastRate;
-(void)setBroadcastRate:(unsigned long long)arg1 ;
-(void)setResidents:(NSMutableArray *)arg1 ;
-(void)setReachableAccessories:(NSMutableArray *)arg1 ;
@end

