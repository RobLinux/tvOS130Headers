/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBUnknownFields;

@interface GEOWalkingOptions : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _avoidedModes;
	double _preferredSpeed;
	SCD_Struct_GE95 _flags;

}

@property (assign,nonatomic) BOOL hasPreferredSpeed; 
@property (assign,nonatomic) double preferredSpeed; 
@property (nonatomic,readonly) unsigned long long avoidedModesCount; 
@property (nonatomic,readonly) int* avoidedModes; 
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
-(unsigned long long)avoidedModesCount;
-(int)avoidedModeAtIndex:(unsigned long long)arg1 ;
-(id)avoidedModesAsString:(int)arg1 ;
-(void)clearAvoidedModes;
-(void)addAvoidedMode:(int)arg1 ;
-(int*)avoidedModes;
-(void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)StringAsAvoidedModes:(id)arg1 ;
-(double)preferredSpeed;
-(void)setPreferredSpeed:(double)arg1 ;
-(void)setHasPreferredSpeed:(BOOL)arg1 ;
-(BOOL)hasPreferredSpeed;
@end

