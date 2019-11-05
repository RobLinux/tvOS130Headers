/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRRenderable
@property (nonatomic,readonly) BOOL isNative3D; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaFriendly; 
@property (nonatomic,readonly) BOOL isInfinite; 
@required
-(BOOL)isOpaque;
-(BOOL)isInfinite;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
-(BOOL)isNative3D;
-(BOOL)isAlphaFriendly;

@end

