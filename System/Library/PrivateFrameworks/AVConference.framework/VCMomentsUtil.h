/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCMomentsUtil : NSObject
+(OpaqueVTPixelTransferSessionRef)allocTransferSession;
+(CVBufferRef)createResizeFrame:(CVBufferRef)arg1 transferSession:(OpaqueVTPixelTransferSessionRef)arg2 bufferPool:(CVPixelBufferPoolRef)arg3 ;
+(int)setupBufferPool:(_CVPixelBufferPool*)arg1 width:(double)arg2 height:(double)arg3 ;
+(BOOL)pixelBufferPool:(CVPixelBufferPoolRef)arg1 matchesWidth:(int)arg2 height:(int)arg3 ;
@end

