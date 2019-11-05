/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MRLayer.h>

@class MCContainerNavigator, NSMutableArray, NSMutableDictionary, MRLayer, MRTransition, NSDictionary, NSArray;

@interface MRLayerNavigator : MRLayer {

	MCContainerNavigator* mContainer;
	NSMutableArray* mSublayers;
	NSMutableDictionary* mSublayersForPlugs;
	MRLayer* mNextSublayer;
	MRTransition* mCurrentTransition;
	BOOL mIsTransitioning;
	BOOL mTransitionWasAborted;
	MRLayer* mSublayerToPrecompute;
	id mPrecomputingTarget;
	unsigned long long mPrecomputingType;
	double mTransitionStartTime;
	double mTransitionDuration;
	BOOL mTransitionIsBackwards;
	NSDictionary* mTransitionChanges;
	NSMutableArray* mHistoryBack;
	NSMutableArray* mHistoryForth;
	BOOL mBackAndForthIsEnabled;
	MRLayer* mCurrentSublayer;
	double mForcedTransitionTime;

}

@property (readonly) NSArray * sublayers; 
@property (readonly) MRLayer * currentSublayer; 
@property (assign) BOOL backAndForthIsEnabled; 
@property (assign,nonatomic) double forcedTransitionTime; 
-(void)cleanup;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isOpaque;
-(void)deactivate;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)_currentState;
-(NSArray *)sublayers;
-(double)goBack;
-(BOOL)isInfinite;
-(BOOL)hasAudio;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isAlphaFriendly;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(void)endMorphing;
-(void)_unobservePlug;
-(void)depreactivate:(BOOL)arg1 ;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(void)_observePlugOnPreactivate;
-(void)_unobservePlugOnDepreactivate;
-(BOOL)_isNative3D;
-(void)synchronizeTime;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)hasSomethingToRender;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)setForcedTransitionTime:(double)arg1 ;
-(double)goForth;
-(id)actionHitAtPoint:(CGPoint)arg1 layer:(id*)arg2 ;
-(id)actionForKey:(id)arg1 recursive:(BOOL)arg2 ;
-(id)_dumpLayerWithOptions:(unsigned long long)arg1 ;
-(void)_observePlug;
-(void)_setNeedsToRequestRebuildAudio:(BOOL)arg1 ;
-(void)_unobserveSublayer:(id)arg1 ;
-(void)_deleteSublayer:(id)arg1 ;
-(void)endTransitionToSublayer;
-(void)_executeLayerCommandQueue;
-(void)_prerenderSublayersAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_preprecomputeAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)sublayerHitAtPoint:(CGPoint)arg1 onlyIfHitElement:(BOOL)arg2 localPoint:(CGPoint*)arg3 ;
-(id)sublayerForPlugObjectID:(id)arg1 recursive:(BOOL)arg2 ;
-(double)doTransition:(id)arg1 backwards:(BOOL)arg2 ;
-(id)sublayerForID:(id)arg1 ;
-(double)finishTransition:(id)arg1 ;
-(double)abortTransition:(id)arg1 ;
-(double)doTransition:(id)arg1 ;
-(double)doTransitionBackwards:(id)arg1 ;
-(MRLayer *)currentSublayer;
-(BOOL)backAndForthIsEnabled;
-(void)setBackAndForthIsEnabled:(BOOL)arg1 ;
-(double)forcedTransitionTime;
-(id)_createSublayerForPlug:(id)arg1 ;
-(void)_observeSublayer:(id)arg1 ;
-(void)_precomputeAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
@end

