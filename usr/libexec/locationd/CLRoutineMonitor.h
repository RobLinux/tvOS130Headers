/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:46 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <LocationSupport/CLIntersiloService.h>
#import <locationd/NSXPCListenerDelegate.h>
#import <locationd/CLLocationManagerRoutineServerInterface.h>
#import <locationd/CLRoutineMonitorServiceProtocol.h>

@protocol OS_dispatch_source;
@class NSObject, NSXPCConnection, NSMutableArray, CLLocation, NSXPCListener, RTRoutineManager, NSMutableSet, NSMutableDictionary, NSString;

@interface CLRoutineMonitor : CLIntersiloService <NSXPCListenerDelegate, CLLocationManagerRoutineServerInterface, CLRoutineMonitorServiceProtocol> {

	NSObject*<OS_dispatch_source> _wakeRoutinedTimer;
	CLServiceLocationProvider* _serviceLocationProvider;
	unique_ptr<CLServiceLocationProvider_Type::Client, std::__1::default_delete<CLServiceLocationProvider_Type::Client> >* _serviceLocationClient;
	unique_ptr<CLClientManager_Type::Client, std::__1::default_delete<CLClientManager_Type::Client> >* _clientManagerClient;
	unique_ptr<CLFilteredLocationController_Type::Client, std::__1::default_delete<CLFilteredLocationController_Type::Client> >* _filteredLocationClient;
	unique_ptr<CLWifiService_Type::Client, std::__1::default_delete<CLWifiService_Type::Client> >* _wifiServiceClient;
	unique_ptr<CLLocationAwarenessProvider_Type::Client, std::__1::default_delete<CLLocationAwarenessProvider_Type::Client> >* _awarenessClient;
	RegInfo _awarenessRegInfo;
	BOOL _updating;
	BOOL _updatingPredictedApplications;
	BOOL _authorized;
	BOOL _armed;
	BOOL _diminishedMode;
	NSXPCConnection* _connection;
	NSMutableArray* _locations;
	CLLocation* _lastLocation;
	NSXPCListener* _listener;
	RTRoutineManager* _routineManager;
	NSMutableSet* _visitClients;
	NSMutableSet* _leechClients;
	NSMutableSet* _lowConfidenceVisitLeechClients;
	NSMutableDictionary* _scenarioTriggerClients;

}

@property (nonatomic,retain) NSXPCConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;                                 //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocation;                                  //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                   //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) BOOL updating;                                              //@synthesize updating=_updating - In the implementation block
@property (assign,nonatomic) BOOL updatingPredictedApplications;                         //@synthesize updatingPredictedApplications=_updatingPredictedApplications - In the implementation block
@property (assign,nonatomic) BOOL authorized;                                            //@synthesize authorized=_authorized - In the implementation block
@property (assign,nonatomic) BOOL armed;                                                 //@synthesize armed=_armed - In the implementation block
@property (assign,nonatomic) BOOL diminishedMode;                                        //@synthesize diminishedMode=_diminishedMode - In the implementation block
@property (nonatomic,retain) RTRoutineManager * routineManager;                          //@synthesize routineManager=_routineManager - In the implementation block
@property (nonatomic,retain) NSMutableSet * visitClients;                                //@synthesize visitClients=_visitClients - In the implementation block
@property (nonatomic,retain) NSMutableSet * leechClients;                                //@synthesize leechClients=_leechClients - In the implementation block
@property (nonatomic,retain) NSMutableSet * lowConfidenceVisitLeechClients;              //@synthesize lowConfidenceVisitLeechClients=_lowConfidenceVisitLeechClients - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * scenarioTriggerClients;               //@synthesize scenarioTriggerClients=_scenarioTriggerClients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(id)bundlePath;
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSXPCListener *)listener;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSXPCConnection *)connection;
-(void)flush;
-(NSMutableArray *)locations;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)beginService;
-(void)endService;
-(void)addLocation:(id)arg1 ;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(CLLocation *)lastLocation;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(BOOL)updating;
-(void)setUpdating:(BOOL)arg1 ;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(BOOL)authorized;
-(void)fetchStoredVisitsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setAuthorized:(BOOL)arg1 ;
-(void)getStoredLocationsBetweenStartTime:(double)arg1 endTime:(double)arg2 apartFromEachOther:(double)arg3 lyingWithinTimeIntervals:(id)arg4 withReply:(/*^block*/id)arg5 ;
-(void)setArmed:(BOOL)arg1 ;
-(void)startMonitoringVisitsForClient:(R)arg1 :(id)arg2 ;
-(void)stopMonitoringVisitsForClient:(R)arg1 :(id)arg2 ;
-(BOOL)armed;
-(void)onClientManagerNotification:(int)arg1 data:(NotificationData)arg2 ;
-(void)fetchRoutineModeFromLocation:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchPlaceInferencesWithOptions:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchRecentLocationsOfInterestWithReply:(/*^block*/id)arg1 ;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withReply:(/*^block*/id)arg4 ;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 forClient:(R)arg2 :(id)arg3 ;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 forClient:(R)arg2 :(id)arg3 ;
-(void)zipperedStoredLocationsBetweenStartTime:(double)arg1 endTime:(double)arg2 apartFromEachOther:(double)arg3 lyingWithinTimeIntervals:(id)arg4 custeredWithVisits:(id)arg5 withReply:(/*^block*/id)arg6 ;
-(void)onWakeRoutinedTimer;
-(void)setVisitClients:(NSMutableSet *)arg1 ;
-(void)setLeechClients:(NSMutableSet *)arg1 ;
-(void)setLowConfidenceVisitLeechClients:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)scenarioTriggerClients;
-(void)setScenarioTriggerClients:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)visitClients;
-(void)checkDiminishedMode;
-(NSMutableSet *)leechClients;
-(NSMutableSet *)lowConfidenceVisitLeechClients;
-(void)sendLocations;
-(void)checkAuthorization;
-(BOOL)diminishedMode;
-(void)startWakeRoutinedTimer;
-(void)stopWakeRoutinedTimer;
-(void)setDiminishedMode:(BOOL)arg1 ;
-(void)onLocationNotification:(int)arg1 data:(NotificationData*)arg2 ;
-(BOOL)updatingPredictedApplications;
-(void)setUpdatingPredictedApplications:(BOOL)arg1 ;
-(void)startLeechingVisitsForClient:(R)arg1 :(id)arg2 ;
-(void)startLeechingLowConfidenceVisitsForClient:(R)arg1 :(id)arg2 ;
-(void)stopLeechingVisitsForClient:(R)arg1 :(id)arg2 ;
-(void)stopLeechingLowConfidenceVisitsForClient:(R)arg1 :(id)arg2 ;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(/*^block*/id)arg3 ;
@end

