/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFaceDetector.h>

@class NSMutableArray, NSString;

@interface BWDetectedFacesRingBuffer : NSObject <BWFaceDetector> {

	NSMutableArray* _ringBuffer;
	OpaqueFigSimpleMutexRef _mutex;
	int _depth;
	int _numConsecutiveFramesWithFaces;
	SCD_Struct_BW2 _lastUpdatePTS;
	SCD_Struct_BW2 _lastStableFacePTS;

}

@property (readonly) id<BWFaceDetector> faceDetector; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) float secondsSinceLastFaceDetected; 
-(void)dealloc;
-(void)flush;
-(id<BWFaceDetector>)faceDetector;
-(id)initWithDepth:(int)arg1 ;
-(void)transferFacesToSampleBuffer:(opaqueCMSampleBufferRef)arg1 totalSensorCropRect:(CGRect)arg2 ;
-(void)addFacesFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)getFaceRects:(CGRect*)arg1 maxCount:(int)arg2 forPTS:(SCD_Struct_BW2)arg3 ;
-(float)secondsSinceLastFaceDetected;
@end

