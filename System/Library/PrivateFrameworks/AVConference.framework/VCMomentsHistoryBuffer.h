/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface VCMomentsHistoryBuffer : NSObject {

	id _delegate;
	int _bufferLength;
	NSMutableArray* _timestampQueue;
	NSMutableDictionary* _sampleMap;
	unsigned _lastTimestamp;

}
-(void)dealloc;
-(id)delegate;
-(void)flushBuffer;
-(id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3 ;
-(int)getCount;
-(opaqueCMSampleBufferRef)getClosestSampleForTimestamp:(unsigned)arg1 ;
-(void)updateBufferWithSample:(opaqueCMSampleBufferRef)arg1 timestamp:(unsigned)arg2 ;
-(void)dequeueOneFrame;
-(unsigned)getUpdatedTimestampWithTimestamp:(unsigned)arg1 ;
-(void)enqueueWithSample:(opaqueCMSampleBufferRef)arg1 timestamp:(unsigned)arg2 ;
@end

