/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, DMFApplicationPolicyMonitor, DMFCategoryPolicyMonitor, NSArray, NSUUID;

@interface DMFCommunicationPolicyMonitor : NSObject {

	BOOL _didFetchInitialPolicies;
	NSDictionary* _policiesByBundleIdentifier;
	DMFApplicationPolicyMonitor* _applicationPolicyMonitor;
	DMFCategoryPolicyMonitor* _categoryPolicyMonitor;
	NSArray* _policyTypes;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSDictionary * policiesByBundleIdentifier;                               //@synthesize policiesByBundleIdentifier=_policiesByBundleIdentifier - In the implementation block
@property (nonatomic,readonly) DMFApplicationPolicyMonitor * applicationPolicyMonitor;              //@synthesize applicationPolicyMonitor=_applicationPolicyMonitor - In the implementation block
@property (nonatomic,readonly) DMFCategoryPolicyMonitor * categoryPolicyMonitor;                    //@synthesize categoryPolicyMonitor=_categoryPolicyMonitor - In the implementation block
@property (assign,nonatomic) BOOL didFetchInitialPolicies;                                          //@synthesize didFetchInitialPolicies=_didFetchInitialPolicies - In the implementation block
@property (nonatomic,copy,readonly) NSArray * policyTypes;                                          //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
+(id)_transformEffectivePoliciesIntoCommunicationPolicies:(id)arg1 ;
+(id)_communicationBundleIdentifiers;
+(id)_equivalentCommunicationBundleIdentifiersForCommunicationBundleIdentifier:(id)arg1 ;
+(id)_calculateCommunicationPoliciesWithApplicationPoliciesByBundleIdentifier:(id)arg1 socialNetworkingCategoryPolicy:(long long)arg2 ;
-(id)init;
-(void)dealloc;
-(NSUUID *)identifier;
-(NSArray *)policyTypes;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(void)_updatePoliciesByBundleIdentifier;
-(DMFApplicationPolicyMonitor *)applicationPolicyMonitor;
-(DMFCategoryPolicyMonitor *)categoryPolicyMonitor;
-(void)_updateWithPoliciesByBundleIdentifier:(id)arg1 policiesByCategoryIdentifier:(id)arg2 ;
-(NSDictionary *)policiesByBundleIdentifier;
-(void)setPoliciesByBundleIdentifier:(NSDictionary *)arg1 ;
-(BOOL)didFetchInitialPolicies;
-(void)setDidFetchInitialPolicies:(BOOL)arg1 ;
-(id)requestPoliciesByBundleIdentifierWithError:(id*)arg1 ;
-(void)requestPoliciesByBundleIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
@end

