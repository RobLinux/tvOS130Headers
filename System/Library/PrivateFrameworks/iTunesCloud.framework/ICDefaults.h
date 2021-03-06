/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, NSString, NSDictionary, NSNumber, NSDate;

@interface ICDefaults : NSObject {

	NSUserDefaults* _userDefaults;
	BOOL _bypassBagSanityChecks;
	NSUserDefaults* _internalDefaults;

}

@property (nonatomic,readonly) NSUserDefaults * internalDefaults;                                                                        //@synthesize internalDefaults=_internalDefaults - In the implementation block
@property (nonatomic,copy) NSString * cloudMediaLibraryUID; 
@property (nonatomic,copy) NSString * defaultStoreFront; 
@property (nonatomic,copy) NSDictionary * cachedSubscriptionStatus; 
@property (nonatomic,copy) NSDictionary * cachedMusicUserTokens; 
@property (nonatomic,copy) NSDictionary * pushNotificationState; 
@property (nonatomic,copy) NSDictionary * mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates; 
@property (nonatomic,copy) NSNumber * lastActiveAccountDSID; 
@property (nonatomic,copy) NSDictionary * lastCookieHeadersForRevokingMusicUserTokens; 
@property (nonatomic,copy) NSDate * lastAllowedInteractiveAuthenticationTime; 
@property (nonatomic,copy) NSDictionary * authServiceClientTokenCache; 
@property (assign,nonatomic) double lastAuthenticationDialogResponseTime; 
@property (assign,nonatomic) BOOL ignoreExtendedCertificateValidation; 
@property (assign,nonatomic) BOOL bypassBagSanityChecks;                                                                                 //@synthesize bypassBagSanityChecks=_bypassBagSanityChecks - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceModelOverride; 
@property (nonatomic,copy,readonly) NSNumber * deviceClassOverride; 
@property (nonatomic,copy,readonly) NSNumber * fairPlayDeviceTypeOverride; 
@property (nonatomic,copy,readonly) NSString * productVersionOverride; 
@property (nonatomic,copy,readonly) NSString * hardwarePlatformOverride; 
@property (nonatomic,copy,readonly) NSString * productPlatformOverride; 
@property (nonatomic,copy,readonly) NSNumber * networkTypeOverride; 
@property (nonatomic,readonly) BOOL shouldForceiPhoneBehaviors; 
@property (nonatomic,copy,readonly) NSNumber * authServiceClientTokenTimeToLive; 
@property (assign,nonatomic) BOOL shouldRunAgeVerification; 
@property (nonatomic,copy) NSDate * ageVerificationExpirationDate; 
@property (assign,getter=isExplicitContentAllowedForCurrentYear,nonatomic) BOOL explicitContentAllowedForCurrentYear; 
@property (assign,getter=isExplicitContentAllowedForExpirationYear,nonatomic) BOOL explicitContentAllowedForExpirationYear; 
@property (assign,getter=isGrazingPathEnabled,nonatomic) BOOL grazingPathEnabled; 
@property (nonatomic,copy) NSDictionary * lastKnownUserAgeVerificationState; 
+(id)standardDefaults;
-(id)init;
-(void)synchronize;
-(NSUserDefaults *)internalDefaults;
-(NSDictionary *)cachedSubscriptionStatus;
-(void)setCachedSubscriptionStatus:(NSDictionary *)arg1 ;
-(BOOL)shouldRunAgeVerification;
-(NSDate *)ageVerificationExpirationDate;
-(BOOL)bypassBagSanityChecks;
-(NSNumber *)authServiceClientTokenTimeToLive;
-(void)setAgeVerificationExpirationDate:(NSDate *)arg1 ;
-(BOOL)ignoreExtendedCertificateValidation;
-(NSDictionary *)mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
-(NSString *)deviceModelOverride;
-(NSString *)hardwarePlatformOverride;
-(NSNumber *)deviceClassOverride;
-(NSString *)productVersionOverride;
-(NSString *)productPlatformOverride;
-(NSNumber *)fairPlayDeviceTypeOverride;
-(NSString *)defaultStoreFront;
-(NSDictionary *)lastKnownUserAgeVerificationState;
-(void)setLastKnownUserAgeVerificationState:(NSDictionary *)arg1 ;
-(void)setLastAuthenticationDialogResponseTime:(double)arg1 ;
-(void)setLastAllowedInteractiveAuthenticationTime:(NSDate *)arg1 ;
-(NSDate *)lastAllowedInteractiveAuthenticationTime;
-(NSString *)cloudMediaLibraryUID;
-(NSDictionary *)authServiceClientTokenCache;
-(void)setAuthServiceClientTokenCache:(NSDictionary *)arg1 ;
-(void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_shouldSpoofIPhoneRequestProperties;
-(void)setCloudMediaLibraryUID:(NSString *)arg1 ;
-(void)setDefaultStoreFront:(NSString *)arg1 ;
-(NSDictionary *)cachedMusicUserTokens;
-(void)setCachedMusicUserTokens:(NSDictionary *)arg1 ;
-(NSDictionary *)pushNotificationState;
-(void)setPushNotificationState:(NSDictionary *)arg1 ;
-(void)setMediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates:(NSDictionary *)arg1 ;
-(NSNumber *)lastActiveAccountDSID;
-(void)setLastActiveAccountDSID:(NSNumber *)arg1 ;
-(NSDictionary *)lastCookieHeadersForRevokingMusicUserTokens;
-(void)setLastCookieHeadersForRevokingMusicUserTokens:(NSDictionary *)arg1 ;
-(double)lastAuthenticationDialogResponseTime;
-(void)setIgnoreExtendedCertificateValidation:(BOOL)arg1 ;
-(NSNumber *)networkTypeOverride;
-(BOOL)shouldForceiPhoneBehaviors;
-(void)setShouldRunAgeVerification:(BOOL)arg1 ;
-(BOOL)isExplicitContentAllowedForCurrentYear;
-(void)setExplicitContentAllowedForCurrentYear:(BOOL)arg1 ;
-(BOOL)isExplicitContentAllowedForExpirationYear;
-(void)setExplicitContentAllowedForExpirationYear:(BOOL)arg1 ;
-(BOOL)isGrazingPathEnabled;
-(void)setGrazingPathEnabled:(BOOL)arg1 ;
-(void)setBypassBagSanityChecks:(BOOL)arg1 ;
@end

