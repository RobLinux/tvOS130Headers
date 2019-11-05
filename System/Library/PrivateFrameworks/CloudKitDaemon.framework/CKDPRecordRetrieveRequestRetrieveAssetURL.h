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

@class CKDPRequestedFields;

@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying> {

	long long _requestedTTL;
	CKDPRequestedFields* _assetFields;
	int _type;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasAssetFields; 
@property (nonatomic,retain) CKDPRequestedFields * assetFields;              //@synthesize assetFields=_assetFields - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedTTL; 
@property (assign,nonatomic) long long requestedTTL;                         //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(long long)requestedTTL;
-(void)setRequestedTTL:(long long)arg1 ;
-(void)setAssetFields:(CKDPRequestedFields *)arg1 ;
-(CKDPRequestedFields *)assetFields;
-(BOOL)hasAssetFields;
-(void)setHasRequestedTTL:(BOOL)arg1 ;
-(BOOL)hasRequestedTTL;
@end

