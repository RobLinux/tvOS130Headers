/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/FigCaptureSinkPipeline.h>

@class BWRemoteQueueSinkNode;

@interface FigCaptureRemoteQueueSinkPipeline : FigCaptureSinkPipeline {

	BWRemoteQueueSinkNode* _sinkNode;

}

@property (nonatomic,readonly) BWRemoteQueueSinkNode * sinkNode;              //@synthesize sinkNode=_sinkNode - In the implementation block
-(void)dealloc;
-(void)setSinkNode:(BWRemoteQueueSinkNode *)arg1 ;
-(BWRemoteQueueSinkNode *)sinkNode;
@end

