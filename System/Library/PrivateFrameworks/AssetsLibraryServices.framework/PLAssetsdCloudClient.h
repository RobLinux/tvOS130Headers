/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdCloudClient : PLAssetsdBaseClient
-(void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelCPLDownloadWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)downloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(BOOL)arg3 trackCPLDownload:(BOOL)arg4 downloadIsTransient:(BOOL)arg5 proposedTaskIdentifier:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)requestCPLDownloadImageDataForAssets:(id)arg1 format:(unsigned long long)arg2 doneTokens:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)computeFingerPrintsOfAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

