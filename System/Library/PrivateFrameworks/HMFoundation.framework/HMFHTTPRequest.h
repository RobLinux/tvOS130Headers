/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMFHTTPRequestInternal, NSURL, NSString, NSDictionary, NSData, NSURLRequest;

@interface HMFHTTPRequest : HMFObject {

	HMFHTTPRequestInternal* _internal;
	double _timeoutInterval;

}

@property (assign,nonatomic) double timeoutInterval;                           //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,readonly) HMFHTTPRequestInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * method; 
@property (nonatomic,readonly) NSDictionary * headerFields; 
@property (nonatomic,readonly) NSData * body; 
@property (nonatomic,copy,readonly) NSURLRequest * urlRequest; 
-(id)init;
-(NSURL *)URL;
-(NSString *)method;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSData *)body;
-(HMFHTTPRequestInternal *)internal;
-(NSDictionary *)headerFields;
-(NSURLRequest *)urlRequest;
-(id)attributeDescriptions;
-(id)responseWithStatusCode:(long long)arg1 ;
-(id)initWithInternalRequest:(id)arg1 ;
@end

