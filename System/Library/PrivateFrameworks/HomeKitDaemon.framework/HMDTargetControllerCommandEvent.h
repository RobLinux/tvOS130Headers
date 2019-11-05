/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <HomeKitDaemon/HMDAWDLogEvent.h>

@class HMDHAPAccessory, NSString;

@interface HMDTargetControllerCommandEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned long long _commandType;
	HMDHAPAccessory* _accessory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long commandType;                  //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,__weak,readonly) HMDHAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
+(id)uuid;
+(id)commandEventWithCommandType:(unsigned long long)arg1 accessory:(id)arg2 ;
-(HMDHAPAccessory *)accessory;
-(unsigned long long)commandType;
-(id)initWithCommandType:(unsigned long long)arg1 accessory:(id)arg2 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

