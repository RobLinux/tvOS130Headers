/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface PKPaymentDigitalIssuanceMetadata : NSObject {

	NSString* _serviceProviderIdentifier;
	NSString* _serviceProviderCountryCode;
	NSArray* _serviceProviderSupportedNetworks;
	NSArray* _serviceProviderCapabilities;
	NSDictionary* _serviceProviderDict;
	NSString* _action;
	NSString* _merchantID;
	NSArray* _defaultSuggestions;

}

@property (nonatomic,copy,readonly) NSString * serviceProviderIdentifier;                    //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceProviderCountryCode;                   //@synthesize serviceProviderCountryCode=_serviceProviderCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serviceProviderSupportedNetworks;              //@synthesize serviceProviderSupportedNetworks=_serviceProviderSupportedNetworks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serviceProviderCapabilities;                   //@synthesize serviceProviderCapabilities=_serviceProviderCapabilities - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceProviderDict;                      //@synthesize serviceProviderDict=_serviceProviderDict - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                                       //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * merchantID;                                   //@synthesize merchantID=_merchantID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultSuggestions;                            //@synthesize defaultSuggestions=_defaultSuggestions - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)action;
-(NSString *)serviceProviderIdentifier;
-(NSString *)serviceProviderCountryCode;
-(NSArray *)serviceProviderSupportedNetworks;
-(NSArray *)serviceProviderCapabilities;
-(NSDictionary *)serviceProviderDict;
-(NSString *)merchantID;
-(NSArray *)defaultSuggestions;
@end
