/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:09:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@interface AWDCoreRoutinePersistenceMirroringResetSync : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _code;
	int _reason;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                  //@synthesize code=_code - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)code;
-(int)reason;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setReason:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasReason:(BOOL)arg1 ;
-(BOOL)hasReason;
-(void)setCode:(int)arg1 ;
-(void)setHasCode:(BOOL)arg1 ;
-(BOOL)hasCode;
@end
