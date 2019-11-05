/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:44 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLDaemonStatusProtocol <CLNotifierServiceProtocol>
@required
-(void)doAsync:(/*^block*/id)arg1;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1;
-(void)fetchIsAirplaneModeEnabledWithReply:(/*^block*/id)arg1;
-(void)fetchReachabilityWithReply:(/*^block*/id)arg1;
-(void)fetchIsBatteryConnectedWithReply:(/*^block*/id)arg1;
-(void)fetchWirelessModemClientCountWithReply:(/*^block*/id)arg1;
-(BOOL)syncgetAirplaneMode:(BOOL*)arg1;
-(int)syncgetReachability;
-(BOOL)syncgetHasLingerClients;
-(BOOL)syncgetIsSleeping;
-(void)notifyMigrationPerformed;
-(BOOL)syncgetPushServiceConnectionState;
-(BOOL)syncgetRegisterPowerKeepAlive:(BOOL)arg1 client:(unsigned long long)arg2 dbgMessage:(id)arg3;

@end
