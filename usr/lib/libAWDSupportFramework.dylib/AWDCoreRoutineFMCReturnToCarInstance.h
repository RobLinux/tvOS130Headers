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

@class NSString;

@interface AWDCoreRoutineFMCReturnToCarInstance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _horizontalAccuracy;
	int _horizontalDistance;
	NSString* _parkingId;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasParkingId; 
@property (nonatomic,retain) NSString * parkingId;                      //@synthesize parkingId=_parkingId - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) int horizontalAccuracy;                    //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalDistance; 
@property (assign,nonatomic) int horizontalDistance;                    //@synthesize horizontalDistance=_horizontalDistance - In the implementation block
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
-(void)setParkingId:(NSString *)arg1 ;
-(BOOL)hasParkingId;
-(NSString *)parkingId;
-(void)setHorizontalAccuracy:(int)arg1 ;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasHorizontalAccuracy;
-(int)horizontalAccuracy;
-(void)setHorizontalDistance:(int)arg1 ;
-(void)setHasHorizontalDistance:(BOOL)arg1 ;
-(BOOL)hasHorizontalDistance;
-(int)horizontalDistance;
@end

