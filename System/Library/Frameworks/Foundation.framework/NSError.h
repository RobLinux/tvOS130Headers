/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/BSDescriptionProviding.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL, NSArray;

@interface NSError : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {

	void* _reserved;
	long long _code;
	NSString* _domain;
	NSDictionary* _userInfo;

}

@property (getter=_mapkit_isCLDenied,nonatomic,readonly) BOOL _mapkit_CLDenied; 
@property (getter=_mapkit_isCLLocationUnknown,nonatomic,readonly) BOOL _mapkit_CLLocationUnknown; 
@property (getter=_mapkit_isCLHeadingFailure,nonatomic,readonly) BOOL _mapkit_CLHeadingFailure; 
@property (getter=_mapkit_isCLErrorNetwork,nonatomic,readonly) BOOL _mapkit_CLErrorNetwork; 
@property (nonatomic,retain,readonly) NSURL * _mapkit_locationErrorSettingsURL; 
@property (nonatomic,copy,readonly) NSString * safari_privacyPreservingDescription; 
@property (nonatomic,readonly) BOOL safari_isSQLiteError; 
@property (nonatomic,readonly) BOOL safari_isSQLiteCorruptionError; 
@property (nonatomic,readonly) NSString * ams_message; 
@property (nonatomic,readonly) NSString * ams_title; 
@property (getter=ams_isUserCancelledError,nonatomic,readonly) BOOL ams_userCancelledError; 
@property (nonatomic,readonly) BOOL _geo_isXPCInterruptedError; 
@property (getter=isComparisonError,nonatomic,readonly) BOOL comparisonError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=ac_isUnrecoverableDatabaseError,nonatomic,readonly) BOOL ac_unrecoverableDatabaseError; 
@property (copy,readonly) NSString * domain; 
@property (readonly) long long code; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSString * localizedDescription; 
@property (copy,readonly) NSString * localizedFailureReason; 
@property (copy,readonly) NSString * localizedRecoverySuggestion; 
@property (copy,readonly) NSArray * localizedRecoveryOptions; 
@property (readonly) id recoveryAttempter; 
@property (copy,readonly) NSString * helpAnchor; 
+(id)errorWithCADResult:(int)arg1 ;
+(id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 ;
+(id)errorWithEKErrorCode:(long long)arg1 ;
+(id)errorWithCADResult:(int)arg1 action:(id)arg2 ;
+(id)_defaultDescriptionForCode:(long long)arg1 ;
+(id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 reason:(id)arg4 ;
+(id)errorWithEKErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
+(id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 ;
+(id)dc_errorWithCode:(long long)arg1 ;
+(id)dc_errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)_errorWithExtensionServiceError:(long long)arg1 ;
+(id)_navigation_errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)_navigation_errorWithCode:(long long)arg1 ;
+(id)safari_errorWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3 ;
+(id)errorForPhotoVisionUnimplementedFunction;
+(id)errorForPhotoVisionInvalidParameterWithLocalizedDescription:(id)arg1 ;
+(id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 value:(id)arg2 ;
+(id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2 ;
+(id)errorForPhotoVisionStorageErrorWithUserInfo:(id)arg1 ;
+(id)errorForPhotoVisionErrorCode:(long long)arg1 localizedDescription:(id)arg2 ;
+(id)errorForPhotoVisionErrorCode:(long long)arg1 localizedDescription:(id)arg2 underlyingError:(id)arg3 ;
+(id)errorForPhotoVisionCancelledOperation;
+(id)errorForPhotoVisionUnexpectedCondition:(id)arg1 ;
+(id)errorForPhotoVisionInvalidNilParameterNamed:(id)arg1 ;
+(id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 integerValue:(long long)arg2 ;
+(id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 realValue:(double)arg2 ;
+(id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1 ;
+(id)errorForPhotoVisionVisionKitErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2 ;
+(id)errorForPhotoVisionVisionKitErrorWithUserInfo:(id)arg1 ;
+(id)errorForPhotoVisionErrorCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)ph_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
+(id)_ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2 ;
+(id)ph_genericErrorWithLocalizedDescription:(id)arg1 ;
+(id)ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2 ;
+(id)ph_genericEntitlementError;
+(id)tl_errorWithDomain:(id)arg1 description:(id)arg2 ;
+(id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 suggestion:(id)arg4 ;
+(id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5 ;
+(id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 ;
+(id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 ;
+(id)MMCSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 ;
+(id)hs_homeSharingErrorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)hs_cloudErrorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)hs_cloudLibraryUploadErrorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)ic_cloudClientErrorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)ic_cloudClientLibraryUploadErrorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)ml_errorWithCode:(unsigned long long)arg1 description:(id)arg2 ;
+(id)ml_errorWithCode:(unsigned long long)arg1 ;
+(id)tvs_wifiErrorForErrorCode:(long long)arg1 ;
+(id)aa_errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)aa_errorWithCode:(long long)arg1 ;
+(id)aa_errorWithCode:(long long)arg1 underlyingError:(id)arg2 ;
+(id)aa_errorWithServerResponse:(id)arg1 ;
+(id)cecFeatureAbortErrorWithOpCode:(unsigned char)arg1 reason:(unsigned char)arg2 method:(id)arg3 ;
+(id)cecAcknowledgementErrorWithUnderlyingError:(id)arg1 ;
+(id)cecIOErrorWithUnderlyingError:(id)arg1 ;
+(id)_xct_error:(long long)arg1 description:(id)arg2 ;
+(id)_xct_error:(long long)arg1 description:(id)arg2 userInfo:(id)arg3 ;
+(id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3 ;
+(void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2 ;
+(void)_registerWebKitErrors;
+(id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3 ;
+(id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2 ;
+(id)aida_errorWithCode:(long long)arg1 ;
+(id)aida_errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)GEOErrorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2 ;
+(id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2 underlyingError:(id)arg3 ;
+(id)geo_insufficientFilesystemCapacityWithBytesNeeded:(unsigned long long)arg1 bytesAvailable:(unsigned long long)arg2 ;
+(id)zilchDecoderErrorForNoSolution;
+(id)_geo_errorFromXPCData:(id)arg1 ;
+(id)_geo_errorFromXPCError:(id)arg1 ;
+(id)CKErrorWithPOSIXCode:(int)arg1 ;
+(id)CKErrorFromErrno;
+(id)_un_descriptionForUNErrorCode:(long long)arg1 ;
+(id)_updateUserInfo:(id)arg1 withLocalizedDescription:(id)arg2 ;
+(id)_un_descriptionForUNPrivateErrorCode:(long long)arg1 ;
+(id)un_errorWithUNErrorCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)un_errorWithUNPrivateErrorCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)errorWithInfo:(id)arg1 ;
+(id)genericErrorWithFile:(const char*)arg1 function:(const char*)arg2 lineNumber:(long long)arg3 ;
+(id)MSVErrorWithMissingDependencies:(id)arg1 ;
+(id)MSVErrorWithMissingDependency:(id)arg1 ;
+(id)ak_errorWithCode:(long long)arg1 ;
+(id)ak_errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)ak_errorWithCode:(long long)arg1 underlyingError:(id)arg2 ;
+(id)ak_wrappedAnisetteError:(int)arg1 ;
+(id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5 ;
+(id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4 ;
+(id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7 ;
+(id)sceneMessageErrorWithCode:(long long)arg1 ;
+(id)bs_timeoutError;
+(id)rbs_errorClientNotEntitled:(id)arg1 permanent:(BOOL)arg2 ;
+(id)errorWithMTLCaptureErrorCode:(long long)arg1 ;
+(id)ax_errorWithDomain:(id)arg1 description:(id)arg2 ;
+(id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 ;
+(id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 arguments:(char*)arg4 ;
+(BOOL)supportsSecureCoding;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
+(id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3 ;
+(id)_readCorruptErrorWithFormat:(id)arg1 ;
+(void)setUserInfoValueProviderForDomain:(id)arg1 provider:(/*^block*/id)arg2 ;
+(/*^block*/id)userInfoValueProviderForDomain:(id)arg1 ;
+(void)_registerFormatter:(/*function pointer*/void*)arg1 forErrorKey:(id)arg2 parameters:(const char*)arg3 ;
+(void)_registerBuiltInFormatters;
+(void)_setFileNameLocalizationEnabled:(BOOL)arg1 ;
+(void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2 ;
+(id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3 ;
-(BOOL)_mapkit_isCLLocationUnknown;
-(BOOL)_mapkit_isCLDenied;
-(BOOL)_mapkit_isCLHeadingFailure;
-(BOOL)_mapkit_isCLErrorNetwork;
-(NSURL *)_mapkit_locationErrorSettingsURL;
-(id)_mapkit_error;
-(id)_mapkit_errorWithDirectionsError:(id)arg1 ;
-(BOOL)_mapkit_isDirectionsError;
-(long long)_mapkit_directionsErrorCode;
-(long long)_mapkit_underlyingGEOError;
-(id)_mapkit_transitIncident;
-(id)_navigation_errorCodeAsString;
-(NSString *)safari_privacyPreservingDescription;
-(id)safari_initWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3 ;
-(BOOL)safari_isSQLiteError;
-(BOOL)safari_isClientSideNetworkError;
-(BOOL)safari_isSQLiteCorruptionError;
-(id)tl_nonRedundantDescription;
-(BOOL)isCPLErrorWithCode:(long long)arg1 ;
-(id)cplSafeErrorForXPC;
-(id)_cplSafeUserInfoForXPCDidChange:(BOOL*)arg1 ;
-(BOOL)isCPLError;
-(BOOL)isCPLOperationCancelledError;
-(BOOL)isCPLOperationDeferredError;
-(id)cplUnderlyingPOSIXError;
-(id)cplShortDomainDescription;
-(id)_MSVerboseDescriptionRecursionCount:(int)arg1 ;
-(void)_MSApplyBlock:(/*^block*/id)arg1 ;
-(BOOL)MSContainsErrorWithDomain:(id)arg1 code:(long long)arg2 ;
-(id)MSVerboseDescription;
-(id)MSMakePrimaryError;
-(BOOL)MSIsTemporaryNetworkError;
-(BOOL)MSASStateMachineIsCanceledError;
-(id)MSFindPrimaryError;
-(BOOL)MSCanBeIgnored;
-(BOOL)MSNeedsBackoff;
-(BOOL)MSIsCounted;
-(BOOL)MSIsFatal;
-(BOOL)MSIsAuthError;
-(BOOL)MSIsBadTokenError;
-(BOOL)MSIsQuotaError;
-(BOOL)MSIsRegistrationError;
-(id)MSMMCSRetryAfterDate;
-(BOOL)MMCSIsNetworkConditionsError;
-(BOOL)MMCSIsAuthorizationError;
-(BOOL)MMCSIsFatalError;
-(void)_MMCSApplyBlock:(/*^block*/id)arg1 ;
-(int)MMCSErrorType;
-(BOOL)MMCSIsCancelError;
-(id)MMCSRetryAfterDate;
-(id)pbs_xpcSafeDeepCopy;
-(id)errorBySettingFatalError:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 compareUserInfo:(BOOL)arg2 ;
-(BOOL)isFatalError;
-(BOOL)ams_isUserCancelledError;
-(BOOL)ams_hasDomain:(id)arg1 code:(unsigned long long)arg2 ;
-(id)ams_errorByAddingUserInfo:(id)arg1 ;
-(NSString *)ams_message;
-(NSString *)ams_title;
-(id)_aa_userReadableError;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)isCECAcknowledgementError;
-(id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5 ;
-(id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3 ;
-(id)zilchDecoderTileLoadingError;
-(BOOL)_geo_isXPCInterruptedError;
-(id)_geo_newXPCData;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)CKClientSuitableError;
-(BOOL)CKIsPOSIXErrorCode:(long long)arg1 ;
-(BOOL)isComparisonError;
-(id)CKClientSuitableUnderlyingError;
-(BOOL)CKIsCKError;
-(BOOL)CKHasCKErrorInChildChain;
-(BOOL)CKIsNotFoundError;
-(BOOL)ak_isUserCancelError;
-(BOOL)ak_isUserSkippedError;
-(BOOL)ak_isUserTryAgainError;
-(BOOL)ak_isUserInitiatedError;
-(BOOL)ak_isServiceError;
-(BOOL)ak_isAuthenticationErrorWithCode:(long long)arg1 ;
-(id)ak_errorByAppendingUserInfo:(id)arg1 ;
-(id)nr_safeDescription;
-(id)MCVerboseDescription;
-(id)MCFindPrimaryError;
-(id)MCUSEnglishDescription;
-(id)MCUSEnglishSuggestion;
-(id)MCCopyAsPrimaryError;
-(BOOL)MCContainsErrorDomain:(id)arg1 code:(long long)arg2 ;
-(id)MCErrorType;
-(BOOL)isBSServiceConnectionError;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BOOL)bs_isCancelledError;
-(BOOL)bs_isTimeoutError;
-(BOOL)rbs_isPermanentFailure;
-(BOOL)rbs_isServiceDenied;
-(id)initWithIOAccelError:(long long)arg1 ;
-(id)ac_secureCodingError;
-(id)_sanitizeObject:(id)arg1 ;
-(BOOL)ac_isUnrecoverableDatabaseError;
-(id)ax_nonRedundantDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(NSString *)domain;
-(long long)code;
-(NSString *)localizedDescription;
-(NSString *)localizedFailureReason;
-(NSString *)localizedRecoverySuggestion;
-(id)redactedDescription;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3 ;
-(id)_cocoaErrorString:(id)arg1 ;
-(id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2 ;
-(id)_cocoaErrorStringWithKind:(id)arg1 ;
-(CFStringRef)_retainedUserInfoCallBackForKey:(id)arg1 ;
-(NSArray *)localizedRecoveryOptions;
-(id)recoveryAttempter;
-(NSString *)helpAnchor;
-(long long)_collectApplicableUserInfoFormatters:(/*function pointer*/void**)arg1 max:(long long)arg2 ;
-(id)_formatCocoaErrorString:(id)arg1 parameters:(const char*)arg2 applicableFormatters:(/*function pointer*/void**)arg3 count:(long long)arg4 ;
-(id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3 ;
-(id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3 ;
-(id)_web_failingURL;
-(BOOL)_web_errorIsInDomain:(id)arg1 ;
-(id)_web_localizedDescription;
@end

