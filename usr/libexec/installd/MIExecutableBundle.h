/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:42 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/installd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <installd/installd-Structs.h>
#import <installd/MIBundle.h>

@class MIBundleContainer, NSError, MIEmbeddedWatchBundle, MICodeSigningInfo, NSString, MIPluginKitPluginBundle, NSURL, NSArray;

@interface MIExecutableBundle : MIBundle {

	CFBundleRef _cfBundle;
	MIBundleContainer* _bundleContainer;
	unsigned long long _lsInstallType;
	unsigned long long _codeSignatureVerificationState;
	NSError* _wk1AppBundleError;
	MIEmbeddedWatchBundle* _wk1AppBundle;
	NSError* _wk2AppBundleError;
	MIEmbeddedWatchBundle* _wk2AppBundle;
	MICodeSigningInfo* _codeSigningInfo;
	NSError* _codeSigningInfoError;
	NSString* _watchKitAppExecutableHash;
	MIPluginKitPluginBundle* _watchKitPlugin;

}

@property (nonatomic,retain) NSError * wk1AppBundleError;                                      //@synthesize wk1AppBundleError=_wk1AppBundleError - In the implementation block
@property (nonatomic,retain) MIEmbeddedWatchBundle * wk1AppBundle;                             //@synthesize wk1AppBundle=_wk1AppBundle - In the implementation block
@property (nonatomic,retain) NSError * wk2AppBundleError;                                      //@synthesize wk2AppBundleError=_wk2AppBundleError - In the implementation block
@property (nonatomic,retain) MIEmbeddedWatchBundle * wk2AppBundle;                             //@synthesize wk2AppBundle=_wk2AppBundle - In the implementation block
@property (nonatomic,retain) MICodeSigningInfo * codeSigningInfo;                              //@synthesize codeSigningInfo=_codeSigningInfo - In the implementation block
@property (nonatomic,retain) NSError * codeSigningInfoError;                                   //@synthesize codeSigningInfoError=_codeSigningInfoError - In the implementation block
@property (nonatomic,retain) NSString * watchKitAppExecutableHash;                             //@synthesize watchKitAppExecutableHash=_watchKitAppExecutableHash - In the implementation block
@property (nonatomic,retain) MIPluginKitPluginBundle * watchKitPlugin;                         //@synthesize watchKitPlugin=_watchKitPlugin - In the implementation block
@property (assign,nonatomic,__weak) MIBundleContainer * bundleContainer;                       //@synthesize bundleContainer=_bundleContainer - In the implementation block
@property (nonatomic,copy,readonly) NSString * executableName; 
@property (nonatomic,readonly) NSURL * executableURL; 
@property (nonatomic,readonly) CFBundleRef cfBundle;                                           //@synthesize cfBundle=_cfBundle - In the implementation block
@property (nonatomic,readonly) NSURL * rootSinfURL; 
@property (nonatomic,readonly) NSURL * rootSuppURL; 
@property (nonatomic,readonly) NSURL * rootSupfURL; 
@property (nonatomic,readonly) BOOL needsSinf; 
@property (nonatomic,readonly) BOOL hasSinf; 
@property (nonatomic,readonly) long long dataContainerContentClass; 
@property (nonatomic,readonly) unsigned maxLinkedSDKVersion; 
@property (nonatomic,copy,readonly) NSArray * counterpartIdentifiers; 
@property (nonatomic,readonly) unsigned long long lsInstallType;                               //@synthesize lsInstallType=_lsInstallType - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchGlance; 
@property (nonatomic,readonly) BOOL hasWatchCustomNotification; 
@property (nonatomic,readonly) BOOL isWatchKitApp; 
@property (nonatomic,copy,readonly) NSString * companionAppIdentifier; 
@property (nonatomic,readonly) BOOL minimumWatchOSVersionIsPreV6; 
@property (nonatomic,readonly) BOOL minimumWatchOSVersionIsV6OrLater; 
@property (nonatomic,readonly) BOOL isWatchOnlyApp; 
@property (nonatomic,readonly) BOOL watchKitAppRunsIndependentlyOfCompanion; 
@property (nonatomic,readonly) unsigned long long codeSignatureVerificationState;              //@synthesize codeSignatureVerificationState=_codeSignatureVerificationState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * vpnPluginIdentifiers; 
@property (nonatomic,readonly) Class dataContainerClass; 
+(id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(NSURL *)executableURL;
-(CFBundleRef)cfBundle;
-(NSString *)executableName;
-(unsigned long long)lsInstallType;
-(NSString *)watchKitAppExecutableHash;
-(void)setWatchKitAppExecutableHash:(NSString *)arg1 ;
-(NSArray *)counterpartIdentifiers;
-(BOOL)isWatchKitApp;
-(id)codeSigningInfoByValidatingResources:(BOOL)arg1 performingOnlineAuthorization:(BOOL)arg2 ignoringCachedSigningInfo:(BOOL)arg3 checkingTrustCacheIfApplicable:(BOOL)arg4 error:(id*)arg5 ;
-(id)watchKitAppBundleForWKVersionOrEarlier:(unsigned char)arg1 error:(id*)arg2 ;
-(void)setBundleParentDirectoryURL:(id)arg1 ;
-(id)dataContainerWithError:(id*)arg1 ;
-(id)dataContainerCreatingIfNeeded:(BOOL)arg1 makeLive:(BOOL)arg2 created:(BOOL*)arg3 error:(id*)arg4 ;
-(Class)dataContainerClass;
-(BOOL)updateSinfWithData:(id)arg1 error:(id*)arg2 ;
-(id)fairPlaySinfInfoWithError:(id*)arg1 ;
-(id)initWithBundleInContainer:(id)arg1 withExtension:(id)arg2 error:(id*)arg3 ;
-(void)setBundleContainer:(MIBundleContainer *)arg1 ;
-(unsigned)maxLinkedSDKVersion;
-(BOOL)_validateWithError:(id*)arg1 ;
-(BOOL)validatePluginMetadataWithError:(id*)arg1 ;
-(BOOL)needsDataContainer;
-(MIEmbeddedWatchBundle *)wk1AppBundle;
-(MIEmbeddedWatchBundle *)wk2AppBundle;
-(id)uniqueInstallIDWithError:(id*)arg1 ;
-(id)setUniqueInstallIDWithError:(id*)arg1 ;
-(BOOL)_isGrandfatheredNonContainerized:(id)arg1 ;
-(BOOL)_hasNonContainerizingEntitlement:(id)arg1 checkSeatbeltProfiles:(BOOL)arg2 ;
-(unsigned long long)codeSignatureVerificationState;
-(long long)dataContainerContentClass;
-(MICodeSigningInfo *)codeSigningInfo;
-(NSError *)codeSigningInfoError;
-(id)_codeSigningInfoFromMCM;
-(void)setCodeSigningInfo:(MICodeSigningInfo *)arg1 ;
-(BOOL)_shouldValidateAsBuiltIn;
-(void)setCodeSigningInfoError:(NSError *)arg1 ;
-(BOOL)_hasNoConflictWithSystemAppsForSigningInfo:(id)arg1 error:(id*)arg2 ;
-(id)_dataContainerCreatingIfNeeded:(BOOL)arg1 makeLive:(BOOL)arg2 checkIfNeeded:(BOOL)arg3 created:(BOOL*)arg4 error:(id*)arg5 ;
-(id)watchKitV2AppBundleWithError:(id*)arg1 ;
-(NSURL *)rootSuppURL;
-(NSURL *)rootSupfURL;
-(NSURL *)rootSinfURL;
-(BOOL)hasSinf;
-(BOOL)_hasResource:(id)arg1 withExtension:(id)arg2 ;
-(NSString *)companionAppIdentifier;
-(id)watchKitPluginWithError:(id*)arg1 ;
-(BOOL)watchKitAppRunsIndependentlyOfCompanion;
-(BOOL)isWatchOnlyApp;
-(MIPluginKitPluginBundle *)watchKitPlugin;
-(void)setWatchKitPlugin:(MIPluginKitPluginBundle *)arg1 ;
-(id)watchKitV1AppBundleWithError:(id*)arg1 ;
-(NSError *)wk1AppBundleError;
-(void)setWk1AppBundle:(MIEmbeddedWatchBundle *)arg1 ;
-(void)setWk1AppBundleError:(NSError *)arg1 ;
-(NSError *)wk2AppBundleError;
-(id)_discoverWatchAppBundleAsPlaceholder:(BOOL)arg1 error:(id*)arg2 ;
-(unsigned char)watchKitVersionWithError:(id*)arg1 ;
-(void)setWk2AppBundle:(MIEmbeddedWatchBundle *)arg1 ;
-(void)setWk2AppBundleError:(NSError *)arg1 ;
-(id)lsInstallTypeWithError:(id*)arg1 ;
-(BOOL)setLSInstallType:(id)arg1 error:(id*)arg2 ;
-(id)watchKitAppExecutableHashWithError:(id*)arg1 ;
-(id)uniqueInstallIDSettingIfNotSetWithError:(id*)arg1 ;
-(BOOL)updateMCMWithCodeSigningInfoAsAdvanceCopy:(BOOL)arg1 withError:(id*)arg2 ;
-(void)installEmbeddedProvisioningProfileWithProgress:(/*^block*/id)arg1 ;
-(BOOL)hasNoConflictsWithOtherInstalledEntitiesForSigningInfo:(id)arg1 error:(id*)arg2 ;
-(NSArray *)vpnPluginIdentifiers;
-(BOOL)makeExecutableWithError:(id*)arg1 ;
-(BOOL)replicateRootSinfWithError:(id*)arg1 ;
-(void)removeSinf;
-(BOOL)needsSinf;
-(BOOL)validateSinfWithError:(id*)arg1 ;
-(BOOL)hasWatchCustomNotification;
-(BOOL)hasWatchGlance;
-(BOOL)minimumWatchOSVersionIsPreV6;
-(BOOL)minimumWatchOSVersionIsV6OrLater;
-(BOOL)hasOnlyAllowedWatchKitAppInfoPlistKeysForWatchKitVersion:(unsigned char)arg1 error:(id*)arg2 ;
-(MIBundleContainer *)bundleContainer;
@end

