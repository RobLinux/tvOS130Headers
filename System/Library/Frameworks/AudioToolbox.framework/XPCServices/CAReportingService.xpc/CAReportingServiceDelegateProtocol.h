/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/XPCServices/CAReportingService.xpc/CAReportingService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAReportingServiceDelegateProtocol <NSObject>
@required
-(void)removeClient:(id)arg1;
-(id)getAllClients;
-(NSMutableDictionary*)getSnapShot;
-(id)getDriverStatisticsRelativeToSnapShot:(NSMutableDictionary*)arg1;
-(id)getDefaults;
-(BOOL)isReportingEnabled;
-(id)findReportingSessionForID:(long long)arg1;

@end

