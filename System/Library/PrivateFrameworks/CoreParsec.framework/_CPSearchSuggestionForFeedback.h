/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPSearchSuggestionForFeedback.h>
@class NSString, NSData;


@protocol _CPSearchSuggestionForFeedback <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * suggestion; 
@property (nonatomic,copy) NSString * query; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSString * fbr; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)type;
-(void)setType:(int)arg1;
-(NSString *)query;
-(id)initWithDictionary:(id)arg1;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(void)setQuery:(id)arg1;
-(double)score;
-(void)setScore:(double)arg1;
-(NSData *)jsonData;
-(void)setSuggestion:(id)arg1;
-(NSString *)suggestion;
-(NSString *)fbr;
-(void)setFbr:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSString, NSData;

@interface _CPSearchSuggestionForFeedback : PBCodable <_CPSearchSuggestionForFeedback, NSSecureCoding> {

	int _type;
	NSString* _identifier;
	NSString* _suggestion;
	NSString* _query;
	double _score;
	NSString* _fbr;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * suggestion;                   //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy) NSString * query;                        //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) double score;                          //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * fbr;                          //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)query;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setQuery:(NSString *)arg1 ;
-(double)score;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(void)setSuggestion:(NSString *)arg1 ;
-(NSString *)suggestion;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

