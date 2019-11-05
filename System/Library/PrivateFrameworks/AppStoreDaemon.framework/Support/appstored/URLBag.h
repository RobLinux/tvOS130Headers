/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/AMSBagProtocol.h>
#import <appstored/AdoptionContract.h>
#import <appstored/AppUsageBagContract.h>
#import <appstored/ArcadeBagContract.h>
#import <appstored/AutoUpdateBagContract.h>
#import <appstored/BuildToolsBagContract.h>
#import <appstored/DRMRecovery.h>
#import <appstored/CrossfireBagContract.h>
#import <appstored/OnDemandResourcesBagContract.h>
#import <appstored/OwnsCheckBagContract.h>
#import <appstored/PlatformConextBagContract.h>
#import <appstored/PersonalizationBagContract.h>
#import <appstored/IAPInfoBagContract.h>
#import <appstored/PurchaseHistoryBagContract.h>
#import <appstored/SubscriptionEntitlementsBagContract.h>
#import <appstored/UpdatesBagContract.h>
#import <appstored/StoreKitBagContract.h>
#import <appstored/StoreQueueBagContract.h>
#import <appstored/PushNotificationBagcontract.h>
#import <appstored/SystemAppsBagContract.h>
#import <appstored/TestFlightFeedbackBagContract.h>
#import <appstored/WelcomeToAppStoreNotificationBagContract.h>

@class NSDate, NSString, AMSBagValue, URLBagMemoizedValue, AMSBag;

@interface URLBag : NSObject <AMSBagProtocol, AdoptionContract, AppUsageBagContract, ArcadeBagContract, AutoUpdateBagContract, BuildToolsBagContract, DRMRecovery, CrossfireBagContract, OnDemandResourcesBagContract, OwnsCheckBagContract, PlatformConextBagContract, PersonalizationBagContract, IAPInfoBagContract, PurchaseHistoryBagContract, SubscriptionEntitlementsBagContract, UpdatesBagContract, StoreKitBagContract, StoreQueueBagContract, PushNotificationBagcontract, SystemAppsBagContract, TestFlightFeedbackBagContract, WelcomeToAppStoreNotificationBagContract> {

	AMSBag* _bag;
	BOOL expired;
	NSDate* expirationDate;
	NSString* profile;
	NSString* profileVersion;

}

@property (nonatomic,readonly) AMSBagValue * authorizeURL; 
@property (nonatomic,readonly) AMSBagValue * upToDateClaimURL; 
@property (nonatomic,readonly) AMSBagValue * contentRestoreMaxItemCount; 
@property (nonatomic,readonly) AMSBagValue * contentRestoreURL; 
@property (nonatomic,readonly) AMSBagValue * manageSubsOnAppDeleteBlacklist; 
@property (nonatomic,readonly) AMSBagValue * lowDataPromptThreshold; 
@property (nonatomic,readonly) URLBagMemoizedValue * ocelotDeviceIDDaysValid; 
@property (nonatomic,readonly) URLBagMemoizedValue * ocelotPostIntervalSeconds; 
@property (nonatomic,readonly) URLBagMemoizedValue * ocelotPayoutQualifyingDurationSeconds; 
@property (nonatomic,readonly) URLBagMemoizedValue * ocelotPostPayoutIntervalSeconds; 
@property (nonatomic,readonly) AMSBagValue * sbsyncProductionURL; 
@property (nonatomic,readonly) AMSBagValue * sbsyncSandboxURL; 
@property (nonatomic,readonly) AMSBagValue * sbsyncRefreshIntervalSeconds; 
@property (nonatomic,readonly) AMSBagValue * switchArcadeUserFallbackURL; 
@property (nonatomic,readonly) AMSBagValue * switchArcadeUserURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (readonly) AMSBagValue * adoptProductsURL; 
@property (readonly) AMSBagValue * adoptionEligibilityURL; 
@property (readonly) AMSBagValue * appUsageFlushIntervalSeconds; 
@property (readonly) AMSBagValue * arcadeSubscriptionGroupIdentifier; 
@property (readonly) AMSBagValue * autoUpdateReloadIntervalSeconds; 
@property (readonly) AMSBagValue * autoUpdateReloadIntervalCellular; 
@property (readonly) AMSBagValue * deltaIncompatibleBuildToolVersions; 
@property (readonly) AMSBagValue * invalidBuildToolVersions; 
@property (readonly) AMSBagValue * drmRecovery; 
@property (readonly) URLBagMemoizedValue * crossfirePostIntervalSeconds; 
@property (readonly) URLBagMemoizedValue * crossfireSamplingPercentage; 
@property (readonly) URLBagMemoizedValue * crossfireIncludeLaunches; 
@property (readonly) AMSBagValue * odrURL; 
@property (readonly) AMSBagValue * ownsCheckURL; 
@property (readonly) AMSBagValue * mescalSignedActions; 
@property (readonly) AMSBagValue * personalizedLookupURL; 
@property (readonly) AMSBagValue * unpersonalizedLookupURL; 
@property (readonly) AMSBagValue * appUsagePostGracePeriodSeconds; 
@property (readonly) AMSBagValue * appUsagePostsPerDay; 
@property (readonly) AMSBagValue * appUsageResetActorIDFrequencySeconds; 
@property (readonly) URLBagMemoizedValue * appUsageSamplingPercentage; 
@property (readonly) AMSBagValue * clusterMappingURL; 
@property (readonly) AMSBagValue * clusterMappingRefreshFrequencySeconds; 
@property (readonly) AMSBagValue * IAPInfoBaseURL; 
@property (readonly) AMSBagValue * IAPInfoForcedRefreshMinutes; 
@property (readonly) AMSBagValue * IAPInfoDatabaseID; 
@property (readonly) AMSBagValue * IAPInfoUpdatePollingFrequencySeconds; 
@property (readonly) AMSBagValue * PurchaseHistoryBaseURL; 
@property (readonly) AMSBagValue * PurchaseHistoryDatabaseID; 
@property (readonly) AMSBagValue * PurchaseHistoryForcedRefreshMinutes; 
@property (readonly) AMSBagValue * PurchaseHistoryUpdatePollingFrequencySeconds; 
@property (readonly) AMSBagValue * subscriptionEntitlementsRefreshIntervalInSeconds; 
@property (readonly) AMSBagValue * subscriptionEntitlementsTimeout; 
@property (readonly) AMSBagValue * subscriptionEntitlementsURL; 
@property (nonatomic,readonly) AMSBagValue * appleIDLookupURL; 
@property (nonatomic,readonly) AMSBagValue * countryCode; 
@property (nonatomic,readonly) AMSBagValue * createAppReceiptURL; 
@property (nonatomic,readonly) AMSBagValue * productOffersURL; 
@property (nonatomic,readonly) AMSBagValue * productOffersBatchSize; 
@property (nonatomic,readonly) AMSBagValue * renewVPPReceiptURL; 
@property (readonly) AMSBagValue * automaticDownloadsURL; 
@property (readonly) AMSBagValue * completeStoreDownloadURL; 
@property (readonly) AMSBagValue * pendingAppsURL; 
@property (readonly) AMSBagValue * pushNotificationEnvironment; 
@property (readonly) AMSBagValue * hideableSystemApps; 
@property (readonly) AMSBagValue * backoffDelays; 
@property (readonly) AMSBagValue * backoffRandomRange; 
@property (readonly) AMSBagValue * getImageUploadURLsURL; 
@property (readonly) AMSBagValue * uploadFeedbackURL; 
@property (readonly) AMSBagValue * welcomeToAppStoreDelay; 
@property (readonly) AMSBagValue * welcomeToAppStoreSample; 
@property (readonly) AMSBagValue * welcomeToAppStoreTitle; 
@property (readonly) AMSBagValue * welcomeToAppStoreMessage; 
@property (readonly) AMSBagValue * welcomeToAppStoreLaterButton; 
@property (readonly) AMSBagValue * welcomeToAppStoreRemindMe; 
@property (readonly) AMSBagValue * welcomeToAppStoreDontRemindMe; 
@property (readonly) AMSBagValue * welcomeToAppStoreActionButton; 
@property (readonly) AMSBagValue * welcomeToAppStoreActionURL; 
+(id)defaultBag;
+(id)sandboxBag;
+(id)_keySet;
-(id)init;
-(AMSBagValue *)countryCode;
-(id)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(NSString *)profile;
-(AMSBagValue *)mescalSignedActions;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(AMSBagValue *)personalizedLookupURL;
-(AMSBagValue *)unpersonalizedLookupURL;
-(AMSBagValue *)uploadFeedbackURL;
-(URLBagMemoizedValue *)ocelotDeviceIDDaysValid;
-(URLBagMemoizedValue *)ocelotPayoutQualifyingDurationSeconds;
-(AMSBagValue *)hideableSystemApps;
-(AMSBagValue *)automaticDownloadsURL;
-(AMSBagValue *)pendingAppsURL;
-(AMSBagValue *)sbsyncProductionURL;
-(AMSBagValue *)arcadeSubscriptionGroupIdentifier;
-(AMSBagValue *)subscriptionEntitlementsRefreshIntervalInSeconds;
-(AMSBagValue *)ownsCheckURL;
-(URLBagMemoizedValue *)crossfireIncludeLaunches;
-(URLBagMemoizedValue *)crossfireSamplingPercentage;
-(AMSBagValue *)PurchaseHistoryBaseURL;
-(AMSBagValue *)PurchaseHistoryDatabaseID;
-(AMSBagValue *)authorizeURL;
-(AMSBagValue *)odrURL;
-(AMSBagValue *)invalidBuildToolVersions;
-(AMSBagValue *)drmRecovery;
-(AMSBagValue *)appUsageFlushIntervalSeconds;
-(AMSBagValue *)appUsagePostsPerDay;
-(AMSBagValue *)completeStoreDownloadURL;
-(AMSBagValue *)PurchaseHistoryForcedRefreshMinutes;
-(AMSBagValue *)PurchaseHistoryUpdatePollingFrequencySeconds;
-(AMSBagValue *)getImageUploadURLsURL;
-(AMSBagValue *)IAPInfoForcedRefreshMinutes;
-(AMSBagValue *)IAPInfoUpdatePollingFrequencySeconds;
-(AMSBagValue *)deltaIncompatibleBuildToolVersions;
-(AMSBagValue *)lowDataPromptThreshold;
-(AMSBagValue *)contentRestoreMaxItemCount;
-(AMSBagValue *)switchArcadeUserURL;
-(AMSBagValue *)switchArcadeUserFallbackURL;
-(AMSBagValue *)contentRestoreURL;
-(AMSBagValue *)upToDateClaimURL;
-(id)initWithSandbox:(BOOL)arg1 ;
-(AMSBagValue *)adoptProductsURL;
-(AMSBagValue *)adoptionEligibilityURL;
-(AMSBagValue *)autoUpdateReloadIntervalSeconds;
-(AMSBagValue *)autoUpdateReloadIntervalCellular;
-(URLBagMemoizedValue *)crossfirePostIntervalSeconds;
-(AMSBagValue *)appUsagePostGracePeriodSeconds;
-(AMSBagValue *)appUsageResetActorIDFrequencySeconds;
-(URLBagMemoizedValue *)appUsageSamplingPercentage;
-(AMSBagValue *)clusterMappingURL;
-(AMSBagValue *)clusterMappingRefreshFrequencySeconds;
-(AMSBagValue *)IAPInfoBaseURL;
-(AMSBagValue *)IAPInfoDatabaseID;
-(AMSBagValue *)subscriptionEntitlementsTimeout;
-(AMSBagValue *)subscriptionEntitlementsURL;
-(id)availableUpdatesRequestURL;
-(id)doNotUpdateList;
-(id)updateUsingOptimizedRequest;
-(id)viewUpdatesRequestURL;
-(id)v2UpdateSchedulingEnabled;
-(id)updatesReloadInterval;
-(id)updatesReloadIntervalCellular;
-(AMSBagValue *)appleIDLookupURL;
-(AMSBagValue *)createAppReceiptURL;
-(AMSBagValue *)productOffersURL;
-(AMSBagValue *)productOffersBatchSize;
-(AMSBagValue *)renewVPPReceiptURL;
-(AMSBagValue *)pushNotificationEnvironment;
-(AMSBagValue *)backoffDelays;
-(AMSBagValue *)backoffRandomRange;
-(AMSBagValue *)welcomeToAppStoreDelay;
-(AMSBagValue *)welcomeToAppStoreSample;
-(AMSBagValue *)welcomeToAppStoreTitle;
-(AMSBagValue *)welcomeToAppStoreMessage;
-(AMSBagValue *)welcomeToAppStoreLaterButton;
-(AMSBagValue *)welcomeToAppStoreRemindMe;
-(AMSBagValue *)welcomeToAppStoreDontRemindMe;
-(AMSBagValue *)welcomeToAppStoreActionButton;
-(AMSBagValue *)welcomeToAppStoreActionURL;
-(URLBagMemoizedValue *)ocelotPostIntervalSeconds;
-(URLBagMemoizedValue *)ocelotPostPayoutIntervalSeconds;
-(AMSBagValue *)sbsyncSandboxURL;
-(AMSBagValue *)sbsyncRefreshIntervalSeconds;
-(AMSBagValue *)manageSubsOnAppDeleteBlacklist;
@end

