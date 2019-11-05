/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UNSNotificationSourceSettingsDescription : NSObject {

	BOOL _supportsSounds;
	BOOL _supportsAlerts;
	BOOL _supportsBadges;
	BOOL _supportsLockScreen;
	BOOL _supportsNotificationCenter;
	BOOL _supportsCarPlay;
	BOOL _supportsSpoken;
	BOOL _modalAlertStyle;
	BOOL _alwaysShowPreviews;
	BOOL _providesAppNotificationSettings;

}

@property (assign,nonatomic) BOOL supportsSounds;                               //@synthesize supportsSounds=_supportsSounds - In the implementation block
@property (assign,nonatomic) BOOL supportsAlerts;                               //@synthesize supportsAlerts=_supportsAlerts - In the implementation block
@property (assign,nonatomic) BOOL supportsBadges;                               //@synthesize supportsBadges=_supportsBadges - In the implementation block
@property (assign,nonatomic) BOOL supportsLockScreen;                           //@synthesize supportsLockScreen=_supportsLockScreen - In the implementation block
@property (assign,nonatomic) BOOL supportsNotificationCenter;                   //@synthesize supportsNotificationCenter=_supportsNotificationCenter - In the implementation block
@property (assign,nonatomic) BOOL supportsCarPlay;                              //@synthesize supportsCarPlay=_supportsCarPlay - In the implementation block
@property (assign,nonatomic) BOOL supportsSpoken;                               //@synthesize supportsSpoken=_supportsSpoken - In the implementation block
@property (assign,nonatomic) BOOL modalAlertStyle;                              //@synthesize modalAlertStyle=_modalAlertStyle - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowPreviews;                           //@synthesize alwaysShowPreviews=_alwaysShowPreviews - In the implementation block
@property (assign,nonatomic) BOOL providesAppNotificationSettings;              //@synthesize providesAppNotificationSettings=_providesAppNotificationSettings - In the implementation block
+(id)notificationSourceSettingsDescriptionFromDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)providesAppNotificationSettings;
-(void)setProvidesAppNotificationSettings:(BOOL)arg1 ;
-(BOOL)supportsCarPlay;
-(void)setSupportsBadges:(BOOL)arg1 ;
-(void)setSupportsAlerts:(BOOL)arg1 ;
-(void)setSupportsSounds:(BOOL)arg1 ;
-(void)setSupportsCarPlay:(BOOL)arg1 ;
-(void)setSupportsSpoken:(BOOL)arg1 ;
-(void)setSupportsLockScreen:(BOOL)arg1 ;
-(void)setSupportsNotificationCenter:(BOOL)arg1 ;
-(BOOL)supportsAlerts;
-(BOOL)modalAlertStyle;
-(BOOL)supportsBadges;
-(BOOL)supportsSounds;
-(BOOL)supportsLockScreen;
-(BOOL)supportsNotificationCenter;
-(BOOL)supportsSpoken;
-(BOOL)alwaysShowPreviews;
-(void)setModalAlertStyle:(BOOL)arg1 ;
-(void)setAlwaysShowPreviews:(BOOL)arg1 ;
@end

