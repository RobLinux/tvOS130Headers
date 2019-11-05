/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TVPVideoView;


@protocol TVTransportBarThumbnailScrubbing <NSObject>
@property (nonatomic,readonly) long long scrubPreviewMode; 
@property (nonatomic,readonly) TVPVideoView * scrubVideoView; 
@required
-(TVPVideoView *)scrubVideoView;
-(void)setScrubPreviewMode:(long long)arg1 animated:(BOOL)arg2;
-(void)setScrubImage:(id)arg1;
-(void)setScrubVideoPlayer:(id)arg1;
-(long long)scrubPreviewMode;

@end

