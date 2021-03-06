/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/TVSBluetoothManagerObserver.h>
#import <Setup/TVSBluetoothManagerDelegate.h>

@protocol SATVBluetoothKeyboardManagerDelegate;
@class TVSBluetoothDevice, NSString;

@interface SATVBluetoothKeyboardManager : NSObject <TVSBluetoothManagerObserver, TVSBluetoothManagerDelegate> {

	id<SATVBluetoothKeyboardManagerDelegate> _delegate;
	TVSBluetoothDevice* _pairingDevice;

}

@property (nonatomic,retain) TVSBluetoothDevice * pairingDevice;                                    //@synthesize pairingDevice=_pairingDevice - In the implementation block
@property (assign,nonatomic,__weak) id<SATVBluetoothKeyboardManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SATVBluetoothKeyboardManagerDelegate>)delegate;
-(void)setDelegate:(id<SATVBluetoothKeyboardManagerDelegate>)arg1 ;
-(void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3 ;
-(void)cancelPINPairing;
-(void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3 ;
-(void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2 ;
-(void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2 ;
-(void)bluetoothManagerDidUpdateDiscoveredDevices:(id)arg1 ;
-(void)startPairing;
-(void)stopPairing;
-(void)_removeSelfFromBluetoothManager;
-(void)setPairingDevice:(TVSBluetoothDevice *)arg1 ;
-(id)_pairedKeyboard;
-(TVSBluetoothDevice *)pairingDevice;
@end

