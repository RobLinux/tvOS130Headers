/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <ProtectedCloudStorage/NSCopying.h>

@class NSData;

@interface PCSManateeShareInvitation : PBCodable <NSCopying> {

	NSData* _exportedPCSData;
	NSData* _shareePublicKeyData;

}

@property (nonatomic,readonly) BOOL hasExportedPCSData; 
@property (nonatomic,retain) NSData * exportedPCSData;                   //@synthesize exportedPCSData=_exportedPCSData - In the implementation block
@property (nonatomic,readonly) BOOL hasShareePublicKeyData; 
@property (nonatomic,retain) NSData * shareePublicKeyData;               //@synthesize shareePublicKeyData=_shareePublicKeyData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasExportedPCSData;
-(NSData *)exportedPCSData;
-(void)setExportedPCSData:(NSData *)arg1 ;
-(void)setShareePublicKeyData:(NSData *)arg1 ;
-(BOOL)hasShareePublicKeyData;
-(NSData *)shareePublicKeyData;
@end

