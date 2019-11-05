/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <ATVSlideshow/MPLayer.h>
#import <OpusMarimbaProducer/MPEffectSupportPrivate.h>
#import <OpusMarimbaProducer/MPEffectSupport.h>

@protocol MZEffectTiming;
@class MCContainerEffect, NSString, NSMutableArray, NSMutableDictionary, NSObject, NSArray;

@interface MPLayerEffect : MPLayer <MPEffectSupportPrivate, MPEffectSupport> {

	MCContainerEffect* _layerEffect;
	NSString* _effectID;
	NSString* _presetID;
	NSMutableArray* _slides;
	NSMutableArray* _secondarySlides;
	NSMutableArray* _texts;
	NSMutableDictionary* _effectAttributes;
	long long _randomSeed;
	NSObject*<MZEffectTiming> _effectTiming;
	BOOL _supportsEffectTiming;
	BOOL _skipEffectTiming;
	long long _liveIndex;

}

@property (nonatomic,copy) NSString * effectID; 
@property (nonatomic,copy) NSString * presetID; 
@property (nonatomic,readonly) NSArray * slides; 
@property (nonatomic,readonly) NSArray * texts; 
@property (nonatomic,readonly) NSObject*<MZEffectTiming> effectTiming;              //@synthesize effectTiming=_effectTiming - In the implementation block
+(id)layerEffectWithEffectID:(id)arg1 ;
+(id)layerEffectWithEffectID:(id)arg1 andPaths:(id)arg2 ;
+(id)layerEffectWithEffectID:(id)arg1 andStrings:(id)arg2 ;
+(id)layerEffectWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)container;
-(void)setDuration:(double)arg1 ;
-(void)addText:(id)arg1 ;
-(BOOL)isLive;
-(NSArray *)texts;
-(void)updateTiming;
-(long long)randomSeed;
-(void)setRandomSeed:(long long)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(NSString *)effectID;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(void)removeAllSlides;
-(NSArray *)slides;
-(double)fullDuration;
-(double)mainDuration;
-(void)addSlides:(id)arg1 ;
-(long long)liveIndex;
-(void)setLiveIndex:(long long)arg1 ;
-(void)removeSlidesAtIndices:(id)arg1 ;
-(NSString *)presetID;
-(void)setPresetID:(NSString *)arg1 ;
-(void)removeAllTexts;
-(id)initWithEffectID:(id)arg1 andPaths:(id)arg2 ;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)effectAttributes;
-(void)setSkipEffectTiming:(BOOL)arg1 ;
-(void)setEffectAttributes:(id)arg1 ;
-(void)createSecondarySlidesWithPaths:(id)arg1 ;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 ;
-(id)effectAttributeForKey:(id)arg1 ;
-(id)secondarySlides;
-(void)setEffectID:(NSString *)arg1 ;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 fillIn:(BOOL)arg3 ;
-(void)removeAllSecondarySlides;
-(void)addSlide:(id)arg1 ;
-(id)allSlides:(BOOL)arg1 ;
-(id)initWithEffectID:(id)arg1 andStrings:(id)arg2 ;
-(id)initWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(void)createSlidesWithPaths:(id)arg1 ;
-(void)_updateTiming:(BOOL)arg1 ;
-(void)copySlides:(id)arg1 ;
-(void)copySecondarySlides:(id)arg1 ;
-(void)copyTexts:(id)arg1 ;
-(void)applyFormattedAttributes;
-(id)_effectAttributes;
-(void)insertSlides:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertSecondarySlides:(id)arg1 atIndex:(long long)arg2 ;
-(long long)maxNumberOfSlides;
-(void)removeSecondarySlidesAtIndices:(id)arg1 ;
-(id)formattedAttributes;
-(double)lowestDisplayTime;
-(void)insertTexts:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeTextsAtIndices:(id)arg1 ;
-(void)moveSlidesFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)addSecondarySlide:(id)arg1 ;
-(void)addSecondarySlides:(id)arg1 ;
-(void)addTexts:(id)arg1 ;
-(void)moveTextsFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(NSObject*<MZEffectTiming>)effectTiming;
-(long long)maxNumberOfSecondarySlides;
-(id)slideForMCSlide:(id)arg1 ;
-(id)slideInformation;
-(void)_updateEffectTiming;
-(void)setLayerEffect:(id)arg1 ;
@end

