/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, SignpostRenderServerRenderInterval, SignpostHIDLatencyInterval, SignpostFrameLatencyInterval;

@interface SignpostFrameAccumulatedState : NSObject {

	unsigned _frameSeed;
	NSMutableDictionary* _contextIDtoContextInfoDict;
	SignpostRenderServerRenderInterval* _renderInterval;
	SignpostHIDLatencyInterval* _hidLatency;
	SignpostFrameLatencyInterval* _frameLatency;

}

@property (nonatomic,readonly) unsigned frameSeed;                                             //@synthesize frameSeed=_frameSeed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contextIDtoContextInfoDict;                 //@synthesize contextIDtoContextInfoDict=_contextIDtoContextInfoDict - In the implementation block
@property (nonatomic,retain) SignpostRenderServerRenderInterval * renderInterval;              //@synthesize renderInterval=_renderInterval - In the implementation block
@property (nonatomic,retain) SignpostHIDLatencyInterval * hidLatency;                          //@synthesize hidLatency=_hidLatency - In the implementation block
@property (nonatomic,retain) SignpostFrameLatencyInterval * frameLatency;                      //@synthesize frameLatency=_frameLatency - In the implementation block
-(id)initWithFrameSeed:(unsigned)arg1 ;
-(unsigned)frameSeed;
-(NSMutableDictionary *)contextIDtoContextInfoDict;
-(void)setContextIDtoContextInfoDict:(NSMutableDictionary *)arg1 ;
-(SignpostRenderServerRenderInterval *)renderInterval;
-(void)setRenderInterval:(SignpostRenderServerRenderInterval *)arg1 ;
-(SignpostHIDLatencyInterval *)hidLatency;
-(void)setHidLatency:(SignpostHIDLatencyInterval *)arg1 ;
-(SignpostFrameLatencyInterval *)frameLatency;
-(void)setFrameLatency:(SignpostFrameLatencyInterval *)arg1 ;
@end

