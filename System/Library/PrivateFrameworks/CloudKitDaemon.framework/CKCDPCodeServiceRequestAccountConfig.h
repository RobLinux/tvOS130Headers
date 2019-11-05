/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@interface CKCDPCodeServiceRequestAccountConfig : PBCodable <NSCopying> {

	long long _lastWebActivityUTCMills;
	BOOL _corporateSharingEnabled;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasCorporateSharingEnabled; 
@property (assign,nonatomic) BOOL corporateSharingEnabled;                   //@synthesize corporateSharingEnabled=_corporateSharingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasLastWebActivityUTCMills; 
@property (assign,nonatomic) long long lastWebActivityUTCMills;              //@synthesize lastWebActivityUTCMills=_lastWebActivityUTCMills - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCorporateSharingEnabled:(BOOL)arg1 ;
-(void)setHasCorporateSharingEnabled:(BOOL)arg1 ;
-(BOOL)hasCorporateSharingEnabled;
-(void)setLastWebActivityUTCMills:(long long)arg1 ;
-(void)setHasLastWebActivityUTCMills:(BOOL)arg1 ;
-(BOOL)hasLastWebActivityUTCMills;
-(BOOL)corporateSharingEnabled;
-(long long)lastWebActivityUTCMills;
@end

