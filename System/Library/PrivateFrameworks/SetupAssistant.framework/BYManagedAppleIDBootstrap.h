/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistant/AKAppleIDAuthenticationDelegate.h>
#import <SetupAssistant/BYNetworkObserver.h>

@class AKAppleIDAuthenticationContext, NSString;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate, BYNetworkObserver> {

	AKAppleIDAuthenticationContext* _authContext;
	BOOL _shouldRetrySilentLoginUpgrade;
	long long _silentLoginUpgradeRetryCount;

}

@property (assign,nonatomic) BOOL shouldRetrySilentLoginUpgrade;                  //@synthesize shouldRetrySilentLoginUpgrade=_shouldRetrySilentLoginUpgrade - In the implementation block
@property (assign,nonatomic) long long silentLoginUpgradeRetryCount;              //@synthesize silentLoginUpgradeRetryCount=_silentLoginUpgradeRetryCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortLivedToken; 
@property (nonatomic,readonly) BOOL passwordChangeFlowNeedsToRun; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(BOOL)isFirstTimeLogin;
+(BOOL)isMultiUser;
+(id)delegateBundleIDsForManagedAccount;
+(BOOL)isSettingUpMultiUser;
-(id)init;
-(void)dealloc;
-(void)postUserSwitchContextHasBeenUsed;
-(void)recoverEMCSWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldRetrySilentLoginUpgrade;
-(long long)silentLoginUpgradeRetryCount;
-(void)setSilentLoginUpgradeRetryCount:(long long)arg1 ;
-(void)_runSilentLoginUpgradeWithCompletion:(/*^block*/id)arg1 shortLivedTokenUpgradeCompletion:(/*^block*/id)arg2 ;
-(void)_upgradeShortLivedTokenCompletion:(/*^block*/id)arg1 ;
-(void)runSilentLoginUpgradeIfNeededWithCompletion:(/*^block*/id)arg1 shortLivedTokenUpgradeCompletion:(/*^block*/id)arg2 willNotCompleteBlock:(/*^block*/id)arg3 ;
-(BOOL)needsToUpgradeShortLivedToken;
-(BOOL)passwordChangeFlowNeedsToRun;
-(id)_fetchAKURLBagSynchronously;
-(void)switchToLoginWindowDueToError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShouldRetrySilentLoginUpgrade:(BOOL)arg1 ;
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2 ;
-(BOOL)isLoginUser;
-(void)userSwitchContextHasBeenUsed;
-(NSString *)shortLivedToken;
-(void)ingestManagedBuddyData;
-(void)runSilentLoginUpgradeIfNeededWithCompletion:(/*^block*/id)arg1 shortLivedTokenUpgradeCompletion:(/*^block*/id)arg2 ;
-(void)_createAppleAccountWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_languageConfigurationDictionary;
-(void)writeAccountConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
@end

