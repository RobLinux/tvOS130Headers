/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPProcessableFeedback.h>
#import <CoreParsec/_CPRankingFeedback.h>
@class NSArray, NSData;


@protocol _CPRankingFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (assign,nonatomic) double blendingDuration; 
@property (nonatomic,copy) NSArray * sections; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1;
-(NSArray *)sections;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(id)sectionsAtIndex:(unsigned long long)arg1;
-(void)addSections:(id)arg1;
-(void)setSections:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(double)blendingDuration;
-(void)setBlendingDuration:(double)arg1;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSArray, NSData, NSString, NSDictionary;

@interface _CPRankingFeedback : PBCodable <_CPProcessableFeedback, _CPRankingFeedback, NSSecureCoding> {

	unsigned long long _timestamp;
	double _blendingDuration;
	NSArray* _sections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (assign,nonatomic) double blendingDuration;                                //@synthesize blendingDuration=_blendingDuration - In the implementation block
@property (nonatomic,copy) NSArray * sections;                                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSArray *)sections;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(void)addSections:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(double)blendingDuration;
-(void)setBlendingDuration:(double)arg1 ;
@end

