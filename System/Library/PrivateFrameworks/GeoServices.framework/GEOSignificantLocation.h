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

@class PBDataReader, NSString, GEOLocation;

@interface GEOSignificantLocation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	double _confidence;
	NSString* _identifier;
	GEOLocation* _location;
	unsigned _locationIndex;
	unsigned _numberOfVisitsBucket;
	struct {
		unsigned has_confidence : 1;
		unsigned has_locationIndex : 1;
		unsigned has_numberOfVisitsBucket : 1;
		unsigned read_identifier : 1;
		unsigned read_location : 1;
		unsigned wrote_confidence : 1;
		unsigned wrote_identifier : 1;
		unsigned wrote_location : 1;
		unsigned wrote_locationIndex : 1;
		unsigned wrote_numberOfVisitsBucket : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasLocationIndex; 
@property (assign,nonatomic) unsigned locationIndex; 
@property (assign,nonatomic) BOOL hasNumberOfVisitsBucket; 
@property (assign,nonatomic) unsigned numberOfVisitsBucket; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) double confidence; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(double)confidence;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(GEOLocation *)location;
-(void)setLocation:(GEOLocation *)arg1 ;
-(BOOL)hasLocation;
-(void)readAll:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)_readLocation;
-(BOOL)hasIdentifier;
-(void)_readIdentifier;
-(unsigned)locationIndex;
-(void)setLocationIndex:(unsigned)arg1 ;
-(void)setHasLocationIndex:(BOOL)arg1 ;
-(BOOL)hasLocationIndex;
-(unsigned)numberOfVisitsBucket;
-(void)setNumberOfVisitsBucket:(unsigned)arg1 ;
-(void)setHasNumberOfVisitsBucket:(BOOL)arg1 ;
-(BOOL)hasNumberOfVisitsBucket;
@end

