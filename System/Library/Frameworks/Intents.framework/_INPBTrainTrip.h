/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBTrainTrip.h>
@class NSString, _INPBLocationValue, _INPBDateTime, _INPBDateTimeRange;


@protocol _INPBTrainTrip <NSObject>
@property (nonatomic,copy) NSString * arrivalPlatform; 
@property (nonatomic,readonly) BOOL hasArrivalPlatform; 
@property (nonatomic,retain) _INPBLocationValue * arrivalStationLocation; 
@property (nonatomic,readonly) BOOL hasArrivalStationLocation; 
@property (nonatomic,copy) NSString * departurePlatform; 
@property (nonatomic,readonly) BOOL hasDeparturePlatform; 
@property (nonatomic,retain) _INPBLocationValue * departureStationLocation; 
@property (nonatomic,readonly) BOOL hasDepartureStationLocation; 
@property (nonatomic,retain) _INPBDateTime * onlineCheckInTime; 
@property (nonatomic,readonly) BOOL hasOnlineCheckInTime; 
@property (nonatomic,copy) NSString * provider; 
@property (nonatomic,readonly) BOOL hasProvider; 
@property (nonatomic,copy) NSString * trainName; 
@property (nonatomic,readonly) BOOL hasTrainName; 
@property (nonatomic,copy) NSString * trainNumber; 
@property (nonatomic,readonly) BOOL hasTrainNumber; 
@property (nonatomic,retain) _INPBDateTimeRange * tripDuration; 
@property (nonatomic,readonly) BOOL hasTripDuration; 
@required
-(void)setProvider:(id)arg1;
-(NSString *)provider;
-(BOOL)hasProvider;
-(NSString *)arrivalPlatform;
-(void)setArrivalPlatform:(id)arg1;
-(BOOL)hasArrivalPlatform;
-(_INPBLocationValue *)arrivalStationLocation;
-(void)setArrivalStationLocation:(id)arg1;
-(BOOL)hasArrivalStationLocation;
-(NSString *)departurePlatform;
-(void)setDeparturePlatform:(id)arg1;
-(BOOL)hasDeparturePlatform;
-(_INPBLocationValue *)departureStationLocation;
-(void)setDepartureStationLocation:(id)arg1;
-(BOOL)hasDepartureStationLocation;
-(_INPBDateTime *)onlineCheckInTime;
-(void)setOnlineCheckInTime:(id)arg1;
-(BOOL)hasOnlineCheckInTime;
-(NSString *)trainName;
-(void)setTrainName:(id)arg1;
-(BOOL)hasTrainName;
-(NSString *)trainNumber;
-(void)setTrainNumber:(id)arg1;
-(BOOL)hasTrainNumber;
-(_INPBDateTimeRange *)tripDuration;
-(void)setTripDuration:(id)arg1;
-(BOOL)hasTripDuration;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSString, _INPBLocationValue, _INPBDateTime, _INPBDateTimeRange;

@interface _INPBTrainTrip : PBCodable <_INPBTrainTrip, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSString* _arrivalPlatform;
	_INPBLocationValue* _arrivalStationLocation;
	NSString* _departurePlatform;
	_INPBLocationValue* _departureStationLocation;
	_INPBDateTime* _onlineCheckInTime;
	NSString* _provider;
	NSString* _trainName;
	NSString* _trainNumber;
	_INPBDateTimeRange* _tripDuration;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * arrivalPlatform;                                                   //@synthesize arrivalPlatform=_arrivalPlatform - In the implementation block
@property (nonatomic,readonly) BOOL hasArrivalPlatform; 
@property (nonatomic,retain) _INPBLocationValue * arrivalStationLocation;                                //@synthesize arrivalStationLocation=_arrivalStationLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasArrivalStationLocation; 
@property (nonatomic,copy) NSString * departurePlatform;                                                 //@synthesize departurePlatform=_departurePlatform - In the implementation block
@property (nonatomic,readonly) BOOL hasDeparturePlatform; 
@property (nonatomic,retain) _INPBLocationValue * departureStationLocation;                              //@synthesize departureStationLocation=_departureStationLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasDepartureStationLocation; 
@property (nonatomic,retain) _INPBDateTime * onlineCheckInTime;                                          //@synthesize onlineCheckInTime=_onlineCheckInTime - In the implementation block
@property (nonatomic,readonly) BOOL hasOnlineCheckInTime; 
@property (nonatomic,copy) NSString * provider;                                                          //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL hasProvider; 
@property (nonatomic,copy) NSString * trainName;                                                         //@synthesize trainName=_trainName - In the implementation block
@property (nonatomic,readonly) BOOL hasTrainName; 
@property (nonatomic,copy) NSString * trainNumber;                                                       //@synthesize trainNumber=_trainNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasTrainNumber; 
@property (nonatomic,retain) _INPBDateTimeRange * tripDuration;                                          //@synthesize tripDuration=_tripDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasTripDuration; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setProvider:(NSString *)arg1 ;
-(NSString *)provider;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasProvider;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(NSString *)arrivalPlatform;
-(void)setArrivalPlatform:(NSString *)arg1 ;
-(BOOL)hasArrivalPlatform;
-(_INPBLocationValue *)arrivalStationLocation;
-(void)setArrivalStationLocation:(_INPBLocationValue *)arg1 ;
-(BOOL)hasArrivalStationLocation;
-(NSString *)departurePlatform;
-(void)setDeparturePlatform:(NSString *)arg1 ;
-(BOOL)hasDeparturePlatform;
-(_INPBLocationValue *)departureStationLocation;
-(void)setDepartureStationLocation:(_INPBLocationValue *)arg1 ;
-(BOOL)hasDepartureStationLocation;
-(_INPBDateTime *)onlineCheckInTime;
-(void)setOnlineCheckInTime:(_INPBDateTime *)arg1 ;
-(BOOL)hasOnlineCheckInTime;
-(NSString *)trainName;
-(void)setTrainName:(NSString *)arg1 ;
-(BOOL)hasTrainName;
-(NSString *)trainNumber;
-(void)setTrainNumber:(NSString *)arg1 ;
-(BOOL)hasTrainNumber;
-(_INPBDateTimeRange *)tripDuration;
-(void)setTripDuration:(_INPBDateTimeRange *)arg1 ;
-(BOOL)hasTripDuration;
@end
