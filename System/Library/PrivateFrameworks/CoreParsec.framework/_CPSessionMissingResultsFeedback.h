/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPProcessableFeedback.h>
#import <CoreParsec/_CPSessionMissingResultsFeedback.h>
@class NSArray, NSData;


@protocol _CPSessionMissingResultsFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,copy) NSArray * results; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSArray *)results;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1;
-(void)setResults:(id)arg1;
-(unsigned long long)resultsCount;
-(void)clearResults;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)addResults:(id)arg1;
-(id)resultsAtIndex:(unsigned long long)arg1;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSArray, NSData, NSString, NSDictionary;

@interface _CPSessionMissingResultsFeedback : PBCodable <_CPProcessableFeedback, _CPSessionMissingResultsFeedback, NSSecureCoding> {

	unsigned long long _timestamp;
	NSArray* _results;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,copy) NSArray * results;                                        //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)results;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(unsigned long long)resultsCount;
-(void)clearResults;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)addResults:(id)arg1 ;
-(id)resultsAtIndex:(unsigned long long)arg1 ;
@end

