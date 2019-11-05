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

@interface AWDIDSWebTunnelRequestCompleted : PBCodable <NSCopying> {

	unsigned long long _requestSize;
	unsigned long long _timeTaken;
	unsigned long long _timestamp;
	int _deliveryType;
	NSString* _serviceIdentifier;
	int _tunnelError;
	BOOL _reversePushAttempted;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceIdentifier; 
@property (nonatomic,retain) NSString * serviceIdentifier;                //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasTimeTaken; 
@property (assign,nonatomic) unsigned long long timeTaken;                //@synthesize timeTaken=_timeTaken - In the implementation block
@property (assign,nonatomic) BOOL hasDeliveryType; 
@property (assign,nonatomic) int deliveryType;                            //@synthesize deliveryType=_deliveryType - In the implementation block
@property (assign,nonatomic) BOOL hasTunnelError; 
@property (assign,nonatomic) int tunnelError;                             //@synthesize tunnelError=_tunnelError - In the implementation block
@property (assign,nonatomic) BOOL hasRequestSize; 
@property (assign,nonatomic) unsigned long long requestSize;              //@synthesize requestSize=_requestSize - In the implementation block
@property (assign,nonatomic) BOOL hasReversePushAttempted; 
@property (assign,nonatomic) BOOL reversePushAttempted;                   //@synthesize reversePushAttempted=_reversePushAttempted - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(BOOL)hasServiceIdentifier;
-(void)setTimeTaken:(unsigned long long)arg1 ;
-(void)setHasTimeTaken:(BOOL)arg1 ;
-(BOOL)hasTimeTaken;
-(unsigned long long)timeTaken;
-(void)setDeliveryType:(int)arg1 ;
-(void)setHasDeliveryType:(BOOL)arg1 ;
-(BOOL)hasDeliveryType;
-(void)setTunnelError:(int)arg1 ;
-(void)setHasTunnelError:(BOOL)arg1 ;
-(BOOL)hasTunnelError;
-(void)setRequestSize:(unsigned long long)arg1 ;
-(void)setHasRequestSize:(BOOL)arg1 ;
-(BOOL)hasRequestSize;
-(void)setReversePushAttempted:(BOOL)arg1 ;
-(void)setHasReversePushAttempted:(BOOL)arg1 ;
-(BOOL)hasReversePushAttempted;
-(int)deliveryType;
-(int)tunnelError;
-(unsigned long long)requestSize;
-(BOOL)reversePushAttempted;
@end

