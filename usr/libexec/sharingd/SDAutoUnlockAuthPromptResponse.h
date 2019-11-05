/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <sharingd/NSCopying.h>

@class NSData;

@interface SDAutoUnlockAuthPromptResponse : PBCodable <NSCopying> {

	unsigned _errorCode;
	NSData* _keyData;
	unsigned _version;
	BOOL _needsImageData;
	SCD_Struct_SD4 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyData; 
@property (nonatomic,retain) NSData * keyData;                    //@synthesize keyData=_keyData - In the implementation block
@property (assign,nonatomic) BOOL hasNeedsImageData; 
@property (assign,nonatomic) BOOL needsImageData;                 //@synthesize needsImageData=_needsImageData - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                  //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)errorCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(NSData *)keyData;
-(void)setKeyData:(NSData *)arg1 ;
-(void)setNeedsImageData:(BOOL)arg1 ;
-(BOOL)needsImageData;
-(BOOL)hasKeyData;
-(void)setHasNeedsImageData:(BOOL)arg1 ;
-(BOOL)hasNeedsImageData;
@end

