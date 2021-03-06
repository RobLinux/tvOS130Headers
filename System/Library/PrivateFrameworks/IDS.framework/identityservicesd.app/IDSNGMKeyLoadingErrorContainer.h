/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSNumber;

@interface IDSNGMKeyLoadingErrorContainer : NSObject {

	BOOL _hasRegisteredContainer;
	BOOL _hasUnregisteredContainer;
	NSError* _registeredKeychainError;
	NSError* _unregisteredKeychainError;
	NSError* _registeredDeserializationError;
	NSError* _unregisteredDeserializationError;
	NSError* _generationError;
	NSError* _rollingError;
	NSError* _identityToRegisterError;
	NSNumber* _shouldHaveRegisteredIdentity;
	NSNumber* _shouldHaveUnregisteredIdentity;

}

@property (nonatomic,retain) NSError * registeredKeychainError;                       //@synthesize registeredKeychainError=_registeredKeychainError - In the implementation block
@property (nonatomic,retain) NSError * unregisteredKeychainError;                     //@synthesize unregisteredKeychainError=_unregisteredKeychainError - In the implementation block
@property (nonatomic,retain) NSError * registeredDeserializationError;                //@synthesize registeredDeserializationError=_registeredDeserializationError - In the implementation block
@property (nonatomic,retain) NSError * unregisteredDeserializationError;              //@synthesize unregisteredDeserializationError=_unregisteredDeserializationError - In the implementation block
@property (nonatomic,retain) NSError * generationError;                               //@synthesize generationError=_generationError - In the implementation block
@property (nonatomic,retain) NSError * rollingError;                                  //@synthesize rollingError=_rollingError - In the implementation block
@property (nonatomic,retain) NSError * identityToRegisterError;                       //@synthesize identityToRegisterError=_identityToRegisterError - In the implementation block
@property (nonatomic,retain) NSNumber * shouldHaveRegisteredIdentity;                 //@synthesize shouldHaveRegisteredIdentity=_shouldHaveRegisteredIdentity - In the implementation block
@property (nonatomic,retain) NSNumber * shouldHaveUnregisteredIdentity;               //@synthesize shouldHaveUnregisteredIdentity=_shouldHaveUnregisteredIdentity - In the implementation block
@property (assign,nonatomic) BOOL hasRegisteredContainer;                             //@synthesize hasRegisteredContainer=_hasRegisteredContainer - In the implementation block
@property (assign,nonatomic) BOOL hasUnregisteredContainer;                           //@synthesize hasUnregisteredContainer=_hasUnregisteredContainer - In the implementation block
-(void)setShouldHaveRegisteredIdentity:(NSNumber *)arg1 ;
-(void)setShouldHaveUnregisteredIdentity:(NSNumber *)arg1 ;
-(void)setRegisteredKeychainError:(NSError *)arg1 ;
-(void)setRegisteredDeserializationError:(NSError *)arg1 ;
-(void)setUnregisteredKeychainError:(NSError *)arg1 ;
-(void)setUnregisteredDeserializationError:(NSError *)arg1 ;
-(void)setHasUnregisteredContainer:(BOOL)arg1 ;
-(void)setHasRegisteredContainer:(BOOL)arg1 ;
-(void)setRollingError:(NSError *)arg1 ;
-(void)setIdentityToRegisterError:(NSError *)arg1 ;
-(void)setGenerationError:(NSError *)arg1 ;
-(BOOL)hasRegisteredContainer;
-(BOOL)hasUnregisteredContainer;
-(NSError *)unregisteredKeychainError;
-(NSError *)registeredKeychainError;
-(NSError *)unregisteredDeserializationError;
-(NSError *)generationError;
-(NSError *)rollingError;
-(NSError *)identityToRegisterError;
-(NSNumber *)shouldHaveRegisteredIdentity;
-(NSError *)registeredDeserializationError;
-(NSNumber *)shouldHaveUnregisteredIdentity;
@end

