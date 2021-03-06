/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <AppleMediaServices/NSCopying.h>
#import <AppleMediaServices/NSMutableCopying.h>

@protocol AMSBagProtocol, AMSResponseDecoding;
@class ACAccount, NSDictionary, AMSProcessInfo, AMSKeychainOptions, NSString, AMSPurchaseContext, NSMutableDictionary;

@interface AMSURLRequestProperties : NSObject <NSCopying, NSMutableCopying> {

	BOOL _disableLoadURLMetrics;
	BOOL _knownToBeTrusted;
	BOOL _disableResponseDecoding;
	BOOL _shouldSetCookiesFromResponse;
	BOOL _shouldSetStorefrontFromResponse;
	ACAccount* _account;
	NSDictionary* _additionalMetrics;
	long long _anisetteType;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	long long _dialogOptions;
	AMSKeychainOptions* _keychainOptions;
	NSString* _logUUID;
	long long _maxRetryCount;
	long long _mescalType;
	AMSPurchaseContext* _purchaseContext;
	id<AMSResponseDecoding> _responseDecoder;
	long long _reversePushType;
	NSMutableDictionary* _userInfo;

}

@property (nonatomic,retain) ACAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalMetrics;                     //@synthesize additionalMetrics=_additionalMetrics - In the implementation block
@property (assign,nonatomic) long long anisetteType;                               //@synthesize anisetteType=_anisetteType - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                               //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                          //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) long long dialogOptions;                              //@synthesize dialogOptions=_dialogOptions - In the implementation block
@property (assign,nonatomic) BOOL disableLoadURLMetrics;                           //@synthesize disableLoadURLMetrics=_disableLoadURLMetrics - In the implementation block
@property (nonatomic,retain) AMSKeychainOptions * keychainOptions;                 //@synthesize keychainOptions=_keychainOptions - In the implementation block
@property (assign,nonatomic) BOOL knownToBeTrusted;                                //@synthesize knownToBeTrusted=_knownToBeTrusted - In the implementation block
@property (nonatomic,retain) NSString * logUUID;                                   //@synthesize logUUID=_logUUID - In the implementation block
@property (assign,nonatomic) long long maxRetryCount;                              //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (assign,nonatomic) long long mescalType;                                 //@synthesize mescalType=_mescalType - In the implementation block
@property (nonatomic,retain) AMSPurchaseContext * purchaseContext;                 //@synthesize purchaseContext=_purchaseContext - In the implementation block
@property (nonatomic,retain) id<AMSResponseDecoding> responseDecoder;              //@synthesize responseDecoder=_responseDecoder - In the implementation block
@property (assign,nonatomic) BOOL disableResponseDecoding;                         //@synthesize disableResponseDecoding=_disableResponseDecoding - In the implementation block
@property (assign,nonatomic) long long reversePushType;                            //@synthesize reversePushType=_reversePushType - In the implementation block
@property (assign,nonatomic) BOOL shouldSetCookiesFromResponse;                    //@synthesize shouldSetCookiesFromResponse=_shouldSetCookiesFromResponse - In the implementation block
@property (assign,nonatomic) BOOL shouldSetStorefrontFromResponse;                 //@synthesize shouldSetStorefrontFromResponse=_shouldSetStorefrontFromResponse - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSMutableDictionary *)userInfo;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(long long)maxRetryCount;
-(void)setMaxRetryCount:(long long)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(NSString *)logUUID;
-(void)setLogUUID:(NSString *)arg1 ;
-(NSDictionary *)additionalMetrics;
-(void)setAdditionalMetrics:(NSDictionary *)arg1 ;
-(void)setDialogOptions:(long long)arg1 ;
-(void)setResponseDecoder:(id<AMSResponseDecoding>)arg1 ;
-(void)setAnisetteType:(long long)arg1 ;
-(void)setMescalType:(long long)arg1 ;
-(void)setDisableResponseDecoding:(BOOL)arg1 ;
-(long long)anisetteType;
-(long long)dialogOptions;
-(AMSKeychainOptions *)keychainOptions;
-(void)setKeychainOptions:(AMSKeychainOptions *)arg1 ;
-(void)setKnownToBeTrusted:(BOOL)arg1 ;
-(long long)mescalType;
-(id<AMSResponseDecoding>)responseDecoder;
-(BOOL)disableResponseDecoding;
-(BOOL)shouldSetCookiesFromResponse;
-(void)setShouldSetCookiesFromResponse:(BOOL)arg1 ;
-(BOOL)shouldSetStorefrontFromResponse;
-(void)setShouldSetStorefrontFromResponse:(BOOL)arg1 ;
-(AMSPurchaseContext *)purchaseContext;
-(void)setPurchaseContext:(AMSPurchaseContext *)arg1 ;
-(void)setDisableLoadURLMetrics:(BOOL)arg1 ;
-(BOOL)disableLoadURLMetrics;
-(BOOL)knownToBeTrusted;
-(long long)reversePushType;
-(void)setReversePushType:(long long)arg1 ;
@end

