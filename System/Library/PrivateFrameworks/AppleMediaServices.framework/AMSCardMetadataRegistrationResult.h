/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface AMSCardMetadataRegistrationResult : NSObject {

	NSString* _cardArtwork;
	long long _cardType;
	NSString* _descriptionLong;
	NSString* _descriptionShort;
	long long _paymentNetwork;
	NSString* _serialNumber;
	NSString* _suffix;
	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSString * cardArtwork;                   //@synthesize cardArtwork=_cardArtwork - In the implementation block
@property (assign,nonatomic) long long cardType;                       //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) NSString * descriptionLong;               //@synthesize descriptionLong=_descriptionLong - In the implementation block
@property (nonatomic,retain) NSString * descriptionShort;              //@synthesize descriptionShort=_descriptionShort - In the implementation block
@property (assign,nonatomic) long long paymentNetwork;                 //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                  //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) NSString * suffix;                        //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,retain) NSDictionary * dictionary;                //@synthesize dictionary=_dictionary - In the implementation block
-(id)init;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)serialNumber;
-(long long)paymentNetwork;
-(void)setPaymentNetwork:(long long)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)suffix;
-(long long)cardType;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setCardType:(long long)arg1 ;
-(NSString *)cardArtwork;
-(NSString *)descriptionLong;
-(NSString *)descriptionShort;
-(void)setCardArtwork:(NSString *)arg1 ;
-(void)setDescriptionLong:(NSString *)arg1 ;
-(void)setDescriptionShort:(NSString *)arg1 ;
@end
