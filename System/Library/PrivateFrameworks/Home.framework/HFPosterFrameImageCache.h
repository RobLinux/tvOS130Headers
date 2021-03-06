/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSUIMappedImageCache;

@interface HFPosterFrameImageCache : NSObject {

	BSUIMappedImageCache* _imageCache;

}

@property (nonatomic,retain) BSUIMappedImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)keyForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2 ;
-(id)init;
-(BSUIMappedImageCache *)imageCache;
-(void)setImageCache:(BSUIMappedImageCache *)arg1 ;
-(id)imageForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2 ;
-(void)purgeAllImages;
-(void)addImage:(id)arg1 forCameraClipIdentifierString:(id)arg2 withOffset:(float)arg3 ;
@end

