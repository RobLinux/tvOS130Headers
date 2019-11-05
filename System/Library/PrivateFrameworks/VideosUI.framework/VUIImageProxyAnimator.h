/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, _TVImageView, NSTimer;

@interface VUIImageProxyAnimator : NSObject {

	BOOL _animating;
	BOOL _cachingEnabled;
	NSArray* _imageProxies;
	unsigned long long _animationOptions;
	double _animationDuration;
	double _transitionInterval;
	unsigned long long _displayImageIndex;
	unsigned long long _indexOfFetchedImage;
	_TVImageView* _imageView;
	NSTimer* _transitionTimer;

}

@property (assign,nonatomic) unsigned long long displayImageIndex;                     //@synthesize displayImageIndex=_displayImageIndex - In the implementation block
@property (assign,nonatomic) unsigned long long indexOfFetchedImage;                   //@synthesize indexOfFetchedImage=_indexOfFetchedImage - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * transitionTimer;                         //@synthesize transitionTimer=_transitionTimer - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                        //@synthesize animating=_animating - In the implementation block
@property (assign,getter=isCachingEnabled,nonatomic) BOOL cachingEnabled;              //@synthesize cachingEnabled=_cachingEnabled - In the implementation block
@property (nonatomic,copy) NSArray * imageProxies;                                     //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,nonatomic) unsigned long long animationOptions;                      //@synthesize animationOptions=_animationOptions - In the implementation block
@property (assign,nonatomic) double animationDuration;                                 //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) double transitionInterval;                                //@synthesize transitionInterval=_transitionInterval - In the implementation block
-(id)init;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(_TVImageView *)imageView;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(BOOL)isAnimating;
-(double)transitionInterval;
-(void)startAnimation;
-(BOOL)isCachingEnabled;
-(unsigned long long)animationOptions;
-(void)setAnimationOptions:(unsigned long long)arg1 ;
-(void)_setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)stopAnimation;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
-(unsigned long long)displayImageIndex;
-(void)setIndexOfFetchedImage:(unsigned long long)arg1 ;
-(void)_displayIntervalTimerFired:(id)arg1 ;
-(void)_fetchNext;
-(void)setTransitionInterval:(double)arg1 ;
-(void)setDisplayImageIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfFetchedImage;
-(void)setCachingEnabled:(BOOL)arg1 ;
-(id)initWithImageView:(id)arg1 andProxies:(id)arg2 ;
-(void)setTransitionTimer:(NSTimer *)arg1 ;
-(NSTimer *)transitionTimer;
-(void)_updateImageWithIndex:(unsigned long long)arg1 ;
-(void)loadImageProxy:(id)arg1 withWeakObject:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

