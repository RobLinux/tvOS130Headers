/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/PlugIns/AppManagementExtension.appex/AppManagementExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppManagementExtension/AppManagementExtension-Structs.h>
#import <AppManagementExtension/NSSecureCoding.h>

@class AMXAppMetadata, RMModelApplicationAppStoreDeclaration, RMConfiguration, RMModelApplicationInstallDeclaration, NSString;

@interface AppManagementPolicy : NSObject <NSSecureCoding> {

	AMXAppMetadata* _appMetadata;
	RMModelApplicationAppStoreDeclaration* _appStoreAsset;
	RMConfiguration* _configuration;
	RMModelApplicationInstallDeclaration* _declaration;
	NSString* _policyKey;

}

@property (nonatomic,readonly) AMXAppMetadata * appMetadata; 
@property (nonatomic,readonly) RMModelApplicationAppStoreDeclaration * appStoreAsset;              //@synthesize appStoreAsset=_appStoreAsset - In the implementation block
@property (nonatomic,readonly) RMConfiguration * configuration;                                    //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) RMModelApplicationInstallDeclaration * declaration;                 //@synthesize declaration=_declaration - In the implementation block
@property (nonatomic,copy,readonly) NSString * policyKey;                                          //@synthesize policyKey=_policyKey - In the implementation block
+(BOOL)supportsSecureCoding;
+(NSDictionary*)appManagementPoliciesByKeyFromConfigurations:(id)arg1 ;
+(NSDictionary*)currentAppManagementPoliciesByKey;
+(void)savePolicy:(id)arg1 ;
+(void)deletePolicyForKey:(id)arg1 ;
+(NSMutableDictionary*)mutableAppManagementPoliciesByKeyFromConfigurations:(id)arg1 ;
+(void)writeAppManagementPoliciesByKey:(NSDictionary*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(RMConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(AMXAppMetadata *)appMetadata;
-(RMModelApplicationInstallDeclaration *)declaration;
-(NSString *)policyKey;
-(RMModelApplicationAppStoreDeclaration *)appStoreAsset;
-(BOOL)isEqualToAppManagementPolicy:(id)arg1 ;
@end

