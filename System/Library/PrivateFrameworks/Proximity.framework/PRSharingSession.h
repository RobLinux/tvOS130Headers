/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Proximity/Proximity-Structs.h>
#import <Proximity/PRProximityEstimatorDelegate.h>
#import <Proximity/PRBeaconDelegate.h>

@protocol OS_os_log, OS_dispatch_queue, PRSharingSessionDelegate;
@class NSObject, NSSet, NSMutableDictionary, PRProximityEstimator, PRBeacon, NSData, NSArray, NSSortDescriptor, NSString;

@interface PRSharingSession : NSObject <PRProximityEstimatorDelegate, PRBeaconDelegate> {

	BOOL _currentlyInitiating;
	NSObject*<OS_os_log> _logger;
	NSSet* _contacts;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableDictionary* _trackedBTPeers;
	NSMutableDictionary* _trackedBTPeersDevice;
	PRProximityEstimator* _btProxEstimator;
	PRBeacon* _nearbyDaemonSession;
	BOOL _needToRestart;
	NSMutableDictionary* _scores;
	double _lastScoreReportMachContinuousTime;
	double _lastBigHeadFirstReportTime;
	NSData* _lastBigHeadMacAddress;
	NSArray* _lastReportedScores;
	SharingImportanceMeasurements* _measurements;
	BOOL _useRegionBasedEstimator;
	NSSortDescriptor* _scoreSortDescriptor;
	double _halfPointingAngleDegrees;
	BOOL _outputScoreCalculatedWithAngle;
	unique_ptr<SharingImportanceManager, std::__1::default_delete<SharingImportanceManager> >* _estimatorRangeOnly;
	unique_ptr<SharingImportanceManager, std::__1::default_delete<SharingImportanceManager> >* _estimatorRangeAndAngle;
	/*^block*/id _reportWatchdog;
	id<PRSharingSessionDelegate> _delegate;

}

@property (__weak) id<PRSharingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)NSDataMacToUUID:(id)arg1 ;
+(id)UUIDToNSDataMac:(id)arg1 len:(unsigned long long)arg2 ;
+(id)UUIDStringToNSDataMac:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 len:(unsigned long long)arg2 ;
+(id)HexStringToNSDataMac:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
+(id)convertMacStringToNSData:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
+(id)reverseNSData:(id)arg1 ;
+(unsigned long long)NSDataToUInt64:(id)arg1 ;
+(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)UIntToHexString:(unsigned long long)arg1 len:(unsigned long long)arg2 ;
-(id)init;
-(id<PRSharingSessionDelegate>)delegate;
-(void)setDelegate:(id<PRSharingSessionDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)didFailWithError:(id)arg1 ;
-(void)updateScoresForTime:(double)arg1 ;
-(void)reportScoresToClientAlways:(BOOL)arg1 ;
-(void)startWatchDogWithDuration:(long long)arg1 ;
-(void)watchDogTimedOut;
-(void)stopProx;
-(BOOL)trackNewBTPeer:(id)arg1 withDviceModel:(id)arg2 error:(id*)arg3 ;
-(void)logScores:(id)arg1 ;
-(void)invokeDelegateBlock:(/*^block*/id)arg1 ;
-(long long)CoarseRangeToProx:(int)arg1 ;
-(id)ProxToString:(long long)arg1 ;
-(int)ProxToCoarseRange:(long long)arg1 ;
-(void)updateScoresWithNewMeasurement:(const NeighborMeasurements*)arg1 ;
-(void)startInitiating;
-(void)estimator:(id)arg1 didEstimateProximity:(long long)arg2 toPeer:(id)arg3 ;
-(void)beacon:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)beacon:(id)arg1 didFailWithError:(id)arg2 ;
-(void)beacon:(id)arg1 didOutputRangeResults:(id)arg2 ;
-(void)stopInitiating;
-(BOOL)addRssiSample:(double)arg1 channel:(unsigned)arg2 forPeer:(id)arg3 peerDeviceModel:(id)arg4 withError:(id*)arg5 ;
@end
