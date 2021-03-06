/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <sharingd/NSCopying.h>

@class NSString;

@interface AWDSharingProximityPairingTriggered : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _deviceRole;
	int _deviceSide;
	NSString* _model;
	int _primaryLocation;
	int _rssi;
	int _secondaryLocation;
	NSString* _sessionUUID;
	int _smoothedRSSI;
	BOOL _outOfBoxMode;
	SCD_Struct_AW33 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                  //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasSmoothedRSSI; 
@property (assign,nonatomic) int smoothedRSSI;                          //@synthesize smoothedRSSI=_smoothedRSSI - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                          //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL hasPrimaryLocation; 
@property (assign,nonatomic) int primaryLocation;                       //@synthesize primaryLocation=_primaryLocation - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryLocation; 
@property (assign,nonatomic) int secondaryLocation;                     //@synthesize secondaryLocation=_secondaryLocation - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceSide; 
@property (assign,nonatomic) int deviceSide;                            //@synthesize deviceSide=_deviceSide - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceRole; 
@property (assign,nonatomic) int deviceRole;                            //@synthesize deviceRole=_deviceRole - In the implementation block
@property (assign,nonatomic) BOOL hasOutOfBoxMode; 
@property (assign,nonatomic) BOOL outOfBoxMode;                         //@synthesize outOfBoxMode=_outOfBoxMode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)model;
-(int)rssi;
-(void)setRssi:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(NSString *)sessionUUID;
-(void)setModel:(NSString *)arg1 ;
-(BOOL)hasModel;
-(int)smoothedRSSI;
-(void)setSmoothedRSSI:(int)arg1 ;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(void)setHasSmoothedRSSI:(BOOL)arg1 ;
-(BOOL)hasSmoothedRSSI;
-(void)setPrimaryLocation:(int)arg1 ;
-(void)setHasPrimaryLocation:(BOOL)arg1 ;
-(BOOL)hasPrimaryLocation;
-(void)setSecondaryLocation:(int)arg1 ;
-(void)setHasSecondaryLocation:(BOOL)arg1 ;
-(BOOL)hasSecondaryLocation;
-(void)setDeviceSide:(int)arg1 ;
-(void)setHasDeviceSide:(BOOL)arg1 ;
-(BOOL)hasDeviceSide;
-(void)setHasDeviceRole:(BOOL)arg1 ;
-(BOOL)hasDeviceRole;
-(void)setOutOfBoxMode:(BOOL)arg1 ;
-(void)setHasOutOfBoxMode:(BOOL)arg1 ;
-(BOOL)hasOutOfBoxMode;
-(int)primaryLocation;
-(int)secondaryLocation;
-(int)deviceSide;
-(BOOL)outOfBoxMode;
@end

