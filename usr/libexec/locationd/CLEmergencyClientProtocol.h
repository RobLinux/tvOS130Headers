/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:46 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLEmergencyClientProtocol <CLIntersiloClientProtocol>
@required
-(void)emergencyStateChange:(int)arg1;
-(void)emergencySettingsChange:(/*^block*/id)arg1 withReason:(int)arg2;
-(void)shouldLockoutNilr:(BOOL)arg1;
-(void)allowLocalClientsInEmergency:(BOOL)arg1;

@end

