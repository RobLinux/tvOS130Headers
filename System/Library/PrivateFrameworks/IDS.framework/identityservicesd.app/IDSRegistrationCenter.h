/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSEngramKeyStoreListener.h>

@protocol IDSRegistrationCenterMessageDelivery;
@class NSMutableArray, NSMutableDictionary, NSDate, NSNumber, IDSValidationSession, IDSPushHandler, IDSGetDependentRegistrationsCenter, IDSKeyTransparencyVerifier, CUTDeferredTaskQueue, NSString;

@interface IDSRegistrationCenter : NSObject <IDSEngramKeyStoreListener> {

	NSMutableArray* _queuedRegistrations;
	NSMutableArray* _queuedAuthentications;
	NSMutableArray* _currentAuthentications;
	NSMutableArray* _currentRegistrations;
	NSMutableArray* _handlers;
	BOOL _pendingDequeue;
	BOOL _pendingDeregistration;
	NSMutableDictionary* _currentGetHandlesBlocks;
	NSMutableDictionary* _currentGetHandlesRegistrations;
	NSMutableArray* _successfulRegistrations;
	BOOL _shouldUseAbsinthe;
	BOOL _isBuildingContext;
	NACContextOpaque_Ref _validationContext;
	BOOL _validationContextDisabled;
	NSDate* _validateContextDate;
	NSNumber* _validateContextTTL;
	IDSValidationSession* _validationSession;
	NSMutableArray* _validationContextQueue;
	NSDate* _dateSentLastHTTPMessage;
	NSDate* _dateLastRegistered;
	NSDate* _accountingHour;
	unsigned long long _registrations;
	id<IDSRegistrationCenterMessageDelivery> _httpMessageDelivery;
	IDSPushHandler* _pushHandler;
	IDSGetDependentRegistrationsCenter* _gdrCenter;
	IDSKeyTransparencyVerifier* _keyTransparencyVerifier;
	CUTDeferredTaskQueue* _sendAuthenticateRegistrationTask;
	CUTDeferredTaskQueue* _sendRegistrationTask;
	CUTDeferredTaskQueue* _sendDeregistrationTask;
	CUTDeferredTaskQueue* _cleanupAbsintheTask;

}

@property (nonatomic,readonly) CUTDeferredTaskQueue * sendAuthenticateRegistrationTask;              //@synthesize sendAuthenticateRegistrationTask=_sendAuthenticateRegistrationTask - In the implementation block
@property (nonatomic,readonly) CUTDeferredTaskQueue * sendRegistrationTask;                          //@synthesize sendRegistrationTask=_sendRegistrationTask - In the implementation block
@property (nonatomic,readonly) CUTDeferredTaskQueue * sendDeregistrationTask;                        //@synthesize sendDeregistrationTask=_sendDeregistrationTask - In the implementation block
@property (nonatomic,readonly) CUTDeferredTaskQueue * cleanupAbsintheTask;                           //@synthesize cleanupAbsintheTask=_cleanupAbsintheTask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)handler:(id)arg1 pushTokenChanged:(id)arg2 ;
-(void)__sendMessage:(id)arg1 ;
-(void)logState;
-(BOOL)sendRegistration:(id)arg1 ;
-(BOOL)sendDeregistration:(id)arg1 ;
-(BOOL)isRegistering:(id)arg1 ;
-(void)cancelActionsForRegistrationInfo:(id)arg1 ;
-(void)reportSpamWithMessages:(id)arg1 selfURI:(id)arg2 registration:(id)arg3 ;
-(void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 messageServerTimestamp:(id)arg3 selfURI:(id)arg4 registration:(id)arg5 ;
-(BOOL)queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_notifyRegistrationSuccess:(id)arg1 ;
-(void)buildValidationCredentialsIfNeeded;
-(BOOL)authenticateRegistration:(id)arg1 ;
-(id)activeRegistrations;
-(void)engramKeyStoreDidUpdateIdentities:(id)arg1 ;
-(void)sendHardDeregisterCompletionBlock:(/*^block*/id)arg1 ;
-(id)dateLastRegistered;
-(id)gdrCenter;
-(void)sendValidateCredential:(id)arg1 withDeliveryCompletionBlock:(/*^block*/id)arg2 ;
-(void)_dequeuePendingRequestsIfNecessary;
-(void)__reallySendAuthenticateRegistration;
-(void)__reallySendRegistration;
-(void)__reallySendDeregistration;
-(BOOL)_hasCurrentAuthenticationsOrRegistrations;
-(void)__cleanupValidationInfo;
-(void)__dumpState;
-(id)initWithMessageDelivery:(id)arg1 pushHandler:(id)arg2 keyTransparencyVerifier:(id)arg3 ;
-(BOOL)_checkOverRegistrations;
-(void)_sendAuthenticateRegistration:(id)arg1 ;
-(void)_sendRegistrationAsDeregister:(BOOL)arg1 ;
-(void)__failValidationQueueWithErrorResponseCode:(long long)arg1 ;
-(void)_queueBuildingValidationDataIfNecessaryForMessage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_sendAbsintheValidationCertRequestIfNeeded;
-(void)__flushValidationQueue;
-(void)__failValidationQueue;
-(void)__queueValidationMessage:(id)arg1 ;
-(void)_noteRegistration;
-(id)_keyTransparencyLoggableDataFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3 ;
-(id)keyTransparencyVerifier;
-(void)_notifyRegistrationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5 ;
-(void)_notifyAllSuccessfulRegistrations:(id)arg1 ;
-(id)_URIsToRegisterForRegistration:(id)arg1 ;
-(BOOL)_hasOngoingAuthentications;
-(id)_trustedDeviceForRegistrations:(id)arg1 transparencyLoggableDatasByServiceType:(id)arg2 ;
-(void)_processRegistrationMessage:(id)arg1 sentRegistrations:(id)arg2 descriptionString:(id)arg3 actionID:(id)arg4 actionString:(id)arg5 isDeregister:(BOOL)arg6 deliveredWithError:(id)arg7 resultCode:(long long)arg8 resultDictionary:(id)arg9 ;
-(void)_notifyIDSAuthenticationSuccess:(id)arg1 ;
-(void)_notifyProvisionFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 fatal:(BOOL)arg5 info:(id)arg6 ;
-(/*^block*/id)_authMessageCompletionWithRegistration:(id)arg1 withOverallSuccessBlock:(/*^block*/id)arg2 overallFailure:(/*^block*/id)arg3 ;
-(id)_authMessageForRegistration:(id)arg1 ;
-(void)cancelRegisterActionsForRegistrationInfo:(id)arg1 ;
-(id)_geoRegion;
-(BOOL)_hasRegistration:(id)arg1 inQueue:(id)arg2 ;
-(void)_notifyEmailQueryFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5 ;
-(void)_notifyEmailQuerySuccess:(id)arg1 emailInfo:(id)arg2 ;
-(void)_processGetHandlesMessage:(id)arg1 registrations:(id)arg2 deliveredWithError:(id)arg3 resultCode:(long long)arg4 resultDictionary:(id)arg5 allowPasswordPrompt:(BOOL)arg6 ;
-(BOOL)_queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_sendDeregistration:(id)arg1 ;
-(void)_notifyRegistrationIdentitiesUpdated;
-(void)reportiMessageSpamCheckUnknown:(id)arg1 count:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CUTDeferredTaskQueue *)sendAuthenticateRegistrationTask;
-(CUTDeferredTaskQueue *)sendRegistrationTask;
-(CUTDeferredTaskQueue *)sendDeregistrationTask;
-(CUTDeferredTaskQueue *)cleanupAbsintheTask;
@end

