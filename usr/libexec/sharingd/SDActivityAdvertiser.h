/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDActivityController.h>
#import <sharingd/IDSContinuityDelegate.h>
#import <sharingd/SFActivityAdvertiserProtocol.h>

@protocol OS_os_transaction;
@class SDStatusMonitor, IDSContinuity, NSTimer, NSMutableSet, NSObject, NSData, NSDictionary, NSString;

@interface SDActivityAdvertiser : SDActivityController <IDSContinuityDelegate, SFActivityAdvertiserProtocol> {

	unsigned char _versionByte;
	SDStatusMonitor* _monitor;
	IDSContinuity* _continuity;
	double _goodbyeTimerInterval;
	NSTimer* _goodbyeTimer;
	NSMutableSet* _shouldNotAdvertiseRequesters;
	BOOL _advertisingEnabled;
	BOOL _isAdvertising;
	NSObject*<OS_os_transaction> _advertisingTransaction;
	NSData* _rawAdvertisementData;
	NSData* _advertisementData;
	unsigned _powerAssertionID;
	NSData* _currentAdvertisementPayload;
	NSDictionary* _currentAdvertisementOptions;
	/*^block*/id _currentErrorHandler;

}

@property (readonly) NSString * state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAdvertiser;
-(id)init;
-(NSString *)state;
-(void)start;
-(void)stop;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(BOOL)restart;
-(void)continuityDidUpdateState:(id)arg1 ;
-(void)continuity:(id)arg1 didStartAdvertisingOfType:(long long)arg2 ;
-(void)continuity:(id)arg1 didStopAdvertisingOfType:(long long)arg2 ;
-(void)continuity:(id)arg1 didStopAdvertisingOfType:(long long)arg2 withError:(id)arg3 ;
-(void)continuity:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3 ;
-(void)loginIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pairedSFPeerDevicesWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)peerForUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2 withErrorHandler:(/*^block*/id)arg3 ;
-(void)activityPayloadForAdvertisementPayload:(id)arg1 command:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3 ;
-(void)addObservers;
-(void)removeObservers;
-(void)connectionInvalidated:(id)arg1 ;
-(BOOL)updateAdvertiser;
-(void)activityServiceDevicesChanged:(id)arg1 ;
-(BOOL)shouldAcceptNewConnection:(id)arg1 ;
-(void)connectionEstablished:(id)arg1 ;
-(id)encryptedAdvertisingInformation;
-(void)startGoodbyeTimer;
-(void)preventIdleSleepAssertion;
-(void)invalidateGoodbyeTimer;
-(void)releaseIdleSleepAssertion;
-(void)_enumerateRemoteObjectProxiesUsingBlock:(/*^block*/id)arg1 ;
-(void)resetStateRequested:(id)arg1 ;
-(void)systemWillSleep:(id)arg1 ;
-(void)goodbyeTimeoutFired:(id)arg1 ;
-(id)createAdvertisingInformation;
-(void)stopForReason:(id)arg1 ;
-(void)resumeForReason:(id)arg1 ;
-(void)_remoteObjectProxyForConnection:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)consoleUserChanged:(id)arg1 ;
-(void)continuity:(id)arg1 continuityDidStopAdvertisingOfType:(long long)arg2 withError:(id)arg3 ;
@end

