/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:36 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DMFEmergencyModeRemoteInterface <NSObject>
@required
-(void)enableEmergencyModeWithCompletionHandler:(/*^block*/id)arg1;
-(void)enableEmergencyModeForDuration:(double)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)disableEmergencyModeWithCompletionHandler:(/*^block*/id)arg1;
-(void)emergencyModeStatusWithCompletionHandler:(/*^block*/id)arg1;

@end

