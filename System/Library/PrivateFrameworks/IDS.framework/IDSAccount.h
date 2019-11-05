/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSAccount, NSString, NSArray, NSSet, NSDictionary, NSData, NSDate;

@interface IDSAccount : NSObject {

	_IDSAccount* _internal;
	NSString* _loginID;

}

@property (copy,readonly) NSArray * hmd_handles; 
@property (nonatomic,readonly) NSSet * activeAliases; 
@property (nonatomic,readonly) NSString * userUniqueIdentifier; 
@property (nonatomic,retain,readonly) _IDSAccount * _internal; 
@property (nonatomic,readonly) BOOL isEnabled; 
@property (assign,setter=_setIsEnabled:,nonatomic) BOOL _isEnabled; 
@property (nonatomic,readonly) BOOL isUsableForOuterMessaging; 
@property (nonatomic,readonly) NSArray * aliasesToRegister; 
@property (nonatomic,readonly) NSArray * aliases; 
@property (nonatomic,readonly) NSArray * aliasStrings; 
@property (nonatomic,readonly) NSArray * vettedAliases; 
@property (nonatomic,readonly) NSArray * handles; 
@property (nonatomic,readonly) NSDictionary * profileInfo; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,readonly) NSDictionary * registrationAlertInfo; 
@property (nonatomic,readonly) long long profileValidationStatus; 
@property (nonatomic,readonly) int profileValidationErrorReason; 
@property (nonatomic,readonly) NSArray * registeredURIs; 
@property (nonatomic,readonly) NSArray * accountRegisteredURIs; 
@property (nonatomic,readonly) NSData * registrationCertificate; 
@property (nonatomic,readonly) NSDate * dateRegistered; 
@property (nonatomic,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,readonly) NSString * profileID; 
@property (nonatomic,readonly) NSString * primaryServiceName; 
@property (nonatomic,readonly) BOOL isUserDisabled; 
@property (nonatomic,retain) NSString * regionID; 
@property (nonatomic,retain) NSString * regionBasePhoneNumber; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * loginID;                                  //@synthesize loginID=_loginID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL canSend; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * nearbyDevices; 
-(NSArray *)hmd_handles;
-(id)description;
-(void)dealloc;
-(_IDSAccount *)_internal;
-(void)setPassword:(id)arg1 ;
-(BOOL)isActive;
-(NSString *)uniqueID;
-(NSString *)displayName;
-(NSString *)serviceName;
-(BOOL)isEnabled;
-(BOOL)_isEnabled;
-(NSArray *)handles;
-(void)removeDelegate:(id)arg1 ;
-(NSData *)pushToken;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSArray *)devices;
-(int)accountType;
-(void)setDisplayName:(NSString *)arg1 ;
-(int)registrationError;
-(BOOL)isUserDisabled;
-(int)registrationStatus;
-(void)setAuthToken:(id)arg1 ;
-(void)addAliases:(id)arg1 ;
-(NSArray *)aliases;
-(NSArray *)registeredURIs;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(void)registerAccount;
-(void)authenticateAccount;
-(NSArray *)aliasesToRegister;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(id)matchingSim;
-(NSString *)userUniqueIdentifier;
-(NSString *)primaryServiceName;
-(NSData *)registrationCertificate;
-(id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(void)_setIsEnabled:(BOOL)arg1 ;
-(NSString *)loginID;
-(NSDictionary *)accountInfo;
-(BOOL)canSend;
-(NSArray *)nearbyDevices;
-(NSDictionary *)profileInfo;
-(NSArray *)aliasStrings;
-(NSArray *)vettedAliases;
-(BOOL)isUsableForOuterMessaging;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(NSDictionary *)registrationAlertInfo;
-(long long)profileValidationStatus;
-(int)profileValidationErrorReason;
-(NSDate *)nextRegistrationDate;
-(NSDate *)dateRegistered;
-(NSArray *)accountRegisteredURIs;
-(NSDictionary *)regionServerContext;
-(NSString *)profileID;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(NSString *)regionID;
-(void)setRegionID:(NSString *)arg1 ;
-(NSString *)regionBasePhoneNumber;
-(void)setRegionBasePhoneNumber:(NSString *)arg1 ;
-(void)passwordUpdated;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(void)removeAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)unregisterAccount;
-(void)_reregisterAndReidentify:(BOOL)arg1 ;
-(void)deactivateAndPurgeIdentify;
-(void)_callNearbyDevicesChanged;
-(void)_reloadCachedDevices;
-(NSSet *)activeAliases;
-(void)activateAlias:(id)arg1 ;
-(void)deactivateAlias:(id)arg1 ;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)setLoginID:(NSString *)arg1 ;
@end

