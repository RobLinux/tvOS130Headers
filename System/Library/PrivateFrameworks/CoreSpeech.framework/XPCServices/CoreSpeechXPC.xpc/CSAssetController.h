/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/XPCServices/CoreSpeechXPC.xpc/CoreSpeechXPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeechXPC/CSEventMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSMutableDictionary, NSString;

@interface CSAssetController : NSObject <CSEventMonitorDelegate> {

	NSDictionary* _csAssetsDictionary;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _assetsMigrationQueue;
	NSMutableDictionary* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(id)getVoiceTriggerAssetTypeString;
+(id)getEndpointAssetTypeString;
+(id)getLanguageDetectorAssetTypeString;
+(id)filteredAssetsForAssets:(id)arg1 assetType:(unsigned long long)arg2 language:(id)arg3 ;
+(void)addKeyValuePairForQuery:(id*)arg1 assetType:(unsigned long long)arg2 ;
+(unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+(unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+(unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;
+(id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)arg1 assetType:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)_isReadyToUse;
-(id)_findLatestInstalledAsset:(id)arg1 ;
-(id)_defaultDownloadOptions;
-(void)_runAssetQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_downloadAsset:(id)arg1 withComplete:(/*^block*/id)arg2 ;
-(id)assetOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2 ;
-(id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchRemoteMetaOfType:(unsigned long long)arg1 ;
-(void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2 ;
-(void)CSEventMonitorDidReceiveEvent:(id)arg1 ;
-(void)_cleanUpMobileAssetV1Directory;
-(id)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 ;
-(void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_assetQueryForAssetType:(unsigned long long)arg1 ;
-(void)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 ;
-(void)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_installedAssetWithoutMetaDataForType:(unsigned long long)arg1 withLanguage:(id)arg2 ;
-(void)_installedAssetWithoutMetaDataForType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_downloadAssetCatalogForAssetType:(unsigned long long)arg1 complete:(/*^block*/id)arg2 ;
-(void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startDownloadingAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

