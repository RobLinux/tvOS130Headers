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

@interface SDUnlockStateResponse : PBCodable <NSCopying> {

	unsigned _version;
	BOOL _passcodeEnabled;
	BOOL _unlockEnabled;
	SCD_Struct_SD4 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                     //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasUnlockEnabled; 
@property (assign,nonatomic) BOOL unlockEnabled;                   //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPasscodeEnabled; 
@property (assign,nonatomic) BOOL passcodeEnabled;                 //@synthesize passcodeEnabled=_passcodeEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)unlockEnabled;
-(void)setUnlockEnabled:(BOOL)arg1 ;
-(void)setHasUnlockEnabled:(BOOL)arg1 ;
-(BOOL)hasUnlockEnabled;
-(void)setPasscodeEnabled:(BOOL)arg1 ;
-(void)setHasPasscodeEnabled:(BOOL)arg1 ;
-(BOOL)hasPasscodeEnabled;
-(BOOL)passcodeEnabled;
@end

