/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntentResponse.h>
#import <Intents/INImageProxyInjecting.h>
#import <Intents/INGetUserCurrentRestaurantReservationBookingsIntentResponseExport.h>

@class NSArray, NSString;

@interface INGetUserCurrentRestaurantReservationBookingsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetUserCurrentRestaurantReservationBookingsIntentResponseExport> {

	NSArray* _userCurrentBookings;

}

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * userCurrentBookings;              //@synthesize userCurrentBookings=_userCurrentBookings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)userCurrentBookings;
-(void)setUserCurrentBookings:(NSArray *)arg1 ;
-(id)initWithUserCurrentBookings:(id)arg1 code:(long long)arg2 userActivity:(id)arg3 ;
@end

