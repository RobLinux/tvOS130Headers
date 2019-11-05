/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession, WFOAuth2Credential, NSURL, NSString;

@interface WFTodoistSessionManager : NSObject {

	NSURLSession* _session;
	WFOAuth2Credential* _credential;
	NSURL* _baseURL;
	NSString* _syncToken;

}

@property (nonatomic,copy,readonly) NSURL * baseURL;                     //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * syncToken;                         //@synthesize syncToken=_syncToken - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) WFOAuth2Credential * credential;              //@synthesize credential=_credential - In the implementation block
+(id)dateFormatter;
-(id)init;
-(NSURL *)baseURL;
-(NSURLSession *)session;
-(WFOAuth2Credential *)credential;
-(void)setCredential:(WFOAuth2Credential *)arg1 ;
-(NSString *)syncToken;
-(void)setSyncToken:(NSString *)arg1 ;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)getProjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createFileOnItemWithId:(long long)arg1 withFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createItemInProject:(id)arg1 content:(id)arg2 dueDateString:(id)arg3 reminderDateString:(id)arg4 reminderService:(long long)arg5 priority:(long long)arg6 note:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)requestWithCommands:(id)arg1 resourceTypes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

