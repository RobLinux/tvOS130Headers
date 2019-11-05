/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSBagConsumer.h>

@class NSNumber, NSString, NSSet;

@interface AMSDeviceOffer : NSObject <AMSBagConsumer> {

	BOOL _downgrading;
	BOOL _subscribed;
	NSNumber* _adamId;
	NSString* _description;
	NSSet* _serialNumbers;
	NSString* _offerIdentifier;

}

@property (nonatomic,copy) NSNumber * adamId;                                    //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,copy) NSString * description;                               //@synthesize description=_description - In the implementation block
@property (assign,getter=isDowngrading,nonatomic) BOOL downgrading;              //@synthesize downgrading=_downgrading - In the implementation block
@property (nonatomic,copy) NSString * offerIdentifier;                           //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long offerType; 
@property (nonatomic,readonly) NSSet * serialNumbers;                            //@synthesize serialNumbers=_serialNumbers - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed;                //@synthesize subscribed=_subscribed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)adamId;
-(void)setAdamId:(NSNumber *)arg1 ;
-(NSString *)offerIdentifier;
-(void)setOfferIdentifier:(NSString *)arg1 ;
-(BOOL)isSubscribed;
-(void)setSubscribed:(BOOL)arg1 ;
-(unsigned long long)offerType;
-(void)setDescription:(NSString *)arg1 ;
-(id)initWithOfferIdentifier:(id)arg1 ;
-(BOOL)isDowngrading;
-(NSSet *)serialNumbers;
-(void)setDowngrading:(BOOL)arg1 ;
@end

