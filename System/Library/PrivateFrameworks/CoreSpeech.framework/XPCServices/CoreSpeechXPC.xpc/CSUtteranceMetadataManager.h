/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/XPCServices/CoreSpeechXPC.xpc/CoreSpeechXPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSUtteranceMetadataManager : NSObject
+(BOOL)isUtteranceImplicitlyTrained:(id)arg1 ;
+(id)recordedTimeStampOfFile:(id)arg1 ;
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg1 ;
+(void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2 ;
+(void)_saveMetaVersionFileAtPath:(id)arg1 ;
+(void)_upgradeLocaleDirectoryIfNecessary:(id)arg1 ;
+(BOOL)_audioDirectoryNeedsUpgrade:(id)arg1 ;
+(void)_upgradeUtteranceMeta:(id)arg1 ;
+(void)saveMetaVersionFileAtSATAudioDirectory:(id)arg1 ;
+(void)upgradeMetaFilesIfNecessaaryAtSATRoot:(id)arg1 ;
+(void)saveUtteranceMetadataForUtterance:(id)arg1 enrollmentType:(id)arg2 isHandheldEnrollment:(BOOL)arg3 triggerSource:(id)arg4 audioInput:(id)arg5 otherBiometricResult:(unsigned long long)arg6 containsPayload:(BOOL)arg7 ;
+(id)getUtteranceEnrollmentType:(id)arg1 ;
@end

