/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/AMSAccountBagContract.h>
#import <itunesstored/AMSDeviceOfferBagContract.h>

@class AMSBagValue, NSString;

@interface BagContract : NSObject <AMSAccountBagContract, AMSDeviceOfferBagContract>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AMSBagValue * apsEnabledPatterns; 
@property (nonatomic,readonly) AMSBagValue * apsSamplingPercent; 
@property (nonatomic,readonly) AMSBagValue * apsAllowedProductTypes; 
@property (nonatomic,readonly) AMSBagValue * guidRegexes; 
@property (nonatomic,readonly) AMSBagValue * guidSchemes; 
@property (nonatomic,readonly) id<AMSMescalBagContract> mescalContract; 
@property (nonatomic,readonly) AMSBagValue * storefrontSuffix; 
@property (nonatomic,readonly) AMSBagValue * TLSSamplingPercentage; 
@property (nonatomic,readonly) AMSBagValue * TLSSamplingSessionDuration; 
@property (nonatomic,readonly) AMSBagValue * TFOSamplingPercentage; 
@property (nonatomic,readonly) AMSBagValue * TFOSamplingSessionDuration; 
@property (nonatomic,readonly) AMSBagValue * trustedDomains; 
@property (nonatomic,readonly) id<AMSMetricsBagContract> metricsContract; 
@property (nonatomic,readonly) AMSBagValue * metricsURL; 
@property (nonatomic,readonly) AMSBagValue * accountFlagsURL; 
@property (nonatomic,readonly) AMSBagValue * appleMusicDeviceOfferDeepLink; 
@property (nonatomic,readonly) AMSBagValue * iCloudDeviceOfferDeepLink; 
-(AMSBagValue *)trustedDomains;
-(AMSBagValue *)appleMusicDeviceOfferDeepLink;
-(AMSBagValue *)iCloudDeviceOfferDeepLink;
-(id)_bagWithError:(id*)arg1 ;
-(AMSBagValue *)accountFlagsURL;
@end

