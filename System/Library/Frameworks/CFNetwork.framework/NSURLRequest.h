/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSSecureCoding.h>
#import <CFNetwork/NSCopying.h>
#import <CFNetwork/NSMutableCopying.h>

@class NSURLRequestInternal, NSDictionary, NSString, NSData, NSInputStream, NSURL;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSURLRequestInternal* _internal;

}

@property (nonatomic,readonly) NSDictionary * ams_cookies; 
@property (nonatomic,readonly) BOOL ams_requestIsBagLoad; 
@property (copy,readonly) NSString * HTTPMethod; 
@property (copy,readonly) NSDictionary * allHTTPHeaderFields; 
@property (copy,readonly) NSData * HTTPBody; 
@property (retain,readonly) NSInputStream * HTTPBodyStream; 
@property (readonly) BOOL HTTPShouldHandleCookies; 
@property (readonly) BOOL HTTPShouldUsePipelining; 
@property (readonly) URLRequest* _inner; 
@property (copy,readonly) NSURL * URL; 
@property (readonly) unsigned long long cachePolicy; 
@property (readonly) double timeoutInterval; 
@property (copy,readonly) NSURL * mainDocumentURL; 
@property (readonly) unsigned long long networkServiceType; 
@property (readonly) BOOL allowsCellularAccess; 
@property (readonly) BOOL allowsExpensiveNetworkAccess; 
@property (readonly) BOOL allowsConstrainedNetworkAccess; 
+(BOOL)supportsSecureCoding;
+(id)getObjectKeyWithIndex:(long long)arg1 ;
+(id)requestWithURL:(id)arg1 ;
+(BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1 ;
+(id)allowsSpecificHTTPSCertificateForHost:(id)arg1 ;
+(id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
+(void)setDefaultTimeoutInterval:(double)arg1 ;
+(double)defaultTimeoutInterval;
+(void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2 ;
+(void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
-(id)ic_valuesForCookieWithName:(id)arg1 ;
-(id)ic_valueForHTTPHeaderField:(id)arg1 ;
-(NSDictionary *)ams_cookies;
-(id)ams_valueForHTTPHeader:(id)arg1 ;
-(BOOL)ams_requestIsBagLoad;
-(id)aa_HTTPBody;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)ak_usesHTTPSScheme;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)_initWithCFURLRequest:(id)arg1 ;
-(NSURL *)URL;
-(URLRequest*)_inner;
-(NSDictionary *)allHTTPHeaderFields;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(NSData *)HTTPBody;
-(NSInputStream *)HTTPBodyStream;
-(id)_initWithInternal:(id)arg1 ;
-(id)_allHTTPHeaderFieldsAsArrays;
-(double)_payloadTransmissionTimeout;
-(id)_startTimeoutDate;
-(NSURL *)mainDocumentURL;
-(NSString *)HTTPMethod;
-(id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
-(BOOL)_URLHasScheme:(id)arg1 ;
-(BOOL)_isSafeRequestForBackgroundDownload;
-(void)_removePropertyForKey:(id)arg1 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)_propertyForKey:(id)arg1 ;
-(BOOL)HTTPShouldHandleCookies;
-(BOOL)allowsCellularAccess;
-(unsigned long long)networkServiceType;
-(const CFURLRef)cfURL;
-(BOOL)_schemeWasUpgradedDueToDynamicHSTS;
-(id)_CFURLRequest;
-(unsigned long long)cachePolicy;
-(double)timeoutInterval;
-(id)_copyReplacingURLWithURL:(id)arg1 ;
-(BOOL)allowsConstrainedNetworkAccess;
-(BOOL)allowsExpensiveNetworkAccess;
-(id)boundInterfaceIdentifier;
-(BOOL)_ignoreHSTS;
-(BOOL)_preventHSTSStorage;
-(BOOL)_requiresShortConnectionTimeout;
-(id)_bodyParts;
-(id)HTTPContentType;
-(id)HTTPExtraCookies;
-(id)HTTPReferrer;
-(id)HTTPUserAgent;
-(BOOL)HTTPShouldUsePipelining;
-(id)contentDispositionEncodingFallbackArray;
-(unsigned long long)expectedWorkload;
-(double)_timeWindowDelay;
-(double)_timeWindowDuration;
-(BOOL)_isIdempotent;
@end

