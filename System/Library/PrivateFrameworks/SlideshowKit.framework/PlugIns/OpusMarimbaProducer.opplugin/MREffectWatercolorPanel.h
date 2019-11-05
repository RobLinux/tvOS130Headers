/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class NSMutableDictionary, MRTextRenderer, MRImage, MRCroppingSprite;

@interface MREffectWatercolorPanel : MREffect {

	NSMutableDictionary* mSprites;
	MRTextRenderer* mTextRenderer;
	MRImage* mTextImage;
	MRCroppingSprite* mTextSprite;
	NSMutableDictionary* mBreakInformation;

}
-(void)_cleanup;
-(void)setAttributes:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)_unload;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(void)renderEffect2AtTime:(double)arg1 isSquare:(BOOL)arg2 inContext:(id)arg3 withArguments:(id)arg4 ;
-(void)renderEffect3AtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderEffectSubtitleAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderSubtitleBreakAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderBreakAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
@end

