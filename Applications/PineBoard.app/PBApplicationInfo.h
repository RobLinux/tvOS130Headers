/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIApplicationInfo.h>

@class NSString;

@interface PBApplicationInfo : _UIApplicationInfo {

	BOOL _ocelotApplication;
	BOOL _alwaysAvailable;
	BOOL _disabledByPlist;
	BOOL _legacyContentPartnerApp;
	BOOL _hasTemplateLaunchImage;
	BOOL _receivesLongPressPlayPause;
	BOOL _supportsSharedQueue;
	BOOL _supportsActiveRouteNowPlaying;
	BOOL _supportsHDR;
	BOOL _hasModeSwitchEntitlement;
	BOOL _usingCloudKit;
	BOOL _viewService;
	BOOL _xcodeApp;
	BOOL _iconVisibilitySetByPreference;
	BOOL _iconVisibilityDefaultVisible;
	NSString* _localizedName;
	NSString* _launchImageName;
	NSString* _nowPlayingViewControllerClassName;
	NSString* _iconFile;
	NSString* _primaryIconName;
	NSString* _alternateIconName;
	NSString* _liveIconName;
	NSString* _topShelfStaticImageName;

}

@property (nonatomic,copy,readonly) NSString * localizedName;                                              //@synthesize localizedName=_localizedName - In the implementation block
@property (getter=isSystemApplication,nonatomic,readonly) BOOL systemApplication; 
@property (getter=isAppleApplication,nonatomic,readonly) BOOL appleApplication; 
@property (getter=isOcelotApplication,nonatomic,readonly) BOOL ocelotApplication;                          //@synthesize ocelotApplication=_ocelotApplication - In the implementation block
@property (getter=isAlwaysAvailable,nonatomic,readonly) BOOL alwaysAvailable;                              //@synthesize alwaysAvailable=_alwaysAvailable - In the implementation block
@property (getter=isDisabledByPlist,nonatomic,readonly) BOOL disabledByPlist;                              //@synthesize disabledByPlist=_disabledByPlist - In the implementation block
@property (getter=isLegacyContentPartnerApp,nonatomic,readonly) BOOL legacyContentPartnerApp;              //@synthesize legacyContentPartnerApp=_legacyContentPartnerApp - In the implementation block
@property (nonatomic,readonly) BOOL hasTemplateLaunchImage;                                                //@synthesize hasTemplateLaunchImage=_hasTemplateLaunchImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchImageName;                                            //@synthesize launchImageName=_launchImageName - In the implementation block
@property (nonatomic,readonly) BOOL receivesLongPressPlayPause;                                            //@synthesize receivesLongPressPlayPause=_receivesLongPressPlayPause - In the implementation block
@property (nonatomic,readonly) BOOL supportsSharedQueue;                                                   //@synthesize supportsSharedQueue=_supportsSharedQueue - In the implementation block
@property (nonatomic,readonly) BOOL supportsActiveRouteNowPlaying;                                         //@synthesize supportsActiveRouteNowPlaying=_supportsActiveRouteNowPlaying - In the implementation block
@property (nonatomic,copy,readonly) NSString * nowPlayingViewControllerClassName;                          //@synthesize nowPlayingViewControllerClassName=_nowPlayingViewControllerClassName - In the implementation block
@property (nonatomic,readonly) NSString * iconFile;                                                        //@synthesize iconFile=_iconFile - In the implementation block
@property (nonatomic,readonly) NSString * primaryIconName;                                                 //@synthesize primaryIconName=_primaryIconName - In the implementation block
@property (nonatomic,copy) NSString * alternateIconName;                                                   //@synthesize alternateIconName=_alternateIconName - In the implementation block
@property (nonatomic,readonly) NSString * liveIconName;                                                    //@synthesize liveIconName=_liveIconName - In the implementation block
@property (nonatomic,readonly) BOOL supportsHDR;                                                           //@synthesize supportsHDR=_supportsHDR - In the implementation block
@property (nonatomic,readonly) BOOL hasModeSwitchEntitlement;                                              //@synthesize hasModeSwitchEntitlement=_hasModeSwitchEntitlement - In the implementation block
@property (getter=isUsingCloudKit,nonatomic,readonly) BOOL usingCloudKit;                                  //@synthesize usingCloudKit=_usingCloudKit - In the implementation block
@property (getter=isViewService,nonatomic,readonly) BOOL viewService;                                      //@synthesize viewService=_viewService - In the implementation block
@property (getter=isXcodeApp,nonatomic,readonly) BOOL xcodeApp;                                            //@synthesize xcodeApp=_xcodeApp - In the implementation block
@property (nonatomic,readonly) BOOL iconVisibilitySetByPreference;                                         //@synthesize iconVisibilitySetByPreference=_iconVisibilitySetByPreference - In the implementation block
@property (nonatomic,readonly) BOOL iconVisibilityDefaultVisible;                                          //@synthesize iconVisibilityDefaultVisible=_iconVisibilityDefaultVisible - In the implementation block
@property (nonatomic,readonly) NSString * topShelfStaticImageName;                                         //@synthesize topShelfStaticImageName=_topShelfStaticImageName - In the implementation block
+(id)_entitlementKeys;
+(id)_infoPlistKeys;
-(NSString *)localizedName;
-(void)_loadFromProxy:(id)arg1 ;
-(BOOL)isAlwaysAvailable;
-(NSString *)launchImageName;
-(BOOL)supportsSharedQueue;
-(BOOL)isSystemApplication;
-(BOOL)isAppleApplication;
-(BOOL)isViewService;
-(NSString *)primaryIconName;
-(NSString *)alternateIconName;
-(BOOL)isXcodeApp;
-(BOOL)isUsingCloudKit;
-(NSString *)iconFile;
-(NSString *)liveIconName;
-(NSString *)topShelfStaticImageName;
-(void)setAlternateIconName:(NSString *)arg1 ;
-(void)_refreshLocalizedName;
-(BOOL)isDisabledByPlist;
-(BOOL)iconVisibilitySetByPreference;
-(BOOL)iconVisibilityDefaultVisible;
-(BOOL)supportsHDR;
-(id)getInfoPlistValueUncached:(id)arg1 ;
-(id)getEntitlementValueUncached:(id)arg1 ofClass:(Class)arg2 ;
-(BOOL)isOcelotApplication;
-(BOOL)isLegacyContentPartnerApp;
-(BOOL)hasTemplateLaunchImage;
-(BOOL)receivesLongPressPlayPause;
-(BOOL)supportsActiveRouteNowPlaying;
-(NSString *)nowPlayingViewControllerClassName;
-(BOOL)hasModeSwitchEntitlement;
-(void)pb_reportUntrustedLaunchAttempt;
@end

