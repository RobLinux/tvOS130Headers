/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPZoneCapabilities;

@interface CKDPZoneSaveResponse : PBCodable <NSCopying> {

	CKDPZoneCapabilities* _capabilities;

}

@property (nonatomic,readonly) BOOL hasCapabilities; 
@property (nonatomic,retain) CKDPZoneCapabilities * capabilities;              //@synthesize capabilities=_capabilities - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCapabilities:(CKDPZoneCapabilities *)arg1 ;
-(BOOL)hasCapabilities;
-(CKDPZoneCapabilities *)capabilities;
@end

