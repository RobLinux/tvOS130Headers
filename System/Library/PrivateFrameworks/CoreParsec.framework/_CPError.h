/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPError.h>
@class NSString, NSData;


@protocol _CPError <NSObject>
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * reason; 
@property (assign,nonatomic) double code; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)domain;
-(double)code;
-(NSString *)reason;
-(id)initWithDictionary:(id)arg1;
-(void)setDomain:(id)arg1;
-(void)setReason:(id)arg1;
-(void)setCode:(double)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSString, NSData;

@interface _CPError : PBCodable <_CPError, NSSecureCoding> {

	NSString* _domain;
	NSString* _reason;
	double _code;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * domain;                       //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * reason;                       //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) double code;                           //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)domain;
-(double)code;
-(NSString *)reason;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setReason:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCode:(double)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

