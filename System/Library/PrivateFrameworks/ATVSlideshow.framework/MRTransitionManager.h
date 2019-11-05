/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MRTransitionManager : NSObject {

	NSMutableDictionary* mTransitionSets;
	NSMutableDictionary* mTransitionPools;

}
+(void)initialize;
+(id)sharedManager;
-(void)dealloc;
-(void)cleanup;
-(void)releaseResources;
-(id)initWithPaths:(id)arg1 ;
-(id)transitionWithTransitionID:(id)arg1 ;
-(id)descriptionForTransitionID:(id)arg1 ;
-(void)recycleTransition:(id)arg1 ;
-(id)resourcePathForTransitionID:(id)arg1 andResource:(id)arg2 ;
-(BOOL)canHandleKenBurnsForTransitionID:(id)arg1 ;
-(BOOL)noContentsMotionForTransitionID:(id)arg1 ;
-(BOOL)needsSourceLayerImageForPrecomputingForTransitionID:(id)arg1 ;
-(BOOL)needsTargetLayerImageForPrecomputingForTransitionID:(id)arg1 ;
-(BOOL)needsSourceLayerToBeOpaqueForSimple3DTransitionSubtype:(long long)arg1 ;
-(BOOL)needsTargetLayerToBeOpaqueForSimple3DTransitionSubtype:(long long)arg1 ;
@end

