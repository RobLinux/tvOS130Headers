/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPProcessableFeedback.h>
#import <CoreParsec/_CPFeedbackUUID.h>
#import <CoreParsec/_CPEndNetworkSearchFeedback.h>
@class NSString, _CPNetworkTimingData, NSData;


@protocol _CPEndNetworkSearchFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (assign,nonatomic) long long responseSize; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSString * parsecStatus; 
@property (nonatomic,copy) NSString * fbq; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * partialClientIp; 
@property (nonatomic,retain) _CPNetworkTimingData * timingData; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(_CPNetworkTimingData *)timingData;
-(int)statusCode;
-(NSString *)uuid;
-(unsigned long long)timestamp;
-(double)duration;
-(void)setDuration:(double)arg1;
-(void)setTimestamp:(unsigned long long)arg1;
-(void)setUuid:(id)arg1;
-(void)setResponseSize:(long long)arg1;
-(long long)responseSize;
-(void)setStatusCode:(int)arg1;
-(void)setTimingData:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setParsecStatus:(id)arg1;
-(void)setFbq:(id)arg1;
-(void)setPartialClientIp:(id)arg1;
-(NSString *)parsecStatus;
-(NSString *)fbq;
-(NSString *)partialClientIp;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSString, _CPNetworkTimingData, NSData, NSDictionary;

@interface _CPEndNetworkSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPEndNetworkSearchFeedback, NSSecureCoding> {

	int _statusCode;
	unsigned long long _timestamp;
	long long _responseSize;
	NSString* _uuid;
	NSString* _parsecStatus;
	NSString* _fbq;
	double _duration;
	NSString* _partialClientIp;
	_CPNetworkTimingData* _timingData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,copy,readonly) NSString * uuid; 
@property (assign,nonatomic) long long responseSize;                                 //@synthesize responseSize=_responseSize - In the implementation block
@property (assign,nonatomic) int statusCode;                                         //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSString * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * parsecStatus;                                  //@synthesize parsecStatus=_parsecStatus - In the implementation block
@property (nonatomic,copy) NSString * fbq;                                           //@synthesize fbq=_fbq - In the implementation block
@property (assign,nonatomic) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * partialClientIp;                               //@synthesize partialClientIp=_partialClientIp - In the implementation block
@property (nonatomic,retain) _CPNetworkTimingData * timingData;                      //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(_CPNetworkTimingData *)timingData;
-(int)statusCode;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)uuid;
-(unsigned long long)timestamp;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setResponseSize:(long long)arg1 ;
-(long long)responseSize;
-(void)setStatusCode:(int)arg1 ;
-(void)setTimingData:(_CPNetworkTimingData *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)feedbackJSON;
-(void)setParsecStatus:(NSString *)arg1 ;
-(void)setFbq:(NSString *)arg1 ;
-(void)setPartialClientIp:(NSString *)arg1 ;
-(NSString *)parsecStatus;
-(NSString *)fbq;
-(NSString *)partialClientIp;
-(id)_formatNetworkTimingData;
-(id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(long long)arg3 parsecStatus:(id)arg4 parsecDuration:(double)arg5 fbq:(id)arg6 partialClientIp:(id)arg7 networkTimingData:(id)arg8 ;
@end

