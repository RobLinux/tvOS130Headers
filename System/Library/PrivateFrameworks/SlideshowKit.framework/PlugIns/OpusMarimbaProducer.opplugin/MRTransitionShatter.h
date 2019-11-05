/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <ATVSlideshow/MRTransition.h>

@class NSDictionary, NSMutableArray;

@interface MRTransitionShatter : MRTransition {

	BOOL mIsLoaded;
	NSDictionary* mLayout;
	NSMutableArray* mMasks;

}
+(id)shatterDescriptions;
+(void)initialize;
-(void)_renderSublayer:(id)arg1 layerCount:(long long)arg2 sourceIsText:(BOOL)arg3 targetIsText:(BOOL)arg4 currentShader:(id)arg5 sourceSize:(CGSize)arg6 targetSize:(CGSize)arg7 atTime:(double)arg8 inContext:(id)arg9 withArguments:(id)arg10 ;
-(void)unload;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initWithTransitionID:(id)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
@end

