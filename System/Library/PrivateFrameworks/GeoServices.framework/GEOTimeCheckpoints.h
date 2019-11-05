/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTimeCheckpoints : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE20* _distToNextCheckpoints;
	SCD_Struct_GE20* _timeToNextCheckpoints;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_distToNextCheckpoints : 1;
		unsigned read_timeToNextCheckpoints : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_distToNextCheckpoints : 1;
		unsigned wrote_timeToNextCheckpoints : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long distToNextCheckpointsCount; 
@property (nonatomic,readonly) unsigned* distToNextCheckpoints; 
@property (nonatomic,readonly) unsigned long long timeToNextCheckpointsCount; 
@property (nonatomic,readonly) unsigned* timeToNextCheckpoints; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readDistToNextCheckpoints;
-(void)_addNoFlagsDistToNextCheckpoint:(unsigned)arg1 ;
-(void)_readTimeToNextCheckpoints;
-(void)_addNoFlagsTimeToNextCheckpoint:(unsigned)arg1 ;
-(unsigned long long)distToNextCheckpointsCount;
-(void)clearDistToNextCheckpoints;
-(unsigned)distToNextCheckpointAtIndex:(unsigned long long)arg1 ;
-(void)addDistToNextCheckpoint:(unsigned)arg1 ;
-(unsigned long long)timeToNextCheckpointsCount;
-(void)clearTimeToNextCheckpoints;
-(unsigned)timeToNextCheckpointAtIndex:(unsigned long long)arg1 ;
-(void)addTimeToNextCheckpoint:(unsigned)arg1 ;
-(unsigned*)distToNextCheckpoints;
-(void)setDistToNextCheckpoints:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)timeToNextCheckpoints;
-(void)setTimeToNextCheckpoints:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

