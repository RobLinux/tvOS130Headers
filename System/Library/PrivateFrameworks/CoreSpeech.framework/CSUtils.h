/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSUtils : NSObject
+(id)deviceBuildVersion;
+(id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id*)arg4 ;
+(id)timeStampWithSaltGrain;
+(BOOL)deleteExistingSATModelForLanguageCode:(id)arg1 ;
+(id)deviceProductType;
+(id)deviceProductVersion;
+(unsigned long long)deviceCategoryForDeviceProductType:(id)arg1 ;
+(id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1 ;
+(double)systemUpTime;
+(BOOL)supportTTS;
+(BOOL)supportPremiumAssets;
+(BOOL)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(BOOL)migrateVoiceProfileToVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(id)spIdSATAudioDirForLocale:(id)arg1 spidType:(unsigned long long)arg2 ;
+(BOOL)shouldDeinterleaveAudioOnCS;
+(unsigned)getNumElementInBitset:(unsigned long long)arg1 ;
+(AudioStreamBasicDescription)lpcmNonInterleavedASBDWithSampleRate:(float)arg1 numberOfChannels:(unsigned)arg2 ;
+(AudioStreamBasicDescription)lpcmInterleavedASBDWithSampleRate:(float)arg1 numberOfChannels:(unsigned)arg2 ;
+(void)removeLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 beforeDays:(float)arg3 ;
+(void)clearLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 exceedNumber:(unsigned long long)arg3 ;
+(AudioStreamBasicDescription)utteranceFileASBD;
+(id)spIdMapIdentifiersToSiriDebugID:(id)arg1 ;
+(id)spIdComposeProfileVersionsFor:(id)arg1 ;
+(void)URLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_sortedURLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1 ;
+(void)iterateBitset:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
+(BOOL)supportZeroFilter;
+(BOOL)supportBeepCanceller;
+(void)cleanupOrphanedVoiceIdGradingFiles;
+(id)stringForCSSpIdType:(unsigned long long)arg1 ;
+(id)spIdSATImplicitAudioCacheDirForLocale:(id)arg1 profileId:(id)arg2 ;
+(id)removeItemAtPath:(id)arg1 ;
+(void)markUploadForVoiceProfile:(id)arg1 ;
+(id)spIdAudioLogsGradingDir;
+(void)createDirectoryIfDoesNotExist:(id)arg1 ;
+(id)mapRawScores:(id)arg1 toScoresOfType:(unsigned long long)arg2 withRawScoreOffset:(float)arg3 withRawScoreScale:(float)arg4 withLogitCeil:(float)arg5 withLogitFloor:(float)arg6 withSATThreshold:(float)arg7 ;
+(id)getExplicitOnlyEnrollmentUtterancesFromDirectory:(id)arg1 ;
+(id)getProfileVersionFilePathForProfileId:(id)arg1 forLanguageCode:(id)arg2 ;
+(id)getVoiceProfileIdentityFromVersionFilePath:(id)arg1 ;
+(void)getEnrollmentUtterancesCountFromDirectory:(id)arg1 withCountBlock:(/*^block*/id)arg2 ;
+(id)getContentsOfDirectory:(id)arg1 ;
+(id)getExplicitEnrollmentUtterancesFromDirectory:(id)arg1 ;
+(id)spIdSATDirForLocale:(id)arg1 ;
+(id)spIdTrainedUsersFilePathForLocale:(id)arg1 ;
+(id)spIdSATAudioDirForLocale:(id)arg1 profileId:(id)arg2 spidType:(unsigned long long)arg3 ;
+(id)getImplicitEnrollmentUtterancesFromDirectory:(id)arg1 ;
+(id)spIdSATModelDirForLocale:(id)arg1 profileId:(id)arg2 spidType:(unsigned long long)arg3 modelType:(unsigned long long)arg4 ;
+(id)getBaseProfileOnlyEnrollmentUtterancesFromDirectory:(id)arg1 ;
+(BOOL)supportCSTwoShotDecision;
+(double)getHostClockFrequency;
+(double)getHostClockFrequency;
+(double)getHostClockFrequency;
+(double)getHostClockFrequency;
+(unsigned long long)secondsToHostTime:(float)arg1 ;
+(unsigned long long)secondsToHostTime:(float)arg1 ;
+(unsigned long long)secondsToHostTime:(float)arg1 ;
+(unsigned long long)secondsToHostTime:(float)arg1 ;
+(float)hostTimeToSeconds:(unsigned long long)arg1 ;
+(float)hostTimeToSeconds:(unsigned long long)arg1 ;
+(float)hostTimeToSeconds:(unsigned long long)arg1 ;
+(float)hostTimeToSeconds:(unsigned long long)arg1 ;
+(double)hostTimeToTimeInterval:(unsigned long long)arg1 ;
+(double)hostTimeToTimeInterval:(unsigned long long)arg1 ;
+(double)hostTimeToTimeInterval:(unsigned long long)arg1 ;
+(double)hostTimeToTimeInterval:(unsigned long long)arg1 ;
+(unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1 ;
+(unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1 ;
+(unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1 ;
+(unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1 ;
+(AudioStreamBasicDescription)lpcmNarrowBandASBD;
+(AudioStreamBasicDescription)lpcmASBD;
+(BOOL)supportLanguageDetector;
+(void)apply12dBGain:(id)arg1 ;
+(id)getFixedHighPrioritySerialQueueWithLabel:(id)arg1 ;
+(BOOL)isRecordContextVoiceTrigger:(id)arg1 ;
+(id)getSiriLanguageWithFallback:(id)arg1 ;
+(id)spIdSATDirForLocale:(id)arg1 profileId:(id)arg2 spidType:(unsigned long long)arg3 ;
+(id)getEnrollmentUtterancesForModelType:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(id)stringForCSSpIdModelType:(unsigned long long)arg1 ;
+(void)streamAudioFromFileUrl:(id)arg1 audioStreamBasicDescriptor:(AudioStreamBasicDescription)arg2 samplesPerStreamChunk:(unsigned long long)arg3 audioDataAvailableHandler:(/*^block*/id)arg4 ;
+(id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1 ;
+(id)spIdSATModelDirForLocale:(id)arg1 spidType:(unsigned long long)arg2 modelType:(unsigned long long)arg3 ;
+(id)stringForInvocationStyle:(unsigned long long)arg1 ;
+(BOOL)spIdAudioLogsCountLimitReached;
+(BOOL)readAudioChunksFrom:(id)arg1 block:(/*^block*/id)arg2 ;
+(BOOL)shouldRunVTOnCS;
+(BOOL)supportIOSBargeIn;
+(BOOL)supportHearstVoiceTrigger;
+(BOOL)supportJarvisVoiceTrigger;
+(BOOL)supportBluetoothDeviceVoiceTrigger;
+(BOOL)supportSmartVolume;
+(BOOL)supportSelfTriggerSuppression;
+(long long)getNumberOfAudioFilesInDirectory:(id)arg1 ;
+(BOOL)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)arg1 ;
+(BOOL)isSpidSupportedInCurrentLanguage;
+(BOOL)isCurrentDeviceCompatibleWithNewerVoiceProfileAt:(id)arg1 ;
+(unsigned long long)getCurrentVoiceProfileVersionForProfileId:(id)arg1 forLanguageCode:(id)arg2 ;
+(id)getVoiceProfilesMarkedForUpload;
+(void)markVoiceProfileUploaded:(id)arg1 ;
+(id)spIdSATDirForLocale:(id)arg1 profileId:(id)arg2 ;
+(void)updateVoiceProfileVersionFileForProfileId:(id)arg1 forLanguageCode:(id)arg2 ;
+(id)getImplicitUtteranceCacheDirectory;
+(id)getHomeUserIdForVoiceProfile:(id)arg1 ;
+(BOOL)shouldDownloadVTAssetsOnDaemon;
+(BOOL)supportHybridEndpointer;
+(BOOL)supportPhatic;
+(BOOL)supportContinuousVoiceTrigger;
+(BOOL)supportSessionActivateDelay;
+(BOOL)supportOpportunisticZLL;
+(AudioStreamBasicDescription)lpcmNonInterleavedWithRemoteVADASBD;
+(AudioStreamBasicDescription)lpcmInterleavedWithRemoteVADASBD;
+(AudioStreamBasicDescription)lpcmNonInterleavedASBD;
+(AudioStreamBasicDescription)lpcmInterleavedASBD;
+(BOOL)shouldDelayPhaticForMyriadDecision;
+(id)spIdMapScoresToSharedSiriID:(id)arg1 ;
+(id)assetHashInResourcePath:(id)arg1 ;
+(id)spIdAudioLogsDir;
+(id)satConfigFileNameForCSSpIdType:(unsigned long long)arg1 forModelType:(unsigned long long)arg2 ;
+(unsigned long long)getVoiceProfileVersionFromVersionFilePath:(id)arg1 ;
+(unsigned long long)getVoiceProfileProductCategoryFromVersionFilePath:(id)arg1 ;
+(id)spIdSiriDebugVTDataDirectory;
+(id)spIdSiriDebugVoiceProfileStoreRootDirectory;
+(id)spIdSiriDebugVoiceProfileStoreRootDirectoryForLocale:(id)arg1 ;
+(id)getEnrollmentUtterancesFromDirectory:(id)arg1 ;
+(unsigned long long)spIdTypeForString:(id)arg1 ;
+(id)stringForCSSATRunMode:(unsigned long long)arg1 ;
+(id)spIdVoiceProfileImportRootDir;
+(id)spidAudioTrainUtterancesDir;
+(id)getCurrentVoiceProfileIdentityForProfileId:(id)arg1 forLanguageCode:(id)arg2 ;
+(unsigned long long)getCurrentVoiceProfileProductCategoryForLanguageCode:(id)arg1 ;
+(void)dumpFilesInDirectory:(id)arg1 ;
+(id)spIdSiriDebugGradingDataRootDirectory;
+(id)spIdSiriDebugTrainedUsersFilePathForLocale:(id)arg1 ;
+(id)spIdSiriDebugVoiceProfileRootDirectoryForProfile:(id)arg1 locale:(id)arg2 ;
+(id)spIdSiriDebugVoiceProfileCacheDirectoryForProfile:(id)arg1 locale:(id)arg2 ;
+(id)getExplicitEnrollmentUtterancesForType:(unsigned long long)arg1 forLanguageCode:(id)arg2 forProfileID:(id)arg3 ;
+(id)getSortedImplicitEnrollmentUtterancesForType:(unsigned long long)arg1 forLanguageCode:(id)arg2 forProfileID:(id)arg3 ;
+(id)getImplicitEnrollmentUtterancesPriorTo:(id)arg1 forType:(unsigned long long)arg2 forLanguageCode:(id)arg3 forProfileID:(id)arg4 ;
+(AudioStreamBasicDescription)opusASBD;
+(AudioStreamBasicDescription)lpcmInt16ASBD;
+(BOOL)hasRemoteBuiltInMic;
+(id)alertMuteBehaviorDict;
+(id)voiceTriggerRecordContext;
+(id)hearstVoiceTriggerRecordContext:(id)arg1 ;
+(id)jarvisVoiceTriggerRecordContext:(id)arg1 ;
+(id)lpcmRecordSettings;
+(id)opusRecordSettings;
+(id)speexRecordSettings;
+(id)alertMuteSettings;
+(BOOL)supportRaiseToSpeak;
+(BOOL)supportPremiumWatchAssets;
+(id)rootQueueWithFixedPriority:(int)arg1 ;
+(BOOL)supportKeywordDetector;
+(BOOL)supportSAT;
+(BOOL)supportPremiumModel;
+(BOOL)supportTdsrOnCS;
+(BOOL)hasRemoteCoreSpeech;
+(BOOL)supportCircularBuffer;
+(id)getFixedPrioritySerialQueueWithLabel:(id)arg1 fixedPriority:(int)arg2 ;
+(id)deviceUserAssignedName;
+(AudioStreamBasicDescription)lpcmInt16NarrowBandASBD;
+(AudioStreamBasicDescription)opusNarrowBandASBD;
+(AudioStreamBasicDescription)aiffFileASBD;
+(BOOL)isRecordContextHearstVoiceTrigger:(id)arg1 ;
+(BOOL)isRecordContextJarvisVoiceTrigger:(id)arg1 ;
+(BOOL)isRecordContextJarvisButtonPress:(id)arg1 ;
+(BOOL)isRecordContextHearstDoubleTap:(id)arg1 ;
+(BOOL)isRecordContextRaiseToSpeak:(id)arg1 ;
+(BOOL)isRecordContextAutoPrompt:(id)arg1 ;
+(BOOL)isRecordContextHomeButtonPress:(id)arg1 ;
+(BOOL)isRecordContextSpeakerIdTrainingTrigger:(id)arg1 ;
+(id)recordContextString:(id)arg1 ;
@end

