/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AKAuthorizationClientImpl, AKAuthorizationDaemonConnection;

@interface AKAuthorizationController : NSObject {

	AKAuthorizationClientImpl* _clientImpl;
	AKAuthorizationDaemonConnection* _daemonConnection;

}

@property (retain) id<AKAuthorizationUIProvider> uiProvider; 
+(id)sharedController;
+(id)appleOwnedDomains;
+(BOOL)canPerformAuthorization;
+(BOOL)shouldProcessURL:(id)arg1 ;
+(BOOL)isURLFromAppleOwnedDomain:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)setUiProvider:(id<AKAuthorizationUIProvider>)arg1 ;
-(void)performAuthorizationWithContext:(id)arg1 withUserProvidedInformation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getCredentialStateForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPresentationContextForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(/*^block*/id)arg1 ;
-(void)continueFetchingIconForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)establishConnectionWithNotificationHandlerEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<AKAuthorizationUIProvider>)uiProvider;
-(id)_appleIDAuthorizationURLs;
-(id)_appleOwnedDomains;
-(void)performAuthorizationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
