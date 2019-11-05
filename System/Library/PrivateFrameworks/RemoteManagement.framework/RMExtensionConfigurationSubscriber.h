/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMExtensionConfigurationSubscriberRequestHandling.h>

@protocol RMExtensionConfigurationApplicator;
@class NSLock, RMConfigurationRepository, RMAssetResolver, RMPolicyStore, NSArray, NSString;

@interface RMExtensionConfigurationSubscriber : NSObject <RMExtensionConfigurationSubscriberRequestHandling> {

	NSLock* _configurationRepositoryLock;
	RMConfigurationRepository* _configurationRepository;
	RMAssetResolver* _assetResolver;
	RMPolicyStore* _policyStore;
	id<RMExtensionConfigurationApplicator> _applicator;
	NSArray* _configurationTypes;

}

@property (nonatomic,retain) RMConfigurationRepository * configurationRepository;              //@synthesize configurationRepository=_configurationRepository - In the implementation block
@property (nonatomic,retain) RMAssetResolver * assetResolver;                                  //@synthesize assetResolver=_assetResolver - In the implementation block
@property (nonatomic,retain) RMPolicyStore * policyStore;                                      //@synthesize policyStore=_policyStore - In the implementation block
@property (nonatomic,readonly) id<RMExtensionConfigurationApplicator> applicator;              //@synthesize applicator=_applicator - In the implementation block
@property (nonatomic,readonly) NSArray * configurationTypes;                                   //@synthesize configurationTypes=_configurationTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSubscriber;
-(id)init;
-(RMAssetResolver *)assetResolver;
-(RMConfigurationRepository *)configurationRepository;
-(id)initWithConfigurationRepository:(id)arg1 assetResolver:(id)arg2 policyStore:(id)arg3 applicator:(id)arg4 configurationTypes:(id)arg5 ;
-(id<RMExtensionConfigurationApplicator>)applicator;
-(NSArray *)configurationTypes;
-(RMPolicyStore *)policyStore;
-(void)fetchThenApplyConfigurationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfigurationRepository:(RMConfigurationRepository *)arg1 ;
-(void)setAssetResolver:(RMAssetResolver *)arg1 ;
-(void)setPolicyStore:(RMPolicyStore *)arg1 ;
@end

