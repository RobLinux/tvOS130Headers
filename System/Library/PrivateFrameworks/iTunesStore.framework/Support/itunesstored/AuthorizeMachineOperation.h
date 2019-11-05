/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, SSURLConnectionResponse;

@interface AuthorizeMachineOperation : ISOperation {

	NSNumber* _accountIdentifier;
	BOOL _allowSilentAuthentication;
	NSString* _clientIdentifierHeader;
	NSNumber* _familyMemberAccountIdentifier;
	NSString* _keybagPath;
	long long _mdRetryCount;
	NSString* _mdSyncState;
	NSString* _reason;
	SSURLConnectionResponse* _response;
	BOOL _shouldAddKeysToKeyBag;
	BOOL _shouldPromptForCredentials;
	id _token;
	NSString* _userAgent;

}

@property (copy) NSNumber * accountIdentifier; 
@property (copy) NSNumber * familyMemberAccountIdentifier; 
@property (assign) BOOL allowSilentAuthentication; 
@property (copy) id authorizationToken; 
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSString * keybagPath; 
@property (copy) NSString * reason; 
@property (assign) BOOL shouldAddKeysToKeyBag; 
@property (assign) BOOL shouldPromptForCredentials; 
@property (copy) NSString * userAgent; 
@property (readonly) SSURLConnectionResponse * response; 
-(void)dealloc;
-(void)run;
-(NSString *)reason;
-(void)setUserAgent:(NSString *)arg1 ;
-(SSURLConnectionResponse *)response;
-(void)setReason:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(id)_accountIdentifier;
-(NSString *)userAgent;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(id)authorizationToken;
-(BOOL)allowSilentAuthentication;
-(void)setAllowSilentAuthentication:(BOOL)arg1 ;
-(NSString *)keybagPath;
-(void)setKeybagPath:(NSString *)arg1 ;
-(BOOL)shouldAddKeysToKeyBag;
-(void)setShouldAddKeysToKeyBag:(BOOL)arg1 ;
-(BOOL)shouldPromptForCredentials;
-(void)setShouldPromptForCredentials:(BOOL)arg1 ;
-(void)_run;
-(void)_setResponse:(id)arg1 ;
-(BOOL)_runAuthentication:(id*)arg1 ;
-(id)initWithAuthorizationRequest:(id)arg1 ;
-(id)_newBodyDictionary;
-(BOOL)_handleResponse:(id)arg1 error:(id*)arg2 ;
-(void)setAuthorizationToken:(id)arg1 ;
-(void)setFamilyMemberAccountIdentifier:(NSNumber *)arg1 ;
-(id)_newURLOperation;
-(id)_newAuthenticationContext;
-(BOOL)_runAuthorizationWithAuthentication:(BOOL)arg1 error:(id*)arg2 ;
-(id)_newMachineDataOperationWithResponse:(id)arg1 ;
-(NSNumber *)familyMemberAccountIdentifier;
@end
