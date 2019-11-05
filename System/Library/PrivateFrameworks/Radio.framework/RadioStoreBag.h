/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSDictionary, SSVPlatformContext, NSNumber, NSURL;

@interface RadioStoreBag : NSObject {

	NSArray* _amdDomains;
	NSString* _leaseCertificateURLString;
	NSDictionary* _mescalRequestWhitelist;
	NSDictionary* _mescalResponseWhitelist;
	NSString* _mescalSetupCertURLString;
	NSString* _mescalSetupURLString;
	SSVPlatformContext* _platformContext;
	NSNumber* _shouldSendKBSyncDataValue;
	NSString* _srdnldURLString;
	NSString* _storeFrontSuffix;
	NSDictionary* _tiltDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * URLBagDictionary; 
@property (nonatomic,readonly) NSString * leaseCertificateURLString;                             //@synthesize leaseCertificateURLString=_leaseCertificateURLString - In the implementation block
@property (nonatomic,readonly) NSString * mescalCertificateURLString;                            //@synthesize mescalSetupCertURLString=_mescalSetupCertURLString - In the implementation block
@property (nonatomic,readonly) NSString * mescalSetupURLString;                                  //@synthesize mescalSetupURLString=_mescalSetupURLString - In the implementation block
@property (getter=isAdFreeRadioEnabled,nonatomic,readonly) BOOL adFreeRadioEnabled; 
@property (nonatomic,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) NSString * platformLookupURLString; 
@property (nonatomic,readonly) NSDictionary * radioConfigurationDictionary;                      //@synthesize tiltDictionary=_tiltDictionary - In the implementation block
@property (nonatomic,readonly) BOOL shouldSendKBSyncData; 
@property (nonatomic,readonly) NSString * storeFrontSuffix;                                      //@synthesize storeFrontSuffix=_storeFrontSuffix - In the implementation block
@property (nonatomic,readonly) NSString * streamingDownloadURLString;                            //@synthesize srdnldURLString=_srdnldURLString - In the implementation block
-(NSURL *)baseURL;
-(NSString *)storeFrontSuffix;
-(NSDictionary *)URLBagDictionary;
-(NSDictionary *)radioConfigurationDictionary;
-(id)_cacheRepresentation;
-(id)_initWithURLBagDictionary:(id)arg1 ;
-(BOOL)isAdFreeRadioEnabled;
-(NSString *)platformLookupURLString;
-(BOOL)shouldMescalSignRequestWithURL:(id)arg1 ;
-(BOOL)shouldMescalVerifyResponseFromURL:(id)arg1 ;
-(BOOL)shouldSendKBSyncData;
-(id)_initWithCacheRepresentation:(id)arg1 ;
-(id)_platformContext;
-(NSString *)mescalCertificateURLString;
-(NSString *)mescalSetupURLString;
-(NSString *)streamingDownloadURLString;
-(NSString *)leaseCertificateURLString;
@end

