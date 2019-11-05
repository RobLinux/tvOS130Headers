/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVJSCSSubscriptionManager.h>

@protocol TVJSCSSubscriptionManager <JSExport>
@required
-(id)init;
-(void)unregisterAllSubscriptions;
-(void)registerSubscription:(id)arg1 :(id)arg2;
-(void)unregisterSubscription:(id)arg1;

@end


@class CSSubscriptionManager;

@interface TVJSCSSubscriptionManager : NSObject <TVJSCSSubscriptionManager> {

	CSSubscriptionManager* _subscriptionManager;

}

@property (nonatomic,retain) CSSubscriptionManager * subscriptionManager;              //@synthesize subscriptionManager=_subscriptionManager - In the implementation block
+(void)configureJSContext:(id)arg1 ;
-(id)init;
-(void)unregisterAllSubscriptions;
-(CSSubscriptionManager *)subscriptionManager;
-(void)registerSubscription:(id)arg1 :(id)arg2 ;
-(void)unregisterSubscription:(id)arg1 ;
-(void)setSubscriptionManager:(CSSubscriptionManager *)arg1 ;
@end
