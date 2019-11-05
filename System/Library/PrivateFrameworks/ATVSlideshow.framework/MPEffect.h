/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPActionableSupportInternal.h>
#import <ATVSlideshow/NSCopying.h>
#import <ATVSlideshow/MPFilterSupport.h>
#import <ATVSlideshow/MPAnimationSupport.h>
#import <ATVSlideshow/MPAudioSupport.h>
#import <ATVSlideshow/MPActionableSupport.h>
#import <ATVSlideshow/MPGeometrySupport.h>
#import <ATVSlideshow/MPEffectSupport.h>

@protocol MZEffectTiming;
@class NSString, NSArray, NSMutableArray, NSMutableDictionary, MCContainerEffect, MCPlugParallel, MPAudioPlaylist, MPEffectContainer, NSObject;

@interface MPEffect : NSObject <MPActionableSupportInternal, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPGeometrySupport, MPEffectSupport> {

	NSMutableArray* _slides;
	NSMutableArray* _secondarySlides;
	NSMutableArray* _texts;
	NSMutableArray* _filters;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _animationPaths;
	MCContainerEffect* _container;
	MCPlugParallel* _plug;
	MPAudioPlaylist* _audioPlaylist;
	MPEffectContainer* _parentContainer;
	BOOL _replaceSlides;
	BOOL _supportsEffectTiming;
	BOOL _skipEffectTiming;
	NSObject*<MZEffectTiming> _effectTiming;
	double _opacity;
	CGPoint _position;
	double _zPosition;
	CGSize _size;
	double _rotationAngle;
	double _xRotationAngle;
	double _yRotationAngle;
	double _scale;
	double _timeIn;
	double _phaseInDuration;
	double _phaseOutDuration;
	double _mainDuration;
	NSString* _effectID;
	NSString* _presetID;
	long long _audioPriority;
	long long _randomSeed;
	NSString* _uuid;
	long long _liveIndex;
	BOOL _cleaningUp;

}

@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (assign,nonatomic) double mainDuration; 
@property (assign,nonatomic) BOOL replaceSlides; 
@property (nonatomic,copy) NSString * effectID; 
@property (nonatomic,copy) NSString * presetID; 
@property (nonatomic,readonly) NSArray * slides; 
@property (nonatomic,readonly) NSArray * texts; 
@property (nonatomic,readonly) NSObject*<MZEffectTiming> effectTiming;              //@synthesize effectTiming=_effectTiming - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)effectWithEffectID:(id)arg1 andPaths:(id)arg2 ;
+(id)effectWithEffectID:(id)arg1 ;
+(id)effectWithEffectID:(id)arg1 andStrings:(id)arg2 ;
+(id)effectWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)container;
-(void)setContainer:(id)arg1 ;
-(CGSize)size;
-(void)cleanup;
-(void)dump;
-(id)uuid;
-(double)scale;
-(CGPoint)position;
-(id)objectID;
-(double)width;
-(double)height;
-(void)setScale:(double)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)addText:(id)arg1 ;
-(double)opacity;
-(double)zPosition;
-(void)setZPosition:(double)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(id)filters;
-(BOOL)isLive;
-(void)addFilter:(id)arg1 ;
-(long long)zIndex;
-(void)addFilters:(id)arg1 ;
-(NSArray *)texts;
-(id)parentContainer;
-(void)setParentContainer:(id)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(BOOL)hasMovies;
-(long long)audioPriority;
-(void)setAudioPriority:(long long)arg1 ;
-(void)updateTiming;
-(long long)randomSeed;
-(void)setRandomSeed:(long long)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(NSString *)effectID;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(id)parentDocument;
-(id)plugID;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(void)removeAllSlides;
-(NSArray *)slides;
-(double)fullDuration;
-(void)copyVars:(id)arg1 ;
-(id)fullDebugLog;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(double)mainDuration;
-(void)setPlug:(id)arg1 ;
-(id)videoPaths;
-(void)addSlides:(id)arg1 ;
-(long long)liveIndex;
-(void)setLiveIndex:(long long)arg1 ;
-(void)removeSlidesAtIndices:(id)arg1 ;
-(long long)countOfTexts;
-(NSString *)presetID;
-(void)setPresetID:(NSString *)arg1 ;
-(void)removeAllTexts;
-(void)replaceSlideAtIndex:(long long)arg1 withSlide:(id)arg2 ;
-(void)replaceTextsWitStrings:(id)arg1 ;
-(BOOL)supportsEffectTiming;
-(long long)countOfSlides;
-(BOOL)hasBreaksInDocument:(id)arg1 ;
-(void)setMainDuration:(double)arg1 ;
-(id)initWithEffectID:(id)arg1 andPaths:(id)arg2 ;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)effectAttributes;
-(void)setSkipEffectTiming:(BOOL)arg1 ;
-(void)setEffectAttributes:(id)arg1 ;
-(void)createSecondarySlidesWithPaths:(id)arg1 ;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 ;
-(void)createTextsWithDefaultStrings;
-(id)effectPresetID;
-(id)effectAttributeForKey:(id)arg1 ;
-(id)secondarySlides;
-(void)setReplaceSlides:(BOOL)arg1 ;
-(void)setEffectID:(NSString *)arg1 ;
-(id)objectInSlidesAtIndex:(long long)arg1 ;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 fillIn:(BOOL)arg3 ;
-(void)removeAllSecondarySlides;
-(void)addSlide:(id)arg1 ;
-(id)plug;
-(id)initWithEffectID:(id)arg1 andStrings:(id)arg2 ;
-(id)initWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(void)createSlidesWithPaths:(id)arg1 ;
-(void)_updateTiming:(BOOL)arg1 ;
-(double)xRotationAngle;
-(double)yRotationAngle;
-(void)copySlides:(id)arg1 ;
-(void)copySecondarySlides:(id)arg1 ;
-(void)copyTexts:(id)arg1 ;
-(void)copyFilters:(id)arg1 ;
-(void)copyAudioPlaylist:(id)arg1 ;
-(void)reconfigureSlides;
-(void)applyFormattedAttributes;
-(id)_effectAttributes;
-(BOOL)needsParallelizer;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(id)nearestLayerGroup;
-(void)insertSlides:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertSecondarySlides:(id)arg1 atIndex:(long long)arg2 ;
-(long long)maxNumberOfSlides;
-(void)removeSecondarySlidesAtIndices:(id)arg1 ;
-(id)formattedAttributes;
-(id)slideInformationWithDocument:(id)arg1 ;
-(void)_updateEffectTimingWithDocument:(id)arg1 ;
-(double)lowestDisplayTime;
-(void)insertTexts:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeTextsAtIndices:(id)arg1 ;
-(void)insertFilters:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)removeAllFilters;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)moveSlidesFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)addSecondarySlide:(id)arg1 ;
-(void)addSecondarySlides:(id)arg1 ;
-(void)addTexts:(id)arg1 ;
-(void)moveTextsFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(NSObject*<MZEffectTiming>)effectTiming;
-(void)setFullDuration:(double)arg1 ;
-(void)replaceSlide:(id)arg1 atIndex:(long long)arg2 ;
-(BOOL)supportsUnlimitedSlides;
-(BOOL)replaceSlides;
-(BOOL)isTextOnly;
-(long long)maxNumberOfSecondarySlides;
-(id)nearestPlug;
-(void)updateEffectAttributes;
-(void)scaleMainDuration;
-(id)slideForMCSlide:(id)arg1 ;
-(double)yPosition;
-(double)xPosition;
-(void)insertObject:(id)arg1 inSlidesAtIndex:(long long)arg2 ;
-(void)removeObjectFromSlidesAtIndex:(long long)arg1 ;
-(void)replaceObjectInSlidesAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(id)objectInTextsAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inTextsAtIndex:(long long)arg2 ;
-(void)removeObjectFromTextsAtIndex:(long long)arg1 ;
-(void)replaceObjectInTextsAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(long long)countOfFilters;
-(id)objectInFiltersAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inFiltersAtIndex:(long long)arg2 ;
-(void)removeObjectFromFiltersAtIndex:(long long)arg1 ;
-(void)replaceObjectInFiltersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)setXPosition:(double)arg1 ;
-(void)setYPosition:(double)arg1 ;
-(id)scriptingAnimations;
-(void)setScriptingAnimations:(id)arg1 ;
@end

