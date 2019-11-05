/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEODirectionsRequester;

@interface GEODirectionService : NSObject {

	GEODirectionsRequester* _directionsRequester;

}

@property (nonatomic,readonly) GEODirectionsRequester * directionsRequester;              //@synthesize directionsRequester=_directionsRequester - In the implementation block
+(id)sharedService;
-(id)init;
-(id)directionsURL;
-(GEODirectionsRequester *)directionsRequester;
-(id)ticketForDrivingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 sessionID:(GEOSessionID)arg7 ;
-(id)ticketForDrivingSearchAlongRoute:(id)arg1 currentLocation:(id)arg2 originalRouteZilchPoints:(id)arg3 originalRouteID:(id)arg4 returnToOriginalDestination:(BOOL)arg5 isReroute:(BOOL)arg6 routeAttributes:(id)arg7 ;
-(id)ticketForWalkingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 sessionID:(GEOSessionID)arg7 ;
-(id)ticketForTransitWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 sessionID:(GEOSessionID)arg7 ;
-(id)ticketForDrivingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 ;
-(id)ticketForDrivingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 originalRequest:(id)arg3 stepIndex:(unsigned long long)arg4 routeAttributes:(id)arg5 originalDirectionsResponseID:(id)arg6 previousRequestTime:(double)arg7 ;
-(id)ticketForDrivingSearchAlongRoute:(id)arg1 currentLocation:(id)arg2 originalRoute:(id)arg3 returnToOriginalDestination:(BOOL)arg4 isReroute:(BOOL)arg5 routeAttributes:(id)arg6 ;
-(id)ticketForDrivingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 ;
-(id)ticketForDrivingDoomFromOrigin:(id)arg1 toDestination:(id)arg2 requestPriority:(id)arg3 routeAttributes:(id)arg4 ;
-(id)ticketForWalkingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 ;
-(id)ticketForWalkingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 routeAttributes:(id)arg4 originalDirectionsResponseID:(id)arg5 previousRequestTime:(double)arg6 ;
-(id)ticketForWalkingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 ;
-(id)ticketForTransitWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 ;
-(id)ticketForTransitRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 routeAttributes:(id)arg4 originalDirectionsResponseID:(id)arg5 previousRequestTime:(double)arg6 ;
-(id)ticketForTransitRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 ;
@end
