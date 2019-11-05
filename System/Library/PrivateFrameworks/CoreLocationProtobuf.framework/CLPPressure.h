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

@interface CLPPressure : PBCodable <NSCopying> {

	double _std;
	double _timestamp;
	double _value;

}

@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double value;                  //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double std;                    //@synthesize std=_std - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)std;
-(void)setStd:(double)arg1 ;
@end

