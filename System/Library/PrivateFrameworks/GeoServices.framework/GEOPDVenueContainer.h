/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueContainer : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE68* _buildingIds;
	GEOPDVenueLabel* _label;
	unsigned long long _muid;
	unsigned long long _venueId;
	int _browseType;
	struct {
		unsigned has_muid : 1;
		unsigned has_venueId : 1;
		unsigned has_browseType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_buildingIds : 1;
		unsigned read_label : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_buildingIds : 1;
		unsigned wrote_label : 1;
		unsigned wrote_muid : 1;
		unsigned wrote_venueId : 1;
		unsigned wrote_browseType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasVenueId; 
@property (assign,nonatomic) unsigned long long venueId; 
@property (nonatomic,readonly) unsigned long long buildingIdsCount; 
@property (nonatomic,readonly) unsigned long long* buildingIds; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label; 
@property (assign,nonatomic) BOOL hasBrowseType; 
@property (assign,nonatomic) int browseType; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(GEOPDVenueLabel *)label;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(BOOL)hasLabel;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)venueId;
-(void)setVenueId:(unsigned long long)arg1 ;
-(void)setHasVenueId:(BOOL)arg1 ;
-(BOOL)hasVenueId;
-(void)_readLabel;
-(void)_readBuildingIds;
-(void)_addNoFlagsBuildingId:(unsigned long long)arg1 ;
-(unsigned long long)buildingIdsCount;
-(void)clearBuildingIds;
-(unsigned long long)buildingIdAtIndex:(unsigned long long)arg1 ;
-(void)addBuildingId:(unsigned long long)arg1 ;
-(unsigned long long*)buildingIds;
-(void)setBuildingIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(int)browseType;
-(void)setBrowseType:(int)arg1 ;
-(void)setHasBrowseType:(BOOL)arg1 ;
-(BOOL)hasBrowseType;
-(id)browseTypeAsString:(int)arg1 ;
-(int)StringAsBrowseType:(id)arg1 ;
@end

