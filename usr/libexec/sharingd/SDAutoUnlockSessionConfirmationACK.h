/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <sharingd/NSCopying.h>

@interface SDAutoUnlockSessionConfirmationACK : PBCodable <NSCopying> {

	unsigned _version;
	BOOL _success;
	SCD_Struct_SD7 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                  //@synthesize success=_success - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
@end
