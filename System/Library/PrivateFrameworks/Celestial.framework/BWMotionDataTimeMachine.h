/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, NSArray;

@interface BWMotionDataTimeMachine : NSObject {

	NSMutableArray* _cache;
	NSArray* _motionMetadataKeys;
	NSArray* _sampleBufferAttachmentKeys;
	unsigned long long _earliestAvailableMotionDataSerialNumber;
	unsigned long long _latestAvailableMotionDataSerialNumber;
	unsigned long long _capacity;
	BOOL _synchronizedSlaveMotionDataCachingEnabled;
	BOOL _cacheEntireMetadataDictionary;
	OpaqueFigSimpleMutexRef _propertyMutex;

}

@property (readonly) BOOL synchronizedSlaveMotionDataCachingEnabled; 
@property (readonly) unsigned long long earliestAvailableMotionDataSerialNumber; 
@property (readonly) unsigned long long latestAvailableMotionDataSerialNumber; 
+(void)initialize;
-(void)dealloc;
-(id)copyMotionDataForStartingSerialNumber:(unsigned long long)arg1 endingSerialNumber:(unsigned long long)arg2 ;
-(id)copyMotionDataForSerialNumber:(unsigned long long)arg1 ;
-(unsigned long long)earliestAvailableMotionDataSerialNumber;
-(unsigned long long)latestAvailableMotionDataSerialNumber;
-(BOOL)synchronizedSlaveMotionDataCachingEnabled;
-(unsigned long long)addMotionDataToCacheForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 synchronizedSlaveMotionDataCachingEnabled:(BOOL)arg2 cacheEntireMetadataDictionary:(BOOL)arg3 ;
-(id)_copyMotionDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

