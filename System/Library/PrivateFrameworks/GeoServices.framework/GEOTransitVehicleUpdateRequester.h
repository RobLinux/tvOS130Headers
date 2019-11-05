/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapServiceTicket;
#import <GeoServices/GeoServices-Structs.h>
@class NSHashTable, NSMutableSet, NSTimer;

@interface GEOTransitVehicleUpdateRequester : NSObject {

	os_unfair_lock_s _updatersLock;
	NSHashTable* _updaters;
	os_unfair_lock_s _processedTripIdsLock;
	NSMutableSet* _processedTripIds;
	os_unfair_lock_s _inflightTripIdsLock;
	NSMutableSet* _inflightTripIds;
	id<GEOMapServiceTicket> _ticket;
	NSTimer* _updateTimer;
	double _requestInterval;
	unsigned long long _maxRetries;
	unsigned long long _numRetries;

}

@property (nonatomic,readonly) NSHashTable * updaters;                       //@synthesize updaters=_updaters - In the implementation block
@property (nonatomic,readonly) NSMutableSet * processedTripIds;              //@synthesize processedTripIds=_processedTripIds - In the implementation block
+(id)sharedInstance;
-(id)initPrivate;
-(void)_cancelRequestIfNeeded;
-(void)_cancelUpdateTimer;
-(void)_processTripIds;
-(void)_removeTripIdsIfApplicable:(id)arg1 ;
-(void)_scheduleUpdateTimerWithInterval:(double)arg1 ;
-(id)_tripIdsForUpdaters:(id)arg1 filteredTripIDs:(BOOL*)arg2 ;
-(void)_sendRequestForTripIds:(id)arg1 ;
-(void)_handleMapItems:(id)arg1 error:(id)arg2 forTripIDs:(id)arg3 ;
-(void)_purgeAllObjects;
-(void)registerVehicleUpdater:(id)arg1 ;
-(void)unregisterVehicleUpdater:(id)arg1 ;
-(NSHashTable *)updaters;
-(NSMutableSet *)processedTripIds;
-(void)mockProcessedIds:(id)arg1 ;
@end

