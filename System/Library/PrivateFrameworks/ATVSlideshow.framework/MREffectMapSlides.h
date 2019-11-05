/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class NSMutableDictionary, MRImageProvider, MURandom;

@interface MREffectMapSlides : MREffect {

	NSMutableDictionary* mSprites;
	MRImageProvider* mBoxShadowBig;
	MRImageProvider* mBoxShadowBigBottom;
	MRImageProvider* mBoxShadowBigTop;
	MURandom* mRandom;

}
-(void)_cleanup;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)_unload;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(void)render2SlidesAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 scale:(double)arg4 ;
-(void)render3SlidesAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 scale:(double)arg4 ;
-(void)render4SlidesAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 scale:(double)arg4 ;
-(void)render1SlideAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 scale:(double)arg4 ;
-(void)_renderBigShadowForRect:(CGRect)arg1 scale:(double)arg2 rects:(id)arg3 atTime:(double)arg4 inContext:(id)arg5 withArguments:(id)arg6 ;
-(void)renderKey:(id)arg1 shadow:(id)arg2 shadowRect:(CGRect)arg3 size:(CGSize)arg4 position:(CGPoint)arg5 xRot:(double)arg6 tX:(double)arg7 isPano:(BOOL)arg8 time:(double)arg9 inContext:(id)arg10 withArguments:(id)arg11 ;
@end

