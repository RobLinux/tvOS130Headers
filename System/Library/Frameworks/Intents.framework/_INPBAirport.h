/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBAirport.h>
@class NSString;


@protocol _INPBAirport <NSObject>
@property (nonatomic,copy) NSString * iataCode; 
@property (nonatomic,readonly) BOOL hasIataCode; 
@property (nonatomic,copy) NSString * icaoCode; 
@property (nonatomic,readonly) BOOL hasIcaoCode; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) BOOL hasName; 
@required
-(NSString *)name;
-(void)setName:(id)arg1;
-(BOOL)hasName;
-(NSString *)iataCode;
-(NSString *)icaoCode;
-(void)setIataCode:(id)arg1;
-(BOOL)hasIataCode;
-(void)setIcaoCode:(id)arg1;
-(BOOL)hasIcaoCode;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSString;

@interface _INPBAirport : PBCodable <_INPBAirport, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSString* _iataCode;
	NSString* _icaoCode;
	NSString* _name;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * iataCode;                                                          //@synthesize iataCode=_iataCode - In the implementation block
@property (nonatomic,readonly) BOOL hasIataCode; 
@property (nonatomic,copy) NSString * icaoCode;                                                          //@synthesize icaoCode=_icaoCode - In the implementation block
@property (nonatomic,readonly) BOOL hasIcaoCode; 
@property (nonatomic,copy) NSString * name;                                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(NSString *)iataCode;
-(NSString *)icaoCode;
-(void)setIataCode:(NSString *)arg1 ;
-(BOOL)hasIataCode;
-(void)setIcaoCode:(NSString *)arg1 ;
-(BOOL)hasIcaoCode;
@end

