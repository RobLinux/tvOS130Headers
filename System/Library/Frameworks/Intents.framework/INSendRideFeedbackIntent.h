/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>

@class NSString, NSNumber, INCurrencyAmount;

@interface INSendRideFeedbackIntent : INIntent {

	NSString* _rideIdentifier;
	NSNumber* _rating;
	INCurrencyAmount* _tip;

}

@property (nonatomic,copy,readonly) NSString * rideIdentifier;              //@synthesize rideIdentifier=_rideIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * rating;                               //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) INCurrencyAmount * tip;                          //@synthesize tip=_tip - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)intentDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INCurrencyAmount *)tip;
-(NSNumber *)rating;
-(void)setRating:(NSNumber *)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setTip:(INCurrencyAmount *)arg1 ;
-(NSString *)rideIdentifier;
-(id)initWithRideIdentifier:(id)arg1 ;
@end
