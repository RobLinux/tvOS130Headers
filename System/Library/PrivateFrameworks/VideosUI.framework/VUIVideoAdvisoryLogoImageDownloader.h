/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVImageProxy;

@interface VUIVideoAdvisoryLogoImageDownloader : NSObject {

	TVImageProxy* _ratingImageProxy;

}

@property (nonatomic,retain) TVImageProxy * ratingImageProxy;              //@synthesize ratingImageProxy=_ratingImageProxy - In the implementation block
-(void)setRatingImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)ratingImageProxy;
-(void)downloadImageWithURL:(id)arg1 imageInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

