/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject, VCPFaceTimeSession, NSMutableArray;

@interface VCPVideoChatAnalysis : NSObject {

	NSObject*<OS_dispatch_queue> _detectionQueue;
	VCPFaceTimeSession* _faceTimeSession;
	NSMutableArray* _faces;
	BOOL _finished;

}
+(id)videoChatAnalysis;
-(id)init;
-(int)detectFaces:(CVBufferRef)arg1 ;
-(void)checkAddFaces;
-(int)analyzeFrame:(CVBufferRef)arg1 ;
-(BOOL)persistAnalysis;
@end

