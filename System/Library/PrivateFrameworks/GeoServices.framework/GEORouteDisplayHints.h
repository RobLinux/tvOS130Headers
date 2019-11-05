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

@class PBDataReader, PBUnknownFields, GEORequestOptions, NSArray;

@interface GEORouteDisplayHints : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _availablePaymentTypes;
	SCD_Struct_GE1* _availablePrioritizations;
	GEORequestOptions* _transitSurchargeOptions;
	BOOL _showTransitSchedules;
	struct {
		unsigned has_showTransitSchedules : 1;
		unsigned read_unknownFields : 1;
		unsigned read_availablePaymentTypes : 1;
		unsigned read_availablePrioritizations : 1;
		unsigned read_transitSurchargeOptions : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_availablePaymentTypes : 1;
		unsigned wrote_availablePrioritizations : 1;
		unsigned wrote_transitSurchargeOptions : 1;
		unsigned wrote_showTransitSchedules : 1;
	}  _flags;

}

@property (nonatomic,readonly) id<GEOSurchargeOption> surchargeOptions; 
@property (nonatomic,readonly) NSArray * prioritizationOptions; 
@property (assign,nonatomic) BOOL hasShowTransitSchedules; 
@property (assign,nonatomic) BOOL showTransitSchedules; 
@property (nonatomic,readonly) unsigned long long availablePrioritizationsCount; 
@property (nonatomic,readonly) int* availablePrioritizations; 
@property (nonatomic,readonly) unsigned long long availablePaymentTypesCount; 
@property (nonatomic,readonly) int* availablePaymentTypes; 
@property (nonatomic,readonly) BOOL hasTransitSurchargeOptions; 
@property (nonatomic,retain) GEORequestOptions * transitSurchargeOptions; 
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
-(BOOL)showTransitSchedules;
-(void)setShowTransitSchedules:(BOOL)arg1 ;
-(void)setHasShowTransitSchedules:(BOOL)arg1 ;
-(BOOL)hasShowTransitSchedules;
-(void)_readAvailablePrioritizations;
-(void)_addNoFlagsAvailablePrioritization:(int)arg1 ;
-(void)_readAvailablePaymentTypes;
-(void)_addNoFlagsAvailablePaymentType:(int)arg1 ;
-(void)_readTransitSurchargeOptions;
-(GEORequestOptions *)transitSurchargeOptions;
-(unsigned long long)availablePrioritizationsCount;
-(void)clearAvailablePrioritizations;
-(int)availablePrioritizationAtIndex:(unsigned long long)arg1 ;
-(void)addAvailablePrioritization:(int)arg1 ;
-(unsigned long long)availablePaymentTypesCount;
-(void)clearAvailablePaymentTypes;
-(int)availablePaymentTypeAtIndex:(unsigned long long)arg1 ;
-(void)addAvailablePaymentType:(int)arg1 ;
-(void)setTransitSurchargeOptions:(GEORequestOptions *)arg1 ;
-(int*)availablePrioritizations;
-(void)setAvailablePrioritizations:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)availablePrioritizationsAsString:(int)arg1 ;
-(int)StringAsAvailablePrioritizations:(id)arg1 ;
-(int*)availablePaymentTypes;
-(void)setAvailablePaymentTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)availablePaymentTypesAsString:(int)arg1 ;
-(int)StringAsAvailablePaymentTypes:(id)arg1 ;
-(BOOL)hasTransitSurchargeOptions;
-(id<GEOSurchargeOption>)surchargeOptions;
-(NSArray *)prioritizationOptions;
@end

