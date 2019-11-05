/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEProfileIngestionDelegate.h>

@class NSString, NEConfigurationManager, NSMutableArray, NEConfiguration;

@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate> {

	NSString* _clientName;
	NSString* _payloadType;
	NEConfigurationManager* _manager;
	NSMutableArray* _currentConfigurations;
	NEConfiguration* _ingestedConfiguration;

}

@property (readonly) NSString * clientName;                              //@synthesize clientName=_clientName - In the implementation block
@property (readonly) NSString * payloadType;                             //@synthesize payloadType=_payloadType - In the implementation block
@property (readonly) NEConfigurationManager * manager;                   //@synthesize manager=_manager - In the implementation block
@property (retain) NSMutableArray * currentConfigurations;               //@synthesize currentConfigurations=_currentConfigurations - In the implementation block
@property (retain) NEConfiguration * ingestedConfiguration;              //@synthesize ingestedConfiguration=_ingestedConfiguration - In the implementation block
+(id)getServiceIDForPayload:(id)arg1 ;
+(void)profileMigrationComplete;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(NEConfigurationManager *)manager;
-(id)initWithNameAndType:(id)arg1 payloadType:(id)arg2 ;
-(NSString *)payloadType;
-(NSString *)clientName;
-(NSMutableArray *)currentConfigurations;
-(void)setCurrentConfigurations:(NSMutableArray *)arg1 ;
-(NEConfiguration *)ingestedConfiguration;
-(id)findConfigurationByConfigurationID:(id)arg1 ;
-(void)setIngestedConfiguration:(NEConfiguration *)arg1 ;
-(BOOL)loadConfigurationsWithRefreshOption:(BOOL)arg1 ;
-(id)findConfigurationByName:(id)arg1 ;
-(BOOL)saveConfiguration:(id)arg1 ;
-(id)findConfigurationByPayloadUUID:(id)arg1 ;
-(id)resolveConfigurationNameConflict:(id)arg1 ;
-(BOOL)removeConfiguration:(id)arg1 ;
-(BOOL)loadConfigurationsForceReloadFromDisk;
-(BOOL)enableAlwaysOnVpnInternal:(BOOL)arg1 ;
-(BOOL)isAutoCreatedRule:(id)arg1 ;
-(id)findMostSpecificAppRuleForBundleID:(id)arg1 config:(id)arg2 ;
-(BOOL)createConfigurationFromPayload:(id)arg1 payloadType:(id)arg2 ;
-(BOOL)saveIngestedConfiguration;
-(BOOL)removeIngestedConfiguration;
-(BOOL)removeConfigurationWithIdentifier:(id)arg1 ;
-(id)setAsideConfigurationName:(id)arg1 unsetAside:(BOOL)arg2 ;
-(BOOL)isInstalled:(id)arg1 ;
-(BOOL)lockConfigurations;
-(void)unlockConfigurations;
-(void)enableDefaultService;
-(BOOL)enableAlwaysOnVpn;
-(BOOL)updateDefaultAfterAddingConfiguration;
-(BOOL)updateDefaultAfterDeletingConfiguration;
-(id)copyManagedConfigurationIDs;
-(BOOL)updateAppLayerVPNMappingRules:(id)arg1 ;
-(BOOL)updateManagedAppRules:(id)arg1 ;
-(id)getCertificatesForConfigurationWithIdentifier:(id)arg1 ;
@end

