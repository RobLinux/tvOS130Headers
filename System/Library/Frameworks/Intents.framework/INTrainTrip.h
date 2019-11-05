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

@class NSString, INDateComponentsRange, CLPlacemark;

@interface INTrainTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _provider;
	NSString* _trainName;
	NSString* _trainNumber;
	INDateComponentsRange* _tripDuration;
	CLPlacemark* _departureStationLocation;
	NSString* _departurePlatform;
	CLPlacemark* _arrivalStationLocation;
	NSString* _arrivalPlatform;

}

@property (nonatomic,copy,readonly) NSString * provider;                                 //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy,readonly) NSString * trainName;                                //@synthesize trainName=_trainName - In the implementation block
@property (nonatomic,copy,readonly) NSString * trainNumber;                              //@synthesize trainNumber=_trainNumber - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * tripDuration;                //@synthesize tripDuration=_tripDuration - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * departureStationLocation;              //@synthesize departureStationLocation=_departureStationLocation - In the implementation block
@property (nonatomic,copy,readonly) NSString * departurePlatform;                        //@synthesize departurePlatform=_departurePlatform - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * arrivalStationLocation;                //@synthesize arrivalStationLocation=_arrivalStationLocation - In the implementation block
@property (nonatomic,copy,readonly) NSString * arrivalPlatform;                          //@synthesize arrivalPlatform=_arrivalPlatform - In the implementation block
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
-(NSString *)provider;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)arrivalPlatform;
-(CLPlacemark *)arrivalStationLocation;
-(NSString *)departurePlatform;
-(CLPlacemark *)departureStationLocation;
-(NSString *)trainName;
-(NSString *)trainNumber;
-(INDateComponentsRange *)tripDuration;
-(id)initWithProvider:(id)arg1 trainName:(id)arg2 trainNumber:(id)arg3 tripDuration:(id)arg4 departureStationLocation:(id)arg5 departurePlatform:(id)arg6 arrivalStationLocation:(id)arg7 arrivalPlatform:(id)arg8 ;
@end

