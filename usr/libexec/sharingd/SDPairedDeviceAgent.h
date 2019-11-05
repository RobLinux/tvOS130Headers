/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDXPCDaemon.h>
#import <sharingd/IDSServiceDelegate.h>
#import <sharingd/SFPairedDeviceDaemonInterface.h>

@protocol OS_dispatch_source;
@class NSDate, NSNumber, SFBLEPipe, RPCompanionLinkClient, CUCoalescer, IDSDevice, IDSService, NSObject, NSMutableArray, SFPowerSource, NSDictionary, SFPowerSourceMonitor, NSString;

@interface SDPairedDeviceAgent : SDXPCDaemon <IDSServiceDelegate, SFPairedDeviceDaemonInterface> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	NSDate* _animationDateReceived;
	NSDate* _animationDateForIDS;
	NSDate* _animationDateToSend;
	BOOL _animationDateSupported;
	NSNumber* _animationMessageID;
	SFBLEPipe* _blePipe;
	RPCompanionLinkClient* _companionLinkClient;
	/*^block*/id _chargingUIHandler;
	CUCoalescer* _idsConnectionCoalescer;
	IDSDevice* _idsConnectedDevice;
	IDSService* _idsService;
	CUCoalescer* _idsSyncCoalescer;
	NSObject*<OS_dispatch_source> _idsInfoTimer;
	BOOL _infoRequestForced;
	int _lockStatePairedDevice;
	NSMutableArray* _messageIDs;
	NSMutableDictionary* _nrRegisteredDevices;
	SFPowerSource* _powerSourceLocal;
	NSDictionary* _powerSourceMessage;
	SFPowerSourceMonitor* _powerSourceMonitor;
	SFPowerSource* _powerSourcePairedDevice;
	BOOL _powerSourceWasCharging;
	int _testingChargingToken;
	BOOL _uiShowing;
	long long _wristStateLocal;
	long long _wristStatePairedDevice;
	SFPowerSource* _powerSource;

}

@property (nonatomic,retain) SFPowerSource * powerSource;              //@synthesize powerSource=_powerSource - In the implementation block
@property (nonatomic,readonly) int lockState; 
@property (nonatomic,readonly) long long wristState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAgent;
-(id)init;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(void)activate;
-(id)machServiceName;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(void)setPowerSource:(SFPowerSource *)arg1 ;
-(int)lockState;
-(void)connectionInvalidated:(id)arg1 ;
-(BOOL)shouldAcceptNewConnection:(id)arg1 ;
-(void)connectionEstablished:(id)arg1 ;
-(void)wristStateChanged:(id)arg1 ;
-(SFPowerSource *)powerSource;
-(id)_queueWithFallbackQOS;
-(void)_systemStateRegisterObservers;
-(void)_testingRegisterNotifications;
-(void)_idsEnsureCoalescersStarted;
-(void)_idsEnsureCoalescersStopped;
-(void)_systemStateUnregisterObservers;
-(void)_companionLinkDevicesChanged;
-(void)_companionLinkRegisterEvents;
-(BOOL)_companionLinkConnected;
-(void)_idsUpdateConnectedState;
-(void)_idsEnsureSynced;
-(void)_idsSendStateUpdate:(id)arg1 ;
-(BOOL)_idsHasDefaultDevice;
-(void)_idsTimerInfoFired;
-(void)_idsTriggerSync;
-(void)_idsTimerInfoInvalidate;
-(void)_idsTriggerSyncForAnimation:(BOOL)arg1 ;
-(void)_lockStateUpdate:(int)arg1 ;
-(void)_nanoRegistryUnregisterChanges;
-(void)_wristStateUpdate:(long long)arg1 ;
-(void)_messageHandleIncomingData:(id)arg1 ;
-(void)_messageHandleAllUpdate:(id)arg1 ;
-(void)_messageHandlePowerSourceUpdate:(id)arg1 ;
-(void)_messageHandleDashboardEntry:(id)arg1 ;
-(void)_lockStateHandleMessage:(id)arg1 ;
-(void)_powerSourceUpdatePairedDeviceInfo:(id)arg1 ;
-(void)_wristStateHandleMessage:(id)arg1 ;
-(id)_messageFromPowerSource:(id)arg1 ;
-(void)_messageIDRemove:(id)arg1 ;
-(void)_messageIDAdd:(id)arg1 ;
-(void)_setupPowerSourceMonitor;
-(void)_disablePowerStateMonitor;
-(void)_lockStateChanged:(id)arg1 ;
-(void)_powerSourceChanged:(id)arg1 ;
-(void)_powerSourceLost:(id)arg1 ;
-(void)_wristStateChanged;
-(void)requestAnimationDateWithCompletion:(/*^block*/id)arg1 ;
-(void)sendAnimationDate:(id)arg1 ;
-(void)initialViewControllerDidAppear;
-(void)initialViewControllerDidDisappear;
-(void)sendDismissUIWithReason:(long long)arg1 ;
-(void)sendDashboardEntryWithName:(id)arg1 dict:(id)arg2 ;
-(void)triggerChargingUIWithDismissHandler:(/*^block*/id)arg1 ;
-(void)_idsSendDashboardEntryToCompanion:(id)arg1 ;
-(void)_companionLinkEnable;
-(void)_companionLinkDisable;
-(id)_idsActiveDevice;
-(void)_idsTimerInfoRestart;
-(void)_nanoRegistryRegisterChangesForDevice:(id)arg1 ;
-(void)_setupLockStateMonitor;
-(void)_setupWristStateMonitor;
-(void)_testingUnregisterNotifications;
-(void)_testingOnCharger;
-(long long)wristState;
@end

