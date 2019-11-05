/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOLatLng;

@interface GEOSnapScorePoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _candidates;
	GEOLatLng* _point;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_candidates : 1;
		unsigned read_point : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_candidates : 1;
		unsigned wrote_point : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPoint; 
@property (nonatomic,retain) GEOLatLng * point; 
@property (nonatomic,retain) NSMutableArray * candidates; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)candidateType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOLatLng *)point;
-(void)setPoint:(GEOLatLng *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readPoint;
-(void)_readCandidates;
-(void)_addNoFlagsCandidate:(id)arg1 ;
-(unsigned long long)candidatesCount;
-(void)clearCandidates;
-(id)candidateAtIndex:(unsigned long long)arg1 ;
-(void)addCandidate:(id)arg1 ;
-(NSMutableArray *)candidates;
-(BOOL)hasPoint;
-(void)setCandidates:(NSMutableArray *)arg1 ;
@end

