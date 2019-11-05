/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_PARSuggestion.h>
@class NSString, NSData;


@protocol _PARSuggestion <NSObject>
@property (nonatomic,copy) NSString * suggestion; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSString * topic; 
@property (assign,nonatomic) float score; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)type;
-(void)setType:(int)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setTopic:(id)arg1;
-(float)score;
-(NSString *)topic;
-(void)setScore:(float)arg1;
-(NSData *)jsonData;
-(void)setSuggestion:(id)arg1;
-(NSString *)suggestion;
-(id)initWithJSON:(id)arg1;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSString, NSData;

@interface _PARSuggestion : PBCodable <_PARSuggestion, NSSecureCoding> {

	int _type;
	float _score;
	NSString* _suggestion;
	NSString* _topic;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * suggestion;                   //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * topic;                        //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) float score;                           //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(float)score;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)topic;
-(void)setScore:(float)arg1 ;
-(NSData *)jsonData;
-(void)setSuggestion:(NSString *)arg1 ;
-(NSString *)suggestion;
-(id)initWithJSON:(id)arg1 ;
@end

