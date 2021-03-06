/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSAuthenticateRequest;

@interface VUIAuthenticationManager : NSObject {

	BOOL __isObservingAccountStoreChange;
	SSAuthenticateRequest* __authRequest;

}

@property (nonatomic,retain) SSAuthenticateRequest * _authRequest;              //@synthesize _authRequest=__authRequest - In the implementation block
@property (assign,nonatomic) BOOL _isObservingAccountStoreChange;               //@synthesize _isObservingAccountStoreChange=__isObservingAccountStoreChange - In the implementation block
+(id)sharedInstance;
+(id)userFullName;
+(BOOL)allowsAccountModification;
+(BOOL)userHasActiveAccount;
+(void)requestAuthenticationAlwaysPrompt:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)_userAccount;
+(void)_performAuthenticationWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)userAccountName;
+(id)userFirstName;
+(id)userLastName;
+(void)signInUserWithAppleID:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)signOutUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(SSAuthenticateRequest *)_authRequest;
-(BOOL)_isObservingAccountStoreChange;
-(void)set_isObservingAccountStoreChange:(BOOL)arg1 ;
-(void)set_authRequest:(SSAuthenticateRequest *)arg1 ;
@end

