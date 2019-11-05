/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPInternal/CoreCDPInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreCDPInternal/NSCopying.h>

@class NSString;

@interface AWDCoreCDPStateMachineRecovery : PBCodable <NSCopying> {

	long long _errorCode;
	long long _secretType;
	unsigned long long _timestamp;
	NSString* _errorDomain;
	BOOL _userDidReset;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSecretType; 
@property (assign,nonatomic) long long secretType;                      //@synthesize secretType=_secretType - In the implementation block
@property (assign,nonatomic) BOOL hasUserDidReset; 
@property (assign,nonatomic) BOOL userDidReset;                         //@synthesize userDidReset=_userDidReset - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                       //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(long long)errorCode;
-(NSString *)errorDomain;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(long long)secretType;
-(void)setSecretType:(long long)arg1 ;
-(BOOL)userDidReset;
-(void)setUserDidReset:(BOOL)arg1 ;
-(void)setHasSecretType:(BOOL)arg1 ;
-(BOOL)hasSecretType;
-(void)setHasUserDidReset:(BOOL)arg1 ;
-(BOOL)hasUserDidReset;
@end

