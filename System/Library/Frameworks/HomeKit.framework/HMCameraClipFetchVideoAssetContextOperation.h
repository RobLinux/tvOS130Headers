/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>

@protocol HMCameraClipFetchAssetContextOperationDataSource;
@class HMCameraClipManager, HMCameraClip, NSURL;

@interface HMCameraClipFetchVideoAssetContextOperation : HMFOperation {

	HMCameraClipManager* _clipManager;
	HMCameraClip* _clip;
	NSURL* _clipDestinationFileURL;
	NSURL* _hlsPlaylistDestinationFileURL;
	/*^block*/id _downloadProgressHandler;
	/*^block*/id _fetchVideoAssetContextCompletionBlock;
	id<HMCameraClipFetchAssetContextOperationDataSource> _dataSource;

}

@property (readonly) id<HMCameraClipFetchAssetContextOperationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) HMCameraClipManager * clipManager;                                            //@synthesize clipManager=_clipManager - In the implementation block
@property (readonly) HMCameraClip * clip;                                                          //@synthesize clip=_clip - In the implementation block
@property (copy) NSURL * clipDestinationFileURL;                                                   //@synthesize clipDestinationFileURL=_clipDestinationFileURL - In the implementation block
@property (copy) NSURL * hlsPlaylistDestinationFileURL;                                            //@synthesize hlsPlaylistDestinationFileURL=_hlsPlaylistDestinationFileURL - In the implementation block
@property (copy) id downloadProgressHandler;                                                       //@synthesize downloadProgressHandler=_downloadProgressHandler - In the implementation block
@property (copy) id fetchVideoAssetContextCompletionBlock;                                         //@synthesize fetchVideoAssetContextCompletionBlock=_fetchVideoAssetContextCompletionBlock - In the implementation block
+(id)logCategory;
-(id)description;
-(void)main;
-(void)cancelWithError:(id)arg1 ;
-(id<HMCameraClipFetchAssetContextOperationDataSource>)dataSource;
-(HMCameraClip *)clip;
-(id)logIdentifier;
-(id)decryptData:(id)arg1 ;
-(HMCameraClipManager *)clipManager;
-(id)initWithClipManager:(id)arg1 clip:(id)arg2 dataSource:(id)arg3 ;
-(id)fetchVideoAssetContextCompletionBlock;
-(id)fetchVideoAssetContext;
-(id)downloadVideoAsset:(id)arg1 ;
-(id)writeHLSPlaylistForVideoAssetContext:(id)arg1 ;
-(void)finishWithVideoAssetContext:(id)arg1 ;
-(id)downloadProgressHandler;
-(NSURL *)clipDestinationFileURL;
-(void)updateDownloadProgressToPercentageComplete:(unsigned long long)arg1 ;
-(id)downloadVideoSegment:(id)arg1 forDataTask:(id)arg2 andAppendToOutputStream:(id)arg3 ;
-(NSURL *)hlsPlaylistDestinationFileURL;
-(id)initWithClipManager:(id)arg1 clip:(id)arg2 ;
-(void)setClipDestinationFileURL:(NSURL *)arg1 ;
-(void)setHlsPlaylistDestinationFileURL:(NSURL *)arg1 ;
-(void)setDownloadProgressHandler:(id)arg1 ;
-(void)setFetchVideoAssetContextCompletionBlock:(id)arg1 ;
@end
