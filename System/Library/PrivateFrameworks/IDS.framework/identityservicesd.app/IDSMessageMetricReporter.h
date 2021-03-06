/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSMessageMetricReporter : NSObject
+(void)noteKeyGenerationForMetric;
+(id)errorToReportForECError:(id)arg1 ;
+(id)errorToReportForLegacyError:(id)arg1 ;
+(id)_metadataWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5 ;
+(BOOL)_shouldIgnoreAutoBugCaptureForECFailure:(id)arg1 ;
+(BOOL)_shouldIgnoreAutoBugCaptureForLegacyFailure:(id)arg1 ;
+(id)messageMetadataWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5 ;
+(void)reportEncryptionSideMetricWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5 ;
+(void)reportMessageMetricWithMetadata:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 command:(id)arg4 decryptedEqual:(BOOL)arg5 triedLastResort:(BOOL)arg6 ECError:(id)arg7 legacyError:(id)arg8 fromDestination:(id)arg9 ;
@end

