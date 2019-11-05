/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFOAuth2SessionManager.h>
#import <WorkflowKit/WFOAuth2ProviderSessionManager.h>
#import <WorkflowKit/WFOAuth2RevocableSessionManager.h>

@class NSString;

@interface WFBoxOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager, WFOAuth2RevocableSessionManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithClientID:(id)arg1 clientSecret:(id)arg2 ;
-(id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 ;
-(void)revokeCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)appAuthorizationSessionWithAppName:(id)arg1 redirectURI:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

