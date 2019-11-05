/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSXPCPairing.h>

@protocol OS_dispatch_queue;
@class NSObject, IDSDaemon, IDSDServiceController, IDSQuickSwitchHelper, IDSPairingManager, IDSDAccountController, IDSUTunController, IDSUTunDeliveryController;

@interface IDSDXPCPairing : NSObject <IDSXPCPairing> {

	NSObject*<OS_dispatch_queue> _queue;
	IDSDaemon* _idsDaemon;
	IDSDServiceController* _serviceController;
	IDSQuickSwitchHelper* _quickSwitchHelper;
	IDSPairingManager* _pairingManager;
	IDSDAccountController* _accountController;
	IDSUTunController* _utunController;
	IDSUTunDeliveryController* _utunDeliveryController;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSDaemon * idsDaemon;                                           //@synthesize idsDaemon=_idsDaemon - In the implementation block
@property (nonatomic,retain) IDSDServiceController * serviceController;                       //@synthesize serviceController=_serviceController - In the implementation block
@property (nonatomic,retain) IDSQuickSwitchHelper * quickSwitchHelper;                        //@synthesize quickSwitchHelper=_quickSwitchHelper - In the implementation block
@property (nonatomic,retain) IDSPairingManager * pairingManager;                              //@synthesize pairingManager=_pairingManager - In the implementation block
@property (nonatomic,retain) IDSDAccountController * accountController;                       //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) IDSUTunController * utunController;                              //@synthesize utunController=_utunController - In the implementation block
@property (nonatomic,retain) IDSUTunDeliveryController * utunDeliveryController;              //@synthesize utunDeliveryController=_utunDeliveryController - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSUTunController *)utunController;
-(void)addPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPairedDeviceWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)connectPairedDeviceWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupCompletedForPairedDeviceWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPairingDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)getPairedDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)getPairingRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)updatePairedDeviceWithID:(id)arg1 supportIPsec:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)deletePairedDeviceWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unpairStartForDeviceWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopLocalPairingForDeviceWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unpairDeviceWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)forgetDeviceWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)switchActivePairedDeviceWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disconnectActivePairedDevice:(/*^block*/id)arg1 ;
-(void)redeliverMessagesForDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAllowedTrafficClassifiersForDevice:(id)arg1 classifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dropAllMessagesWithoutAnyAllowedClassifierForDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pairedDevicesInfo:(/*^block*/id)arg1 ;
-(IDSPairingManager *)pairingManager;
-(IDSDServiceController *)serviceController;
-(void)setAccountController:(IDSDAccountController *)arg1 ;
-(IDSDAccountController *)accountController;
-(void)setPairingManager:(IDSPairingManager *)arg1 ;
-(void)setServiceController:(IDSDServiceController *)arg1 ;
-(IDSUTunDeliveryController *)utunDeliveryController;
-(void)setUtunDeliveryController:(IDSUTunDeliveryController *)arg1 ;
-(id)initWithQueue:(id)arg1 idsDaemon:(id)arg2 serviceController:(id)arg3 pairingManager:(id)arg4 quickSwitchHelper:(id)arg5 accountController:(id)arg6 utunController:(id)arg7 utunDeliveryController:(id)arg8 ;
-(void)_addPairedDevice:(id)arg1 withInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_pairingDeviceCBUUIDs;
-(id)_pairedDeviceCBUUIDs;
-(IDSDaemon *)idsDaemon;
-(IDSQuickSwitchHelper *)quickSwitchHelper;
-(id)_sortedArrayFromCBUUIDSet:(id)arg1 ;
-(void)setIdsDaemon:(IDSDaemon *)arg1 ;
-(void)setQuickSwitchHelper:(IDSQuickSwitchHelper *)arg1 ;
-(void)setUtunController:(IDSUTunController *)arg1 ;
@end

