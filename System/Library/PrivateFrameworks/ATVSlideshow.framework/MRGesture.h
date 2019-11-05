/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MRHitBlob;

@interface MRGesture : NSObject {

	MRHitBlob* _hitBlob;
	double _linearScaleAtStart;
	double _slideRotationAtStart;
	double _slideScaleAtStart;
	double _currentRotation;
	double _currentScale;
	CGPoint _locationInViewAtStart;
	CGPoint _locationInSlideAtStart;
	CGPoint _slideCenterAtStart;
	CGPoint _currentTranslation;

}

@property (retain) MRHitBlob * hitBlob;                         //@synthesize hitBlob=_hitBlob - In the implementation block
@property (assign) CGPoint locationInViewAtStart;               //@synthesize locationInViewAtStart=_locationInViewAtStart - In the implementation block
@property (assign) CGPoint locationInSlideAtStart;              //@synthesize locationInSlideAtStart=_locationInSlideAtStart - In the implementation block
@property (assign) double linearScaleAtStart;                   //@synthesize linearScaleAtStart=_linearScaleAtStart - In the implementation block
@property (assign) CGPoint slideCenterAtStart;                  //@synthesize slideCenterAtStart=_slideCenterAtStart - In the implementation block
@property (assign) double slideRotationAtStart;                 //@synthesize slideRotationAtStart=_slideRotationAtStart - In the implementation block
@property (assign) double slideScaleAtStart;                    //@synthesize slideScaleAtStart=_slideScaleAtStart - In the implementation block
@property (assign) CGPoint currentTranslation;                  //@synthesize currentTranslation=_currentTranslation - In the implementation block
@property (assign) double currentRotation;                      //@synthesize currentRotation=_currentRotation - In the implementation block
@property (assign) double currentScale;                         //@synthesize currentScale=_currentScale - In the implementation block
-(void)dealloc;
-(MRHitBlob *)hitBlob;
-(CGPoint)locationInViewAtStart;
-(void)setSlideCenterAtStart:(CGPoint)arg1 ;
-(void)setSlideRotationAtStart:(double)arg1 ;
-(void)setSlideScaleAtStart:(double)arg1 ;
-(void)setLinearScaleAtStart:(double)arg1 ;
-(double)linearScaleAtStart;
-(void)setLocationInSlideAtStart:(CGPoint)arg1 ;
-(void)setCurrentTranslation:(CGPoint)arg1 ;
-(void)setCurrentRotation:(double)arg1 ;
-(void)setCurrentScale:(double)arg1 ;
-(CGPoint)currentTranslation;
-(double)slideRotationAtStart;
-(double)currentRotation;
-(double)currentScale;
-(CGPoint)locationInSlideAtStart;
-(CGPoint)slideCenterAtStart;
-(double)slideScaleAtStart;
-(id)initWithHitBlob:(id)arg1 ;
-(void)setHitBlob:(MRHitBlob *)arg1 ;
-(void)setLocationInViewAtStart:(CGPoint)arg1 ;
@end

