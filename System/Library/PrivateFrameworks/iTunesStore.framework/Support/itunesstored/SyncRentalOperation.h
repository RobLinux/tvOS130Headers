/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber, NSString, SSURLConnectionResponse;

@interface SyncRentalOperation : ISOperation {

	NSArray* _sinfs;
	NSNumber* _accountIdentifier;
	NSNumber* _rentalKeyIdentifier;
	NSString* _clientIdentifierHeader;
	NSString* _userAgent;
	SSURLConnectionResponse* _URLResponse;

}

@property (readonly) NSArray * sinfs;                                    //@synthesize sinfs=_sinfs - In the implementation block
@property (readonly) NSNumber * accountIdentifier;                       //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (readonly) NSNumber * rentalKeyIdentifier;                     //@synthesize rentalKeyIdentifier=_rentalKeyIdentifier - In the implementation block
@property (copy) NSString * clientIdentifierHeader;                      //@synthesize clientIdentifierHeader=_clientIdentifierHeader - In the implementation block
@property (copy) NSString * userAgent;                                   //@synthesize userAgent=_userAgent - In the implementation block
@property (readonly) SSURLConnectionResponse * URLResponse;              //@synthesize URLResponse=_URLResponse - In the implementation block
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSString *)userAgent;
-(id)_bodyData;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(NSArray *)sinfs;
-(SSURLConnectionResponse *)URLResponse;
-(id)initWithSinfs:(id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(NSNumber *)rentalKeyIdentifier;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(void)_run;
-(BOOL)_handleResponse:(id)arg1 error:(id*)arg2 ;
@end

