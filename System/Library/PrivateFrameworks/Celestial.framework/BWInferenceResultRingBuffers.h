/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableDictionary;

@interface BWInferenceResultRingBuffers : NSObject {

	OpaqueFigSimpleMutexRef _lock;
	NSMutableDictionary* _rings;

}
-(id)init;
-(void)dealloc;
-(void)insertInferenceResultsFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setupRingBuffer:(int)arg1 inferencesOfType:(int)arg2 ;
-(id)retrieveInferencesForType:(int)arg1 beginning:(SCD_Struct_BW2)arg2 until:(SCD_Struct_BW2)arg3 ;
-(void)bufferingStatsForType:(int)arg1 firstOut:(SCD_Struct_BW2*)arg2 lastOut:(SCD_Struct_BW2*)arg3 countOut:(int*)arg4 ;
@end

