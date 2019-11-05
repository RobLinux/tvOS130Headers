/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSArray, NSString;

@interface CEMSystemBasicWebContentFilterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadRestrictWeb;
	NSNumber* _payloadUseContentFilter;
	NSNumber* _payloadWhiteListEnabled;
	NSArray* _payloadSiteWhiteList;
	NSArray* _payloadFilterWhiteList;
	NSArray* _payloadFilterBlackList;

}

@property (nonatomic,copy) NSNumber * payloadRestrictWeb;                   //@synthesize payloadRestrictWeb=_payloadRestrictWeb - In the implementation block
@property (nonatomic,copy) NSNumber * payloadUseContentFilter;              //@synthesize payloadUseContentFilter=_payloadUseContentFilter - In the implementation block
@property (nonatomic,copy) NSNumber * payloadWhiteListEnabled;              //@synthesize payloadWhiteListEnabled=_payloadWhiteListEnabled - In the implementation block
@property (nonatomic,copy) NSArray * payloadSiteWhiteList;                  //@synthesize payloadSiteWhiteList=_payloadSiteWhiteList - In the implementation block
@property (nonatomic,copy) NSArray * payloadFilterWhiteList;                //@synthesize payloadFilterWhiteList=_payloadFilterWhiteList - In the implementation block
@property (nonatomic,copy) NSArray * payloadFilterBlackList;                //@synthesize payloadFilterBlackList=_payloadFilterBlackList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withRestrictWeb:(id)arg2 withUseContentFilter:(id)arg3 withWhiteListEnabled:(id)arg4 withSiteWhiteList:(id)arg5 withFilterWhiteList:(id)arg6 withFilterBlackList:(id)arg7 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withRestrictWeb:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(id)synthesizeProfileOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3 ;
-(void)setPayloadRestrictWeb:(NSNumber *)arg1 ;
-(void)setPayloadUseContentFilter:(NSNumber *)arg1 ;
-(void)setPayloadWhiteListEnabled:(NSNumber *)arg1 ;
-(void)setPayloadSiteWhiteList:(NSArray *)arg1 ;
-(void)setPayloadFilterWhiteList:(NSArray *)arg1 ;
-(void)setPayloadFilterBlackList:(NSArray *)arg1 ;
-(NSNumber *)payloadRestrictWeb;
-(NSNumber *)payloadWhiteListEnabled;
-(NSNumber *)payloadUseContentFilter;
-(NSArray *)payloadSiteWhiteList;
-(NSArray *)payloadFilterWhiteList;
-(NSArray *)payloadFilterBlackList;
@end

