/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HomeKitDaemon/HMDBatchLocationDelegate.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver.h>
#import <HomeKitDaemon/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class CLLocation, NSTimeZone, NSString, NSObject, HMFMessageDispatcher, HMDHome, NSDate, CLRegion, HMDHomeLocationData, NSUUID, NSSet;

@interface HMDHomeLocationHandler : HMFObject <HMDBatchLocationDelegate, HMDHomeMessageReceiver, NSSecureCoding> {

	int _locationAuthorization;
	CLLocation* _location;
	NSTimeZone* _timeZone;
	NSString* _isoCountryCode;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDHome* _home;
	NSDate* _locationUpdateTimestamp;
	CLRegion* _region;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSDate * locationUpdateTimestamp;                                //@synthesize locationUpdateTimestamp=_locationUpdateTimestamp - In the implementation block
@property (assign,nonatomic) int locationAuthorization;                                       //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (nonatomic,retain) CLRegion * region;                                               //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSString * isoCountryCode;                                       //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                           //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                           //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) HMDHomeLocationData * locationData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
+(BOOL)mergeLocationDataForLocalHome:(id)arg1 withCloudHome:(id)arg2 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)isoCountryCode;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(CLRegion *)region;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setRegion:(CLRegion *)arg1 ;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHomeLocationData *)locationData;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(int)locationAuthorization;
-(void)setLocationAuthorization:(int)arg1 ;
-(id)messageDestination;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 ;
-(void)accessoryAdded;
-(void)accessoriesBecomeReachable;
-(void)accessoriesBecomeUnreachable;
-(void)runTransactionWithLocation:(id)arg1 updateTime:(id)arg2 ;
-(id)_handleHomeLocationData:(id)arg1 message:(id)arg2 ;
-(void)didDetermineState:(long long)arg1 forRegion:(id)arg2 ;
-(void)didDetermineLocation:(id)arg1 ;
-(void)_handleLocationAuthorizationChangedNotification:(id)arg1 ;
-(void)didDetermineBatchLocation:(id)arg1 ;
-(void)getReachableIPAccessory:(unsigned long long*)arg1 btleAccessory:(unsigned long long*)arg2 mediaAccessory:(unsigned long long*)arg3 ;
-(NSDate *)locationUpdateTimestamp;
-(void)setLocationUpdateTimestamp:(NSDate *)arg1 ;
-(void)_updateTimeZone:(id)arg1 ;
-(void)_handleLocationAuthorization:(int)arg1 ;
-(void)_handleRetrieveLocation:(id)arg1 ;
-(void)_registerForRegionUpdate;
-(BOOL)_canExtractBatchLocations;
-(BOOL)_needToExtractBatchLocations;
-(BOOL)isDate:(id)arg1 laterThanDate:(id)arg2 ;
-(BOOL)isLocation:(id)arg1 closeToLocation:(id)arg2 ;
-(void)_sendLocationUpdate;
-(void)_evaluateHomeRegionStateForCurrentDeviceLocation:(id)arg1 ;
@end

