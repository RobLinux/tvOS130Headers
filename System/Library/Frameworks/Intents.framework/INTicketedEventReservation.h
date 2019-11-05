/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INReservation.h>
#import <Intents/NSCopying.h>
#import <Intents/NSSecureCoding.h>

@class INTicketedEvent, INSeat;

@interface INTicketedEventReservation : INReservation <NSCopying, NSSecureCoding> {

	INTicketedEvent* _event;
	INSeat* _reservedSeat;

}

@property (nonatomic,copy,readonly) INTicketedEvent * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) INSeat * reservedSeat;                //@synthesize reservedSeat=_reservedSeat - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INTicketedEvent *)event;
-(id)_dictionaryRepresentation;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservedSeat:(id)arg7 event:(id)arg8 ;
-(INSeat *)reservedSeat;
@end

