/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, GEOJunctionViewGuidanceFeedback, NSData, GEOSignGuidanceFeedback, GEOSpokenGuidanceFeedback;

@interface GEOGuidanceEventFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	GEOJunctionViewGuidanceFeedback* _junctionViewGuidanceFeedback;
	NSData* _routeID;
	GEOSignGuidanceFeedback* _signGuidanceFeedback;
	GEOSpokenGuidanceFeedback* _spokenGuidanceFeedback;
	float _distanceToManeuver;
	float _duration;
	unsigned _enrouteNoticeIndex;
	unsigned _eventIndex;
	unsigned _stepID;
	float _timeToManeuver;
	int _trafficSpeed;
	float _vehicleSpeed;
	struct {
		unsigned has_distanceToManeuver : 1;
		unsigned has_duration : 1;
		unsigned has_enrouteNoticeIndex : 1;
		unsigned has_eventIndex : 1;
		unsigned has_stepID : 1;
		unsigned has_timeToManeuver : 1;
		unsigned has_trafficSpeed : 1;
		unsigned has_vehicleSpeed : 1;
		unsigned read_junctionViewGuidanceFeedback : 1;
		unsigned read_routeID : 1;
		unsigned read_signGuidanceFeedback : 1;
		unsigned read_spokenGuidanceFeedback : 1;
		unsigned wrote_junctionViewGuidanceFeedback : 1;
		unsigned wrote_routeID : 1;
		unsigned wrote_signGuidanceFeedback : 1;
		unsigned wrote_spokenGuidanceFeedback : 1;
		unsigned wrote_distanceToManeuver : 1;
		unsigned wrote_duration : 1;
		unsigned wrote_enrouteNoticeIndex : 1;
		unsigned wrote_eventIndex : 1;
		unsigned wrote_stepID : 1;
		unsigned wrote_timeToManeuver : 1;
		unsigned wrote_trafficSpeed : 1;
		unsigned wrote_vehicleSpeed : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
@property (assign,nonatomic) BOOL hasEnrouteNoticeIndex; 
@property (assign,nonatomic) unsigned enrouteNoticeIndex; 
@property (assign,nonatomic) BOOL hasEventIndex; 
@property (assign,nonatomic) unsigned eventIndex; 
@property (assign,nonatomic) BOOL hasDistanceToManeuver; 
@property (assign,nonatomic) float distanceToManeuver; 
@property (assign,nonatomic) BOOL hasTimeToManeuver; 
@property (assign,nonatomic) float timeToManeuver; 
@property (assign,nonatomic) BOOL hasVehicleSpeed; 
@property (assign,nonatomic) float vehicleSpeed; 
@property (assign,nonatomic) BOOL hasTrafficSpeed; 
@property (assign,nonatomic) int trafficSpeed; 
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) float duration; 
@property (nonatomic,readonly) BOOL hasSignGuidanceFeedback; 
@property (nonatomic,retain) GEOSignGuidanceFeedback * signGuidanceFeedback; 
@property (nonatomic,readonly) BOOL hasSpokenGuidanceFeedback; 
@property (nonatomic,retain) GEOSpokenGuidanceFeedback * spokenGuidanceFeedback; 
@property (nonatomic,readonly) BOOL hasJunctionViewGuidanceFeedback; 
@property (nonatomic,retain) GEOJunctionViewGuidanceFeedback * junctionViewGuidanceFeedback; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(NSData *)routeID;
-(void)readAll:(BOOL)arg1 ;
-(void)_readRouteID;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(void)setStepID:(unsigned)arg1 ;
-(unsigned)stepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(unsigned)enrouteNoticeIndex;
-(void)_readSignGuidanceFeedback;
-(void)_readSpokenGuidanceFeedback;
-(void)_readJunctionViewGuidanceFeedback;
-(GEOSignGuidanceFeedback *)signGuidanceFeedback;
-(GEOSpokenGuidanceFeedback *)spokenGuidanceFeedback;
-(GEOJunctionViewGuidanceFeedback *)junctionViewGuidanceFeedback;
-(void)setSignGuidanceFeedback:(GEOSignGuidanceFeedback *)arg1 ;
-(void)setSpokenGuidanceFeedback:(GEOSpokenGuidanceFeedback *)arg1 ;
-(void)setJunctionViewGuidanceFeedback:(GEOJunctionViewGuidanceFeedback *)arg1 ;
-(void)setEnrouteNoticeIndex:(unsigned)arg1 ;
-(void)setHasEnrouteNoticeIndex:(BOOL)arg1 ;
-(BOOL)hasEnrouteNoticeIndex;
-(unsigned)eventIndex;
-(void)setEventIndex:(unsigned)arg1 ;
-(void)setHasEventIndex:(BOOL)arg1 ;
-(BOOL)hasEventIndex;
-(float)distanceToManeuver;
-(void)setDistanceToManeuver:(float)arg1 ;
-(void)setHasDistanceToManeuver:(BOOL)arg1 ;
-(BOOL)hasDistanceToManeuver;
-(float)timeToManeuver;
-(void)setTimeToManeuver:(float)arg1 ;
-(void)setHasTimeToManeuver:(BOOL)arg1 ;
-(BOOL)hasTimeToManeuver;
-(float)vehicleSpeed;
-(void)setVehicleSpeed:(float)arg1 ;
-(void)setHasVehicleSpeed:(BOOL)arg1 ;
-(BOOL)hasVehicleSpeed;
-(int)trafficSpeed;
-(void)setTrafficSpeed:(int)arg1 ;
-(void)setHasTrafficSpeed:(BOOL)arg1 ;
-(BOOL)hasTrafficSpeed;
-(id)trafficSpeedAsString:(int)arg1 ;
-(int)StringAsTrafficSpeed:(id)arg1 ;
-(BOOL)hasSignGuidanceFeedback;
-(BOOL)hasSpokenGuidanceFeedback;
-(BOOL)hasJunctionViewGuidanceFeedback;
@end

