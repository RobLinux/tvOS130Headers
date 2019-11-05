/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimer, UIImageView, _TVImageLoaderQueue, NSArray;

@interface TVImageCrossfadeView : UIView {

	NSTimer* _crossfadeTimer;
	UIImageView* _imageView;
	_TVImageLoaderQueue* _loaderQueue;
	NSArray* _imageProxies;
	double _crossfadePeriod;
	double _crossfadeDuration;
	UIEdgeInsets _padding;

}

@property (nonatomic,copy) NSArray * imageProxies;                  //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                  //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double crossfadePeriod;                //@synthesize crossfadePeriod=_crossfadePeriod - In the implementation block
@property (assign,nonatomic) double crossfadeDuration;              //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
-(void)dealloc;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
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
@end

