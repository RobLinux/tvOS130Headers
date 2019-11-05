/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPRecordIdentifier;

@interface CKDPMarkAssetBrokenResponse : PBCodable <NSCopying> {

	CKDPRecordIdentifier* _missingAssetStatusRecord;

}

@property (nonatomic,readonly) BOOL hasMissingAssetStatusRecord; 
@property (nonatomic,retain) CKDPRecordIdentifier * missingAssetStatusRecord;              //@synthesize missingAssetStatusRecord=_missingAssetStatusRecord - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMissingAssetStatusRecord:(CKDPRecordIdentifier *)arg1 ;
-(BOOL)hasMissingAssetStatusRecord;
-(CKDPRecordIdentifier *)missingAssetStatusRecord;
@end

