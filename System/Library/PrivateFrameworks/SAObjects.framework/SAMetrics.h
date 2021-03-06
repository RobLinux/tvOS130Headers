/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSDictionary;

@interface SAMetrics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSDictionary * eventInformation; 
@property (nonatomic,copy) NSString * originalCommandId; 
@property (nonatomic,copy) NSDictionary * timings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)metrics;
+(id)metricsWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)siriCore_isRetryable;
-(id)siriCore_requestId;
-(void)siriCore_setSessionRequestId:(id)arg1 ;
-(BOOL)siriCore_supportedByLocalSession;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)_descriptionHint;
-(NSDictionary *)timings;
-(NSString *)originalCommandId;
-(void)setOriginalCommandId:(NSString *)arg1 ;
-(NSDictionary *)eventInformation;
-(void)setEventInformation:(NSDictionary *)arg1 ;
-(void)setTimings:(NSDictionary *)arg1 ;
@end

