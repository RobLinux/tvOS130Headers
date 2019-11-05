/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSystemState.framework/ATVSystemState
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSystemState/ATVSystemState-Structs.h>
#import <ATVSystemState/SSILInterface.h>

@interface SSILInterfaceAOP : SSILInterface {

	IOHIDDeviceRef _device;

}
-(id)init;
-(void)dealloc;
-(BOOL)setState:(unsigned long long)arg1 error:(id*)arg2 ;
-(IOHIDDeviceRef)_getDevice;
-(id)_indicatorLightStateToAOPHIDReport:(unsigned long long)arg1 ;
@end
