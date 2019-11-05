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

@class NSArray, NSString;

@interface CEMApplicationLoginItemsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadAutoLaunchedApplicationDictionaryManaged;

}

@property (nonatomic,copy) NSArray * payloadAutoLaunchedApplicationDictionaryManaged;              //@synthesize payloadAutoLaunchedApplicationDictionaryManaged=_payloadAutoLaunchedApplicationDictionaryManaged - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAutoLaunchedApplicationDictionaryManaged:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withAutoLaunchedApplicationDictionaryManaged:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAutoLaunchedApplicationDictionaryManaged:(NSArray *)arg1 ;
-(NSArray *)payloadAutoLaunchedApplicationDictionaryManaged;
@end

