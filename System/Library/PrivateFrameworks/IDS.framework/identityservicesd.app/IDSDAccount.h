/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSSMSRegistrationCenterListener.h>
#import <identityservicesd/IDSUTunDeliveryControllerConnectivityDelegate.h>
#import <identityservicesd/IDSPairingManagerDelegate.h>

@class NSMutableDictionary, IDSRegistration, IDSDService, NSString, NSMutableArray, NSHashTable, IDSRegistrationPushHandler, IMTimer, NSDate, NSMutableSet, NSSet, NSDictionary, NSArray;

@interface IDSDAccount : NSObject <IDSSMSRegistrationCenterListener, IDSUTunDeliveryControllerConnectivityDelegate, IDSPairingManagerDelegate> {

	NSMutableDictionary* _accountInfo;
	IDSRegistration* _registrationInfo;
	IDSDService* _service;
	NSString* _uniqueID;
	NSMutableArray* _setupHandlers;
	NSHashTable* _registrationListeners;
	IDSRegistrationPushHandler* _pushHandler;
	IMTimer* _restoreTimer;
	NSDate* _dateOfLastHandlesCheck;
	NSMutableSet* _localServices;
	unsigned _disabledAutomatically : 1;
	unsigned _duringInit : 1;
	unsigned _shouldRequeryHandles : 1;
	unsigned _issuingDependentCheck : 1;
	unsigned _issuingHandlesCheck : 1;
	unsigned _pendingDependentCheck : 1;
	unsigned _pendingHandlesCheck : 1;
	unsigned _pendingReIdentify : 1;
	unsigned _pendingReRegister : 1;
	unsigned _isRegistrationActive : 1;
	unsigned _pendingAccountInfoBroadcast : 1;
	unsigned _isBeingRemoved : 1;
	BOOL _isIssuingDependentCheck;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSSet * activeAliases; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,retain) NSString * loginID; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,readonly) NSString * dsHandle; 
@property (nonatomic,readonly) NSString * dsID; 
@property (nonatomic,readonly) IDSDService * service; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,readonly) IDSRegistration * registration;                                      //@synthesize registrationInfo=_registrationInfo - In the implementation block
@property (nonatomic,readonly) IDSRegistration * primaryRegistration; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) int registrationErrorReason; 
@property (nonatomic,readonly) long long registrationError; 
@property (nonatomic,readonly) BOOL isRegistered; 
@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) BOOL hasEverRegistered; 
@property (assign,nonatomic) BOOL wasDisabledAutomatically;                                         //@synthesize disabledAutomatically=_disabledAutomatically - In the implementation block
@property (nonatomic,readonly) BOOL isUsableForSending; 
@property (nonatomic,readonly) BOOL isIssuingDependentCheck;                                        //@synthesize isIssuingDependentCheck=_isIssuingDependentCheck - In the implementation block
@property (nonatomic,readonly) BOOL shouldAutoRegisterAllHandles; 
@property (nonatomic,readonly) BOOL shouldRegisterUsingDSHandle; 
@property (nonatomic,readonly) NSDictionary * accountInfo;                                          //@synthesize accountInfo=_accountInfo - In the implementation block
@property (nonatomic,readonly) NSArray * dependentRegistrations; 
@property (nonatomic,readonly) NSArray * dependentRegistrationsIncludingCurrentDevice; 
@property (nonatomic,readonly) NSArray * registeredDevices; 
@property (nonatomic,readonly) NSDictionary * defaultPairedDependentRegistration; 
@property (nonatomic,readonly) NSDate * lastGDRDate; 
@property (nonatomic,readonly) NSDate * lastRegistrationSuccessDate; 
@property (nonatomic,readonly) NSDate * lastRegistrationFailureDate; 
@property (nonatomic,readonly) long long lastRegistrationFailureError; 
@property (nonatomic,readonly) NSArray * aliasStrings; 
@property (nonatomic,readonly) NSArray * uris; 
@property (nonatomic,readonly) NSArray * linkedAccounts; 
@property (assign,nonatomic) BOOL isBeingRemoved;                                                   //@synthesize isBeingRemoved=_isBeingRemoved - In the implementation block
@property (assign,nonatomic) BOOL isUserDisabled; 
@property (assign,nonatomic) BOOL pendingDependentCheck;                                            //@synthesize pendingDependentCheck=_pendingDependentCheck - In the implementation block
@property (nonatomic,readonly) IDSDAccount * superAccount; 
@property (nonatomic,retain) NSString * userUniqueIdentifier; 
@property (nonatomic,readonly) BOOL shouldFilterInactiveAliases; 
@property (nonatomic,retain,readonly) NSDictionary * accountSetupInfo; 
+(void)dependentRegistration:(id)arg1 findDeviceUniqueID:(id*)arg2 btID:(id*)arg3 forURI:(id)arg4 token:(id)arg5 supportsLiveDelivery:(BOOL*)arg6 ;
+(BOOL)dependentRegistration:(id)arg1 hasDependentRegistrationWithURI:(id)arg2 token:(id)arg3 ;
+(void)_splitDestinations:(id)arg1 intoLocalDestinations:(id*)arg2 remoteDestinations:(id*)arg3 threadContext:(id)arg4 sendParameters:(id)arg5 ;
+(void)_sendLocallyWithSendParameters:(id)arg1 service:(id)arg2 uriToLocalDestination:(id)arg3 data:(id)arg4 protobuf:(id)arg5 threadContext:(id)arg6 progressBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 ;
+(void)sendMessageWithSendParameters:(id)arg1 service:(id)arg2 threadContext:(id)arg3 willSendBlock:(/*^block*/id)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)dealloc;
-(BOOL)isRegistered;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSString *)uniqueID;
-(NSString *)displayName;
-(BOOL)isEnabled;
-(IDSDService *)service;
-(int)accountType;
-(void)setDisplayName:(NSString *)arg1 ;
-(long long)registrationError;
-(void)setIsUserDisabled:(BOOL)arg1 ;
-(BOOL)isUserDisabled;
-(int)registrationStatus;
-(int)registrationErrorReason;
-(id)serviceType;
-(id)primaryAccount;
-(id)userDefaults;
-(id)_aliases;
-(void)addAliases:(id)arg1 ;
-(id)aliases;
-(void)systemDidStartBackup;
-(void)systemDidFinishMigration;
-(void)systemRestoreStateDidChange;
-(void)systemDidLeaveFirstDataProtectionLock;
-(IDSRegistration *)registration;
-(void)handler:(id)arg1 pushTokenChanged:(id)arg2 ;
-(BOOL)hasEverRegistered;
-(long long)lastRegistrationFailureError;
-(id)systemMonitor;
-(void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 messageServerTimestamp:(id)arg3 toURI:(id)arg4 ;
-(void)registerAccount;
-(void)authenticateAccount;
-(NSString *)userUniqueIdentifier;
-(id)primaryServiceName;
-(NSString *)loginID;
-(NSDictionary *)accountInfo;
-(NSArray *)aliasStrings;
-(id)vettedAliases;
-(void)passwordUpdated;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(void)removeAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)unregisterAccount;
-(void)_reregisterAndReidentify:(BOOL)arg1 ;
-(void)deactivateAndPurgeIdentify;
-(NSSet *)activeAliases;
-(void)activateAlias:(id)arg1 ;
-(void)deactivateAlias:(id)arg1 ;
-(void)setLoginID:(NSString *)arg1 ;
-(id)pairingManager;
-(NSArray *)uris;
-(id)serviceController;
-(id)registrationCenter;
-(long long)validationStatusForAlias:(id)arg1 ;
-(id)accountController;
-(id)accountController;
-(void)writeAccountDefaults:(id)arg1 ;
-(BOOL)wasDisabledAutomatically;
-(void)setWasDisabledAutomatically:(BOOL)arg1 ;
-(void)setRegistrationStatus:(int)arg1 error:(long long)arg2 alertInfo:(id)arg3 ;
-(void)reregister;
-(void)reIdentify;
-(NSArray *)linkedAccounts;
-(BOOL)isBeingRemoved;
-(void)_reregister;
-(NSArray *)registeredDevices;
-(void)_setupAccount;
-(BOOL)isAdHocAccount;
-(void)_updateRegistrationStatusWithError:(long long)arg1 info:(id)arg2 ;
-(id)peerIDManager;
-(NSString *)dsHandle;
-(void)sendMessageWithSendParameters:(id)arg1 willSendBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)registrationControllerNeedsNewRegistration:(id)arg1 ;
-(void)registrationController:(id)arg1 registrationUpdated:(id)arg2 ;
-(void)registrationController:(id)arg1 registrationWillStart:(id)arg2 ;
-(void)registrationController:(id)arg1 registrationFailed:(id)arg2 error:(long long)arg3 info:(id)arg4 ;
-(void)registrationController:(id)arg1 registrationSucceeded:(id)arg2 ;
-(void)registrationController:(id)arg1 deregistrationWillStart:(id)arg2 ;
-(BOOL)shouldRegisterUsingDSHandle;
-(void)center:(id)arg1 succeededIdentification:(id)arg2 phoneNumber:(id)arg3 token:(id)arg4 ;
-(void)center:(id)arg1 failedIdentification:(id)arg2 error:(long long)arg3 ;
-(void)centerNeedsNewIdentification:(id)arg1 ;
-(void)center:(id)arg1 startedAuthenticating:(id)arg2 ;
-(void)center:(id)arg1 succeededAuthentication:(id)arg2 ;
-(void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(BOOL)arg6 ;
-(void)center:(id)arg1 failedAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4 ;
-(void)center:(id)arg1 failedRegionValidation:(id)arg2 error:(long long)arg3 info:(id)arg4 ;
-(void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3 ;
-(IDSRegistration *)primaryRegistration;
-(id)_certForFromURI:(id)arg1 ;
-(long long)maxRemoteMessagingPayloadSize;
-(id)dependentRegistrationMatchingUUID:(id)arg1 ;
-(id)smallDescription;
-(void)clearDisplayName;
-(void)_updateAccountWithAccountInfo:(id)arg1 ;
-(id)initWithLoginID:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountConfig:(id)arg5 ;
-(id)pushHandler;
-(NSString *)dsID;
-(NSDate *)lastRegistrationFailureDate;
-(NSDate *)lastRegistrationSuccessDate;
-(unsigned char)unselectReasonForAlias:(id)arg1 ;
-(void)setupAccountWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldAutoRegisterAllHandles;
-(void)_ignoreIncomingPushes;
-(void)_acceptIncomingPushes;
-(void)_removeAuthenticationCredentialsIncludingAuthToken:(BOOL)arg1 ;
-(void)validateCredentialsWithDeliveryCompletionBlock:(/*^block*/id)arg1 ;
-(void)handler:(id)arg1 reloadBag:(id)arg2 ;
-(void)handler:(id)arg1 profileHandlesUpdated:(id)arg2 status:(id)arg3 ;
-(void)handler:(id)arg1 profile:(id)arg2 deviceUpdated:(id)arg3 service:(id)arg4 ;
-(void)handler:(id)arg1 flushCacheForURIs:(id)arg2 ;
-(NSDictionary *)accountSetupInfo;
-(NSArray *)dependentRegistrations;
-(void)didAddPairedDevice:(id)arg1 ;
-(void)didRemovePairedDevice:(id)arg1 ;
-(void)didUpdatePairedDevice:(id)arg1 ;
-(void)didUpdateProtocolForPairedDevice:(id)arg1 ;
-(id)utunDeliveryController;
-(NSDictionary *)defaultPairedDependentRegistration;
-(void)setIsBeingRemoved:(BOOL)arg1 ;
-(void)cleanupAccount;
-(id)adHocAccounts;
-(void)deactivateRegistration;
-(void)activateRegistration;
-(BOOL)hasAliasURI:(id)arg1 ;
-(void)refreshAdHocServiceNames;
-(id)initAdHocAccountWithLoginID:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountConfig:(id)arg5 primaryAccount:(id)arg6 ;
-(id)primaryAccountUniqueID;
-(id)initWithDictionary:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 ;
-(void)loadAliasUserIntentMetadataIfNeeded;
-(void)_cleanupAccount;
-(void)_issueDependentCheck;
-(void)gdrReAuthenticateIfNecessary;
-(void)_updateHandles:(BOOL)arg1 ;
-(void)_writeAccountDefaults:(id)arg1 force:(BOOL)arg2 ;
-(void)markAsUnselectedAlias:(id)arg1 withReason:(unsigned char)arg2 ;
-(void)setActiveAliases:(NSSet *)arg1 ;
-(void)_resetVariables;
-(BOOL)isDeviceRegistered;
-(id)_initWithLoginID:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountConfig:(id)arg5 primaryAccount:(id)arg6 isAdHocAccount:(BOOL)arg7 ;
-(void)_broadcastAccountInfoChanged;
-(BOOL)_stopRegistrationAgent;
-(void)setUserUniqueIdentifier:(NSString *)arg1 ;
-(id)_fromIDFromDevice:(id)arg1 withCBUUID:(id)arg2 uniqueID:(id)arg3 ;
-(id)_dependentRegistrationsForDefaultPairedDevice:(BOOL)arg1 ;
-(BOOL)shouldFilterInactiveAliases;
-(id)_dependentRegistrationsForDefaultPairedDevice:(BOOL)arg1 includingCurrentDevice:(BOOL)arg2 ;
-(id)accountAndAdHocAccounts;
-(void)_broadcastAccountMessageBlock:(/*^block*/id)arg1 ;
-(void)_notifyListenersWithChanges:(id)arg1 ;
-(void)_removeAliases:(id)arg1 withReason:(unsigned char)arg2 ;
-(void)_notifyClientDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)_notifyDelegatesAddedLocalDevice:(id)arg1 ;
-(void)authenticationChanged;
-(BOOL)isUsableForSending;
-(void)findDeviceUniqueID:(id*)arg1 btID:(id*)arg2 forURI:(id)arg3 token:(id)arg4 supportsLiveDelivery:(BOOL*)arg5 ;
-(BOOL)hasDependentRegistrationWithURI:(id)arg1 token:(id)arg2 ;
-(id)fromIDForCBUUID:(id)arg1 deviceID:(id)arg2 ;
-(IDSDAccount *)superAccount;
-(NSArray *)dependentRegistrationsIncludingCurrentDevice;
-(NSDate *)lastGDRDate;
-(BOOL)pendingDependentCheck;
-(void)setPendingDependentCheck:(BOOL)arg1 ;
-(BOOL)isIssuingDependentCheck;
-(int)_currentForcedGDRCount;
-(id)_performedForcedGDRDatePeriod;
-(void)_incrementForcedGDRCount;
-(void)_updatePerformedForcedGDRDate;
-(void)_clearForcedGDRCount;
-(void)_clearForcedGDRDate;
-(void)_updateVettedAliases:(id)arg1 emailInfo:(id)arg2 addToCurrentHandlesIfNeeded:(BOOL)arg3 ;
-(long long)_validationStatusForAlias:(id)arg1 ;
-(void)_addAliases:(id)arg1 ;
-(void)_setValidationStatus:(long long)arg1 error:(int)arg2 forAlias:(id)arg3 info:(id)arg4 addToCurrentHandlesIfNeeded:(BOOL)arg5 forceAdd:(BOOL)arg6 ;
-(int)_neededRegistrationType;
-(BOOL)_rebuildRegistrationInfo:(BOOL)arg1 ;
-(id)_aliasStrings;
-(void)_registerAccount;
-(void)_registrationAbilityChanged:(id)arg1 ;
-(void)_identityRebuilt:(id)arg1 ;
-(void)_identityGenerated:(id)arg1 ;
-(void)_keychainMigrationComplete:(id)arg1 ;
-(void)_needsEncryptionIdentityRoll:(id)arg1 ;
-(void)_checkRegistration;
-(void)_refreshRegistration;
-(void)markAsUnvettedAlias:(id)arg1 ;
-(void)_setValidationStatus:(long long)arg1 error:(int)arg2 forAlias:(id)arg3 info:(id)arg4 addToCurrentHandlesIfNeeded:(BOOL)arg5 forceAdd:(BOOL)arg6 aliasProperties:(id)arg7 ;
-(void)_notifyListenersAndSetDependentRegistrations:(id)arg1 onRegistrationInfo:(id)arg2 ;
-(void)_updatePhoneNumberCallerID;
-(void)_reregisterAndReProvision;
-(void)_removeAuthenticationCredentials;
-(void)_registerForDeviceCenterNotifications;
-(void)_unregisterAccount;
-(void)_deregisterDeviceCenterNotifications;
-(BOOL)_isPasswordPromptPermissibleDuringAuthentication;
-(void)_authenticateAccount;
-(void)_retryRegister;
-(BOOL)_migrateRegistrationIfNeeded;
-(BOOL)isDeviceAuthenticated;
-(BOOL)wasRecentlySelectedAlias:(id)arg1 ;
-(void)markAsVettedAlias:(id)arg1 ;
-(id)appleIDNotificationCenter;
-(void)_validateAliases:(id)arg1 validateAlreadyValid:(BOOL)arg2 ;
-(BOOL)_isBuddyShowing;
-(void)_issueCriticalDependentCheck;
-(void)_reAuthenticate;
-(void)_notifyRegistrationListenersAccountDidUpdateRegisteredDevices;
-(BOOL)_hasBudgetForForcedGDR;
-(void)_clearGDRState;
-(void)_updateSessionsWithRegisteredURIs:(id)arg1 ;
-(void)_flushTokensForRegisteredURIs:(id)arg1 ;
-(void)_processReceivedDependentRegistration:(id)arg1 oldDependentRegistrations:(id)arg2 ;
-(void)_saveAndNotifyGDRUpdate;
-(void)_updateSessionsWithRegisteredURIs:(id)arg1 retryIfNotRegistered:(BOOL)arg2 ;
-(unsigned long long)_unregistered130RetryInterval;
-(void)sendMessage:(id)arg1 params:(id)arg2 bulkedPayload:(id)arg3 fromID:(id)arg4 toDestinations:(id)arg5 useDictAsTopLevel:(BOOL)arg6 dataToEncrypt:(id)arg7 encryptPayload:(BOOL)arg8 wantsResponse:(BOOL)arg9 expirationDate:(id)arg10 command:(id)arg11 wantsDeliveryStatus:(BOOL)arg12 wantsCertifiedDelivery:(BOOL)arg13 deliveryStatusContext:(id)arg14 messageUUID:(id)arg15 priority:(long long)arg16 localDelivery:(BOOL)arg17 disallowRefresh:(BOOL)arg18 willSendBlock:(/*^block*/id)arg19 completionBlock:(/*^block*/id)arg20 ;
-(void)_validateAliases:(id)arg1 ;
-(id)invisibleAliases;
-(void)markAsSelectedAlias:(id)arg1 ;
-(void)_unvalidateAliases:(id)arg1 ;
-(void)_setUserIntentState:(unsigned char)arg1 forAlias:(id)arg2 withReason:(unsigned char)arg3 ;
-(unsigned char)currentAliasState:(id)arg1 ;
-(void)_stopTrackingUserIntentOfAlias:(id)arg1 ;
-(id)_userIntentDictForAlias:(id)arg1 ;
-(id)_allUserIntentWithDefaultReason:(BOOL)arg1 ;
-(double)_maxSelectedButVettedGracePeriod;
-(BOOL)isRegistrationActive;
-(BOOL)_issueForcedDependentCheckIfPossible;
-(void)registrationController:(id)arg1 deregistrationSucceeded:(id)arg2 ;
-(void)refreshVettedAliases;
-(void)markAsWasSelectedAlias:(id)arg1 ;
-(void)reportSpamWithMessages:(id)arg1 toURI:(id)arg2 ;
-(void)addRegistrationListener:(id)arg1 ;
-(void)removeRegistrationListener:(id)arg1 ;
-(void)_sendRemotelyWithSendParameters:(id)arg1 data:(id)arg2 protobuf:(id)arg3 willSendBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)shouldIncludeDefaultDeviceAsDestinationForMessageForFromID:(id)arg1 ;
-(void)_splitDestinations:(id)arg1 intoLocalDestinations:(id*)arg2 remoteDestinations:(id*)arg3 rapportDestinations:(id*)arg4 sendParameters:(id)arg5 ;
-(void)_sendLocallyWithSendParameters:(id)arg1 uriToLocalDestination:(id)arg2 data:(id)arg3 protobuf:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_rapportSendWithSendParameters:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_sendMessageWithSendParametersOnMainThread:(id)arg1 filteredDestinations:(id)arg2 data:(id)arg3 compressedData:(id)arg4 protobufToSend:(id)arg5 willSendBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)newSendMessageContext;
-(void)sendServerMessage:(id)arg1 command:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)decryptMessageData:(id)arg1 myURI:(id)arg2 fromURI:(id)arg3 token:(id)arg4 groupID:(id)arg5 encryptionType:(long long)arg6 isLiveRetry:(BOOL)arg7 replayKey:(id)arg8 completionBlock:(/*^block*/id)arg9 ;
@end

