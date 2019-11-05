/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding;
@class NSArray;

@interface ASAuthorizationController : NSObject {

	NSArray* _authorizationRequests;
	id<ASAuthorizationControllerDelegate> _delegate;
	id<ASAuthorizationControllerPresentationContextProviding> _presentationContextProvider;

}

@property (nonatomic,readonly) NSArray * authorizationRequests;                                                                         //@synthesize authorizationRequests=_authorizationRequests - In the implementation block
@property (assign,nonatomic,__weak) id<ASAuthorizationControllerDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<ASAuthorizationControllerPresentationContextProviding> presentationContextProvider;              //@synthesize presentationContextProvider=_presentationContextProvider - In the implementation block
+(id)new;
-(id)init;
-(id<ASAuthorizationControllerDelegate>)delegate;
-(void)setDelegate:(id<ASAuthorizationControllerDelegate>)arg1 ;
-(id)_authKitRequests;
-(id)_authorizationFromAuthKitResult:(id)arg1 ;
-(id)initWithAuthorizationRequests:(id)arg1 ;
-(void)performRequests;
-(NSArray *)authorizationRequests;
-(id<ASAuthorizationControllerPresentationContextProviding>)presentationContextProvider;
-(void)setPresentationContextProvider:(id<ASAuthorizationControllerPresentationContextProviding>)arg1 ;
@end

