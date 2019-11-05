/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:10:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class AWDWiFiMetricsManagerEvent;

@interface AWDWiFiMetricsManagerAssociationEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDWiFiMetricsManagerEvent* _eventInfo;
	int _eventType;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEventInfo; 
@property (nonatomic,retain) AWDWiFiMetricsManagerEvent * eventInfo;              //@synthesize eventInfo=_eventInfo - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                       //@synthesize eventType=_eventType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(int)eventType;
-(void)setEventInfo:(AWDWiFiMetricsManagerEvent *)arg1 ;
-(BOOL)hasEventInfo;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(AWDWiFiMetricsManagerEvent *)eventInfo;
@end

