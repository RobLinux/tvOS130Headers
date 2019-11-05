/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDServiceProvider.h>

@class ASDServiceBroker, NSString;

@interface ASDOcelotStore : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
-(id)init;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)flushMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getAppPayoutEventsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getAppSummaryEventsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordLaunchesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reportAppEvent:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resetPayoutWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sbsyncIfSubscribedWithAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sbsyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sbsyncWithDuration:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)subscriptionStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)topAppsForAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resetSummaryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sendSummaryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sendPayoutWithCompletionBlock:(/*^block*/id)arg1 ;
@end

