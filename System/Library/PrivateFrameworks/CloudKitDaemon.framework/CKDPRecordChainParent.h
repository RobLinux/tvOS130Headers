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

@class NSData, CKDPRecordReference;

@interface CKDPRecordChainParent : PBCodable <NSCopying> {

	NSData* _publicKeyID;
	CKDPRecordReference* _reference;

}

@property (nonatomic,readonly) BOOL hasPublicKeyID; 
@property (nonatomic,retain) NSData * publicKeyID;                         //@synthesize publicKeyID=_publicKeyID - In the implementation block
@property (nonatomic,readonly) BOOL hasReference; 
@property (nonatomic,retain) CKDPRecordReference * reference;              //@synthesize reference=_reference - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(CKDPRecordReference *)reference;
-(void)setReference:(CKDPRecordReference *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasReference;
-(void)setPublicKeyID:(NSData *)arg1 ;
-(BOOL)hasPublicKeyID;
-(NSData *)publicKeyID;
@end

