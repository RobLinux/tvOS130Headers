/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWStillImageProcessorConfiguration.h>

@protocol MTLBuffer;
@class BWVideoFormat, FigWiredMemory;

@interface BWUBProcessorControllerConfiguration : BWStillImageProcessorConfiguration {

	BWVideoFormat* _outputFormat;
	BOOL _fusionEnabled;
	BOOL _lowLightFusionEnabled;
	BOOL _alwaysAllowModifyingInputBuffers;
	unsigned _figThreadPriority;
	BOOL _semanticRenderingEnabled;
	id<MTLBuffer> _sharedMetalBuffer;
	FigWiredMemory* _sharedRegWarpBuffer;

}

@property (nonatomic,retain) BWVideoFormat * outputFormat;                       //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) BOOL fusionEnabled;                                 //@synthesize fusionEnabled=_fusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL lowLightFusionEnabled;                         //@synthesize lowLightFusionEnabled=_lowLightFusionEnabled - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowModifyingInputBuffers;              //@synthesize alwaysAllowModifyingInputBuffers=_alwaysAllowModifyingInputBuffers - In the implementation block
@property (assign,nonatomic) unsigned figThreadPriority;                         //@synthesize figThreadPriority=_figThreadPriority - In the implementation block
@property (assign,nonatomic) BOOL semanticRenderingEnabled;                      //@synthesize semanticRenderingEnabled=_semanticRenderingEnabled - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> sharedMetalBuffer;                    //@synthesize sharedMetalBuffer=_sharedMetalBuffer - In the implementation block
@property (nonatomic,retain) FigWiredMemory * sharedRegWarpBuffer;               //@synthesize sharedRegWarpBuffer=_sharedRegWarpBuffer - In the implementation block
-(void)dealloc;
-(BWVideoFormat *)outputFormat;
-(void)setOutputFormat:(BWVideoFormat *)arg1 ;
-(void)setAlwaysAllowModifyingInputBuffers:(BOOL)arg1 ;
-(void)setFigThreadPriority:(unsigned)arg1 ;
-(void)setFusionEnabled:(BOOL)arg1 ;
-(BOOL)fusionEnabled;
-(void)setLowLightFusionEnabled:(BOOL)arg1 ;
-(BOOL)lowLightFusionEnabled;
-(BOOL)alwaysAllowModifyingInputBuffers;
-(void)setSemanticRenderingEnabled:(BOOL)arg1 ;
-(BOOL)semanticRenderingEnabled;
-(void)setSharedMetalBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)sharedMetalBuffer;
-(void)setSharedRegWarpBuffer:(FigWiredMemory *)arg1 ;
-(FigWiredMemory *)sharedRegWarpBuffer;
-(unsigned)figThreadPriority;
@end

