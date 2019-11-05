/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMAccountCalDAVDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadCalDAVAccountDescription;
	NSString* _payloadCalDAVHostName;
	NSString* _payloadCalDAVPrincipalURL;
	NSNumber* _payloadCalDAVUseSSL;
	NSNumber* _payloadCalDAVPort;
	NSString* _payloadCalDAVCredentials;

}

@property (nonatomic,copy) NSString * payloadCalDAVAccountDescription;              //@synthesize payloadCalDAVAccountDescription=_payloadCalDAVAccountDescription - In the implementation block
@property (nonatomic,copy) NSString * payloadCalDAVHostName;                        //@synthesize payloadCalDAVHostName=_payloadCalDAVHostName - In the implementation block
@property (nonatomic,copy) NSString * payloadCalDAVPrincipalURL;                    //@synthesize payloadCalDAVPrincipalURL=_payloadCalDAVPrincipalURL - In the implementation block
@property (nonatomic,copy) NSNumber * payloadCalDAVUseSSL;                          //@synthesize payloadCalDAVUseSSL=_payloadCalDAVUseSSL - In the implementation block
@property (nonatomic,copy) NSNumber * payloadCalDAVPort;                            //@synthesize payloadCalDAVPort=_payloadCalDAVPort - In the implementation block
@property (nonatomic,copy) NSString * payloadCalDAVCredentials;                     //@synthesize payloadCalDAVCredentials=_payloadCalDAVCredentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withCalDAVAccountDescription:(id)arg2 withCalDAVHostName:(id)arg3 withCalDAVPrincipalURL:(id)arg4 withCalDAVUseSSL:(id)arg5 withCalDAVPort:(id)arg6 withCalDAVCredentials:(id)arg7 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withCalDAVHostName:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadCalDAVCredentials;
-(void)setPayloadCalDAVAccountDescription:(NSString *)arg1 ;
-(void)setPayloadCalDAVHostName:(NSString *)arg1 ;
-(void)setPayloadCalDAVPrincipalURL:(NSString *)arg1 ;
-(void)setPayloadCalDAVUseSSL:(NSNumber *)arg1 ;
-(void)setPayloadCalDAVPort:(NSNumber *)arg1 ;
-(void)setPayloadCalDAVCredentials:(NSString *)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSString *)payloadCalDAVAccountDescription;
-(NSString *)payloadCalDAVHostName;
-(NSString *)payloadCalDAVPrincipalURL;
-(NSNumber *)payloadCalDAVUseSSL;
-(NSNumber *)payloadCalDAVPort;
@end

