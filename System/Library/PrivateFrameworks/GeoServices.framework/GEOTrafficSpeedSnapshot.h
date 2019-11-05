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

@class PBDataReader, GEOTrafficSnapshotMetaData, NSMutableArray;

@interface GEOTrafficSpeedSnapshot : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	unsigned long long _receivedTime;
	GEOTrafficSnapshotMetaData* _snapshotMetaData;
	NSMutableArray* _speeds;
	struct {
		unsigned has_receivedTime : 1;
		unsigned read_snapshotMetaData : 1;
		unsigned read_speeds : 1;
		unsigned wrote_receivedTime : 1;
		unsigned wrote_snapshotMetaData : 1;
		unsigned wrote_speeds : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSnapshotMetaData; 
@property (nonatomic,retain) GEOTrafficSnapshotMetaData * snapshotMetaData; 
@property (nonatomic,retain) NSMutableArray * speeds; 
@property (assign,nonatomic) BOOL hasReceivedTime; 
@property (assign,nonatomic) unsigned long long receivedTime; 
+(BOOL)isValid:(id)arg1 ;
+(Class)speedsType;
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
-(void)_readSnapshotMetaData;
-(void)_readSpeeds;
-(void)_addNoFlagsSpeeds:(id)arg1 ;
-(GEOTrafficSnapshotMetaData *)snapshotMetaData;
-(void)setSnapshotMetaData:(GEOTrafficSnapshotMetaData *)arg1 ;
-(unsigned long long)speedsCount;
-(void)clearSpeeds;
-(id)speedsAtIndex:(unsigned long long)arg1 ;
-(void)addSpeeds:(id)arg1 ;
-(BOOL)hasSnapshotMetaData;
-(NSMutableArray *)speeds;
-(void)setSpeeds:(NSMutableArray *)arg1 ;
-(unsigned long long)receivedTime;
-(void)setReceivedTime:(unsigned long long)arg1 ;
-(void)setHasReceivedTime:(BOOL)arg1 ;
-(BOOL)hasReceivedTime;
@end
