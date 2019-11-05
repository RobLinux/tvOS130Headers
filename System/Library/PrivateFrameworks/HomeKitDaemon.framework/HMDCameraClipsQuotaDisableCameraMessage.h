/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HomeKitDaemon/NSCopying.h>

@class NSString;

@interface HMDCameraClipsQuotaDisableCameraMessage : PBCodable <NSCopying> {

	NSString* _zoneName;

}

@property (nonatomic,readonly) BOOL hasZoneName; 
@property (nonatomic,retain) NSString * zoneName;              //@synthesize zoneName=_zoneName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)zoneName;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(BOOL)hasZoneName;
@end

