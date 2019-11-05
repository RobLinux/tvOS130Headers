/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemLegibleOutputInternal;

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput {

	AVPlayerItemLegibleOutputInternal* _legibleOutputInternal;

}

@property (nonatomic,__weak,readonly) id<AVPlayerItemLegibleOutputPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (assign,nonatomic) double advanceIntervalForDelegateInvocation; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id<AVPlayerItemLegibleOutputPushDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)suppressesPlayerRendering;
-(id)_figLegibleOutputsDictionaryOptions;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(void)_pushAttributedStrings:(id)arg1 andSampleBuffers:(id)arg2 atItemTime:(SCD_Struct_AV7)arg3 ;
-(void)_signalFlush;
-(void)_collectUncollectables;
-(double)advanceIntervalForDelegateInvocation;
-(void)setAdvanceIntervalForDelegateInvocation:(double)arg1 ;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(id)textStylingResolution;
-(id)initWithMediaSubtypesForNativeRepresentation:(id)arg1 ;
-(id)initWithDependencyFactory:(id)arg1 mediaSubtypesForNativeRepresentation:(id)arg2 ;
-(void)setTextStylingResolution:(id)arg1 ;
@end

