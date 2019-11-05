/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface BackgroundTaskRequest : NSObject {

	NSObject*<OS_xpc_object> _job;
	NSString* _requestIdentifier;

}

@property (nonatomic,copy) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(id)updateCheckJobWithDate:(id)arg1 allowsCellular:(BOOL)arg2 requireScreenSleep:(BOOL)arg3 gracePeriod:(BOOL)arg4 ;
+(id)requestCheckInWithIdentifier:(id)arg1 ;
+(id)xpcMaintenanceActivityWithDuration:(id)arg1 allowCellular:(BOOL)arg2 allowBattery:(BOOL)arg3 ;
+(id)cacheDeleteUpdatJobWithInterval:(long long)arg1 ;
+(id)usageCheckJob;
+(id)xpcActivityWithDuration:(id)arg1 gracePeriod:(long long)arg2 ;
+(id)xpcMaintenanceActivityWithDuration:(id)arg1 ;
+(id)xpcActivityWithDuration:(long long)arg1 ;
+(id)xpcUpdatesCheck;
-(id)init;
-(NSString *)requestIdentifier;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(id)initWithBackgroundTaskAgentJob:(id)arg1 ;
-(id)copyBackgroundTaskAgentJob;
@end

