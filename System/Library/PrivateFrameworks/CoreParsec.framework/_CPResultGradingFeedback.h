/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPProcessableFeedback.h>
#import <CoreParsec/_CPResultGradingFeedback.h>
@class _CPSearchResultForFeedback, NSString, NSData;


@protocol _CPResultGradingFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,retain) _CPSearchResultForFeedback * result; 
@property (assign,nonatomic) int grade; 
@property (nonatomic,copy) NSString * textFeedback; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(_CPSearchResultForFeedback *)result;
-(unsigned long long)timestamp;
-(void)setResult:(id)arg1;
-(void)setTimestamp:(unsigned long long)arg1;
-(int)grade;
-(void)setGrade:(int)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(NSString *)textFeedback;
-(void)setTextFeedback:(id)arg1;

@end

#import <CoreParsec/NSSecureCoding.h>

@class _CPSearchResultForFeedback, NSString, NSData, NSDictionary;

@interface _CPResultGradingFeedback : PBCodable <_CPProcessableFeedback, _CPResultGradingFeedback, NSSecureCoding> {

	int _grade;
	unsigned long long _timestamp;
	_CPSearchResultForFeedback* _result;
	NSString* _textFeedback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,retain) _CPSearchResultForFeedback * result;                    //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) int grade;                                              //@synthesize grade=_grade - In the implementation block
@property (nonatomic,copy) NSString * textFeedback;                                  //@synthesize textFeedback=_textFeedback - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(_CPSearchResultForFeedback *)result;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setResult:(_CPSearchResultForFeedback *)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)grade;
-(void)setGrade:(int)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)textFeedback;
-(void)setTextFeedback:(NSString *)arg1 ;
@end

