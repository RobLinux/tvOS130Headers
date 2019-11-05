/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Task.h>

@class ACAccount, NSNumber, NSString, NSDictionary;

@interface AuthorizeTask : Task {

	ACAccount* _account;
	NSNumber* _accountID;
	unsigned _fairplayContext;
	BOOL _allowSilentAuthentication;
	BOOL _shouldAddKeysToKeyBag;
	BOOL _displaysDialogs;
	NSNumber* _familyMemberAccountID;
	id _authorizationToken;
	NSString* _bundleID;
	NSString* _clientIdentifierHeader;
	NSString* _keybagPath;
	unsigned long long _reason;
	NSDictionary* _response;
	NSString* _token;
	NSString* _userAgent;

}

@property (copy) NSNumber * familyMemberAccountID;               //@synthesize familyMemberAccountID=_familyMemberAccountID - In the implementation block
@property (assign) BOOL allowSilentAuthentication;               //@synthesize allowSilentAuthentication=_allowSilentAuthentication - In the implementation block
@property (copy) id authorizationToken;                          //@synthesize authorizationToken=_authorizationToken - In the implementation block
@property (copy) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * clientIdentifierHeader;              //@synthesize clientIdentifierHeader=_clientIdentifierHeader - In the implementation block
@property (copy) NSString * keybagPath;                          //@synthesize keybagPath=_keybagPath - In the implementation block
@property (assign) unsigned long long reason;                    //@synthesize reason=_reason - In the implementation block
@property (assign) BOOL shouldAddKeysToKeyBag;                   //@synthesize shouldAddKeysToKeyBag=_shouldAddKeysToKeyBag - In the implementation block
@property (assign) BOOL displaysDialogs;                         //@synthesize displaysDialogs=_displaysDialogs - In the implementation block
@property (readonly) NSDictionary * response;                    //@synthesize response=_response - In the implementation block
@property (copy) NSString * token;                               //@synthesize token=_token - In the implementation block
@property (copy) NSString * userAgent;                           //@synthesize userAgent=_userAgent - In the implementation block
-(NSString *)token;
-(unsigned long long)reason;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSDictionary *)response;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)main;
-(void)setReason:(unsigned long long)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)userAgent;
-(id)initWithAccountID:(id)arg1 ;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(id)authorizationToken;
-(BOOL)allowSilentAuthentication;
-(void)setAllowSilentAuthentication:(BOOL)arg1 ;
-(NSString *)keybagPath;
-(void)setKeybagPath:(NSString *)arg1 ;
-(BOOL)shouldAddKeysToKeyBag;
-(void)setShouldAddKeysToKeyBag:(BOOL)arg1 ;
-(void)_main;
-(void)_relaunchApp;
-(id)_authenticateForAppleID:(id)arg1 outError:(id*)arg2 ;
-(id)_getTokenForAccount:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_runAuthorizationWithAuthenticationWithError:(id*)arg1 ;
-(BOOL)displaysDialogs;
-(id)_newBodyDictionary;
-(NSNumber *)familyMemberAccountID;
-(id)_performAuthorizationResult:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)_handleResponse:(id)arg1 error:(id*)arg2 ;
-(void)setFamilyMemberAccountID:(NSNumber *)arg1 ;
-(void)setAuthorizationToken:(id)arg1 ;
-(void)setDisplaysDialogs:(BOOL)arg1 ;
@end

