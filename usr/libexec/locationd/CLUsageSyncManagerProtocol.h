/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLUsageSyncManagerProtocol <CLIntersiloServiceProtocol>
@required
-(void)promptForClient:(id)arg1 authorizationStatus:(int)arg2 forcePrompt:(BOOL)arg3;
-(void)client:(id)arg1 didChangeUsageData:(id)arg2;

@end

