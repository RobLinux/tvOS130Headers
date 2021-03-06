/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:01:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPeripheralAgent.app/TVPeripheralAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVSBluetoothManagerDelegate <NSObject>
@optional
-(void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;
-(void)bluetoothManager:(id)arg1 didCompleteDeviceDisconnection:(id)arg2 error:(id)arg3;
-(void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;
-(void)bluetoothManager:(id)arg1 requestPairingPIN:(id)arg2;
-(void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;
-(void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;

@end

