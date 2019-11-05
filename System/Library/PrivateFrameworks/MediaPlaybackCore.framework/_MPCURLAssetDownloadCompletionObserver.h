/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVURLAsset;

@interface _MPCURLAssetDownloadCompletionObserver : NSObject {

	AVURLAsset* _asset;
	/*^block*/id _completionHandler;

}

@property (nonatomic,__weak,readonly) AVURLAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(AVURLAsset *)asset;
-(id)initWithAsset:(id)arg1 ;
-(void)_downloadCompleteSuccessNotification:(id)arg1 ;
-(void)_downloadCompleteFailedNotification:(id)arg1 ;
-(void)_notifyCompletionHandlerWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

