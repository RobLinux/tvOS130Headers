/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPCardForFeedback.h>
@class NSArray, NSString, NSData;


@protocol _CPCardForFeedback <NSObject>
@property (nonatomic,copy) NSArray * cardSections; 
@property (nonatomic,copy) NSString * fbr; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(void)setCardSections:(id)arg1;
-(NSData *)jsonData;
-(NSArray *)cardSections;
-(NSString *)fbr;
-(void)setFbr:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addCardSections:(id)arg1;
-(void)clearCardSections;
-(unsigned long long)cardSectionsCount;
-(id)cardSectionsAtIndex:(unsigned long long)arg1;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSArray, NSString, NSData;

@interface _CPCardForFeedback : PBCodable <_CPCardForFeedback, NSSecureCoding> {

	NSArray* _cardSections;
	NSString* _fbr;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * cardSections;                  //@synthesize cardSections=_cardSections - In the implementation block
@property (nonatomic,copy) NSString * fbr;                          //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCardSections:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(NSArray *)cardSections;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addCardSections:(id)arg1 ;
-(void)clearCardSections;
-(unsigned long long)cardSectionsCount;
-(id)cardSectionsAtIndex:(unsigned long long)arg1 ;
@end

