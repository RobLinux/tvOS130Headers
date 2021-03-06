/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreLocationProtobuf/NSCopying.h>

@interface CLPIndoorPressure : PBCodable <NSCopying> {

	double _timestamp;
	float _pressure;
	float _temperature;
	SCD_Struct_CL1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPressure; 
@property (assign,nonatomic) float pressure;                   //@synthesize pressure=_pressure - In the implementation block
@property (assign,nonatomic) BOOL hasTemperature; 
@property (assign,nonatomic) float temperature;                //@synthesize temperature=_temperature - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTemperature:(float)arg1 ;
-(void)setHasTemperature:(BOOL)arg1 ;
-(BOOL)hasTemperature;
-(float)temperature;
-(float)pressure;
-(void)setPressure:(float)arg1 ;
-(BOOL)hasPressure;
-(void)setHasPressure:(BOOL)arg1 ;
@end

