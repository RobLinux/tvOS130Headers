/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSPreferences, ACAccountStore;

@interface TVSettingsHomeScreenSyncFacade : NSObject {

	id _headboardPrefsObserverToken;
	BOOL _homeScreenSyncEnabled;
	TVSPreferences* _headBoardPreferences;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) TVSPreferences * headBoardPreferences;              //@synthesize headBoardPreferences=_headBoardPreferences - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                      //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) BOOL homeScreenSyncEnabled;                         //@synthesize homeScreenSyncEnabled=_homeScreenSyncEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)accountStoreDidChange:(id)arg1 ;
-(BOOL)_isAuthenticatedWithiCloud;
-(TVSPreferences *)headBoardPreferences;
-(void)setHeadBoardPreferences:(TVSPreferences *)arg1 ;
-(void)setHomeScreenSyncEnabled:(BOOL)arg1 ;
-(void)clearAccountPrefsForAutoAppDownloads;
-(void)_clearLastKnownDeviceSyncState;
-(void)setAutoAppDownloadsEnabled:(BOOL)arg1 accountIdentifier:(id)arg2 ;
-(BOOL)isAutoAppDownloadsEnabledForAccountIdentifier:(id)arg1 ;
-(BOOL)homeScreenSyncEnabled;
@end

