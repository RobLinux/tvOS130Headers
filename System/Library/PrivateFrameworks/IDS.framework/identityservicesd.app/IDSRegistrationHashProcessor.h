/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSRegistrationHashProcessorDelegate;
@class IDSRateLimiter, IDSDAccountController, IDSPeerIDManager, IDSRegistrationKeyManager;

@interface IDSRegistrationHashProcessor : NSObject {

	IDSRateLimiter* _negativeRegistrationUpdateCache;
	id<IDSRegistrationHashProcessorDelegate> _delegate;
	IDSDAccountController* _accountController;
	IDSPeerIDManager* _peerIDManager;
	IDSRegistrationKeyManager* _registrationKeyManager;

}

@property (nonatomic,retain) IDSDAccountController * accountController;                             //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) IDSPeerIDManager * peerIDManager;                                      //@synthesize peerIDManager=_peerIDManager - In the implementation block
@property (nonatomic,retain) IDSRegistrationKeyManager * registrationKeyManager;                    //@synthesize registrationKeyManager=_registrationKeyManager - In the implementation block
@property (nonatomic,retain) IDSRateLimiter * negativeRegistrationUpdateCache;                      //@synthesize negativeRegistrationUpdateCache=_negativeRegistrationUpdateCache - In the implementation block
@property (assign,nonatomic,__weak) id<IDSRegistrationHashProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IDSRegistrationHashProcessorDelegate>)delegate;
-(void)setDelegate:(id<IDSRegistrationHashProcessorDelegate>)arg1 ;
-(void)setAccountController:(IDSDAccountController *)arg1 ;
-(IDSDAccountController *)accountController;
-(IDSPeerIDManager *)peerIDManager;
-(IDSRegistrationKeyManager *)registrationKeyManager;
-(void)setPeerIDManager:(IDSPeerIDManager *)arg1 ;
-(void)setRegistrationKeyManager:(IDSRegistrationKeyManager *)arg1 ;
-(id)initWithAccountController:(id)arg1 peerIDManager:(id)arg2 negativeRegistrationUpdateCache:(id)arg3 registrationKeyManager:(id)arg4 ;
-(IDSRateLimiter *)negativeRegistrationUpdateCache;
-(void)handleRegistrationUpdateForHash:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 service:(id)arg4 guid:(id)arg5 forceUpdate:(BOOL)arg6 ;
-(id)devicesHashForURI:(id)arg1 andService:(id)arg2 ;
-(void)setNegativeRegistrationUpdateCache:(IDSRateLimiter *)arg1 ;
@end

