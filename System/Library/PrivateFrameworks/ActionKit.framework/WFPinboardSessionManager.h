/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession, NSString, NSURL, NSDateFormatter;

@interface WFPinboardSessionManager : NSObject {

	NSURLSession* _session;
	NSString* _username;
	NSString* _password;
	NSString* _apiToken;
	NSURL* _baseURL;
	NSDateFormatter* _dateTimeFormatter;

}

@property (nonatomic,readonly) NSURL * baseURL;                                  //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * dateTimeFormatter;              //@synthesize dateTimeFormatter=_dateTimeFormatter - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                           //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * username;                                  //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                  //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * apiToken;                                  //@synthesize apiToken=_apiToken - In the implementation block
-(id)init;
-(NSURL *)baseURL;
-(NSString *)password;
-(NSURLSession *)session;
-(id)initWithSession:(id)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)apiToken;
-(void)setApiToken:(NSString *)arg1 ;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)addBookmark:(id)arg1 withTitle:(id)arg2 parameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getBookmarksWithTags:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)getModifiedDateWithCompletion:(/*^block*/id)arg1 ;
-(id)authenticatedTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDateFormatter *)dateTimeFormatter;
@end

