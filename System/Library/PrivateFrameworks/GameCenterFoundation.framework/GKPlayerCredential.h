/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, GKPlayerInternal, NSDate;

@interface GKPlayerCredential : GKInternalRepresentation {

	NSString* _accountName;
	NSString* _authenticationToken;
	GKPlayerInternal* _playerInternal;
	long long _environment;
	unsigned _scope;
	NSDate* _scopeModificationDate;
	NSString* _altDSID;
	NSString* _DSID;
	NSString* _rawPassword;

}

@property (retain) NSString * accountName;                         //@synthesize accountName=_accountName - In the implementation block
@property (retain) NSString * authenticationToken;                 //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (retain) NSString * altDSID;                             //@synthesize altDSID=_altDSID - In the implementation block
@property (retain) NSString * DSID;                                //@synthesize DSID=_DSID - In the implementation block
@property (retain) NSString * rawPassword;                         //@synthesize rawPassword=_rawPassword - In the implementation block
@property (retain) GKPlayerInternal * playerInternal;              //@synthesize playerInternal=_playerInternal - In the implementation block
@property (assign) long long environment;                          //@synthesize environment=_environment - In the implementation block
@property (assign) unsigned scope;                                 //@synthesize scope=_scope - In the implementation block
@property (readonly) NSString * scopeAsString; 
@property (retain) NSDate * scopeModificationDate;                 //@synthesize scopeModificationDate=_scopeModificationDate - In the implementation block
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(long long)environment;
-(void)setEnvironment:(long long)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(unsigned)scope;
-(void)setScope:(unsigned)arg1 ;
-(NSString *)accountName;
-(NSString *)DSID;
-(void)setDSID:(NSString *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setRawPassword:(NSString *)arg1 ;
-(NSString *)rawPassword;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(GKPlayerInternal *)playerInternal;
-(void)setPlayerInternal:(GKPlayerInternal *)arg1 ;
-(void)setScopeModificationDate:(NSDate *)arg1 ;
-(NSDate *)scopeModificationDate;
-(NSString *)scopeAsString;
@end

