/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/AppStoreKit-Structs.h>
#import <AppStoreKit/ASKClientExports.h>

@class NSString, ACAccount;

@interface ASKClient : NSObject <ASKClientExports> {

	ACAccount* _activeiTunesAccount;

}

@property (retain) ACAccount * activeiTunesAccount;                                    //@synthesize activeiTunesAccount=_activeiTunesAccount - In the implementation block
@property (readonly) CGSize screenSize; 
@property (readonly) double screenCornerRadius; 
@property (copy,readonly) NSString * guid; 
@property (copy,readonly) NSString * thinnedApplicationVariantIdentifier; 
@property (readonly) BOOL newPaymentMethodEnabled; 
@property (copy,readonly) NSString * storefrontIdentifier; 
@property (readonly) NSString * deviceType; 
@property (readonly) NSString * buildType; 
@property (readonly) BOOL isActivityAvailable; 
@property (readonly) BOOL isElectrocardiogramInstallationAllowed; 
@property (readonly) BOOL isSidepackingEnabled; 
@property (readonly) BOOL supportsHEIF; 
@property (copy,readonly) NSString * activePairedWatchSystemVersion; 
-(id)init;
-(void)dealloc;
-(NSString *)deviceType;
-(NSString *)guid;
-(BOOL)isActivityAvailable;
-(CGSize)screenSize;
-(NSString *)thinnedApplicationVariantIdentifier;
-(NSString *)storefrontIdentifier;
-(void)accountStoreDidChange:(id)arg1 ;
-(NSString *)activePairedWatchSystemVersion;
-(void)setActiveiTunesAccount:(ACAccount *)arg1 ;
-(ACAccount *)activeiTunesAccount;
-(BOOL)deviceHasCapabilities:(id)arg1 ;
-(BOOL)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3 ;
-(double)screenCornerRadius;
-(BOOL)newPaymentMethodEnabled;
-(NSString *)buildType;
-(BOOL)isElectrocardiogramInstallationAllowed;
-(BOOL)isSidepackingEnabled;
-(BOOL)supportsHEIF;
@end

