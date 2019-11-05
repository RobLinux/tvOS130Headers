/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, TVSStoreFrontLocale, SSAccount, NSURL;

@interface TVSettingsITMSFacade : NSObject {

	NSArray* _availableLocales;
	TVSStoreFrontLocale* _locale;
	BOOL _isManagedSubscriptionsURLLoaded;
	BOOL _autoDownloadApps;
	SSAccount* _preferredAccount;

}

@property (assign,nonatomic) BOOL isManagedSubscriptionsURLLoaded;                   //@synthesize isManagedSubscriptionsURLLoaded=_isManagedSubscriptionsURLLoaded - In the implementation block
@property (nonatomic,retain) TVSStoreFrontLocale * locale; 
@property (nonatomic,copy,readonly) NSArray * availableLocales; 
@property (getter=isMatchEnabled,nonatomic,readonly) BOOL matchEnabled; 
@property (nonatomic,retain,readonly) NSURL * manageSubscriptionsURL; 
@property (assign,nonatomic) BOOL autoDownloadApps;                                  //@synthesize autoDownloadApps=_autoDownloadApps - In the implementation block
@property (nonatomic,retain) SSAccount * preferredAccount;                           //@synthesize preferredAccount=_preferredAccount - In the implementation block
@property (assign,nonatomic) BOOL addingToPlaylistAddsToLibrary; 
@property (getter=isSubscribed,nonatomic,readonly) BOOL subscribed; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setLocale:(TVSStoreFrontLocale *)arg1 ;
-(TVSStoreFrontLocale *)locale;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isSubscribed;
-(BOOL)isMatchEnabled;
-(void)_urlBagLoaded:(id)arg1 ;
-(NSArray *)availableLocales;
-(BOOL)addingToPlaylistAddsToLibrary;
-(BOOL)isManagedSubscriptionsURLLoaded;
-(NSURL *)manageSubscriptionsURL;
-(void)_updateAutoDownloadAppsPerCloudSyncPreferences;
-(void)_automaticDownloadKindsChangedNotification:(id)arg1 ;
-(void)_updateAutoDownloadApps;
-(void)_availableLocalesUpdated;
-(void)_localeUpdated;
-(void)setAutoDownloadApps:(BOOL)arg1 ;
-(void)setIsManagedSubscriptionsURLLoaded:(BOOL)arg1 ;
-(void)setAddingToPlaylistAddsToLibrary:(BOOL)arg1 ;
-(void)killStoreApps;
-(BOOL)autoDownloadApps;
-(SSAccount *)preferredAccount;
-(void)setPreferredAccount:(SSAccount *)arg1 ;
@end
