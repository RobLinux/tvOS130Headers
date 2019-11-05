/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSourcePipeline.h>

@class BWNode, BWSynchronizerNode, BWNodeOutput;

@interface FigCaptureMetadataSourcePipeline : FigCaptureSourcePipeline {

	BWNode* _sourceNode;
	BWSynchronizerNode* _synchronizerNode;
	OpaqueCMClockRef _masterClock;

}

@property (assign,nonatomic) OpaqueCMClockRef masterClock;                                        //@synthesize masterClock=_masterClock - In the implementation block
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatDescription; 
@property (nonatomic,readonly) BWNodeOutput * output; 
+(void)initialize;
-(void)dealloc;
-(BWNodeOutput *)output;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 errorOut:(int*)arg4 ;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(void)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMFormatDescriptionRef)sourceFormatDescription;
-(int)_buildMetadataSourcePipeline:(id)arg1 graph:(id)arg2 ;
-(OpaqueCMClockRef)masterClock;
@end
