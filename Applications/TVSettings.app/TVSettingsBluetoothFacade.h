/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:22 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettings/TVSBluetoothManagerScanObserver.h>

@class NSArray, NSString;

@interface TVSettingsBluetoothFacade : NSObject <TVSBluetoothManagerScanObserver> {

	NSArray* _sortDescriptors;
	int _derpDidStartNotificationToken;
	BOOL _derpDidStartNotificationTokenIsValid;
	int _derpDidStopNotificationToken;
	BOOL _derpDidStopNotificationTokenIsValid;
	BOOL _isCapsLockEnabled;
	NSArray* _remotes;
	NSArray* _myDevices;
	NSArray* _otherDevices;
	NSArray* _connectedDevices;

}

@property (nonatomic,copy) NSArray * remotes;                       //@synthesize remotes=_remotes - In the implementation block
@property (nonatomic,copy) NSArray * myDevices;                     //@synthesize myDevices=_myDevices - In the implementation block
@property (nonatomic,copy) NSArray * otherDevices;                  //@synthesize otherDevices=_otherDevices - In the implementation block
@property (nonatomic,copy) NSArray * connectedDevices;              //@synthesize connectedDevices=_connectedDevices - In the implementation block
@property (assign,nonatomic) BOOL isCapsLockEnabled;                //@synthesize isCapsLockEnabled=_isCapsLockEnabled - In the implementation block
@property (assign,nonatomic) BOOL filterDeviceScan; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)connectDevice:(id)arg1 ;
+(void)disconnectDevice:(id)arg1 ;
+(void)unpairDevice:(id)arg1 ;
+(id)deviceStatusFormatterForDeviceType:(long long)arg1 showConnectedState:(BOOL)arg2 ;
+(long long)numberOfConnectedRemotes;
+(long long)numberOfConnectedDevices;
+(BOOL)isBTKeyboardConnected;
-(id)init;
-(void)dealloc;
-(void)startScanning;
-(void)_didEnterBackground:(id)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(NSArray *)otherDevices;
-(NSArray *)connectedDevices;
-(void)stopScanning;
-(void)setConnectedDevices:(NSArray *)arg1 ;
-(BOOL)filterDeviceScan;
-(void)setFilterDeviceScan:(BOOL)arg1 ;
-(void)setOtherDevices:(NSArray *)arg1 ;
-(void)_managerDidUpdate:(id)arg1 ;
-(id)_deviceSortDescriptors;
-(NSArray *)remotes;
-(void)setRemotes:(NSArray *)arg1 ;
-(NSArray *)myDevices;
-(void)setMyDevices:(NSArray *)arg1 ;
-(void)_updateRemotesWithSet:(id)arg1 ;
-(void)_updateMyDevicesWithSet:(id)arg1 ;
-(void)_updateOtherDevicesWithSet:(id)arg1 ;
-(void)_updateConnectedDevicesWithSet:(id)arg1 ;
-(void)setIsCapsLockEnabled:(BOOL)arg1 ;
-(BOOL)isCapsLockEnabled;
@end

