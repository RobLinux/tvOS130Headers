/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:59 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <terminusd/NRAnalytics.h>

@interface NRAnalyticsLocalDevice : NRAnalytics {

	BOOL _deviceRegistrationSuccess;
	BOOL _devicePairedWithOOBKey;
	unsigned long long _deviceRegistrationStart;
	unsigned long long _deviceRegistrationEnd;

}

@property (assign,nonatomic) unsigned long long deviceRegistrationStart;              //@synthesize deviceRegistrationStart=_deviceRegistrationStart - In the implementation block
@property (assign,nonatomic) unsigned long long deviceRegistrationEnd;                //@synthesize deviceRegistrationEnd=_deviceRegistrationEnd - In the implementation block
@property (assign,nonatomic) BOOL deviceRegistrationSuccess;                          //@synthesize deviceRegistrationSuccess=_deviceRegistrationSuccess - In the implementation block
@property (assign,nonatomic) BOOL devicePairedWithOOBKey;                             //@synthesize devicePairedWithOOBKey=_devicePairedWithOOBKey - In the implementation block
-(void)submit;
-(unsigned long long)deviceRegistrationStart;
-(void)setDeviceRegistrationStart:(unsigned long long)arg1 ;
-(unsigned long long)deviceRegistrationEnd;
-(void)setDeviceRegistrationEnd:(unsigned long long)arg1 ;
-(BOOL)deviceRegistrationSuccess;
-(void)setDeviceRegistrationSuccess:(BOOL)arg1 ;
-(BOOL)devicePairedWithOOBKey;
-(void)setDevicePairedWithOOBKey:(BOOL)arg1 ;
@end

