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

@class NSMutableArray, NSString;

@interface AWDWiFiConnectionQuality : PBCodable <NSCopying> {

	unsigned long long _bytesInActive;
	unsigned long long _bytesInTotal;
	unsigned long long _bytesOutActive;
	unsigned long long _bytesOutTotal;
	unsigned long long _dataStalls;
	unsigned long long _failedConnections;
	unsigned long long _faultyStay;
	double _lat;
	double _lon;
	unsigned long long _lowLQMStay;
	unsigned long long _lowqStay;
	unsigned long long _lqmTranCount;
	unsigned long long _overAllStay;
	unsigned long long _packetsIn;
	unsigned long long _packetsOut;
	unsigned long long _reTxBytes;
	unsigned long long _receivedDupes;
	unsigned long long _rxOutOfOrderBytes;
	unsigned long long _successfulConnections;
	unsigned long long _timeOfDay;
	unsigned long long _timestamp;
	NSMutableArray* _additionalUniqueIDs;
	unsigned _assocReason;
	unsigned _associatedTime;
	unsigned _band;
	unsigned _captiveFlag;
	int _cca;
	unsigned _channel;
	unsigned _channelWidth;
	unsigned _colocatedState;
	unsigned _disassocReason;
	NSMutableArray* _otherUniqueIDs;
	unsigned _phyMode;
	float _roundTripTimeAvg;
	float _roundTripTimeAvgActive;
	float _roundTripTimeMin;
	float _roundTripTimeMinActive;
	float _roundTripTimeVar;
	float _roundTripTimeVarActive;
	int _rssi;
	unsigned _securityType;
	int _snr;
	NSString* _uniqueID;
	BOOL _hotspot20;
	SCD_Struct_AW37 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueID; 
@property (nonatomic,retain) NSString * uniqueID;                                   //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalUniqueIDs;                  //@synthesize additionalUniqueIDs=_additionalUniqueIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * otherUniqueIDs;                       //@synthesize otherUniqueIDs=_otherUniqueIDs - In the implementation block
@property (assign,nonatomic) BOOL hasLat; 
@property (assign,nonatomic) double lat;                                            //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) BOOL hasLon; 
@property (assign,nonatomic) double lon;                                            //@synthesize lon=_lon - In the implementation block
@property (assign,nonatomic) BOOL hasOverAllStay; 
@property (assign,nonatomic) unsigned long long overAllStay;                        //@synthesize overAllStay=_overAllStay - In the implementation block
@property (assign,nonatomic) BOOL hasFaultyStay; 
@property (assign,nonatomic) unsigned long long faultyStay;                         //@synthesize faultyStay=_faultyStay - In the implementation block
@property (assign,nonatomic) BOOL hasLowLQMStay; 
@property (assign,nonatomic) unsigned long long lowLQMStay;                         //@synthesize lowLQMStay=_lowLQMStay - In the implementation block
@property (assign,nonatomic) BOOL hasLowqStay; 
@property (assign,nonatomic) unsigned long long lowqStay;                           //@synthesize lowqStay=_lowqStay - In the implementation block
@property (assign,nonatomic) BOOL hasLqmTranCount; 
@property (assign,nonatomic) unsigned long long lqmTranCount;                       //@synthesize lqmTranCount=_lqmTranCount - In the implementation block
@property (assign,nonatomic) BOOL hasSuccessfulConnections; 
@property (assign,nonatomic) unsigned long long successfulConnections;              //@synthesize successfulConnections=_successfulConnections - In the implementation block
@property (assign,nonatomic) BOOL hasFailedConnections; 
@property (assign,nonatomic) unsigned long long failedConnections;                  //@synthesize failedConnections=_failedConnections - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsIn; 
@property (assign,nonatomic) unsigned long long packetsIn;                          //@synthesize packetsIn=_packetsIn - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOut; 
@property (assign,nonatomic) unsigned long long packetsOut;                         //@synthesize packetsOut=_packetsOut - In the implementation block
@property (assign,nonatomic) BOOL hasBytesInTotal; 
@property (assign,nonatomic) unsigned long long bytesInTotal;                       //@synthesize bytesInTotal=_bytesInTotal - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOutTotal; 
@property (assign,nonatomic) unsigned long long bytesOutTotal;                      //@synthesize bytesOutTotal=_bytesOutTotal - In the implementation block
@property (assign,nonatomic) BOOL hasBytesInActive; 
@property (assign,nonatomic) unsigned long long bytesInActive;                      //@synthesize bytesInActive=_bytesInActive - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOutActive; 
@property (assign,nonatomic) unsigned long long bytesOutActive;                     //@synthesize bytesOutActive=_bytesOutActive - In the implementation block
@property (assign,nonatomic) BOOL hasReTxBytes; 
@property (assign,nonatomic) unsigned long long reTxBytes;                          //@synthesize reTxBytes=_reTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasDataStalls; 
@property (assign,nonatomic) unsigned long long dataStalls;                         //@synthesize dataStalls=_dataStalls - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedDupes; 
@property (assign,nonatomic) unsigned long long receivedDupes;                      //@synthesize receivedDupes=_receivedDupes - In the implementation block
@property (assign,nonatomic) BOOL hasRxOutOfOrderBytes; 
@property (assign,nonatomic) unsigned long long rxOutOfOrderBytes;                  //@synthesize rxOutOfOrderBytes=_rxOutOfOrderBytes - In the implementation block
@property (assign,nonatomic) BOOL hasRoundTripTimeMin; 
@property (assign,nonatomic) float roundTripTimeMin;                                //@synthesize roundTripTimeMin=_roundTripTimeMin - In the implementation block
@property (assign,nonatomic) BOOL hasRoundTripTimeAvg; 
@property (assign,nonatomic) float roundTripTimeAvg;                                //@synthesize roundTripTimeAvg=_roundTripTimeAvg - In the implementation block
@property (assign,nonatomic) BOOL hasRoundTripTimeVar; 
@property (assign,nonatomic) float roundTripTimeVar;                                //@synthesize roundTripTimeVar=_roundTripTimeVar - In the implementation block
@property (assign,nonatomic) BOOL hasRoundTripTimeMinActive; 
@property (assign,nonatomic) float roundTripTimeMinActive;                          //@synthesize roundTripTimeMinActive=_roundTripTimeMinActive - In the implementation block
@property (assign,nonatomic) BOOL hasRoundTripTimeAvgActive; 
@property (assign,nonatomic) float roundTripTimeAvgActive;                          //@synthesize roundTripTimeAvgActive=_roundTripTimeAvgActive - In the implementation block
@property (assign,nonatomic) BOOL hasRoundTripTimeVarActive; 
@property (assign,nonatomic) float roundTripTimeVarActive;                          //@synthesize roundTripTimeVarActive=_roundTripTimeVarActive - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                                 //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasCaptiveFlag; 
@property (assign,nonatomic) unsigned captiveFlag;                                  //@synthesize captiveFlag=_captiveFlag - In the implementation block
@property (assign,nonatomic) BOOL hasColocatedState; 
@property (assign,nonatomic) unsigned colocatedState;                               //@synthesize colocatedState=_colocatedState - In the implementation block
@property (assign,nonatomic) BOOL hasHotspot20; 
@property (assign,nonatomic) BOOL hotspot20;                                        //@synthesize hotspot20=_hotspot20 - In the implementation block
@property (assign,nonatomic) BOOL hasDisassocReason; 
@property (assign,nonatomic) unsigned disassocReason;                               //@synthesize disassocReason=_disassocReason - In the implementation block
@property (assign,nonatomic) BOOL hasAssocReason; 
@property (assign,nonatomic) unsigned assocReason;                                  //@synthesize assocReason=_assocReason - In the implementation block
@property (assign,nonatomic) BOOL hasBand; 
@property (assign,nonatomic) unsigned band;                                         //@synthesize band=_band - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) unsigned channel;                                      //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasChannelWidth; 
@property (assign,nonatomic) unsigned channelWidth;                                 //@synthesize channelWidth=_channelWidth - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                              //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasSnr; 
@property (assign,nonatomic) int snr;                                               //@synthesize snr=_snr - In the implementation block
@property (assign,nonatomic) BOOL hasCca; 
@property (assign,nonatomic) int cca;                                               //@synthesize cca=_cca - In the implementation block
@property (assign,nonatomic) BOOL hasPhyMode; 
@property (assign,nonatomic) unsigned phyMode;                                      //@synthesize phyMode=_phyMode - In the implementation block
@property (assign,nonatomic) BOOL hasTimeOfDay; 
@property (assign,nonatomic) unsigned long long timeOfDay;                          //@synthesize timeOfDay=_timeOfDay - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedTime; 
@property (assign,nonatomic) unsigned associatedTime;                               //@synthesize associatedTime=_associatedTime - In the implementation block
+(Class)additionalUniqueIDsType;
+(Class)otherUniqueIDsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)uniqueID;
-(unsigned)channel;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)rssi;
-(int)snr;
-(void)setRssi:(int)arg1 ;
-(void)setSnr:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSecurityType:(unsigned)arg1 ;
-(unsigned)securityType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setLat:(double)arg1 ;
-(void)setHasLat:(BOOL)arg1 ;
-(BOOL)hasLat;
-(void)setLon:(double)arg1 ;
-(void)setHasLon:(BOOL)arg1 ;
-(BOOL)hasLon;
-(double)lat;
-(double)lon;
-(void)setPacketsIn:(unsigned long long)arg1 ;
-(void)setHasPacketsIn:(BOOL)arg1 ;
-(BOOL)hasPacketsIn;
-(void)setPacketsOut:(unsigned long long)arg1 ;
-(void)setHasPacketsOut:(BOOL)arg1 ;
-(BOOL)hasPacketsOut;
-(unsigned long long)packetsIn;
-(unsigned long long)packetsOut;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(void)setUniqueID:(NSString *)arg1 ;
-(void)setAdditionalUniqueIDs:(NSMutableArray *)arg1 ;
-(void)setOtherUniqueIDs:(NSMutableArray *)arg1 ;
-(void)addAdditionalUniqueIDs:(id)arg1 ;
-(void)addOtherUniqueIDs:(id)arg1 ;
-(unsigned long long)additionalUniqueIDsCount;
-(void)clearAdditionalUniqueIDs;
-(id)additionalUniqueIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)otherUniqueIDsCount;
-(void)clearOtherUniqueIDs;
-(id)otherUniqueIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasUniqueID;
-(void)setOverAllStay:(unsigned long long)arg1 ;
-(void)setHasOverAllStay:(BOOL)arg1 ;
-(BOOL)hasOverAllStay;
-(void)setFaultyStay:(unsigned long long)arg1 ;
-(void)setHasFaultyStay:(BOOL)arg1 ;
-(BOOL)hasFaultyStay;
-(void)setLowLQMStay:(unsigned long long)arg1 ;
-(void)setHasLowLQMStay:(BOOL)arg1 ;
-(BOOL)hasLowLQMStay;
-(void)setLowqStay:(unsigned long long)arg1 ;
-(void)setHasLowqStay:(BOOL)arg1 ;
-(BOOL)hasLowqStay;
-(void)setLqmTranCount:(unsigned long long)arg1 ;
-(void)setHasLqmTranCount:(BOOL)arg1 ;
-(BOOL)hasLqmTranCount;
-(void)setSuccessfulConnections:(unsigned long long)arg1 ;
-(void)setHasSuccessfulConnections:(BOOL)arg1 ;
-(BOOL)hasSuccessfulConnections;
-(void)setFailedConnections:(unsigned long long)arg1 ;
-(void)setHasFailedConnections:(BOOL)arg1 ;
-(BOOL)hasFailedConnections;
-(void)setBytesInTotal:(unsigned long long)arg1 ;
-(void)setHasBytesInTotal:(BOOL)arg1 ;
-(BOOL)hasBytesInTotal;
-(void)setBytesOutTotal:(unsigned long long)arg1 ;
-(void)setHasBytesOutTotal:(BOOL)arg1 ;
-(BOOL)hasBytesOutTotal;
-(void)setBytesInActive:(unsigned long long)arg1 ;
-(void)setHasBytesInActive:(BOOL)arg1 ;
-(BOOL)hasBytesInActive;
-(void)setBytesOutActive:(unsigned long long)arg1 ;
-(void)setHasBytesOutActive:(BOOL)arg1 ;
-(BOOL)hasBytesOutActive;
-(void)setReTxBytes:(unsigned long long)arg1 ;
-(void)setHasReTxBytes:(BOOL)arg1 ;
-(BOOL)hasReTxBytes;
-(void)setDataStalls:(unsigned long long)arg1 ;
-(void)setHasDataStalls:(BOOL)arg1 ;
-(BOOL)hasDataStalls;
-(void)setReceivedDupes:(unsigned long long)arg1 ;
-(void)setHasReceivedDupes:(BOOL)arg1 ;
-(BOOL)hasReceivedDupes;
-(void)setRxOutOfOrderBytes:(unsigned long long)arg1 ;
-(void)setHasRxOutOfOrderBytes:(BOOL)arg1 ;
-(BOOL)hasRxOutOfOrderBytes;
-(void)setRoundTripTimeMin:(float)arg1 ;
-(void)setHasRoundTripTimeMin:(BOOL)arg1 ;
-(BOOL)hasRoundTripTimeMin;
-(void)setRoundTripTimeAvg:(float)arg1 ;
-(void)setHasRoundTripTimeAvg:(BOOL)arg1 ;
-(BOOL)hasRoundTripTimeAvg;
-(void)setRoundTripTimeVar:(float)arg1 ;
-(void)setHasRoundTripTimeVar:(BOOL)arg1 ;
-(BOOL)hasRoundTripTimeVar;
-(void)setRoundTripTimeMinActive:(float)arg1 ;
-(void)setHasRoundTripTimeMinActive:(BOOL)arg1 ;
-(BOOL)hasRoundTripTimeMinActive;
-(void)setRoundTripTimeAvgActive:(float)arg1 ;
-(void)setHasRoundTripTimeAvgActive:(BOOL)arg1 ;
-(BOOL)hasRoundTripTimeAvgActive;
-(void)setRoundTripTimeVarActive:(float)arg1 ;
-(void)setHasRoundTripTimeVarActive:(BOOL)arg1 ;
-(BOOL)hasRoundTripTimeVarActive;
-(void)setCaptiveFlag:(unsigned)arg1 ;
-(void)setHasCaptiveFlag:(BOOL)arg1 ;
-(BOOL)hasCaptiveFlag;
-(void)setColocatedState:(unsigned)arg1 ;
-(void)setHasColocatedState:(BOOL)arg1 ;
-(BOOL)hasColocatedState;
-(void)setHotspot20:(BOOL)arg1 ;
-(void)setHasHotspot20:(BOOL)arg1 ;
-(BOOL)hasHotspot20;
-(void)setDisassocReason:(unsigned)arg1 ;
-(void)setHasDisassocReason:(BOOL)arg1 ;
-(BOOL)hasDisassocReason;
-(void)setAssocReason:(unsigned)arg1 ;
-(void)setHasAssocReason:(BOOL)arg1 ;
-(BOOL)hasAssocReason;
-(void)setBand:(unsigned)arg1 ;
-(void)setHasBand:(BOOL)arg1 ;
-(BOOL)hasBand;
-(void)setChannel:(unsigned)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(void)setChannelWidth:(unsigned)arg1 ;
-(void)setHasChannelWidth:(BOOL)arg1 ;
-(BOOL)hasChannelWidth;
-(void)setHasSnr:(BOOL)arg1 ;
-(BOOL)hasSnr;
-(void)setCca:(int)arg1 ;
-(void)setHasCca:(BOOL)arg1 ;
-(BOOL)hasCca;
-(void)setPhyMode:(unsigned)arg1 ;
-(void)setHasPhyMode:(BOOL)arg1 ;
-(BOOL)hasPhyMode;
-(void)setTimeOfDay:(unsigned long long)arg1 ;
-(void)setHasTimeOfDay:(BOOL)arg1 ;
-(BOOL)hasTimeOfDay;
-(void)setAssociatedTime:(unsigned)arg1 ;
-(void)setHasAssociatedTime:(BOOL)arg1 ;
-(BOOL)hasAssociatedTime;
-(NSMutableArray *)additionalUniqueIDs;
-(NSMutableArray *)otherUniqueIDs;
-(unsigned long long)overAllStay;
-(unsigned long long)faultyStay;
-(unsigned long long)lowLQMStay;
-(unsigned long long)lowqStay;
-(unsigned long long)lqmTranCount;
-(unsigned long long)successfulConnections;
-(unsigned long long)failedConnections;
-(unsigned long long)bytesInTotal;
-(unsigned long long)bytesOutTotal;
-(unsigned long long)bytesInActive;
-(unsigned long long)bytesOutActive;
-(unsigned long long)reTxBytes;
-(unsigned long long)dataStalls;
-(unsigned long long)receivedDupes;
-(unsigned long long)rxOutOfOrderBytes;
-(float)roundTripTimeMin;
-(float)roundTripTimeAvg;
-(float)roundTripTimeVar;
-(float)roundTripTimeMinActive;
-(float)roundTripTimeAvgActive;
-(float)roundTripTimeVarActive;
-(unsigned)captiveFlag;
-(unsigned)colocatedState;
-(BOOL)hotspot20;
-(unsigned)disassocReason;
-(unsigned)assocReason;
-(unsigned)band;
-(unsigned)channelWidth;
-(int)cca;
-(unsigned)phyMode;
-(unsigned long long)timeOfDay;
-(unsigned)associatedTime;
@end

