/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:09:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSQuickRelay : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	unsigned _eventSubType;
	unsigned _eventType;
	unsigned _interfaceType;
	unsigned _isInitiator;
	unsigned _protocolVersion;
	unsigned _providerType;
	unsigned _resultCode;
	unsigned _retryCount;
	NSString* _serviceName;
	unsigned _skeEnabled;
	NSString* _subServiceName;
	unsigned _transportType;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                        //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasEventSubType; 
@property (assign,nonatomic) unsigned eventSubType;                     //@synthesize eventSubType=_eventSubType - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResultCode; 
@property (assign,nonatomic) unsigned resultCode;                       //@synthesize resultCode=_resultCode - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                    //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceType; 
@property (assign,nonatomic) unsigned interfaceType;                    //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasSkeEnabled; 
@property (assign,nonatomic) unsigned skeEnabled;                       //@synthesize skeEnabled=_skeEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsInitiator; 
@property (assign,nonatomic) unsigned isInitiator;                      //@synthesize isInitiator=_isInitiator - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned protocolVersion;                  //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasRetryCount; 
@property (assign,nonatomic) unsigned retryCount;                       //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasSubServiceName; 
@property (nonatomic,retain) NSString * subServiceName;                 //@synthesize subServiceName=_subServiceName - In the implementation block
@property (assign,nonatomic) BOOL hasProviderType; 
@property (assign,nonatomic) unsigned providerType;                     //@synthesize providerType=_providerType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned)retryCount;
-(void)setRetryCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(NSString *)serviceName;
-(unsigned)isInitiator;
-(void)setIsInitiator:(unsigned)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)transportType;
-(void)setTransportType:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setEventType:(unsigned)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(unsigned)eventType;
-(void)setHasIsInitiator:(BOOL)arg1 ;
-(BOOL)hasIsInitiator;
-(BOOL)hasServiceName;
-(void)setSubServiceName:(NSString *)arg1 ;
-(void)setEventSubType:(unsigned)arg1 ;
-(void)setHasEventSubType:(BOOL)arg1 ;
-(BOOL)hasEventSubType;
-(void)setResultCode:(unsigned)arg1 ;
-(void)setHasResultCode:(BOOL)arg1 ;
-(BOOL)hasResultCode;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)setInterfaceType:(unsigned)arg1 ;
-(void)setHasInterfaceType:(BOOL)arg1 ;
-(BOOL)hasInterfaceType;
-(void)setSkeEnabled:(unsigned)arg1 ;
-(void)setHasSkeEnabled:(BOOL)arg1 ;
-(BOOL)hasSkeEnabled;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasProtocolVersion;
-(void)setHasRetryCount:(BOOL)arg1 ;
-(BOOL)hasRetryCount;
-(BOOL)hasSubServiceName;
-(void)setProviderType:(unsigned)arg1 ;
-(void)setHasProviderType:(BOOL)arg1 ;
-(BOOL)hasProviderType;
-(unsigned)eventSubType;
-(unsigned)resultCode;
-(unsigned)interfaceType;
-(unsigned)skeEnabled;
-(unsigned)protocolVersion;
-(NSString *)subServiceName;
-(unsigned)providerType;
@end

