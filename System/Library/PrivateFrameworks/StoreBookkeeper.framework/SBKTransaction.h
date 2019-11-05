/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, SBKRequest, NSMutableDictionary;

@interface SBKTransaction : NSObject {

	NSString* _domain;
	NSURL* _requestURL;
	SBKRequest* _activeRequest;
	NSMutableDictionary* _userInfo;

}

@property (retain) NSMutableDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (copy,readonly) NSString * domain;                    //@synthesize domain=_domain - In the implementation block
@property (retain) NSURL * requestURL;                          //@synthesize requestURL=_requestURL - In the implementation block
@property (retain) SBKRequest * activeRequest;                  //@synthesize activeRequest=_activeRequest - In the implementation block
-(id)init;
-(NSString *)domain;
-(NSMutableDictionary *)userInfo;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(SBKRequest *)activeRequest;
-(NSURL *)requestURL;
-(void)setRequestURL:(NSURL *)arg1 ;
-(id)clampsKey;
-(void)setTransactionContext:(id)arg1 forKey:(id)arg2 ;
-(void)setActiveRequest:(SBKRequest *)arg1 ;
-(id)newRequest;
-(void)processDataInResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)transactionContextForKey:(id)arg1 ;
-(id)initWithDomain:(id)arg1 requestURL:(id)arg2 ;
@end

