/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCImageQueue : NSObject {

	CAImageQueueRef _caQueue;
	OpaqueFigImageQueueRef _figQueue;
	opaque_pthread_mutex_t _enqueueLock;
	unsigned _slot;
	unsigned _frameRate;
	BOOL _imageQueueProtected;
	BOOL _isLowLatencyEnabled;
	long long _streamToken;
	unsigned _enqueuedFrameCount;

}

@property (assign) unsigned frameRate;                                                       //@synthesize frameRate=_frameRate - In the implementation block
@property (assign) BOOL imageQueueProtected; 
@property (assign) long long streamToken;                                                    //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,getter=isLowLatencyEnabled,nonatomic) BOOL lowLatencyEnabled;              //@synthesize isLowLatencyEnabled=_isLowLatencyEnabled - In the implementation block
+(id)drawingContext;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)pause;
-(unsigned)frameRate;
-(void)setFrameRate:(unsigned)arg1 ;
-(long long)streamToken;
-(void)setStreamToken:(long long)arg1 ;
-(id)initWithFrameRate:(unsigned char)arg1 imageQueueProtected:(BOOL)arg2 ;
-(id)initWithFrameRate:(unsigned char)arg1 ;
-(unsigned)setVideoDestination:(id)arg1 ;
-(void)getQueueRepresentation:(void*)arg1 ;
-(void)copyPerformanceDictionary:(const _CFDictionary*)arg1 ;
-(void)createAndCopyLatencyStatsDictionary:(const _CFDictionary*)arg1 ;
-(BOOL)enqueueFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_AV75)arg2 ;
-(BOOL)imageQueueProtected;
-(void)setImageQueueProtected:(BOOL)arg1 ;
-(BOOL)isLowLatencyEnabled;
-(void)setLowLatencyEnabled:(BOOL)arg1 ;
@end

