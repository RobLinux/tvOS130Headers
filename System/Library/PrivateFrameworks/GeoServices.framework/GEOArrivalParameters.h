/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOArrivalParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _arrivalMapRegions;
	NSMutableArray* _arrivalPoints;
	unsigned _arrivalParametersEndOfRouteDistanceThreshold;
	unsigned _endOfRouteDistanceThreshold;
	struct {
		unsigned has_arrivalParametersEndOfRouteDistanceThreshold : 1;
		unsigned has_endOfRouteDistanceThreshold : 1;
		unsigned read_unknownFields : 1;
		unsigned read_arrivalMapRegions : 1;
		unsigned read_arrivalPoints : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_arrivalMapRegions : 1;
		unsigned wrote_arrivalPoints : 1;
		unsigned wrote_arrivalParametersEndOfRouteDistanceThreshold : 1;
		unsigned wrote_endOfRouteDistanceThreshold : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasEndOfRouteDistanceThreshold; 
@property (assign,nonatomic) unsigned endOfRouteDistanceThreshold; 
@property (nonatomic,retain) NSMutableArray * arrivalPoints; 
@property (nonatomic,retain) NSMutableArray * arrivalMapRegions; 
@property (assign,nonatomic) BOOL hasArrivalParametersEndOfRouteDistanceThreshold; 
@property (assign,nonatomic) unsigned arrivalParametersEndOfRouteDistanceThreshold; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)arrivalPointsType;
+(Class)arrivalMapRegionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readArrivalPoints;
-(void)_addNoFlagsArrivalPoints:(id)arg1 ;
-(void)_readArrivalMapRegions;
-(void)_addNoFlagsArrivalMapRegions:(id)arg1 ;
-(unsigned long long)arrivalPointsCount;
-(void)clearArrivalPoints;
-(id)arrivalPointsAtIndex:(unsigned long long)arg1 ;
-(void)addArrivalPoints:(id)arg1 ;
-(unsigned long long)arrivalMapRegionsCount;
-(void)clearArrivalMapRegions;
-(id)arrivalMapRegionsAtIndex:(unsigned long long)arg1 ;
-(void)addArrivalMapRegions:(id)arg1 ;
-(NSMutableArray *)arrivalPoints;
-(NSMutableArray *)arrivalMapRegions;
-(unsigned)endOfRouteDistanceThreshold;
-(void)setEndOfRouteDistanceThreshold:(unsigned)arg1 ;
-(void)setHasEndOfRouteDistanceThreshold:(BOOL)arg1 ;
-(BOOL)hasEndOfRouteDistanceThreshold;
-(void)setArrivalPoints:(NSMutableArray *)arg1 ;
-(void)setArrivalMapRegions:(NSMutableArray *)arg1 ;
-(unsigned)arrivalParametersEndOfRouteDistanceThreshold;
-(void)setArrivalParametersEndOfRouteDistanceThreshold:(unsigned)arg1 ;
-(void)setHasArrivalParametersEndOfRouteDistanceThreshold:(BOOL)arg1 ;
-(BOOL)hasArrivalParametersEndOfRouteDistanceThreshold;
@end

