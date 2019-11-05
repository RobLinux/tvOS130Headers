/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPCorrectedCoordinate, GEORPCorrectedLabel;

@interface GEORPTileFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	GEORPCorrectedCoordinate* _coordinate;
	GEORPCorrectedLabel* _label;
	int _type;
	struct {
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_coordinate : 1;
		unsigned read_label : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_coordinate : 1;
		unsigned wrote_label : 1;
		unsigned wrote_type : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEORPCorrectedLabel * label; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * coordinate; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(GEORPCorrectedCoordinate *)coordinate;
-(id)dictionaryRepresentation;
-(GEORPCorrectedLabel *)label;
-(void)setLabel:(GEORPCorrectedLabel *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasLabel;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCoordinate;
-(void)setCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(BOOL)hasCoordinate;
-(void)_readLabel;
@end

