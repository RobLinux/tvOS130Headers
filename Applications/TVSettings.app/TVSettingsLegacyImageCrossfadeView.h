/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettings/TVSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, _TVSettingsImageLoaderQueue, UIImageView, NSTimer;

@interface TVSettingsLegacyImageCrossfadeView : UIView {

	NSArray* _imageProxies;
	double _crossfadePeriod;
	double _crossfadeDuration;
	double _rotationAngleDegrees;
	_TVSettingsImageLoaderQueue* _loaderQueue;
	UIImageView* _imageView;
	NSTimer* _crossfadeTimer;

}

@property (nonatomic,retain) _TVSettingsImageLoaderQueue * loaderQueue;              //@synthesize loaderQueue=_loaderQueue - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSTimer * crossfadeTimer;                               //@synthesize crossfadeTimer=_crossfadeTimer - In the implementation block
@property (nonatomic,copy) NSArray * imageProxies;                                   //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,nonatomic) double crossfadePeriod;                                 //@synthesize crossfadePeriod=_crossfadePeriod - In the implementation block
@property (assign,nonatomic) double crossfadeDuration;                               //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (assign,nonatomic) double rotationAngleDegrees;                            //@synthesize rotationAngleDegrees=_rotationAngleDegrees - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)_maximumImageSize;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)didMoveToSuperview;
-(void)_startTimer;
-(double)crossfadeDuration;
-(void)setCrossfadeDuration:(double)arg1 ;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
-(void)_loadNextImage:(id)arg1 ;
-(void)_crossfadeToImage:(id)arg1 ;
-(double)crossfadePeriod;
-(void)setCrossfadePeriod:(double)arg1 ;
-(void)setRotationAngleDegrees:(double)arg1 ;
-(double)rotationAngleDegrees;
-(_TVSettingsImageLoaderQueue *)loaderQueue;
-(void)setLoaderQueue:(_TVSettingsImageLoaderQueue *)arg1 ;
-(NSTimer *)crossfadeTimer;
-(void)setCrossfadeTimer:(NSTimer *)arg1 ;
@end

