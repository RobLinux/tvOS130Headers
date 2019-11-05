/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/ISStoreURLOperationDelegate.h>

@class SSAuthenticationContext, NSString, SSLookupProperties, SSLookupResponse, NSNumber;

@interface LookupRequestOperation : ISOperation <ISStoreURLOperationDelegate> {

	SSAuthenticationContext* _authenticationContext;
	NSString* _clientIdentifierHeader;
	long long _personalizationStyle;
	SSLookupProperties* _properties;
	SSLookupResponse* _response;
	BOOL _shouldSuppressCookies;
	NSString* _userAgent;

}

@property (readonly) SSLookupProperties * lookupProperties; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) BOOL shouldSuppressCookies; 
@property (copy) NSString * clientIdentifierHeader; 
@property (assign) long long personalizationStyle; 
@property (copy) NSString * userAgent; 
@property (readonly) SSLookupResponse * lookupResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(id)_authenticationContext;
-(BOOL)shouldSuppressCookies;
-(void)setShouldSuppressCookies:(BOOL)arg1 ;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(long long)personalizationStyle;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(id)_URLBagContext;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(id)initWithLookupProperties:(id)arg1 ;
-(SSLookupResponse *)lookupResponse;
-(BOOL)_performLocationLookup:(id*)arg1 ;
-(BOOL)_performJSSignLookupWithURLBag:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performPlatformLookup:(id*)arg1 ;
-(void)_setLookupResponse:(id)arg1 ;
-(id)_newStoreURLOperationWithBagKey:(id)arg1 ;
-(id)_newLookupResponseWithResultsFromOperation:(id)arg1 ;
-(void)_setAccountID:(id)arg1 ;
-(SSLookupProperties *)lookupProperties;
@end

