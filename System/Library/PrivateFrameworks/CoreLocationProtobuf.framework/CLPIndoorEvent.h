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

@class CLPBundleId, CLPIndoorCMAttitude, CLPIndoorCMPedometer, CLPLocation, CLPIndoorMotionActivity, CLPIndoorPressure, CLPIndoorWifiScan;

@interface CLPIndoorEvent : PBCodable <NSCopying> {

	CLPBundleId* _bundleId;
	CLPIndoorCMAttitude* _cmAttitude;
	CLPIndoorCMPedometer* _cmPedometer;
	CLPLocation* _location;
	CLPIndoorMotionActivity* _motionActivity;
	CLPIndoorPressure* _pressure;
	int _type;
	CLPIndoorWifiScan* _wifiScan;
	SCD_Struct_CL3 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCmAttitude; 
@property (nonatomic,retain) CLPIndoorCMAttitude * cmAttitude;                      //@synthesize cmAttitude=_cmAttitude - In the implementation block
@property (nonatomic,readonly) BOOL hasCmPedometer; 
@property (nonatomic,retain) CLPIndoorCMPedometer * cmPedometer;                    //@synthesize cmPedometer=_cmPedometer - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) CLPLocation * location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasMotionActivity; 
@property (nonatomic,retain) CLPIndoorMotionActivity * motionActivity;              //@synthesize motionActivity=_motionActivity - In the implementation block
@property (nonatomic,readonly) BOOL hasPressure; 
@property (nonatomic,retain) CLPIndoorPressure * pressure;                          //@synthesize pressure=_pressure - In the implementation block
@property (nonatomic,readonly) BOOL hasWifiScan; 
@property (nonatomic,retain) CLPIndoorWifiScan * wifiScan;                          //@synthesize wifiScan=_wifiScan - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) CLPBundleId * bundleId;                                //@synthesize bundleId=_bundleId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setBundleId:(CLPBundleId *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(CLPBundleId *)bundleId;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleId;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(CLPLocation *)location;
-(CLPIndoorPressure *)pressure;
-(void)setLocation:(CLPLocation *)arg1 ;
-(BOOL)hasLocation;
-(void)setCmAttitude:(CLPIndoorCMAttitude *)arg1 ;
-(void)setCmPedometer:(CLPIndoorCMPedometer *)arg1 ;
-(void)setMotionActivity:(CLPIndoorMotionActivity *)arg1 ;
-(void)setPressure:(CLPIndoorPressure *)arg1 ;
-(void)setWifiScan:(CLPIndoorWifiScan *)arg1 ;
-(BOOL)hasCmAttitude;
-(BOOL)hasCmPedometer;
-(BOOL)hasMotionActivity;
-(BOOL)hasPressure;
-(BOOL)hasWifiScan;
-(CLPIndoorCMAttitude *)cmAttitude;
-(CLPIndoorCMPedometer *)cmPedometer;
-(CLPIndoorMotionActivity *)motionActivity;
-(CLPIndoorWifiScan *)wifiScan;
@end

