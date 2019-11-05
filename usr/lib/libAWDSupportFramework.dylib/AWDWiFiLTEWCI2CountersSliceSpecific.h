/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:10:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@interface AWDWiFiLTEWCI2CountersSliceSpecific : PBCodable <NSCopying> {

	unsigned long long _lteTxPowerLimitCount;
	unsigned long long _lteTxPowerLimitTimeInMS;
	unsigned long long _timeSharingWLANIntervalCount;
	unsigned long long _timeSharingWLANTimeInMS;
	unsigned long long _timestamp;
	unsigned long long _type4DueToTimerExpiryCount;
	unsigned long long _type4HonouredCount;
	unsigned long long _type4HonouredTimeInMS;
	unsigned long long _wlanProtectionFramesDueToLTECoexCount;
	unsigned long long _wlanRxPriCount;
	unsigned long long _wlanRxPriTimeInMS;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWlanRxPriTimeInMS; 
@property (assign,nonatomic) unsigned long long wlanRxPriTimeInMS;                                  //@synthesize wlanRxPriTimeInMS=_wlanRxPriTimeInMS - In the implementation block
@property (assign,nonatomic) BOOL hasWlanRxPriCount; 
@property (assign,nonatomic) unsigned long long wlanRxPriCount;                                     //@synthesize wlanRxPriCount=_wlanRxPriCount - In the implementation block
@property (assign,nonatomic) BOOL hasLteTxPowerLimitTimeInMS; 
@property (assign,nonatomic) unsigned long long lteTxPowerLimitTimeInMS;                            //@synthesize lteTxPowerLimitTimeInMS=_lteTxPowerLimitTimeInMS - In the implementation block
@property (assign,nonatomic) BOOL hasLteTxPowerLimitCount; 
@property (assign,nonatomic) unsigned long long lteTxPowerLimitCount;                               //@synthesize lteTxPowerLimitCount=_lteTxPowerLimitCount - In the implementation block
@property (assign,nonatomic) BOOL hasType4HonouredTimeInMS; 
@property (assign,nonatomic) unsigned long long type4HonouredTimeInMS;                              //@synthesize type4HonouredTimeInMS=_type4HonouredTimeInMS - In the implementation block
@property (assign,nonatomic) BOOL hasType4HonouredCount; 
@property (assign,nonatomic) unsigned long long type4HonouredCount;                                 //@synthesize type4HonouredCount=_type4HonouredCount - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSharingWLANTimeInMS; 
@property (assign,nonatomic) unsigned long long timeSharingWLANTimeInMS;                            //@synthesize timeSharingWLANTimeInMS=_timeSharingWLANTimeInMS - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSharingWLANIntervalCount; 
@property (assign,nonatomic) unsigned long long timeSharingWLANIntervalCount;                       //@synthesize timeSharingWLANIntervalCount=_timeSharingWLANIntervalCount - In the implementation block
@property (assign,nonatomic) BOOL hasWlanProtectionFramesDueToLTECoexCount; 
@property (assign,nonatomic) unsigned long long wlanProtectionFramesDueToLTECoexCount;              //@synthesize wlanProtectionFramesDueToLTECoexCount=_wlanProtectionFramesDueToLTECoexCount - In the implementation block
@property (assign,nonatomic) BOOL hasType4DueToTimerExpiryCount; 
@property (assign,nonatomic) unsigned long long type4DueToTimerExpiryCount;                         //@synthesize type4DueToTimerExpiryCount=_type4DueToTimerExpiryCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setWlanRxPriTimeInMS:(unsigned long long)arg1 ;
-(void)setHasWlanRxPriTimeInMS:(BOOL)arg1 ;
-(BOOL)hasWlanRxPriTimeInMS;
-(void)setWlanRxPriCount:(unsigned long long)arg1 ;
-(void)setHasWlanRxPriCount:(BOOL)arg1 ;
-(BOOL)hasWlanRxPriCount;
-(void)setLteTxPowerLimitTimeInMS:(unsigned long long)arg1 ;
-(void)setHasLteTxPowerLimitTimeInMS:(BOOL)arg1 ;
-(BOOL)hasLteTxPowerLimitTimeInMS;
-(void)setLteTxPowerLimitCount:(unsigned long long)arg1 ;
-(void)setHasLteTxPowerLimitCount:(BOOL)arg1 ;
-(BOOL)hasLteTxPowerLimitCount;
-(void)setType4HonouredTimeInMS:(unsigned long long)arg1 ;
-(void)setHasType4HonouredTimeInMS:(BOOL)arg1 ;
-(BOOL)hasType4HonouredTimeInMS;
-(void)setType4HonouredCount:(unsigned long long)arg1 ;
-(void)setHasType4HonouredCount:(BOOL)arg1 ;
-(BOOL)hasType4HonouredCount;
-(void)setTimeSharingWLANTimeInMS:(unsigned long long)arg1 ;
-(void)setHasTimeSharingWLANTimeInMS:(BOOL)arg1 ;
-(BOOL)hasTimeSharingWLANTimeInMS;
-(void)setTimeSharingWLANIntervalCount:(unsigned long long)arg1 ;
-(void)setHasTimeSharingWLANIntervalCount:(BOOL)arg1 ;
-(BOOL)hasTimeSharingWLANIntervalCount;
-(void)setWlanProtectionFramesDueToLTECoexCount:(unsigned long long)arg1 ;
-(void)setHasWlanProtectionFramesDueToLTECoexCount:(BOOL)arg1 ;
-(BOOL)hasWlanProtectionFramesDueToLTECoexCount;
-(void)setType4DueToTimerExpiryCount:(unsigned long long)arg1 ;
-(void)setHasType4DueToTimerExpiryCount:(BOOL)arg1 ;
-(BOOL)hasType4DueToTimerExpiryCount;
-(unsigned long long)wlanRxPriTimeInMS;
-(unsigned long long)wlanRxPriCount;
-(unsigned long long)lteTxPowerLimitTimeInMS;
-(unsigned long long)lteTxPowerLimitCount;
-(unsigned long long)type4HonouredTimeInMS;
-(unsigned long long)type4HonouredCount;
-(unsigned long long)timeSharingWLANTimeInMS;
-(unsigned long long)timeSharingWLANIntervalCount;
-(unsigned long long)wlanProtectionFramesDueToLTECoexCount;
-(unsigned long long)type4DueToTimerExpiryCount;
@end

