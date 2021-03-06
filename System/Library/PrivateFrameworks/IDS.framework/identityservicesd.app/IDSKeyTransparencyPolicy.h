/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSKeyTransparencyPolicy : NSObject
-(BOOL)isKeyTransparencyEnabled;
-(BOOL)shouldSyncTrustCircleAfterSelfQueryForServiceIdentifier:(id)arg1 ;
-(BOOL)isKeyTransparencyXPCActivityEnabled;
-(unsigned long long)keyTransparencyXPCActivityIntervalInSeconds;
-(unsigned long long)keyTransparencyMaximumVerificationsPerXPCActivity;
-(BOOL)isKeyTransparencyEnabledForServiceType:(id)arg1 ;
-(BOOL)isKeyTransparencyEnabledForServiceIdentifier:(id)arg1 ;
-(BOOL)isKeyTransparencyPeerVerificationAllowedWithoutEnrollment;
-(BOOL)isKeyTransparencyTrustCircleEnabled;
-(BOOL)isKeyTransparencyTrustCircleAllowedWithoutEnrollment;
-(BOOL)isKeyTransparencyCloudKitCircleEnabled;
-(BOOL)isKeyTransparencyAccountKeyCircleEnabled;
-(BOOL)isKeyTransparencyAnalyticsEnabled;
-(BOOL)isKeyTransparencyRTCAnalyticsEnabled;
-(BOOL)isKeyTransparencySFAnalyticsEnabled;
-(BOOL)isKeyTransparencyUIEnabled;
-(BOOL)_isKeyTransparencyEnabledViaDefaults;
-(BOOL)_isKeyTransparencyEnabledViaServerBag;
-(long long)_keyTransparencyEnablementLevelFromServerBag;
@end

