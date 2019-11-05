/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/AppUsageBaseManager.h>

@protocol OS_dispatch_queue;
@class NSNumber, NSString, NSObject, TaskQueue;

@interface OcelotManager : AppUsageBaseManager {

	int _appStoreCacheUpdatedNotificationToken;
	NSNumber* _cachedSubscribedAccountID;
	NSNumber* _cachedSubscribedState;
	NSString* _cachedSubscribedStateString;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _hardwareFamily;
	NSString* _hardwareModel;
	BOOL _isRetailDemoMode;
	NSObject*<OS_dispatch_queue> _distNotificationQueue;
	NSString* _os;
	NSString* _osBuild;
	TaskQueue* _taskQueue;
	NSObject*<OS_dispatch_queue> _topAppsQueue;
	NSObject*<OS_dispatch_queue> _upsellQueue;

}

@property (nonatomic,readonly) BOOL isSubscribedToOcelot; 
@property (nonatomic,readonly) BOOL shouldPostOcelotMetrics; 
+(id)sharedInstance;
-(id)init;
-(void)getAppPayoutEventsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getAppSummaryEventsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordLaunchesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)resetMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)resetPayoutWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sbsyncIfSubscribedWithAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sbsyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sbsyncWithDuration:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendSummaryMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sendPayoutMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)topAppsForAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isCandidateAppProxy:(id)arg1 isMetadataLookup:(BOOL)arg2 ;
-(void)decorateMetricsEvent:(id)arg1 appMetadata:(id)arg2 context:(id)arg3 ;
-(id)createMetricsEventsForEventType:(unsigned char)arg1 context:(id)arg2 ;
-(id)getLaunchAppEventsWithContext:(id)arg1 ;
-(BOOL)isSubscribedToOcelot:(BOOL)arg1 ;
-(BOOL)showingUpsellDialog;
-(void)showOcelotUpsellForItemID:(id)arg1 relaunchOptions:(id)arg2 ;
-(void)_handleRepairBundleIDNotification:(id)arg1 ;
-(void)_handleAppleIDDidChangeNotification:(id)arg1 ;
-(void)_initializeAcountState;
-(BOOL)_isOceotSubscribed:(BOOL)arg1 ;
-(void)_sbsyncIfNeeded:(id)arg1 ;
-(void)_ensureDeviceIDIsValid;
-(void)_flushMetricsWithReason:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldPostOcelotMetrics;
-(void)_getAppEventsWithAppUsageType:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_handleAppSubscriptionChange;
-(void)_recordExternalAppEvents:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_recordInternalEventsForBundleIDs:(id)arg1 eventType:(unsigned char)arg2 installType:(unsigned char)arg3 context:(id)arg4 ;
-(void)_recordLaunchEventsForContext:(id)arg1 ;
-(void)_postMetrics:(id)arg1 ;
-(void)_resetWithReason:(id)arg1 resetActivity:(BOOL)arg2 context:(id)arg3 ;
-(void)_resetAccountWithReason:(id)arg1 ;
-(void)_topLaunchesForAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_terminateArcadeApps;
-(id)_subscriptionState;
-(id)_activeAccountIDForAppEvent:(id)arg1 context:(id)arg2 withAccountEvents:(id)arg3 ;
-(id)_payoutEvents:(id)arg1 ;
-(id)_createLaunchMetricsEventForAppEvent:(id)arg1 context:(id)arg2 ;
-(id)_deRezzedDateForLaunchDate:(id)arg1 ;
-(void)flushMetricsWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_allOcelotAppEvents:(id)arg1 ;
-(id)_getAppStoreSubscriptionEntitlement:(id*)arg1 ;
-(id)_subscriptionStateForEntitlement:(id)arg1 ;
-(void)_resetDB:(id)arg1 ;
-(void)_logOcelotAppLaunchability;
-(void)_cleanup:(id)arg1 reason:(id)arg2 ;
-(id)qualifiedEventsForWeekeStartingWithDate:(id)arg1 context:(id)arg2 ;
-(id)_topLaunchesForAccountCachePath;
-(id)_topAppsDictionary;
-(void)handleSubscriptionChange;
-(BOOL)isSubscribedToOcelot;
-(void)recordAppEvent:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)recordDeletedApps:(id)arg1 ;
-(void)recordInstalledApps:(id)arg1 installType:(unsigned char)arg2 ;
-(void)recordPayoutMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordSummaryMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)resetPayoutForDuetWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setupWithReason:(id)arg1 ;
-(void)terminateArcadeApps;
-(void)refreshAppMetadata;
-(id)_targetBundleIDs;
-(void)_updateLaunchdWakeupFileForMacOS;
@end

