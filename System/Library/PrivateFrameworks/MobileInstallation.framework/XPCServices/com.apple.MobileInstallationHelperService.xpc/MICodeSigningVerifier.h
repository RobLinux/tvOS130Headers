/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:46:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MICodeSigningInfo, MIExecutableBundle;

@interface MICodeSigningVerifier : NSObject {

	BOOL _allowAdhocSigning;
	BOOL _logResourceVerificationErrors;
	BOOL _validateResources;
	BOOL _performOnlineAuthorization;
	BOOL _validateUsingDetachedSignature;
	BOOL _verifyTrustCachePresence;
	MICodeSigningInfo* _signingInfo;
	MIExecutableBundle* _bundle;

}

@property (nonatomic,readonly) MIExecutableBundle * bundle;                    //@synthesize bundle=_bundle - In the implementation block
@property (assign,nonatomic) BOOL allowAdhocSigning;                           //@synthesize allowAdhocSigning=_allowAdhocSigning - In the implementation block
@property (assign,nonatomic) BOOL logResourceVerificationErrors;               //@synthesize logResourceVerificationErrors=_logResourceVerificationErrors - In the implementation block
@property (assign,nonatomic) BOOL validateResources;                           //@synthesize validateResources=_validateResources - In the implementation block
@property (assign,nonatomic) BOOL performOnlineAuthorization;                  //@synthesize performOnlineAuthorization=_performOnlineAuthorization - In the implementation block
@property (assign,nonatomic) BOOL validateUsingDetachedSignature;              //@synthesize validateUsingDetachedSignature=_validateUsingDetachedSignature - In the implementation block
@property (assign,nonatomic) BOOL verifyTrustCachePresence;                    //@synthesize verifyTrustCachePresence=_verifyTrustCachePresence - In the implementation block
@property (nonatomic,readonly) MICodeSigningInfo * signingInfo;                //@synthesize signingInfo=_signingInfo - In the implementation block
+(id)_validateSignatureAndCopyInfoForURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
+(BOOL)_validateBundleExecutable:(id)arg1 againstStubAt:(id)arg2 trustedHashes:(id)arg3 sectionName:(id)arg4 signingIdentifier:(id)arg5 error:(id*)arg6 ;
+(BOOL)_validateStubSignature:(id)arg1 withSigningID:(id)arg2 error:(id*)arg3 ;
+(id)codeSigningVerifierForBundle:(id)arg1 ;
+(BOOL)validateWatchKitV1StubExecutableBundle:(id)arg1 error:(id*)arg2 ;
+(BOOL)validateWatchKitV2StubExecutableBundle:(id)arg1 error:(id*)arg2 ;
-(id)initWithBundle:(id)arg1 ;
-(MIExecutableBundle *)bundle;
-(BOOL)validateResources;
-(BOOL)verifyTrustCachePresence;
-(void)setAllowAdhocSigning:(BOOL)arg1 ;
-(BOOL)validateUsingDetachedSignature;
-(BOOL)logResourceVerificationErrors;
-(BOOL)allowAdhocSigning;
-(BOOL)performOnlineAuthorization;
-(id)_loadSystemDetachedSignatureForBundleID:(id)arg1 error:(id*)arg2 ;
-(BOOL)performValidationWithError:(id*)arg1 ;
-(void)setLogResourceVerificationErrors:(BOOL)arg1 ;
-(void)setValidateResources:(BOOL)arg1 ;
-(void)setPerformOnlineAuthorization:(BOOL)arg1 ;
-(void)setValidateUsingDetachedSignature:(BOOL)arg1 ;
-(void)setVerifyTrustCachePresence:(BOOL)arg1 ;
-(MICodeSigningInfo *)signingInfo;
@end
