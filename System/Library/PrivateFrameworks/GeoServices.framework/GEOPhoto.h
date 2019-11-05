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

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPhoto : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _photoInfos;
	NSString* _uid;
	int _photoType;
	struct {
		unsigned has_photoType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_photoInfos : 1;
		unsigned read_uid : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_photoInfos : 1;
		unsigned wrote_uid : 1;
		unsigned wrote_photoType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPhotoType; 
@property (assign,nonatomic) int photoType; 
@property (nonatomic,retain) NSMutableArray * photoInfos; 
@property (nonatomic,readonly) BOOL hasUid; 
@property (nonatomic,retain) NSString * uid; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)photoInfoType;
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
-(int)photoType;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
-(BOOL)hasUid;
-(void)_readUid;
-(id)initWithPlaceDataPhoto:(id)arg1 ;
-(void)addPhotoInfo:(id)arg1 ;
-(void)_readPhotoInfos;
-(void)_addNoFlagsPhotoInfo:(id)arg1 ;
-(unsigned long long)photoInfosCount;
-(void)clearPhotoInfos;
-(id)photoInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)photoInfos;
-(void)setPhotoType:(int)arg1 ;
-(void)setHasPhotoType:(BOOL)arg1 ;
-(BOOL)hasPhotoType;
-(id)photoTypeAsString:(int)arg1 ;
-(int)StringAsPhotoType:(id)arg1 ;
-(void)setPhotoInfos:(NSMutableArray *)arg1 ;
@end

