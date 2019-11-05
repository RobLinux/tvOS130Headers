/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/PushMessageConsumer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSString;

@interface SubscriptionEntitlementsCoordinator : NSObject <PushMessageConsumer> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSNumber* _lastAccountID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)adPlatformsArcadeStatusCondition;
-(id)init;
-(void)dealloc;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withToken:(id)arg2 ignoreCaches:(BOOL)arg3 notifyInternal:(BOOL)arg4 withResultHandler:(/*^block*/id)arg5 ;
-(id)_cachedAccountIdForSegment:(unsigned long long)arg1 ;
-(void)_removeCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ;
-(void)_verifyAccountForCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 notifyInternal:(BOOL)arg2 ;
-(id)_cachedSubscriptionEntitlementsResponseForSegment:(unsigned long long)arg1 expired:(BOOL*)arg2 ;
-(id)_logKeyForSegment:(unsigned long long)arg1 ;
-(void)_getSubscriptionEntitlementsResponseWithToken:(id)arg1 forSegment:(unsigned long long)arg2 ignoreCaches:(BOOL)arg3 notifyInternal:(BOOL)arg4 withResultHandler:(/*^block*/id)arg5 ;
-(void)_markCachedSubscriptionEntitlementsAsExpiredForSegment:(unsigned long long)arg1 ;
-(void)_setCachedSubscriptionEntitlementsDictionary:(id)arg1 segment:(unsigned long long)arg2 notifyInternal:(BOOL)arg3 ;
-(void)setAdPlatformsArcadeStatusConditionForceSet:(BOOL)arg1 updateCacheIfExpired:(BOOL)arg2 ;
-(void)markCachedSubscriptionEntitlementsAsExpiredForSegment:(unsigned long long)arg1 ;
-(id)_cachedSubscriptionEntitlementsDictionaryForSegment:(unsigned long long)arg1 ;
-(id)_cachedSubscriptionEntitlementsPathForSegment:(unsigned long long)arg1 ;
-(void)setCachedSubscriptionEntitlements:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3 notifyInternal:(BOOL)arg4 ;
-(void)_notifyChangeToSegment:(unsigned long long)arg1 notifyInternal:(BOOL)arg2 ;
-(void)pushService:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)appStoreConsumedIntroOfferFamilyIdsWithResultHandler:(/*^block*/id)arg1 ;
-(id)_segementLogName:(unsigned long long)arg1 ;
@end
