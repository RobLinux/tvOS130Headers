/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelAssetBase.h>
#import <RemoteManagementModel/RMModelRegisteredTypeProtocol.h>

@class RMModelAssetBaseDescriptor, NSString, NSNumber;

@interface RMModelApplicationAppStoreDeclaration : RMModelAssetBase <RMModelRegisteredTypeProtocol> {

	RMModelAssetBaseDescriptor* _payloadDescriptor;
	NSString* _payloadBundleIdentifier;
	NSNumber* _payloadITunesStoreID;

}

@property (nonatomic,copy) RMModelAssetBaseDescriptor * payloadDescriptor;              //@synthesize payloadDescriptor=_payloadDescriptor - In the implementation block
@property (nonatomic,copy) NSString * payloadBundleIdentifier;                          //@synthesize payloadBundleIdentifier=_payloadBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * payloadITunesStoreID;                             //@synthesize payloadITunesStoreID=_payloadITunesStoreID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 descriptor:(id)arg2 bundleIdentifier:(id)arg3 iTunesStoreID:(id)arg4 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 descriptor:(id)arg2 bundleIdentifier:(id)arg3 iTunesStoreID:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadDescriptor:(RMModelAssetBaseDescriptor *)arg1 ;
-(void)setPayloadBundleIdentifier:(NSString *)arg1 ;
-(RMModelAssetBaseDescriptor *)payloadDescriptor;
-(NSString *)payloadBundleIdentifier;
-(void)setPayloadITunesStoreID:(NSNumber *)arg1 ;
-(NSNumber *)payloadITunesStoreID;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end

