/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <ATVSlideshow/MREffect.h>
#import <OpusMarimbaProducer/MZEffectTiming.h>

@class MRImageProvider, NSMutableDictionary, NSString, NSMutableArray;

@interface MREffectHangingPictures : MREffect <MZEffectTiming> {

	MRImageProvider* mRopeImageProvider;
	MRImageProvider* mPhotoFrameImageProviders[4];
	NSMutableDictionary* mSprites;
	NSMutableDictionary* mMatrices;
	NSString* mCurrentMainSlideKey;
	unsigned long long mCountOfSlides;
	double mBaseStillDuration;
	NSMutableArray* mSmallSlideProviders;
	SCD_Struct_MR23 mSlideTimings[10];
	BOOL mScenario[9];
	unsigned char mNumberOfRopes;
	unsigned short mFrameIndices;

}

@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
+(void)initialize;
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5 ;
+(BOOL)hasCustomTiming;
-(void)_cleanup;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)_unload;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(double)lowestDisplayTime;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1 ;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(double)_buildScenarioWithCountOfSlides:(unsigned long long)arg1 aspectRatios:(double*)arg2 ;
-(double)_updateSlideTimings;
-(void)_applyTimingToSlideProviders;
-(void)_applyTimingToSmallSlideProviders;
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1 ;
@end

