/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSSecureCoding.h>
#import <CFNetwork/NSCopying.h>

@class NSURLResponseInternal, NSDictionary, NSURL, NSString;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSURLResponseInternal* _internal;
	URLResponse* __cf_resp_data;

}

@property (nonatomic,readonly) double ams_expirationInterval; 
@property (nonatomic,readonly) NSDictionary * ams_headers; 
@property (nonatomic,readonly) unsigned long long ams_statusCode; 
@property (nonatomic,readonly) BOOL ssv_isExpiredResponse; 
@property (assign) URLResponse* _cf_resp_data;                                 //@synthesize _cf_resp_data=__cf_resp_data - In the implementation block
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * MIMEType; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSString * textEncodingName; 
@property (copy,readonly) NSString * suggestedFilename; 
+(BOOL)supportsSecureCoding;
+(id)getObjectKeyWithIndex:(long long)arg1 ;
+(id)_responseWithCFURLResponse:(id)arg1 ;
-(id)allHeaderFields;
-(int)statusCode;
-(long long)maxExpectedContentLength;
-(BOOL)_getCacheControlMaxAge:(double*)arg1 ;
-(id)ams_valueForHTTPHeader:(id)arg1 ;
-(NSDictionary *)ams_headers;
-(double)ams_expirationInterval;
-(unsigned long long)ams_statusCode;
-(BOOL)aa_isJSON;
-(BOOL)aa_isPlist;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)ssv_isExpiredResponse;
-(id)_cacheTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(URLResponse*)_inner;
-(id)_initWithInternal:(id)arg1 ;
-(id)_initWithCFURLResponse:(id)arg1 ;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4 ;
-(NSString *)MIMEType;
-(NSString *)textEncodingName;
-(long long)expectedContentLength;
-(NSString *)suggestedFilename;
-(URLResponse*)_cf_resp_data;
-(void)set_cf_resp_data:(URLResponse*)arg1 ;
-(id)_peerCertificateChain;
-(id)_CFURLResponse;
-(void)_setExpectedContentLength:(long long)arg1 ;
-(void)_setMIMEType:(id)arg1 ;
-(id)_lastModifiedDate;
-(BOOL)_mustRevalidate;
-(double)_freshnessLifetime;
-(double)_calculatedExpiration;
@end

