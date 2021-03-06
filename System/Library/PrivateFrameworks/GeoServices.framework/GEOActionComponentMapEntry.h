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

@interface GEOActionComponentMapEntry : PBCodable <NSCopying> {

	SCD_Struct_GE1* _placeDataComponents;
	int _actionComponent;
	SCD_Struct_GE95 _flags;

}

@property (assign,nonatomic) BOOL hasActionComponent; 
@property (assign,nonatomic) int actionComponent; 
@property (nonatomic,readonly) unsigned long long placeDataComponentsCount; 
@property (nonatomic,readonly) int* placeDataComponents; 
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
-(unsigned long long)placeDataComponentsCount;
-(void)clearPlaceDataComponents;
-(int)placeDataComponentsAtIndex:(unsigned long long)arg1 ;
-(void)addPlaceDataComponents:(int)arg1 ;
-(int)actionComponent;
-(void)setActionComponent:(int)arg1 ;
-(void)setHasActionComponent:(BOOL)arg1 ;
-(BOOL)hasActionComponent;
-(id)actionComponentAsString:(int)arg1 ;
-(int)StringAsActionComponent:(id)arg1 ;
-(int*)placeDataComponents;
-(void)setPlaceDataComponents:(int*)arg1 count:(unsigned long long)arg2 ;
@end

