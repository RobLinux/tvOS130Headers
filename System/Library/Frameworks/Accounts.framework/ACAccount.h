/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <Accounts/AMSHashable.h>
#import <Accounts/ACProtobufCoding.h>
#import <Accounts/NSCoding.h>
#import <Accounts/NSCopying.h>
#import <Accounts/NSSecureCoding.h>

@protocol NSObject;
@class NSString, ACAccountStore, ACAccountType, ACAccountCredential, NSMutableDictionary, NSURL, NSDate, NSArray, ACMutableTrackedSet, NSMutableSet, NSNumber, NSSet, NSDictionary, AARegionInfo, AASuspensionInfo, ACTrackedSet;

@interface ACAccount : NSObject <AMSHashable, ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {

	ACAccountStore* _accountStore;
	NSString* _identifier;
	NSString* _accountDescription;
	NSString* _owningBundleID;
	NSString* _username;
	NSString* _authenticationType;
	NSString* _credentialType;
	NSString* _clientToken;
	ACAccountType* _accountType;
	ACAccountCredential* _credential;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _dataclassProperties;
	NSURL* _objectID;
	NSDate* _date;
	NSDate* _lastCredentialRenewalRejectionDate;
	NSString* _parentAccountIdentifier;
	ACAccount* _parentAccount;
	NSArray* _childAccounts;
	ACMutableTrackedSet* _trackedProvisionedDataclasses;
	ACMutableTrackedSet* _trackedEnabledDataclasses;
	NSMutableSet* _dirtyProperties;
	NSMutableSet* _dirtyAccountProperties;
	NSMutableSet* _dirtyDataclassProperties;
	id<NSObject> _credentialsDidChangeObserver;
	/*^block*/id _accountPropertiesTransformer;
	BOOL _haveCheckedForClientToken;
	BOOL _accountAccessAvailable;
	BOOL _authenticated;
	BOOL _active;
	BOOL _supportsAuthentication;
	BOOL _visible;
	BOOL _haveCheckedForParentAccount;
	BOOL _haveCheckedForChildAccounts;
	BOOL _wasProvisionedDataclassesReset;
	BOOL _wasEnabledDataclassesReset;

}

@property (setter=ic_setDSID:,nonatomic,copy) NSNumber * ic_DSID; 
@property (setter=ic_setAltDSID:,nonatomic,copy) NSString * ic_altDSID; 
@property (setter=ic_setFirstName:,nonatomic,copy) NSString * ic_firstName; 
@property (setter=ic_setLastName:,nonatomic,copy) NSString * ic_lastName; 
@property (setter=ic_setStorefront:,nonatomic,copy) NSString * ic_storefront; 
@property (setter=ic_setUniqueIdentifier:,nonatomic,copy) NSNumber * ic_uniqueIdentifier; 
@property (assign,setter=ic_setSandboxed:,getter=ic_isSandboxed,nonatomic) BOOL ic_sandboxed; 
@property (assign,setter=ic_setActiveLockerAccount:,getter=ic_isActiveLockerAccount,nonatomic) BOOL ic_activeLockerAccount; 
@property (getter=ic_isCloudBackupEnabled,nonatomic,readonly) BOOL ic_cloudBackupEnabled; 
@property (assign,setter=ic_setManagedAppleID:,getter=ic_isManagedAppleID,nonatomic) BOOL ic_managedAppleID; 
@property (setter=ic_setAgeVerificationExpirationDate:,nonatomic,copy) NSDate * ic_ageVerificationExpirationDate; 
@property (setter=ic_setMergeWithCloudLibraryPreference:,nonatomic,copy) NSNumber * ic_mergeWithCloudLibraryPreference; 
@property (assign,setter=ic_setSubscriptionStatusEnabled:,getter=ic_isSubscriptionStatusEnabled,nonatomic) BOOL ic_subscriptionStatusEnabled; 
@property (nonatomic,copy,readonly) NSArray * ic_homeUserIdentifiers; 
@property (getter=ic_isLocalAccount,nonatomic,readonly) BOOL ic_localAccount; 
@property (setter=ic_setAutomaticDownloadKinds:,nonatomic,copy) NSSet * ic_automaticDownloadKinds; 
@property (setter=ic_setPrivateListeningEnabled:,nonatomic,copy) NSNumber * ic_privateListeningEnabled; 
@property (setter=ic_setCloudLibraryStateReason:,nonatomic,copy) NSDictionary * ic_cloudLibraryStateReason; 
@property (nonatomic,copy,readonly) NSDictionary * ic_privateListeningEnabledForHomeUsers; 
@property (getter=ic_isManageable,nonatomic,readonly) BOOL ic_manageable; 
@property (setter=tvs_setLastAuthenticationDate:,nonatomic,retain) NSDate * tvs_lastAuthenticationDate; 
@property (nonatomic,readonly) BOOL tvs_sharedPhotoStreamEnabled; 
@property (nonatomic,readonly) BOOL tvs_myPhotoStreamEnabled; 
@property (nonatomic,readonly) BOOL tvs_iCloudPhotoLibraryEnabled; 
@property (nonatomic,readonly) NSString * ams_altDSID; 
@property (nonatomic,readonly) NSArray * ams_cookies; 
@property (nonatomic,readonly) NSString * ams_creditsString; 
@property (nonatomic,readonly) NSNumber * ams_DSID; 
@property (nonatomic,readonly) NSString * ams_firstName; 
@property (getter=ams_isDemoAccount,nonatomic,readonly) BOOL ams_demoAccount; 
@property (assign,setter=ams_setFreePasswordPromptSetting:,nonatomic) unsigned long long ams_freePasswordPromptSetting; 
@property (nonatomic,readonly) NSString * ams_fullName; 
@property (getter=ams_isHSA2,nonatomic,readonly) BOOL ams_HSA2; 
@property (getter=ams_isiCloudAccount,nonatomic,readonly) BOOL ams_iCloudAccount; 
@property (getter=ams_isIDMSAccount,nonatomic,readonly) BOOL ams_IDMSAccount; 
@property (getter=ams_isiTunesAccount,nonatomic,readonly) BOOL ams_iTunesAccount; 
@property (nonatomic,readonly) NSString * ams_lastName; 
@property (getter=ams_isLocalAccount,nonatomic,readonly) BOOL ams_localAccount; 
@property (getter=ams_isManagedAppleID,nonatomic,readonly) BOOL ams_managedAppleID; 
@property (assign,setter=ams_setMergedPrivacyAcknowledgement:,nonatomic) BOOL ams_mergedPrivacyAcknowledgement; 
@property (assign,setter=ams_setPaidPasswordPromptSetting:,nonatomic) unsigned long long ams_paidPasswordPromptSetting; 
@property (getter=ams_isPrivateListeningEnabled,nonatomic,readonly) BOOL ams_privateListeningEnabled; 
@property (nonatomic,readonly) NSDictionary * ams_privacyAcknowledgement; 
@property (getter=ams_isSandboxAccount,nonatomic,readonly) BOOL ams_sandboxAccount; 
@property (nonatomic,readonly) unsigned long long ams_securityLevel; 
@property (nonatomic,readonly) NSString * ams_storefront; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * hashedDescription; 
@property (nonatomic,readonly) NSString * aa_formattedUsername; 
@property (nonatomic,readonly) NSString * aa_primaryEmail; 
@property (nonatomic,readonly) NSString * aa_appleId; 
@property (nonatomic,readonly) NSArray * aa_appleIDAliases; 
@property (nonatomic,readonly) NSString * aa_personID; 
@property (nonatomic,readonly) NSString * aa_altDSID; 
@property (setter=aa_setFirstName:,nonatomic,copy) NSString * aa_firstName; 
@property (setter=aa_setMiddleName:,nonatomic,copy) NSString * aa_middleName; 
@property (setter=aa_setLastName:,nonatomic,copy) NSString * aa_lastName; 
@property (setter=aa_setAccountClass:,nonatomic,copy) NSString * aa_accountClass; 
@property (nonatomic,copy,readonly) AARegionInfo * aa_regionInfo; 
@property (assign,setter=aa_setPrimaryAccount:,nonatomic) BOOL aa_isPrimaryAccount; 
@property (assign,setter=aa_setPrimaryEmailVerified:,nonatomic) BOOL aa_isPrimaryEmailVerified; 
@property (assign,setter=aa_setNeedsToVerifyTerms:,nonatomic) BOOL aa_needsToVerifyTerms; 
@property (assign,setter=aa_setUsesCloudDocs:,nonatomic) BOOL aa_isUsingCloudDocs; 
@property (assign,setter=aa_setCloudDocsMigrationComplete:,nonatomic) BOOL aa_isCloudDocsMigrationComplete; 
@property (nonatomic,readonly) BOOL aa_isUsingiCloud; 
@property (nonatomic,readonly) BOOL aa_needsEmailConfiguration; 
@property (nonatomic,readonly) BOOL aa_isManagedAppleID; 
@property (nonatomic,readonly) BOOL aa_isNotesMigrated; 
@property (nonatomic,readonly) BOOL aa_isSandboxAccount; 
@property (nonatomic,readonly) BOOL aa_hasOptionalTerms; 
@property (setter=aa_setLastKnownQuota:,nonatomic,copy) NSNumber * aa_lastKnownQuota; 
@property (assign,setter=aa_setRepairState:,nonatomic) NSNumber * aa_repairState; 
@property (nonatomic,readonly) BOOL aa_isSuspended; 
@property (nonatomic,copy,readonly) AASuspensionInfo * aa_suspensionInfo; 
@property (nonatomic,readonly) BOOL aa_isFamilyEligible; 
@property (nonatomic,readonly) ACAccount * aa_fmfAccount; 
@property (nonatomic,readonly) ACAccount * aa_fmipAccount; 
@property (nonatomic,readonly) ACAccount * aa_cloudKitAccount; 
@property (nonatomic,readonly) ACAccount * aa_childMailAccount; 
@property (setter=aa_setPassword:,nonatomic,copy) NSString * aa_password; 
@property (setter=aa_setAuthToken:,nonatomic,copy) NSString * aa_authToken; 
@property (nonatomic,readonly) NSString * aa_fmipToken; 
@property (nonatomic,readonly) NSString * aa_mapsToken; 
@property (nonatomic,readonly) NSString * aa_mdmServerToken; 
@property (assign,setter=aa_setSyncedAccount:,nonatomic) BOOL aa_isSyncedAccount; 
@property (nonatomic,readonly) BOOL aa_needsRegistration; 
@property (nonatomic,readonly) BOOL aa_serviceUnavailable; 
@property (nonatomic,readonly) NSDictionary * aa_serviceUnavailableInfo; 
@property (nonatomic,readonly) NSString * aa_protocolVersion; 
@property (nonatomic,readonly) NSString * aa_displayName; 
@property (nonatomic,readonly) NSString * aa_syncStoreIdentifier; 
@property (nonatomic,readonly) NSString * aa_accountTypeString; 
@property (nonatomic,readonly) NSString * aa_accountFooterText; 
@property (nonatomic,readonly) NSDictionary * aa_accountFooterButton; 
@property (nonatomic,readonly) NSDictionary * aa_accountFirstDisplayAlert; 
@property (setter=_aa_setRawPassword:,nonatomic,copy) NSString * _aa_rawPassword; 
@property (nonatomic,readonly) NSString * _ss_altDSID; 
@property (nonatomic,readonly) NSNumber * _ss_DSID; 
@property (nonatomic,readonly) NSString * _ss_hashedDescription; 
@property (nonatomic,readonly) BOOL _ss_isAppleAuthenticationAccount; 
@property (nonatomic,readonly) BOOL _ss_isiCloudAccount; 
@property (nonatomic,readonly) BOOL _ss_isIDMSAccount; 
@property (nonatomic,readonly) BOOL _ss_isiTunesAccount; 
@property (nonatomic,readonly) BOOL _ss_isLocalAccount; 
@property (setter=_ss_setSecureToken:,nonatomic,copy) NSString * _ss_secureToken; 
@property (nonatomic,copy) NSNumber * _cn_dsid; 
@property (nonatomic,copy) NSString * _cn_altDSID; 
@property (nonatomic,copy) NSString * _cn_principalPath; 
@property (nonatomic,copy) NSString * _cn_appleID; 
@property (nonatomic,copy) NSString * _cn_firstName; 
@property (nonatomic,copy) NSString * _cn_lastName; 
@property (nonatomic,readonly) BOOL _cn_isPrimaryAccount; 
@property (nonatomic,readonly) BOOL _cn_isLDAP; 
@property (nonatomic,readonly) BOOL _cn_isCardDAV; 
@property (nonatomic,readonly) BOOL _cn_isChildDelegateAccount; 
@property (nonatomic,copy,readonly) NSString * _cn_appleAccountAppleID; 
@property (nonatomic,copy,readonly) NSArray * _cn_appleAccountAppleIDAliases; 
@property (nonatomic,retain) NSDictionary * communicationServiceRules; 
@property (nonatomic,retain) NSString * mcAccountIdentifier; 
@property (nonatomic,retain) NSString * mcConfigurationProfileIdentifier; 
@property (nonatomic,retain) NSString * mcProfileUUID; 
@property (nonatomic,retain) NSString * mcPayloadUUID; 
@property (nonatomic,retain) NSNumber * mcEASAccountEnableNotes; 
@property (nonatomic,retain) NSNumber * mcEnableMailUserOverridable; 
@property (nonatomic,retain) NSNumber * mcEnableContactsUserOverridable; 
@property (nonatomic,retain) NSNumber * mcEnableCalendarsUserOverridable; 
@property (nonatomic,retain) NSNumber * mcEnableRemindersUserOverridable; 
@property (nonatomic,retain) NSNumber * mcEnableNotesUserOverridable; 
@property (nonatomic,copy) ACTrackedSet * trackedProvisionedDataclasses;                                                                                   //@synthesize trackedProvisionedDataclasses=_trackedProvisionedDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL wasProvisionedDataclassesReset;                                                                                        //@synthesize wasProvisionedDataclassesReset=_wasProvisionedDataclassesReset - In the implementation block
@property (nonatomic,copy) ACTrackedSet * trackedEnabledDataclasses;                                                                                       //@synthesize trackedEnabledDataclasses=_trackedEnabledDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL wasEnabledDataclassesReset;                                                                                            //@synthesize wasEnabledDataclassesReset=_wasEnabledDataclassesReset - In the implementation block
@property (nonatomic,readonly) NSURL * objectID; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (nonatomic,retain) ACAccount * parentAccount; 
@property (nonatomic,readonly) NSString * parentAccountIdentifier; 
@property (nonatomic,readonly) NSArray * childAccounts; 
@property (nonatomic,retain) NSMutableSet * enabledDataclasses; 
@property (nonatomic,retain) NSMutableSet * provisionedDataclasses; 
@property (nonatomic,__weak,readonly) NSDictionary * dataclassProperties; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (nonatomic,__weak,readonly) NSDictionary * accountProperties; 
@property (nonatomic,__weak,readonly) ACAccount * displayAccount; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL supportsAuthentication; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) NSSet * dirtyProperties; 
@property (nonatomic,readonly) NSSet * dirtyAccountProperties; 
@property (nonatomic,readonly) NSSet * dirtyDataclassProperties; 
@property (nonatomic,readonly) NSString * authenticationType; 
@property (nonatomic,readonly) NSString * credentialType; 
@property (nonatomic,readonly) BOOL supportsPush; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (nonatomic,retain) NSDate * lastCredentialRenewalRejectionDate; 
@property (nonatomic,readonly) NSString * shortDebugName; 
@property (nonatomic,readonly) NSString * clientToken; 
@property (copy) id accountPropertiesTransformer;                                                                                                          //@synthesize accountPropertiesTransformer=_accountPropertiesTransformer - In the implementation block
@property (nonatomic,__weak,readonly) NSString * identifier; 
@property (nonatomic,retain) ACAccountType * accountType; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,readonly) NSString * userFullName; 
@property (nonatomic,retain) ACAccountCredential * credential; 
+(id)_getSetCookiesForResponse:(id)arg1 ;
+(id)_defaultValueForAccountFlag:(id)arg1 ;
+(BOOL)_isAccountFlagValue:(id)arg1 validForAccountFlag:(id)arg2 ;
+(BOOL)_isAccountFlagWritable:(id)arg1 ;
+(id)_getSetGlobalCookiesForResponse:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSSet *)ic_automaticDownloadKinds;
-(NSNumber *)ic_DSID;
-(BOOL)ic_isActiveLockerAccount;
-(BOOL)ic_isCloudBackupEnabled;
-(void)ic_setAltDSID:(id)arg1 ;
-(void)ic_setDSID:(id)arg1 ;
-(void)ic_setFirstName:(id)arg1 ;
-(void)ic_setLastName:(id)arg1 ;
-(void)ic_setManagedAppleID:(BOOL)arg1 ;
-(void)ic_setSandboxed:(BOOL)arg1 ;
-(void)ic_setStorefront:(id)arg1 ;
-(void)ic_setSubscriptionStatusEnabled:(BOOL)arg1 ;
-(void)ic_setMergeWithCloudLibraryPreference:(id)arg1 ;
-(void)ic_setCloudLibraryStateReason:(id)arg1 ;
-(void)ic_setPrivateListeningEnabled:(id)arg1 ;
-(void)ic_setActiveLockerAccount:(BOOL)arg1 ;
-(NSString *)ic_altDSID;
-(NSString *)ic_firstName;
-(NSString *)ic_lastName;
-(BOOL)ic_isManagedAppleID;
-(BOOL)ic_isSandboxed;
-(NSString *)ic_storefront;
-(BOOL)ic_isSubscriptionStatusEnabled;
-(NSDate *)ic_ageVerificationExpirationDate;
-(NSNumber *)ic_mergeWithCloudLibraryPreference;
-(NSArray *)ic_homeUserIdentifiers;
-(NSDictionary *)ic_cloudLibraryStateReason;
-(NSNumber *)ic_privateListeningEnabled;
-(NSDictionary *)ic_privateListeningEnabledForHomeUsers;
-(BOOL)ic_isLocalAccount;
-(NSNumber *)ic_uniqueIdentifier;
-(void)ic_setUniqueIdentifier:(id)arg1 ;
-(void)ic_setAgeVerificationExpirationDate:(id)arg1 ;
-(BOOL)ic_isManageable;
-(void)ic_setAutomaticDownloadKinds:(id)arg1 ;
-(void)tvs_setLastAuthenticationDate:(id)arg1 ;
-(BOOL)tvs_sharedPhotoStreamEnabled;
-(BOOL)_tvs_performBlock:(/*^block*/id)arg1 authenticationExpiration:(double)arg2 error:(id*)arg3 ;
-(BOOL)tvs_myPhotoStreamEnabled;
-(BOOL)tvs_iCloudPhotoLibraryEnabled;
-(BOOL)tvs_setMyPhotoStreamEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(NSDate *)tvs_lastAuthenticationDate;
-(BOOL)tvs_setSharedPhotoStreamEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)tvs_setiCloudPhotoLibraryEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(NSString *)hashedDescription;
-(NSArray *)ams_cookies;
-(BOOL)ams_addCookies:(id)arg1 ;
-(NSNumber *)ams_DSID;
-(void)ams_removeAllCookies;
-(BOOL)ams_isSandboxAccount;
-(BOOL)ams_isLocalAccount;
-(id)ams_accountFlagValueForAccountFlag:(id)arg1 ;
-(void)ams_setAccountFlagValue:(id)arg1 forAccountFlag:(id)arg2 ;
-(void)ams_removeCookiesMatchingProperties:(id)arg1 ;
-(id)ams_cookiesForURL:(id)arg1 ;
-(NSString *)ams_storefront;
-(BOOL)ams_isManagedAppleID;
-(NSDictionary *)ams_privacyAcknowledgement;
-(long long)ams_mergePrivacyAcknowledgement:(id)arg1 ;
-(BOOL)ams_isiTunesAccount;
-(BOOL)ams_isDuplicate:(id)arg1 ;
-(id)ams_delta:(id)arg1 ;
-(BOOL)ams_mergedPrivacyAcknowledgement;
-(void)ams_setMergedPrivacyAcknowledgement:(BOOL)arg1 ;
-(id)ams_storefrontForMediaType:(id)arg1 ;
-(id)ams_accountFlags;
-(BOOL)ams_isiCloudAccount;
-(BOOL)ams_isIDMSAccount;
-(void)ams_setStorefront:(id)arg1 forMediaType:(id)arg2 ;
-(NSString *)ams_altDSID;
-(void)ams_setAltDSID:(id)arg1 ;
-(void)ams_setDSID:(id)arg1 ;
-(id)ams_password;
-(void)ams_setPassword:(id)arg1 ;
-(void)ams_setAccountFlags:(id)arg1 ;
-(id)ams_homeIdentifier;
-(NSString *)ams_fullName;
-(NSString *)ams_firstName;
-(NSString *)ams_lastName;
-(id)ams_homeUserIdentifiers;
-(void)ams_setAgreedToTerms:(BOOL)arg1 ;
-(void)ams_setInGoodStanding:(BOOL)arg1 ;
-(void)ams_setiCloudFamily:(BOOL)arg1 ;
-(void)ams_setValidPayment:(BOOL)arg1 ;
-(id)ams_lastAuthenticationServerResponse;
-(BOOL)ams_isActiveForMediaType:(id)arg1 ;
-(id)ams_secureToken;
-(BOOL)ams_addGlobalCookiesForResponse:(id)arg1 ;
-(BOOL)ams_addCookiesForResponse:(id)arg1 ;
-(void)ams_setActive:(BOOL)arg1 forMediaType:(id)arg2 ;
-(void)ams_setHomeIdentifier:(id)arg1 ;
-(void)ams_setRawPassword:(id)arg1 ;
-(void)ams_setBiometricsState:(long long)arg1 ;
-(long long)ams_biometricsState;
-(void)ams_setStorefront:(id)arg1 ;
-(void)ams_setCreditsString:(id)arg1 ;
-(id)_accountPropertyForKey:(id)arg1 dataProtectionClass:(unsigned long long)arg2 expectedClasses:(id)arg3 error:(id*)arg4 ;
-(id)_accountPropertyForKey:(id)arg1 expectedClass:(Class)arg2 ;
-(void)_setAccountProperty:(id)arg1 forKey:(id)arg2 expectedClass:(Class)arg3 ;
-(unsigned long long)ams_securityLevel;
-(BOOL)ams_isDemoAccount;
-(void)_setAccountProperty:(id)arg1 forKey:(id)arg2 dataProtectionClass:(unsigned long long)arg3 expectedClass:(Class)arg4 ;
-(id)_createCookieStorage;
-(BOOL)_setCookies:(id)arg1 ;
-(id)_cookiesMatchingProperties:(id)arg1 ;
-(void)ams_removeCookies:(id)arg1 ;
-(id)_hashedIdentifiers;
-(id)_hashedMultiUserIdentifiers;
-(id)_hashedActiveState;
-(id)_hashedStorefront;
-(void)ams_addHomeUserIdentifier:(id)arg1 ;
-(void)ams_removeHomeUserIdentifier:(id)arg1 ;
-(NSString *)ams_creditsString;
-(BOOL)ams_didAgreeToTerms;
-(unsigned long long)ams_freePasswordPromptSetting;
-(void)ams_setFreePasswordPromptSetting:(unsigned long long)arg1 ;
-(BOOL)ams_isHSA2;
-(BOOL)ams_isiCloudFamily;
-(BOOL)ams_isInGoodStanding;
-(BOOL)ams_isPrivateListeningEnabled;
-(BOOL)ams_isValidPayment;
-(unsigned long long)ams_paidPasswordPromptSetting;
-(void)ams_setPaidPasswordPromptSetting:(unsigned long long)arg1 ;
-(id)ams_rawPassword;
-(BOOL)ams_requiresAuthKitUpdate;
-(void)ams_setFirstName:(id)arg1 ;
-(void)ams_setLastName:(id)arg1 ;
-(void)ams_setManagedAppleID:(BOOL)arg1 ;
-(void)ams_setServerResponse:(id)arg1 ;
-(BOOL)ams_encryptAccountFlags;
-(BOOL)ams_isPrivateListeningEnabledForHomeUserIdentifier:(id)arg1 ;
-(void)ams_setPrivateListeningEnabled:(BOOL)arg1 forHomeUserIdentifier:(id)arg2 ;
-(BOOL)ams_addCookiesForResult:(id)arg1 ;
-(BOOL)ams_addGlobalCookiesForResult:(id)arg1 ;
-(id)ams_homeID;
-(id)ams_homeUserID;
-(BOOL)ams_postAccountFlagsWithBagContract:(id)arg1 ;
-(void)ams_setHomeID:(id)arg1 ;
-(void)ams_setHomeUserID:(id)arg1 ;
-(void)ams_setValue:(BOOL)arg1 forAccountFlag:(id)arg2 ;
-(BOOL)ams_valueForAccountFlag:(id)arg1 ;
-(id)dsid;
-(NSString *)aa_personID;
-(id)appleID;
-(void)setDSID:(id)arg1 ;
-(id)initWithAppleID:(id)arg1 password:(id)arg2 ;
-(NSString *)aa_authToken;
-(NSString *)aa_password;
-(NSString *)aa_altDSID;
-(NSNumber *)aa_repairState;
-(NSString *)aa_primaryEmail;
-(BOOL)aa_isManagedAppleID;
-(NSString *)aa_accountClass;
-(BOOL)aa_isPrimaryEmailVerified;
-(BOOL)aa_needsEmailConfiguration;
-(BOOL)aa_isNotesMigrated;
-(id)_registeredBundles;
-(id)normalizedDSID;
-(BOOL)canRemoveAccount;
-(void)storeOriginalUsername;
-(BOOL)aa_isAccountClass:(id)arg1 ;
-(NSArray *)aa_appleIDAliases;
-(void)aa_setNeedsToVerifyTerms:(BOOL)arg1 ;
-(void)aa_updateWithProvisioningResponse:(id)arg1 ;
-(BOOL)aa_isUsingiCloud;
-(void)aa_setAuthToken:(id)arg1 ;
-(void)aa_setAccountClass:(id)arg1 ;
-(BOOL)aa_needsToVerifyTerms;
-(AASuspensionInfo *)aa_suspensionInfo;
-(void)aa_setRepairState:(id)arg1 ;
-(ACAccount *)aa_childMailAccount;
-(ACAccount *)aa_fmipAccount;
-(BOOL)aa_updateTokensWithProvisioningResponse:(id)arg1 ;
-(void)aa_setMapsToken:(id)arg1 ;
-(void)aa_setMDMServerToken:(id)arg1 ;
-(ACAccount *)aa_cloudKitAccount;
-(NSString *)aa_formattedUsername;
-(NSString *)aa_appleId;
-(NSString *)aa_firstName;
-(void)aa_setFirstName:(id)arg1 ;
-(NSString *)aa_middleName;
-(void)aa_setMiddleName:(id)arg1 ;
-(NSString *)aa_lastName;
-(void)aa_setLastName:(id)arg1 ;
-(AARegionInfo *)aa_regionInfo;
-(BOOL)aa_isPrimaryAccount;
-(void)aa_setPrimaryAccount:(BOOL)arg1 ;
-(BOOL)aa_updateAccountClassIfNecessary;
-(void)aa_setPrimaryEmailVerified:(BOOL)arg1 ;
-(BOOL)aa_isSuspended;
-(BOOL)aa_isUsingCloudDocs;
-(void)aa_setUsesCloudDocs:(BOOL)arg1 ;
-(BOOL)aa_isCloudDocsMigrationComplete;
-(void)aa_setCloudDocsMigrationComplete:(BOOL)arg1 ;
-(BOOL)aa_isSandboxAccount;
-(BOOL)aa_hasOptionalTerms;
-(NSNumber *)aa_lastKnownQuota;
-(void)aa_setLastKnownQuota:(id)arg1 ;
-(BOOL)aa_isFamilyEligible;
-(ACAccount *)aa_fmfAccount;
-(void)aa_setPassword:(id)arg1 ;
-(NSString *)aa_fmipToken;
-(NSString *)aa_mapsToken;
-(NSString *)aa_mdmServerToken;
-(id)aa_authTokenWithError:(id*)arg1 ;
-(id)aa_hsaTokenWithError:(id*)arg1 ;
-(BOOL)aa_useCellularForDataclass:(id)arg1 ;
-(void)aa_setUseCellular:(BOOL)arg1 forDataclass:(id)arg2 ;
-(BOOL)aa_isSyncedAccount;
-(void)aa_setSyncedAccount:(BOOL)arg1 ;
-(BOOL)aa_needsRegistration;
-(BOOL)aa_serviceUnavailable;
-(NSDictionary *)aa_serviceUnavailableInfo;
-(NSString *)aa_protocolVersion;
-(NSString *)aa_displayName;
-(NSString *)aa_syncStoreIdentifier;
-(NSString *)aa_accountTypeString;
-(NSString *)aa_accountFooterText;
-(NSDictionary *)aa_accountFooterButton;
-(NSDictionary *)aa_accountFirstDisplayAlert;
-(NSString *)_aa_rawPassword;
-(void)_aa_setAppleID:(id)arg1 ;
-(void)_aa_setAltDSID:(id)arg1 ;
-(void)_aa_setPrimaryEmail:(id)arg1 ;
-(void)_aa_setRawPassword:(id)arg1 ;
-(void)_aa_clearRawPassword;
-(NSNumber *)_ss_DSID;
-(BOOL)_ss_isDuplicate:(id)arg1 ;
-(NSString *)_ss_altDSID;
-(NSString *)_ss_hashedDescription;
-(BOOL)_ss_isiCloudAccount;
-(BOOL)_ss_isiTunesAccount;
-(BOOL)_ss_isIDMSAccount;
-(BOOL)_ss_isAppleAuthenticationAccount;
-(BOOL)_ss_isLocalAccount;
-(NSString *)_ss_secureToken;
-(void)_ss_setSecureToken:(id)arg1 ;
-(id)aida_dsid;
-(id)aida_tokenForService:(id)arg1 ;
-(id)aida_tokenWithExpiryCheckForService:(id)arg1 ;
-(id)aida_tokenWithExpirationCheck;
-(id)aida_alternateDSID;
-(id)aida_deviceProvisioningInfo;
-(BOOL)_cn_isPrimaryAccount;
-(NSString *)_cn_appleAccountAppleID;
-(NSArray *)_cn_appleAccountAppleIDAliases;
-(NSString *)_cn_firstName;
-(NSString *)_cn_lastName;
-(NSNumber *)_cn_dsid;
-(NSString *)_cn_altDSID;
-(NSString *)_cn_appleID;
-(NSString *)_cn_principalPath;
-(BOOL)_cn_isCardDAV;
-(void)set_cn_dsid:(NSNumber *)arg1 ;
-(void)set_cn_altDSID:(NSString *)arg1 ;
-(void)set_cn_principalPath:(NSString *)arg1 ;
-(void)set_cn_appleID:(NSString *)arg1 ;
-(void)set_cn_firstName:(NSString *)arg1 ;
-(void)set_cn_lastName:(NSString *)arg1 ;
-(BOOL)_cn_isLDAP;
-(BOOL)_cn_isChildDelegateAccount;
-(void)setPropertiesFromDelegateInfo:(id)arg1 ;
-(NSDictionary *)communicationServiceRules;
-(void)setCommunicationServiceRules:(NSDictionary *)arg1 ;
-(BOOL)MCIsManaged;
-(NSString *)mcAccountIdentifier;
-(void)setMcAccountIdentifier:(NSString *)arg1 ;
-(NSString *)mcConfigurationProfileIdentifier;
-(void)setMcConfigurationProfileIdentifier:(NSString *)arg1 ;
-(NSString *)mcProfileUUID;
-(void)setMcProfileUUID:(NSString *)arg1 ;
-(NSString *)mcPayloadUUID;
-(void)setMcPayloadUUID:(NSString *)arg1 ;
-(NSNumber *)mcEASAccountEnableNotes;
-(void)setMcEASAccountEnableNotes:(NSNumber *)arg1 ;
-(NSNumber *)mcEnableMailUserOverridable;
-(void)setMcEnableMailUserOverridable:(NSNumber *)arg1 ;
-(NSNumber *)mcEnableContactsUserOverridable;
-(void)setMcEnableContactsUserOverridable:(NSNumber *)arg1 ;
-(NSNumber *)mcEnableCalendarsUserOverridable;
-(void)setMcEnableCalendarsUserOverridable:(NSNumber *)arg1 ;
-(NSNumber *)mcEnableRemindersUserOverridable;
-(void)setMcEnableRemindersUserOverridable:(NSNumber *)arg1 ;
-(NSNumber *)mcEnableNotesUserOverridable;
-(void)setMcEnableNotesUserOverridable:(NSNumber *)arg1 ;
-(id)mcBackingProfile;
-(id)mcBackingPayload;
-(BOOL)mc_isUserEnrollmentAccount;
-(void)unenrollAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSString *)identifier;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSURL *)objectID;
-(NSDate *)creationDate;
-(void)refresh;
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)_setAccountStore:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(ACAccountType *)accountType;
-(BOOL)isDirty;
-(void)_setObjectID:(id)arg1 ;
-(void)_clearCachedChildAccounts;
-(void)_clearDirtyProperties;
-(void)_clearCachedCredentials;
-(ACAccountStore *)accountStore;
-(NSArray *)childAccounts;
-(ACAccount *)parentAccount;
-(id)qualifiedUsername;
-(id)portableCopy;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(void)setParentAccount:(ACAccount *)arg1 ;
-(ACAccountCredential *)credential;
-(void)setCredential:(ACAccountCredential *)arg1 ;
-(NSString *)credentialType;
-(void)setCredentialType:(NSString *)arg1 ;
-(NSString *)authenticationType;
-(BOOL)supportsAuthentication;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(NSString *)accountDescription;
-(void)setAccountDescription:(NSString *)arg1 ;
-(id)owningBundleID;
-(void)setOwningBundleID:(id)arg1 ;
-(NSMutableSet *)enabledDataclasses;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(NSMutableSet *)provisionedDataclasses;
-(void)setProvisioned:(BOOL)arg1 forDataclass:(id)arg2 ;
-(NSDictionary *)dataclassProperties;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setAccountType:(ACAccountType *)arg1 ;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(BOOL)isProvisionedForDataclass:(id)arg1 ;
-(id)initWithAccountType:(id)arg1 ;
-(void)_installCredentialsChangedObserver;
-(void)_unsafe_markPropertyDirty:(id)arg1 ;
-(id)initWithManagedAccount:(id)arg1 ;
-(BOOL)authenticated;
-(NSDate *)lastCredentialRenewalRejectionDate;
-(void)credentialsChanged:(id)arg1 ;
-(NSDictionary *)accountProperties;
-(id)accountPropertiesTransformer;
-(void)_markAccountPropertyDirty:(id)arg1 ;
-(id)_initWithProtobuf:(id)arg1 ;
-(NSString *)parentAccountIdentifier;
-(NSSet *)dirtyProperties;
-(NSSet *)dirtyAccountProperties;
-(NSSet *)dirtyDataclassProperties;
-(id)_encodeProtobuf;
-(void)setLastCredentialRenewalRejectionDate:(NSDate *)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)setProvisionedDataclasses:(NSMutableSet *)arg1 ;
-(void)setEnabledDataclasses:(NSMutableSet *)arg1 ;
-(void)_loadAllCachedProperties;
-(BOOL)isVisible;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(void)_unsafe_markAccountPropertyDirty:(id)arg1 ;
-(void)_unsafe_markDataclassPropertyDirty:(id)arg1 ;
-(void)_markPropertyDirty:(id)arg1 ;
-(BOOL)_useParentForCredentials;
-(id)credentialWithError:(id*)arg1 ;
-(ACAccount *)displayAccount;
-(void)_markDataclassPropertyDirty:(id)arg1 ;
-(id)propertiesForDataclass:(id)arg1 ;
-(ACTrackedSet *)trackedProvisionedDataclasses;
-(ACTrackedSet *)trackedEnabledDataclasses;
-(void)reload;
-(void)_loadCachedPropertiesWithoutCredentials;
-(NSString *)clientToken;
-(BOOL)addClientToken:(id)arg1 ;
-(id)_initWithProtobufData:(id)arg1 ;
-(id)_encodeProtobufData;
-(id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)fullDescription;
-(void)markAllPropertiesDirty;
-(void)setDirty:(BOOL)arg1 forProperty:(id)arg2 ;
-(void)_markCredentialDirty;
-(NSString *)userFullName;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setAccountProperties:(NSDictionary *)arg1 ;
-(BOOL)supportsPush;
-(id)childAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(BOOL)isEnabledToSyncDataclass:(id)arg1 ;
-(void)setDataclassProperties:(NSDictionary *)arg1 ;
-(void)setProperties:(id)arg1 forDataclass:(id)arg2 ;
-(void)takeValuesFromModifiedAccount:(id)arg1 ;
-(id)accountByCleaningThirdPartyTransformations;
-(id)defaultAutodiscoverDomainForChildType:(id)arg1 ;
-(NSString *)shortDebugName;
-(void)_applyDirtyStateFromAccount:(id)arg1 ;
-(BOOL)_isDifferentFrom:(id)arg1 ;
-(void)setSecIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)copySecIdentity;
-(void)setSecCertificates:(id)arg1 ;
-(id)secCertificates;
-(BOOL)isDataSeparatedAccount;
-(id)personaIdentifier;
-(BOOL)correctPersonaScopedForAccount;
-(void)setTrackedProvisionedDataclasses:(ACTrackedSet *)arg1 ;
-(BOOL)wasProvisionedDataclassesReset;
-(void)setTrackedEnabledDataclasses:(ACTrackedSet *)arg1 ;
-(BOOL)wasEnabledDataclassesReset;
-(void)setAccountPropertiesTransformer:(id)arg1 ;
@end
