/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSArray, MicroPaymentProductDiscount, MicroPaymentProductSubscriptionPeriod;

@interface MicroPaymentProduct : NSObject {

	long long _contentSize;
	NSString* _contentVersion;
	BOOL _hosted;
	NSString* _localeIdentifier;
	NSString* _localizedDescription;
	NSString* _localizedTitle;
	NSNumber* _price;
	NSString* _productIdentifier;
	NSArray* _discounts;
	MicroPaymentProductDiscount* _introductoryPrice;
	NSString* _subscriptionGroupIdentifier;
	MicroPaymentProductSubscriptionPeriod* _subscriptionPeriod;

}

@property (assign,nonatomic) long long contentSize;                                                   //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,copy) NSString * contentVersion;                                                 //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,retain) NSArray * discounts;                                                     //@synthesize discounts=_discounts - In the implementation block
@property (assign,getter=isHosted,nonatomic) BOOL hosted;                                             //@synthesize hosted=_hosted - In the implementation block
@property (nonatomic,retain) MicroPaymentProductDiscount * introductoryPrice;                         //@synthesize introductoryPrice=_introductoryPrice - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                                               //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                                           //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                                 //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSNumber * price;                                                          //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                                              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSString * subscriptionGroupIdentifier;                                    //@synthesize subscriptionGroupIdentifier=_subscriptionGroupIdentifier - In the implementation block
@property (nonatomic,retain) MicroPaymentProductSubscriptionPeriod * subscriptionPeriod;              //@synthesize subscriptionPeriod=_subscriptionPeriod - In the implementation block
+(id)periodFromISO8601String:(id)arg1 ;
-(void)dealloc;
-(NSString *)localizedDescription;
-(NSString *)localeIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setContentVersion:(NSString *)arg1 ;
-(NSString *)contentVersion;
-(BOOL)isHosted;
-(long long)contentSize;
-(NSNumber *)price;
-(void)setPrice:(NSNumber *)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)setContentSize:(long long)arg1 ;
-(MicroPaymentProductSubscriptionPeriod *)subscriptionPeriod;
-(MicroPaymentProductDiscount *)introductoryPrice;
-(NSString *)subscriptionGroupIdentifier;
-(NSArray *)discounts;
-(void)setHosted:(BOOL)arg1 ;
-(void)setSubscriptionPeriod:(MicroPaymentProductSubscriptionPeriod *)arg1 ;
-(id)copyProduct;
-(void)setSubscriptionGroupIdentifier:(NSString *)arg1 ;
-(void)setIntroductoryPrice:(MicroPaymentProductDiscount *)arg1 ;
-(void)setDiscounts:(NSArray *)arg1 ;
@end
