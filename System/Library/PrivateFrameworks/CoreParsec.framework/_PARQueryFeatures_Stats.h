/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_PARQueryFeatures_Stats.h>
@class NSArray, NSData;


@protocol _PARQueryFeatures_Stats <NSObject>
@property (nonatomic,copy) NSArray * Ceps; 
@property (nonatomic,copy) NSArray * CepLongs; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(NSArray *)Ceps;
-(NSArray *)CepLongs;
-(void)addCep:(id)arg1;
-(void)addCepLong:(id)arg1;
-(void)clearCep;
-(unsigned long long)CepCount;
-(id)CepAtIndex:(unsigned long long)arg1;
-(void)clearCepLong;
-(unsigned long long)CepLongCount;
-(id)CepLongAtIndex:(unsigned long long)arg1;
-(void)setCeps:(id)arg1;
-(void)setCepLongs:(id)arg1;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _PARQueryFeatures_Stats : PBCodable <_PARQueryFeatures_Stats, NSSecureCoding> {

	NSArray* _Ceps;
	NSArray* _CepLongs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * Ceps;                          //@synthesize Ceps=_Ceps - In the implementation block
@property (nonatomic,copy) NSArray * CepLongs;                      //@synthesize CepLongs=_CepLongs - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(NSArray *)Ceps;
-(NSArray *)CepLongs;
-(void)addCep:(id)arg1 ;
-(void)addCepLong:(id)arg1 ;
-(void)clearCep;
-(unsigned long long)CepCount;
-(id)CepAtIndex:(unsigned long long)arg1 ;
-(void)clearCepLong;
-(unsigned long long)CepLongCount;
-(id)CepLongAtIndex:(unsigned long long)arg1 ;
-(void)setCeps:(NSArray *)arg1 ;
-(void)setCepLongs:(NSArray *)arg1 ;
-(void)setCep:(id)arg1 ;
-(void)setCepLong:(id)arg1 ;
@end

