/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPFeedbackJSONObject.h>
#import <CoreParsec/_CPStruct.h>
@class NSDictionary, NSData;


@protocol _CPStruct <NSObject>
@property (nonatomic,copy) NSDictionary * stringKeyFields; 
@property (nonatomic,copy) NSDictionary * intKeyFields; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setStringKeyFields:(id)arg1 forKey:(id)arg2;
-(void)setIntKeyFields:(id)arg1 forKey:(int)arg2;
-(NSDictionary *)stringKeyFields;
-(NSDictionary *)intKeyFields;
-(BOOL)getStringKeyFields:(id*)arg1 forKey:(id)arg2;
-(BOOL)getIntKeyFields:(id*)arg1 forKey:(int)arg2;
-(void)setStringKeyFields:(id)arg1;
-(void)setIntKeyFields:(id)arg1;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSDictionary, NSData, NSString;

@interface _CPStruct : PBCodable <_CPFeedbackJSONObject, _CPStruct, NSSecureCoding> {

	NSDictionary* _stringKeyFields;
	NSDictionary* _intKeyFields;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (nonatomic,copy) NSDictionary * stringKeyFields;                           //@synthesize stringKeyFields=_stringKeyFields - In the implementation block
@property (nonatomic,copy) NSDictionary * intKeyFields;                              //@synthesize intKeyFields=_intKeyFields - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)feedbackJSON;
-(void)setStringKeyFields:(id)arg1 forKey:(id)arg2 ;
-(void)setIntKeyFields:(id)arg1 forKey:(int)arg2 ;
-(NSDictionary *)stringKeyFields;
-(NSDictionary *)intKeyFields;
-(BOOL)getStringKeyFields:(id*)arg1 forKey:(id)arg2 ;
-(BOOL)getIntKeyFields:(id*)arg1 forKey:(int)arg2 ;
-(void)setStringKeyFields:(NSDictionary *)arg1 ;
-(void)setIntKeyFields:(NSDictionary *)arg1 ;
@end

