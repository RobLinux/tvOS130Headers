/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOTransitDecoderData : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _accessPoints;
	NSMutableArray* _artworks;
	NSMutableArray* _halls;
	NSMutableArray* _lines;
	NSMutableArray* _stations;
	NSMutableArray* _steps;
	NSMutableArray* _stops;
	NSMutableArray* _systems;
	NSMutableArray* _transitIncidentMessages;
	NSMutableArray* _transitIncidents;
	NSMutableArray* _walkings;
	NSMutableArray* _zilchPoints;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_accessPoints : 1;
		unsigned read_artworks : 1;
		unsigned read_halls : 1;
		unsigned read_lines : 1;
		unsigned read_stations : 1;
		unsigned read_steps : 1;
		unsigned read_stops : 1;
		unsigned read_systems : 1;
		unsigned read_transitIncidentMessages : 1;
		unsigned read_transitIncidents : 1;
		unsigned read_walkings : 1;
		unsigned read_zilchPoints : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_accessPoints : 1;
		unsigned wrote_artworks : 1;
		unsigned wrote_halls : 1;
		unsigned wrote_lines : 1;
		unsigned wrote_stations : 1;
		unsigned wrote_steps : 1;
		unsigned wrote_stops : 1;
		unsigned wrote_systems : 1;
		unsigned wrote_transitIncidentMessages : 1;
		unsigned wrote_transitIncidents : 1;
		unsigned wrote_walkings : 1;
		unsigned wrote_zilchPoints : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * stations; 
@property (nonatomic,retain) NSMutableArray * lines; 
@property (nonatomic,retain) NSMutableArray * accessPoints; 
@property (nonatomic,retain) NSMutableArray * walkings; 
@property (nonatomic,retain) NSMutableArray * stops; 
@property (nonatomic,retain) NSMutableArray * zilchPoints; 
@property (nonatomic,retain) NSMutableArray * systems; 
@property (nonatomic,retain) NSMutableArray * transitIncidents; 
@property (nonatomic,retain) NSMutableArray * halls; 
@property (nonatomic,retain) NSMutableArray * artworks; 
@property (nonatomic,retain) NSMutableArray * transitIncidentMessages; 
@property (nonatomic,retain) NSMutableArray * steps; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)artworkType;
+(Class)stepType;
+(Class)lineType;
+(Class)systemType;
+(Class)transitIncidentType;
+(Class)stationType;
+(Class)accessPointType;
+(Class)walkingType;
+(Class)stopType;
+(Class)zilchPointsType;
+(Class)hallType;
+(Class)transitIncidentMessageType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)steps;
-(unsigned long long)accessPointsCount;
-(void)clearAccessPoints;
-(NSMutableArray *)accessPoints;
-(void)setAccessPoints:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readZilchPoints;
-(NSMutableArray *)zilchPoints;
-(void)setZilchPoints:(NSMutableArray *)arg1 ;
-(unsigned long long)stepsCount;
-(NSMutableArray *)stops;
-(NSMutableArray *)lines;
-(void)_readSteps;
-(void)_addNoFlagsStep:(id)arg1 ;
-(void)clearSteps;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(void)addStep:(id)arg1 ;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stations;
-(NSMutableArray *)halls;
-(NSMutableArray *)walkings;
-(id)artworkFromIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)hallsCount;
-(id)hallAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)stationsCount;
-(id)stationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)stopsCount;
-(unsigned long long)transitIncidentMessagesCount;
-(unsigned long long)artworksCount;
-(NSMutableArray *)artworks;
-(NSMutableArray *)transitIncidents;
-(void)_readLines;
-(void)_addNoFlagsLine:(id)arg1 ;
-(void)_readSystems;
-(void)_addNoFlagsSystem:(id)arg1 ;
-(unsigned long long)linesCount;
-(void)clearLines;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(void)addLine:(id)arg1 ;
-(unsigned long long)systemsCount;
-(void)clearSystems;
-(id)systemAtIndex:(unsigned long long)arg1 ;
-(void)addSystem:(id)arg1 ;
-(NSMutableArray *)systems;
-(void)setLines:(NSMutableArray *)arg1 ;
-(void)setSystems:(NSMutableArray *)arg1 ;
-(void)addTransitIncident:(id)arg1 ;
-(unsigned long long)transitIncidentsCount;
-(void)clearTransitIncidents;
-(id)transitIncidentAtIndex:(unsigned long long)arg1 ;
-(void)setTransitIncidents:(NSMutableArray *)arg1 ;
-(id)artworkAtIndex:(unsigned long long)arg1 ;
-(id)transitIncidentMessageAtIndex:(unsigned long long)arg1 ;
-(id)walkingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)zilchPointsCount;
-(id)zilchPointsAtIndex:(unsigned long long)arg1 ;
-(id)stopAtIndex:(unsigned long long)arg1 ;
-(void)_readArtworks;
-(void)_addNoFlagsArtwork:(id)arg1 ;
-(void)clearArtworks;
-(void)addArtwork:(id)arg1 ;
-(void)setArtworks:(NSMutableArray *)arg1 ;
-(void)_readStations;
-(void)_addNoFlagsStation:(id)arg1 ;
-(void)_readAccessPoints;
-(void)_addNoFlagsAccessPoint:(id)arg1 ;
-(void)_readWalkings;
-(void)_addNoFlagsWalking:(id)arg1 ;
-(void)_readStops;
-(void)_addNoFlagsStop:(id)arg1 ;
-(void)_addNoFlagsZilchPoints:(id)arg1 ;
-(void)_readTransitIncidents;
-(void)_addNoFlagsTransitIncident:(id)arg1 ;
-(void)_readHalls;
-(void)_addNoFlagsHall:(id)arg1 ;
-(void)_readTransitIncidentMessages;
-(void)_addNoFlagsTransitIncidentMessage:(id)arg1 ;
-(void)clearStations;
-(void)addStation:(id)arg1 ;
-(id)accessPointAtIndex:(unsigned long long)arg1 ;
-(void)addAccessPoint:(id)arg1 ;
-(unsigned long long)walkingsCount;
-(void)clearWalkings;
-(void)addWalking:(id)arg1 ;
-(void)clearStops;
-(void)addStop:(id)arg1 ;
-(void)clearZilchPoints;
-(void)addZilchPoints:(id)arg1 ;
-(void)clearHalls;
-(void)addHall:(id)arg1 ;
-(void)clearTransitIncidentMessages;
-(void)addTransitIncidentMessage:(id)arg1 ;
-(NSMutableArray *)transitIncidentMessages;
-(void)setStations:(NSMutableArray *)arg1 ;
-(void)setWalkings:(NSMutableArray *)arg1 ;
-(void)setStops:(NSMutableArray *)arg1 ;
-(void)setHalls:(NSMutableArray *)arg1 ;
-(void)setTransitIncidentMessages:(NSMutableArray *)arg1 ;
@end

