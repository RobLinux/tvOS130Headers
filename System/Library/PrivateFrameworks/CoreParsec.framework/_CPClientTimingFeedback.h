/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPProcessableFeedback.h>
#import <CoreParsec/_CPClientTimingFeedback.h>
@class NSString, NSData;


@protocol _CPClientTimingFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,copy) NSString * input; 
@property (nonatomic,copy) NSString * eventName; 
@property (assign,nonatomic) unsigned long long queryId; 
@property (assign,nonatomic) unsigned long long nanosecondInterval; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(unsigned long long)timestamp;
-(NSString *)input;
-(NSString *)eventName;
-(void)setEventName:(id)arg1;
-(void)setTimestamp:(unsigned long long)arg1;
-(void)setInput:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setQueryId:(unsigned long long)arg1;
-(unsigned long long)queryId;
-(unsigned long long)nanosecondInterval;
-(void)setNanosecondInterval:(unsigned long long)arg1;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSString, NSData, NSDictionary;

@interface _CPClientTimingFeedback : PBCodable <_CPProcessableFeedback, _CPClientTimingFeedback, NSSecureCoding> {

	unsigned long long _timestamp;
	NSString* _input;
	NSString* _eventName;
	unsigned long long _queryId;
	unsigned long long _nanosecondInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,copy) NSString * input;                                         //@synthesize input=_input - In the implementation block
@property (nonatomic,copy) NSString * eventName;                                     //@synthesize eventName=_eventName - In the implementation block
@property (assign,nonatomic) unsigned long long queryId;                             //@synthesize queryId=_queryId - In the implementation block
@property (assign,nonatomic) unsigned long long nanosecondInterval;                  //@synthesize nanosecondInterval=_nanosecondInterval - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)input;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setInput:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setQueryId:(unsigned long long)arg1 ;
-(unsigned long long)queryId;
-(unsigned long long)nanosecondInterval;
-(void)setNanosecondInterval:(unsigned long long)arg1 ;
@end
