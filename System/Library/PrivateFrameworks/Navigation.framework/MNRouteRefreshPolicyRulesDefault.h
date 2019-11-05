/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNRouteRefreshPolicyRules.h>

@class NSString;

@interface MNRouteRefreshPolicyRulesDefault : NSObject <MNRouteRefreshPolicyRules> {

	unsigned long long _policy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long policy;                 //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) BOOL canWakeClientForUpdates; 
@property (nonatomic,readonly) BOOL canWakeDeviceForUpdates; 
-(id)init;
-(unsigned long long)policy;
-(BOOL)canMakeNetworkRequestsForDestination:(id)arg1 atDate:(id)arg2 ;
-(double)timeIntervalForDestinationRefresh:(id)arg1 lastUpdate:(id)arg2 ;
-(double)maxTimeIntervalFromNowForDestinationRefresh:(id)arg1 fromDate:(id)arg2 ;
-(BOOL)canWakeClientForUpdates;
-(BOOL)canWakeDeviceForUpdates;
@end

