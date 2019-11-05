/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:48 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <locationd/CLStepCountNotifierProtocol.h>

@class NSString;

@interface CLStepCountNotifierAdapter : CLNotifierServiceAdapter <CLStepCountNotifierProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)reset;
-(void)setRawSpeedToKValueBins:(id)arg1 ;
-(void)setStepCadenceToStrideLengthBins:(id)arg1 ;
-(void)beginService;
-(void)endService;
-(void)doAsync:(/*^block*/id)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(CLStepCountNotifier*)adaptee;
-(BOOL)syncgetEnabled;
-(CLStepDistance)syncgetQueryStartTime:(double*)arg1 andStopTime:(double*)arg2 ;
-(id)syncgetDbUUID;
-(int)syncgetQueryPedometerDataSince:(CLStepCountEntry*)arg1 withResponseArray:(vector<CLStepCountEntry, std::__1::allocator<CLStepCountEntry> >*)arg2 ;
-(void)getPedometerBinsAndHistoryWithReply:(/*^block*/id)arg1 ;
-(void)getPedometerCalibrationBins:(long long)arg1 withReply:(/*^block*/id)arg2 ;
-(id)syncgetCopyRawSpeedToKValueBins;
-(id)syncgetCopyStepCadenceToStrideLengthBins;
-(void)strideCalibratorSetSession:(long long)arg1 ;
-(id)syncgetRawSpeedToKValueDefaultBins;
-(id)syncgetStepCadenceToStrideLengthDefaultBins;
-(BOOL)syncgetIsStrideCalibrationConvergedMedianForSpeed:(double)arg1 ;
-(void)resumeCalorimetryAfterPendingStepCountNotifications;
@end
