/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>

@class NSArray, NSString;

@interface WFMatchTextIntentResponse : INIntentResponse {

	long long _code;

}

@property (assign,nonatomic) long long code;                         //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSArray * matches; 
@property (nonatomic,copy) NSString * errorDescription; 
+(id)invalidRegularExpressionIntentResponseWithErrorDescription:(id)arg1 ;
-(long long)code;
-(void)setCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
@end

