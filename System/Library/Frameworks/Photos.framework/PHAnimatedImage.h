/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ISAnimatedImage;

@interface PHAnimatedImage : NSObject {

	unsigned long long _frameCount;
	unsigned long long _loopCount;
	double _duration;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	ISAnimatedImage* _is_animatedImage;

}

@property (nonatomic,readonly) unsigned long long frameCount;                   //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,readonly) unsigned long long loopCount;                    //@synthesize loopCount=_loopCount - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelWidth;                   //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelHeight;                  //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) ISAnimatedImage * is_animatedImage;              //@synthesize is_animatedImage=_is_animatedImage - In the implementation block
+(long long)requestAnimatedImageWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(long long)requestAnimatedImageWithURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)cancelAnimatedImageRequest:(long long)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(double)duration;
-(unsigned long long)frameCount;
-(unsigned long long)loopCount;
-(unsigned long long)pixelHeight;
-(unsigned long long)pixelWidth;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(BOOL)arg3 ;
-(void)_initializePropertiesWithAnimatedImage:(id)arg1 ;
-(ISAnimatedImage *)is_animatedImage;
@end
