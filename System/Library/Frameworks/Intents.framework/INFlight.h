/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INJSONSerializable.h>
#import <Intents/NSCopying.h>
#import <Intents/NSSecureCoding.h>

@class INAirline, NSString, INDateComponentsRange, INAirportGate;

@interface INFlight : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INAirline* _airline;
	NSString* _flightNumber;
	INDateComponentsRange* _boardingTime;
	INDateComponentsRange* _flightDuration;
	INAirportGate* _departureAirportGate;
	INAirportGate* _arrivalAirportGate;

}

@property (nonatomic,copy,readonly) INAirline * airline;                                 //@synthesize airline=_airline - In the implementation block
@property (nonatomic,copy,readonly) NSString * flightNumber;                             //@synthesize flightNumber=_flightNumber - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * boardingTime;                //@synthesize boardingTime=_boardingTime - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * flightDuration;              //@synthesize flightDuration=_flightDuration - In the implementation block
@property (nonatomic,copy,readonly) INAirportGate * departureAirportGate;                //@synthesize departureAirportGate=_departureAirportGate - In the implementation block
@property (nonatomic,copy,readonly) INAirportGate * arrivalAirportGate;                  //@synthesize arrivalAirportGate=_arrivalAirportGate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithAirline:(id)arg1 flightNumber:(id)arg2 boardingTime:(id)arg3 flightDuration:(id)arg4 departureAirportGate:(id)arg5 arrivalAirportGate:(id)arg6 ;
-(INAirline *)airline;
-(NSString *)flightNumber;
-(INDateComponentsRange *)boardingTime;
-(INDateComponentsRange *)flightDuration;
-(INAirportGate *)departureAirportGate;
-(INAirportGate *)arrivalAirportGate;
@end

