/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOETAUpdaterDelegate.h>
#import <GeoServices/NSSecureCoding.h>

@class GEODirectionsRequestFeedback, GEOComposedWaypoint, GEOLocation, NSDate, GEORouteHypothesis, GEOETAUpdater, GEOETARoute, GEORouteAttributes, GEOCommonOptions, GEOMapServiceTraits, GEORouteHypothesizerAnalyticsStore, GEOComposedRoute, geo_isolater, GEODirectionsRequest, NSMutableArray, GEORouteMatch, GEOMapRegion, NSString;

@interface GEORouteHypothesisMonitor : NSObject <GEOETAUpdaterDelegate, NSSecureCoding> {

	/*^block*/id _handler;
	GEODirectionsRequestFeedback* _feedback;
	GEOComposedWaypoint* _source;
	GEOComposedWaypoint* _destination;
	GEOLocation* _originLocation;
	int _transportType;
	NSDate* _arrivalDate;
	GEORouteHypothesis* _hypothesis;
	GEOLocation* _lastLocation;
	GEOETAUpdater* _etaUpdater;
	GEOETARoute* _liveETARoute;
	GEOETARoute* _baselineETARoute;
	GEORouteAttributes* _routeAttributes;
	GEOCommonOptions* _commonOptions;
	GEOMapServiceTraits* _traits;
	GEORouteHypothesizerAnalyticsStore* _analyticsStore;
	GEOComposedRoute* _route;
	geo_isolater* _requestIsolater;
	GEODirectionsRequest* _currentRequest;
	BOOL _needReroute;
	NSMutableArray* _rerouteEntries;
	GEORouteMatch* _routeMatch;
	GEOLocation* _lastMatchedLocation;
	BOOL _hasArrived;
	BOOL _isTraveling;
	double _travelScore;
	GEOMapRegion* _arrivalMapRegion;
	NSString* _traceName;

}

@property (nonatomic,readonly) NSString * routeName; 
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) BOOL supportsLiveTraffic; 
@property (nonatomic,readonly) BOOL supportsDirections; 
@property (nonatomic,readonly) GEOComposedWaypoint * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) int transportType;                                  //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                               //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) GEORouteHypothesis * hypothesis;                    //@synthesize hypothesis=_hypothesis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)userPreferencesProvider;
+(void)setUserPreferencesProvider:(id)arg1 ;
+(id)serverFormattedStringFormatter;
+(void)setServerFormattedStringFormatter:(id)arg1 ;
+(id)monitorWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 traceName:(id)arg5 traits:(id)arg6 ;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOComposedWaypoint *)source;
-(void)stopMonitoring;
-(GEOComposedWaypoint *)destination;
-(int)transportType;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(GEODirectionsRequestFeedback *)feedback;
-(NSDate *)arrivalDate;
-(BOOL)supportsLiveTraffic;
-(void)_commonInit;
-(void)cancelCurrentRequest;
-(BOOL)supportsDirections;
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1 ;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2 ;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4 ;
-(void)etaUpdaterRequestCompleted:(id)arg1 ;
-(id)routeMatchForLocation:(id)arg1 ;
-(void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2 ;
-(void)_updateScoreForLocation:(id)arg1 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 traceName:(id)arg5 traits:(id)arg6 ;
-(void)_finishEtaUpdaterInit;
-(void)callHandlerIvar;
-(void)_updateLocation:(id)arg1 allowServer:(BOOL)arg2 ;
-(void)_fetchETAWithRouteMatch:(id)arg1 ;
-(BOOL)_hasInitialRoute;
-(void)checkRouteForLocation:(id)arg1 ;
-(BOOL)_isNavigating;
-(BOOL)_isNavigatingToDestination;
-(void)recordETAUpdatesAfterEventStart;
-(void)_recalculateETAWithRouteMatch:(id)arg1 ;
-(void)_updateRouteMatchETAAndTravelState;
-(void)_showDebugAlert;
-(void)_recievedRouteResponse:(id)arg1 forLocation:(id)arg2 isReroute:(BOOL)arg3 ;
-(void)_executeBlockAccessingCurrentRequest:(/*^block*/id)arg1 ;
-(void)_routeRequestFailed:(id)arg1 ;
-(NSString *)routeName;
-(id)navDestination;
-(void)updateLocation:(id)arg1 allowServer:(BOOL)arg2 hypothesisHandler:(/*^block*/id)arg3 ;
-(void)clientDisplayedUINotification:(unsigned long long)arg1 ;
-(void)travelStateChanged;
-(GEORouteHypothesis *)hypothesis;
@end
