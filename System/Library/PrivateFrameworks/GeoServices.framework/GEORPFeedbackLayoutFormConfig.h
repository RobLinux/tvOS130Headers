/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEORPFeedbackLayoutFormConfig : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _layoutFields;
	int _formType;
	unsigned _ttl;
	SCD_Struct_GE34 _flags;

}

@property (assign,nonatomic) BOOL hasTtl; 
@property (assign,nonatomic) unsigned ttl; 
@property (assign,nonatomic) BOOL hasFormType; 
@property (assign,nonatomic) int formType; 
@property (nonatomic,retain) NSMutableArray * layoutFields; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)layoutFieldType;
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
-(unsigned)ttl;
-(int)formType;
-(void)setFormType:(int)arg1 ;
-(void)setHasFormType:(BOOL)arg1 ;
-(BOOL)hasFormType;
-(id)formTypeAsString:(int)arg1 ;
-(int)StringAsFormType:(id)arg1 ;
-(BOOL)hasTtl;
-(void)setTtl:(unsigned)arg1 ;
-(void)setHasTtl:(BOOL)arg1 ;
-(void)addLayoutField:(id)arg1 ;
-(unsigned long long)layoutFieldsCount;
-(void)clearLayoutFields;
-(id)layoutFieldAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)layoutFields;
-(void)setLayoutFields:(NSMutableArray *)arg1 ;
@end

