/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDClientRankingFeatureTypeResult, GEOPDClientRankingFeatureTypeSource, GEOPDClientRankingFeatureFunctionTypeDiscrete, GEOPDClientRankingFeatureFunctionTypeLinear;

@interface GEOPDClientRankingFeatureMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	GEOPDClientRankingFeatureTypeResult* _featureTypeResult;
	GEOPDClientRankingFeatureTypeSource* _featureTypeSource;
	GEOPDClientRankingFeatureFunctionTypeDiscrete* _functionTypeDiscrete;
	GEOPDClientRankingFeatureFunctionTypeLinear* _functionTypeLinear;
	int _featureType;
	int _functionType;
	struct {
		unsigned has_featureType : 1;
		unsigned has_functionType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_featureTypeResult : 1;
		unsigned read_featureTypeSource : 1;
		unsigned read_functionTypeDiscrete : 1;
		unsigned read_functionTypeLinear : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_featureTypeResult : 1;
		unsigned wrote_featureTypeSource : 1;
		unsigned wrote_functionTypeDiscrete : 1;
		unsigned wrote_functionTypeLinear : 1;
		unsigned wrote_featureType : 1;
		unsigned wrote_functionType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFeatureType; 
@property (assign,nonatomic) int featureType; 
@property (nonatomic,readonly) BOOL hasFeatureTypeSource; 
@property (nonatomic,retain) GEOPDClientRankingFeatureTypeSource * featureTypeSource; 
@property (nonatomic,readonly) BOOL hasFeatureTypeResult; 
@property (nonatomic,retain) GEOPDClientRankingFeatureTypeResult * featureTypeResult; 
@property (assign,nonatomic) BOOL hasFunctionType; 
@property (assign,nonatomic) int functionType; 
@property (nonatomic,readonly) BOOL hasFunctionTypeLinear; 
@property (nonatomic,retain) GEOPDClientRankingFeatureFunctionTypeLinear * functionTypeLinear; 
@property (nonatomic,readonly) BOOL hasFunctionTypeDiscrete; 
@property (nonatomic,retain) GEOPDClientRankingFeatureFunctionTypeDiscrete * functionTypeDiscrete; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)functionType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)featureType;
-(void)setFeatureType:(int)arg1 ;
-(void)setHasFeatureType:(BOOL)arg1 ;
-(BOOL)hasFeatureType;
-(id)featureTypeAsString:(int)arg1 ;
-(int)StringAsFeatureType:(id)arg1 ;
-(BOOL)hasFunctionType;
-(GEOPDClientRankingFeatureTypeSource *)featureTypeSource;
-(GEOPDClientRankingFeatureTypeResult *)featureTypeResult;
-(GEOPDClientRankingFeatureFunctionTypeLinear *)functionTypeLinear;
-(GEOPDClientRankingFeatureFunctionTypeDiscrete *)functionTypeDiscrete;
-(void)_readFeatureTypeSource;
-(void)_readFeatureTypeResult;
-(void)_readFunctionTypeLinear;
-(void)_readFunctionTypeDiscrete;
-(void)setFeatureTypeSource:(GEOPDClientRankingFeatureTypeSource *)arg1 ;
-(void)setFeatureTypeResult:(GEOPDClientRankingFeatureTypeResult *)arg1 ;
-(void)setFunctionTypeLinear:(GEOPDClientRankingFeatureFunctionTypeLinear *)arg1 ;
-(void)setFunctionTypeDiscrete:(GEOPDClientRankingFeatureFunctionTypeDiscrete *)arg1 ;
-(BOOL)hasFeatureTypeSource;
-(BOOL)hasFeatureTypeResult;
-(void)setFunctionType:(int)arg1 ;
-(void)setHasFunctionType:(BOOL)arg1 ;
-(id)functionTypeAsString:(int)arg1 ;
-(int)StringAsFunctionType:(id)arg1 ;
-(BOOL)hasFunctionTypeLinear;
-(BOOL)hasFunctionTypeDiscrete;
@end

