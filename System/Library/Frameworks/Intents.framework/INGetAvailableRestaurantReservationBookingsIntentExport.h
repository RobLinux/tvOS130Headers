/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INRestaurant, NSDateComponents, NSNumber, NSDate;


@protocol INGetAvailableRestaurantReservationBookingsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurant * restaurant; 
@property (assign,nonatomic) unsigned long long partySize; 
@property (nonatomic,copy) NSDateComponents * preferredBookingDateComponents; 
@property (nonatomic,copy) NSNumber * maximumNumberOfResults; 
@property (nonatomic,copy) NSDate * earliestBookingDateForResults; 
@property (nonatomic,copy) NSDate * latestBookingDateForResults; 
@required
-(id)init;
-(INRestaurant *)restaurant;
-(void)setRestaurant:(id)arg1;
-(unsigned long long)partySize;
-(void)setPartySize:(unsigned long long)arg1;
-(NSNumber *)maximumNumberOfResults;
-(void)setMaximumNumberOfResults:(id)arg1;
-(NSDate *)earliestBookingDateForResults;
-(void)setEarliestBookingDateForResults:(id)arg1;
-(NSDateComponents *)preferredBookingDateComponents;
-(void)setPreferredBookingDateComponents:(id)arg1;
-(NSDate *)latestBookingDateForResults;
-(void)setLatestBookingDateForResults:(id)arg1;

@end

