/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVRenderJobDelegate.h>

@class PVVideoCompositingContext, PVVideoCompositing, AVAsynchronousVideoCompositionRequest, PVVideoCompositionInstruction, PVTaskToken, NSString;

@interface PVAVFRenderJobDelegate : NSObject <PVRenderJobDelegate> {

	PVVideoCompositing* m_compositor;
	AVAsynchronousVideoCompositionRequest* m_request;
	PVVideoCompositionInstruction* m_instruction;
	SCD_Struct_PV19 m_compositionTime;
	BOOL m_thumbnailCompositing;
	CVBufferRef m_destinationPixelBuffer;
	unsigned m_minimumRequestCompletionTimeMS;
	PerfTimer m_timer;
	unsigned m_childCode;
	HGCVGLTextureFactory* m_hgCVGLTextureFactory;
	HGRef<PVRenderManager>* m_renderManager;
	HGRef<PVInstructionGraphContext>* m_instructionGraphContext;
	PVTaskToken* _token;

}

@property (readonly) SCD_Struct_PV19 compositionTime; 
@property (readonly) PVVideoCompositionInstruction * compositionInstruction; 
@property (readonly) AVAsynchronousVideoCompositionRequest * compositionRequest; 
@property (assign) unsigned minimumRequestCompletionTimeMS; 
@property (assign) unsigned childCode; 
@property (retain) PVTaskToken * token;                                                       //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned jobTypeTag; 
@property (readonly) PVVideoCompositingContext * videoCompositingContext; 
+(unsigned)jobTypeTag;
-(PVTaskToken *)token;
-(void)setToken:(PVTaskToken *)arg1 ;
-(SCD_Struct_PV19)compositionTime;
-(PVVideoCompositingContext *)videoCompositingContext;
-(int)jobPriority;
-(int)renderContextPriority;
-(unsigned)jobTypeTag;
-(void)buildGraph:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(int)renderThreadPriority;
-(void)setupDestinationBuffers:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(void)finishCompletedJob;
-(void)finishCancelledJob;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(unsigned long long)packedFamilyCode;
-(void)_setupGLTextureFactory:(const HGRenderContext*)arg1 ;
-(void)_setupInputs:(PVInputHGNodeMap<PVInstructionGraphSourceNode *>*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(void)_buildGraph:(PVInputHGNodeMap<PVInstructionGraphSourceNode *>*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 outputNodes:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg4 ;
-(id)initWithCompositor:(id)arg1 request:(id)arg2 compositionTime:(SCD_Struct_PV19)arg3 thumbnailCompositing:(BOOL)arg4 ;
-(PVVideoCompositionInstruction *)compositionInstruction;
-(AVAsynchronousVideoCompositionRequest *)compositionRequest;
-(unsigned)minimumRequestCompletionTimeMS;
-(void)setMinimumRequestCompletionTimeMS:(unsigned)arg1 ;
-(unsigned)childCode;
-(void)setChildCode:(unsigned)arg1 ;
@end

