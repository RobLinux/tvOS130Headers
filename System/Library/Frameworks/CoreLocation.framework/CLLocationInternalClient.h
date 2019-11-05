/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class NSXPCConnection;

@interface CLLocationInternalClient : NSObject {

	NSXPCConnection* _connection;

}
+(id)sharedServiceClient;
-(unsigned char)performMigration;
-(void)setGestureServiceEnabled:(unsigned char)arg1 ;
-(void)notifyPassKitPayment:(id)arg1 transaction:(id)arg2 info:(id)arg3 ;
-(void)notifyWeatherForecast:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 ;
-(id)synchronousRemoteObject;
-(unsigned char)setAuthorizationStatus:(unsigned char)arg1 withCorrectiveCompensation:(unsigned char)arg2 forBundleID:(const CFStringRef)arg3 orBundlePath:(const CFStringRef)arg4 ;
-(unsigned char)clearLocationAuthorizations;
-(id)getArchivedAuthorizationDecisionsWithError:(id*)arg1 ;
-(id)applyArchivedAuthorizationDecisions:(id)arg1 ;
-(const CFDictionaryRef)copyAppsUsingLocation;
-(const CFArrayRef)copyTechnologiesInUse;
-(void)setLocationDefaultForKey:(const CFStringRef)arg1 value:(const void*)arg2 ;
-(const void*)getLocationDefaultForKey:(const CFStringRef)arg1 ;
-(id)timeZoneAtLocation:(id)arg1 ;
-(void)setPrivateMode:(unsigned char)arg1 ;
-(unsigned char)getPrivateMode;
-(unsigned char)pingDaemon;
-(void)setLocationServicesEnabled:(unsigned char)arg1 ;
-(unsigned char)getLocationServicesEnabled:(char*)arg1 ;
-(id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)arg1 ;
-(unsigned char)getAuthorizationPromptMapDisplayEnabled:(char*)arg1 ;
-(unsigned char)getGestureServiceEnabled:(char*)arg1 ;
-(unsigned char)getAuthorizationStatus:(int*)arg1 forBundleID:(const CFStringRef)arg2 orBundlePath:(const CFStringRef)arg3 ;
-(unsigned char)shutdownDaemon;
-(unsigned char)displayStatistics;
-(unsigned char)dumpLogs:(const CFStringRef)arg1 ;
-(const CFDictionaryRef)copyMonitoredRegionsForBundleIdentifier:(const CFStringRef)arg1 orBundlePath:(const CFStringRef)arg2 ;
-(BOOL)checkAndExerciseAuthorizationForBundleID:(id)arg1 orBundlePath:(id)arg2 services:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned char)getLocationForBundleID:(const CFStringRef)arg1 orBundlePath:(const CFStringRef)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(SCD_Struct_CL15*)arg5 ;
-(void)setMapMatchingRouteHint:(SCD_Struct_CL16*)arg1 count:(int)arg2 routingType:(int)arg3 ;
-(unsigned char)copyLastLog;
-(unsigned char)setStatusBarIconEnabled:(BOOL)arg1 forEntityClass:(unsigned)arg2 ;
-(unsigned char)getStatusBarIconEnabled:(BOOL*)arg1 forEntityClass:(unsigned)arg2 ;
-(int)getStatusBarIconState;
-(id)getPipelinedCache;
-(BOOL)startStopAdvertisingBeacon:(id)arg1 power:(id)arg2 ;
-(unsigned char)getGyroCalibrationDatabaseBiasFit:(SCD_Struct_CL20*)arg1 atTemperature:(float)arg2 ;
-(unsigned char)insertGyroCalibrationDatabaseBiasEstimateIfValid:(SCD_Struct_CL17)arg1 temperature:(float)arg2 variance:(SCD_Struct_CL17)arg3 timestamp:(double)arg4 ;
-(unsigned char)gyroCalibrationDatabaseWipe;
-(unsigned char)getGyroCalibrationDatabaseNumTemperatures:(int*)arg1 ;
-(unsigned char)compassCalibrationDatabaseGetBias:(SCD_Struct_CL21*)arg1 magneticField:(SCD_Struct_CL17)arg2 acceleration:(SCD_Struct_CL17)arg3 ;
-(unsigned char)compassCalibrationDatabaseSetBias:(SCD_Struct_CL17)arg1 magneticField:(SCD_Struct_CL17)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5 ;
-(unsigned char)configure:(SCD_Struct_CL22)arg1 ;
-(unsigned char)getControlPlaneStatusReportClear:(int)arg1 startTime:(double*)arg2 endTime:(double*)arg3 latitude:(double*)arg4 longitude:(double*)arg5 altitude:(double*)arg6 accuracy:(double*)arg7 status:(unsigned*)arg8 ;
-(id)getMotionSensorLogs;
-(id)getAccessoryMotionSensorLogs;
-(const CFArrayRef)copyActivityAlarms;
-(unsigned char)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(unsigned char)arg2 forBundleID:(const CFStringRef)arg3 orBundlePath:(const CFStringRef)arg4 ;
-(unsigned char)setTemporaryAuthorizationGranted:(unsigned char)arg1 forBundleID:(const CFStringRef)arg2 orBundlePath:(const CFStringRef)arg3 ;
-(unsigned char)setBackgroundIndicatorForBundleID:(const CFStringRef)arg1 orBundlePath:(const CFStringRef)arg2 enabled:(unsigned char)arg3 ;
-(unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int*)arg1 ;
-(unsigned char)timeSyncMachTimeStamp:(unsigned long long*)arg1 oscarTimeStamp:(unsigned long long*)arg2 ;
@end

