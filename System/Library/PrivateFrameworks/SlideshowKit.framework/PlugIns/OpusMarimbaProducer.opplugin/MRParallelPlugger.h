/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCPlugParallel, MCAnimationPath, MRAnimationPathScalar, MRAnimationContext;

@interface MRParallelPlugger : NSObject {

	MCPlugParallel* mPlug;
	MCAnimationPath* mAnimationPathParam1;
	MCAnimationPath* mAnimationPathParam2;
	MCAnimationPath* mAnimationPathXY;
	MRAnimationPathScalar* mAnimationPathX;
	MRAnimationPathScalar* mAnimationPathY;
	MRAnimationPathScalar* mAnimationPathZ;
	MRAnimationPathScalar* mAnimationPathScale;
	MRAnimationPathScalar* mAnimationPathRX;
	MRAnimationPathScalar* mAnimationPathRY;
	MRAnimationPathScalar* mAnimationPathRZ;
	MRAnimationPathScalar* mAnimationPathOpacity;
	MRAnimationContext* mAnimationContext;
	unsigned char mCurrentLayoutIndex;
	BOOL mNeedsUpdate;
	BOOL mPlugWasSetSinceLastRendering;

}

@property (nonatomic,copy) MCPlugParallel * plug; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (assign,nonatomic) BOOL needsUpdate; 
-(id)init;
-(void)dealloc;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)setPlug:(MCPlugParallel *)arg1 ;
-(MCPlugParallel *)plug;
-(unsigned char)currentLayoutIndex;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(BOOL)applyAtTime:(double)arg1 toSublayer:(id)arg2 withArguments:(id)arg3 ;
@end

