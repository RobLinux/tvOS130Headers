/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class CMMotionManager;

@interface FigCoreMotionDelegate : NSObject {

	opaque_pthread_mutex_t ringMutex;
	CMMotionManager* motionManager;
	BOOL manageFusedMotion;
	BOOL manageAccel;
	BOOL manageGravity;
	int accelRingIndex;
	float accelRingX[256];
	float accelRingY[256];
	float accelRingZ[256];
	double accelRingTime[256];
	int fusedRingIndex;
	double fusedRingTime[256];
	BOOL fusedRingDoingBiasEstimation[256];
	SCD_Struct_Fi16 fusedRingAccel[256];
	SCD_Struct_Fi17 fusedRingQuaternion[256];
	SCD_Struct_Fi16 fusedRingPosition[256];
	OpaqueFigSemaphoreRef dataSemaphore;
	double latestMotionDataTime;
	double latestGravityDataTime;
	BOOL copyingAllData;
	double dLatestFusedMotionCopied;
	double dLatestTimestamp;
	double dGyroUpdateInterval;
	double timestampLatency;
	double dStartOfLogging;
	BOOL gettingAttitudeChange;
	SCD_Struct_Fi17 previousQuaternion;
	SCD_Struct_Fi17 currentQuaternion;
	BOOL computingPosition;
	SCD_Struct_Fi109 position;
	SCD_Struct_Fi109 velocity;

}
-(id)init;
-(void)dealloc;
-(id)initWithAccelerometer:(BOOL)arg1 gravityZ:(BOOL)arg2 fusedMotion:(BOOL)arg3 accelUpdateInterval:(float)arg4 fusedMotionUpdateInterval:(float)arg5 motionCallbackThreadPriority:(id)arg6 ;
-(void)didUpdatePositionWithAcceleration:(SCD_Struct_Fi16*)arg1 forTimeStamp:(double)arg2 ;
-(void)didUpdateVelocityWithAcceleration:(SCD_Struct_Fi16*)arg1 forTimeStamp:(double)arg2 ;
-(void)didUpdatePositionWithTimeStamp:(double)arg1 ;
-(void)getCurrentDeltaQuaternion:(SCD_Struct_Fi17*)arg1 ;
-(void)updateDeviceCallback:(BOOL)arg1 fusedMotionUpdateInterval:(float)arg2 ;
-(void)updateGyroInterval:(float)arg1 ;
-(void)didUpdateAcceleration:(SCD_Struct_Fi16)arg1 time:(double)arg2 ;
-(void)didUpdateGravity:(SCD_Struct_Fi16)arg1 time:(double)arg2 ;
-(int)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(int)getGravityX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(int)getFusedVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(void)didUpdateFusedMotionWithDeviceMotion:(SCD_Struct_Fi110)arg1 time:(double)arg2 ifsync:(BOOL)arg3 ;
-(id)copyAllFusedMotionData;
-(id)copyNewFusedMotionData;
-(id)copyFusedMotionData:(double)arg1 endTime:(double)arg2 timeoutValue:(double)arg3 errOut:(int*)arg4 ;
-(int)updateCurrentQuaternionForTimeStamp:(double)arg1 ;
-(int)updateCurrentQuaternionForTimeStamps:(double)arg1 withEnd:(double)arg2 ;
-(void)getCurrentQuaternion:(SCD_Struct_Fi17*)arg1 ;
-(void)getCurrentAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3 ;
-(void)getCurrentDeltaAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3 ;
-(void)getPositionX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(int)getLatestMotionDataTime:(double*)arg1 ;
-(BOOL)managingFusedMotion;
-(BOOL)managingAccel;
-(BOOL)managingGravity;
-(BOOL)isCopyingAllData;
@end

