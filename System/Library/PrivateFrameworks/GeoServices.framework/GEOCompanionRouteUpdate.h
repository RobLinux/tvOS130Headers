/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, NSData, GEOTransitRouteUpdate;

@interface GEOCompanionRouteUpdate : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	double _lastUpdated;
	NSData* _routeID;
	GEOTransitRouteUpdate* _transitRouteUpdate;
	int _type;
	struct {
		unsigned has_lastUpdated : 1;
		unsigned has_type : 1;
		unsigned read_routeID : 1;
		unsigned read_transitRouteUpdate : 1;
		unsigned wrote_lastUpdated : 1;
		unsigned wrote_routeID : 1;
		unsigned wrote_transitRouteUpdate : 1;
		unsigned wrote_type : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasLastUpdated; 
@property (assign,nonatomic) double lastUpdated; 
@property (nonatomic,readonly) BOOL hasTransitRouteUpdate; 
@property (nonatomic,retain) GEOTransitRouteUpdate * transitRouteUpdate; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(NSData *)routeID;
-(void)readAll:(BOOL)arg1 ;
-(void)_readRouteID;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(void)setTransitRouteUpdate:(GEOTransitRouteUpdate *)arg1 ;
-(id)initWithTransitRouteUpdate:(id)arg1 ;
-(GEOTransitRouteUpdate *)transitRouteUpdate;
-(double)lastUpdated;
-(void)_readTransitRouteUpdate;
-(void)setLastUpdated:(double)arg1 ;
-(void)setHasLastUpdated:(BOOL)arg1 ;
-(BOOL)hasLastUpdated;
-(BOOL)hasTransitRouteUpdate;
@end

