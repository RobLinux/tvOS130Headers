/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, GEOLocation, NSData, GEOLatLng, NSArray;

@interface GEOCompanionRouteStatus : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	SCD_Struct_GE20* _selectedRideIndexs;
	GEOLocation* _location;
	NSData* _routeID;
	GEOLatLng* _routeMatchCoordinate;
	double _timestamp;
	unsigned _distanceRemainingOnRoute;
	unsigned _distanceToManeuver;
	unsigned _distanceToRoute;
	int _feedbackType;
	int _hapticsType;
	unsigned _remainingTime;
	unsigned _routeLocationIndex;
	float _routeLocationOffset;
	unsigned _stepID;
	BOOL _guidancePromptsEnabled;
	BOOL _isConnectedToCarplay;
	BOOL _lowGuidanceNavigation;
	struct {
		unsigned has_timestamp : 1;
		unsigned has_distanceRemainingOnRoute : 1;
		unsigned has_distanceToManeuver : 1;
		unsigned has_distanceToRoute : 1;
		unsigned has_feedbackType : 1;
		unsigned has_hapticsType : 1;
		unsigned has_remainingTime : 1;
		unsigned has_routeLocationIndex : 1;
		unsigned has_routeLocationOffset : 1;
		unsigned has_stepID : 1;
		unsigned has_guidancePromptsEnabled : 1;
		unsigned has_isConnectedToCarplay : 1;
		unsigned has_lowGuidanceNavigation : 1;
		unsigned read_selectedRideIndexs : 1;
		unsigned read_location : 1;
		unsigned read_routeID : 1;
		unsigned read_routeMatchCoordinate : 1;
		unsigned wrote_selectedRideIndexs : 1;
		unsigned wrote_location : 1;
		unsigned wrote_routeID : 1;
		unsigned wrote_routeMatchCoordinate : 1;
		unsigned wrote_timestamp : 1;
		unsigned wrote_distanceRemainingOnRoute : 1;
		unsigned wrote_distanceToManeuver : 1;
		unsigned wrote_distanceToRoute : 1;
		unsigned wrote_feedbackType : 1;
		unsigned wrote_hapticsType : 1;
		unsigned wrote_remainingTime : 1;
		unsigned wrote_routeLocationIndex : 1;
		unsigned wrote_routeLocationOffset : 1;
		unsigned wrote_stepID : 1;
		unsigned wrote_guidancePromptsEnabled : 1;
		unsigned wrote_isConnectedToCarplay : 1;
		unsigned wrote_lowGuidanceNavigation : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL isNavigating; 
@property (nonatomic,readonly) BOOL isRecalculating; 
@property (nonatomic,readonly) BOOL hasEffectiveStepID; 
@property (nonatomic,readonly) unsigned effectiveStepID; 
@property (nonatomic,readonly) BOOL hasEffectiveDistanceToManeuver; 
@property (nonatomic,readonly) unsigned effectiveDistanceToManeuver; 
@property (nonatomic,readonly) NSArray * selectedRideIndices; 
@property (assign,nonatomic) BOOL hasFeedbackType; 
@property (assign,nonatomic) int feedbackType; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
@property (assign,nonatomic) BOOL hasDistanceToManeuver; 
@property (assign,nonatomic) unsigned distanceToManeuver; 
@property (assign,nonatomic) BOOL hasDistanceToRoute; 
@property (assign,nonatomic) unsigned distanceToRoute; 
@property (assign,nonatomic) BOOL hasDistanceRemainingOnRoute; 
@property (assign,nonatomic) unsigned distanceRemainingOnRoute; 
@property (assign,nonatomic) BOOL hasRemainingTime; 
@property (assign,nonatomic) unsigned remainingTime; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasRouteLocationIndex; 
@property (assign,nonatomic) unsigned routeLocationIndex; 
@property (assign,nonatomic) BOOL hasRouteLocationOffset; 
@property (assign,nonatomic) float routeLocationOffset; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasRouteMatchCoordinate; 
@property (nonatomic,retain) GEOLatLng * routeMatchCoordinate; 
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (assign,nonatomic) BOOL hasGuidancePromptsEnabled; 
@property (assign,nonatomic) BOOL guidancePromptsEnabled; 
@property (nonatomic,readonly) unsigned long long selectedRideIndexsCount; 
@property (nonatomic,readonly) unsigned* selectedRideIndexs; 
@property (assign,nonatomic) BOOL hasLowGuidanceNavigation; 
@property (assign,nonatomic) BOOL lowGuidanceNavigation; 
@property (assign,nonatomic) BOOL hasHapticsType; 
@property (assign,nonatomic) int hapticsType; 
@property (assign,nonatomic) BOOL hasIsConnectedToCarplay; 
@property (assign,nonatomic) BOOL isConnectedToCarplay; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(GEOLocation *)location;
-(NSData *)routeID;
-(void)setLocation:(GEOLocation *)arg1 ;
-(BOOL)hasLocation;
-(void)readAll:(BOOL)arg1 ;
-(void)_readRouteID;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(void)_readLocation;
-(void)setStepID:(unsigned)arg1 ;
-(unsigned)remainingTime;
-(void)setRemainingTime:(unsigned)arg1 ;
-(void)setHasRemainingTime:(BOOL)arg1 ;
-(BOOL)hasRemainingTime;
-(unsigned)stepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(unsigned)distanceToManeuver;
-(void)setDistanceToManeuver:(unsigned)arg1 ;
-(void)setHasDistanceToManeuver:(BOOL)arg1 ;
-(BOOL)hasDistanceToManeuver;
-(int)feedbackType;
-(void)setFeedbackType:(int)arg1 ;
-(void)setHasFeedbackType:(BOOL)arg1 ;
-(BOOL)hasFeedbackType;
-(id)feedbackTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackType:(id)arg1 ;
-(void)setDistanceRemainingOnRoute:(unsigned)arg1 ;
-(void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 ;
-(void)setDistanceToRoute:(unsigned)arg1 ;
-(void)setHasDistanceToRoute:(BOOL)arg1 ;
-(void)clearSelectedRideIndexs;
-(void)addSelectedRideIndex:(unsigned)arg1 ;
-(unsigned)effectiveStepID;
-(BOOL)hasDistanceToRoute;
-(unsigned)distanceToRoute;
-(unsigned long long)selectedRideIndexsCount;
-(unsigned)selectedRideIndexAtIndex:(unsigned long long)arg1 ;
-(id)initWithRouteID:(id)arg1 ;
-(id)initWithRoute:(id)arg1 routeID:(id)arg2 ;
-(void)updateWithRoute:(id)arg1 routeID:(id)arg2 ;
-(void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 routeID:(id)arg2 ;
-(void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(BOOL)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5 ;
-(BOOL)isNavigating;
-(BOOL)isRecalculating;
-(BOOL)hasEffectiveStepID;
-(unsigned)effectiveStepIDInRoute:(id)arg1 ;
-(BOOL)hasEffectiveDistanceToManeuver;
-(unsigned)effectiveDistanceToManeuver;
-(NSArray *)selectedRideIndices;
-(BOOL)hasRouteLocationIndex;
-(BOOL)hasRouteLocationOffset;
-(unsigned)routeLocationIndex;
-(float)routeLocationOffset;
-(void)_readRouteMatchCoordinate;
-(void)_readSelectedRideIndexs;
-(void)_addNoFlagsSelectedRideIndex:(unsigned)arg1 ;
-(GEOLatLng *)routeMatchCoordinate;
-(void)setRouteMatchCoordinate:(GEOLatLng *)arg1 ;
-(unsigned)distanceRemainingOnRoute;
-(void)setHasDistanceRemainingOnRoute:(BOOL)arg1 ;
-(BOOL)hasDistanceRemainingOnRoute;
-(void)setRouteLocationIndex:(unsigned)arg1 ;
-(void)setHasRouteLocationIndex:(BOOL)arg1 ;
-(void)setRouteLocationOffset:(float)arg1 ;
-(void)setHasRouteLocationOffset:(BOOL)arg1 ;
-(BOOL)hasRouteMatchCoordinate;
-(BOOL)guidancePromptsEnabled;
-(void)setHasGuidancePromptsEnabled:(BOOL)arg1 ;
-(BOOL)hasGuidancePromptsEnabled;
-(unsigned*)selectedRideIndexs;
-(void)setSelectedRideIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)lowGuidanceNavigation;
-(void)setLowGuidanceNavigation:(BOOL)arg1 ;
-(void)setHasLowGuidanceNavigation:(BOOL)arg1 ;
-(BOOL)hasLowGuidanceNavigation;
-(int)hapticsType;
-(void)setHapticsType:(int)arg1 ;
-(void)setHasHapticsType:(BOOL)arg1 ;
-(BOOL)hasHapticsType;
-(id)hapticsTypeAsString:(int)arg1 ;
-(int)StringAsHapticsType:(id)arg1 ;
-(BOOL)isConnectedToCarplay;
-(void)setHasIsConnectedToCarplay:(BOOL)arg1 ;
-(BOOL)hasIsConnectedToCarplay;
@end

