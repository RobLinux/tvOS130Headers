/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIMobileAssetMediator.h>

@protocol TIMobileAssetMediator <NSObject>
@required
-(id)fetchInstalledAssetInformation;
-(id)fetchLatestAssetsMatchingAny:(id)arg1;
-(id)fetchLatestInstalledAssetsMatchingAny:(id)arg1;
-(BOOL)tryToPurgeAsset:(id)arg1;
-(void)downloadUninstalledAssetsMatching:(id)arg1 continuation:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, TIMobileAssetSyncState, NSString;

@interface TIMobileAssetMediator : NSObject <TIMobileAssetMediator> {

	BOOL _isWaitingForReachability;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _queuedAssetMatchSet;
	TIMobileAssetSyncState* _syncState;
	SCNetworkReachabilityRef _reachabilityRef;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * queuedAssetMatchSet;                      //@synthesize queuedAssetMatchSet=_queuedAssetMatchSet - In the implementation block
@property (assign,nonatomic) BOOL isWaitingForReachability;                             //@synthesize isWaitingForReachability=_isWaitingForReachability - In the implementation block
@property (nonatomic,readonly) TIMobileAssetSyncState * syncState;                      //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,readonly) SCNetworkReachabilityRef reachabilityRef;                //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetsByRemovingOldVersionsFromAssets:(id)arg1 ;
+(id)fetchAssetInformationMatchingAny:(id)arg1 localOnly:(BOOL)arg2 compatibleOnly:(BOOL)arg3 ;
+(id)queryAssetsWithPredicate:(id)arg1 localOnly:(BOOL)arg2 error:(id*)arg3 ;
+(id)predicateForTIAsset:(id)arg1 ;
+(void)recordDownloadStartedForAssets:(id)arg1 ;
+(oneway void)downloadAsset:(id)arg1 continuation:(/*^block*/id)arg2 ;
+(id)knownAssetIdentifiers;
+(id)compatibilityPredicate;
+(id)predicateForKey:(id)arg1 matchingString:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 ;
+(id)predicateForKey:(id)arg1 matchingAnyStringIn:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 ;
+(id)predicateForKey:(id)arg1 matchingAnyDictionaryIn:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 acceptUnspecifiedAttribute:(BOOL)arg4 lenientMatch:(BOOL)arg5 ;
+(id)predicateForAssetMatch:(id)arg1 compatibleVersionOnly:(BOOL)arg2 ;
+(id)uniqueIdentifierForAsset:(id)arg1 ;
+(id)uniqueIdentifierWithVersionForAsset:(id)arg1 ;
+(id)assetDownloadsInProgress;
+(void)saveAssetDownloadsInProgress;
+(void)recordDownloadEndedForAsset:(id)arg1 ;
+(BOOL)isDownloadOverdueForAsset:(id)arg1 ;
+(id)fetchAssetInformationForDownloadsInProgress;
+(/*^block*/id)downloadProgressHandlerForAsset:(id)arg1 ;
+(id)downloadOptionsForAsset:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(SCNetworkReachabilityRef)reachabilityRef;
-(TIMobileAssetSyncState *)syncState;
-(id)fetchInstalledAssetInformation;
-(id)fetchLatestAssetsMatchingAny:(id)arg1 ;
-(id)fetchLatestInstalledAssetsMatchingAny:(id)arg1 ;
-(BOOL)tryToPurgeAsset:(id)arg1 ;
-(void)downloadUninstalledAssetsMatching:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(oneway void)fetchUninstalledAssetInformationMatchingAny:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(oneway void)downloadAssets:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(void)tryDownloadUninstalledAssetsMatchingQueuedAssetMatchSet;
-(BOOL)shouldDownloadUninstalledAssets;
-(void)downloadUninstalledAssetsMatchingQueuedAssetMatchSet;
-(void)retryDownloadsWhenReachable;
-(void)syncToRemoteMetadataIfNecessary;
-(void)registerReachabilityCallback;
-(void)reachabilityChanged;
-(NSMutableSet *)queuedAssetMatchSet;
-(BOOL)isWaitingForReachability;
-(void)setIsWaitingForReachability:(BOOL)arg1 ;
@end

