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

@class NSString, NSMutableArray;

@interface CKCDPError : PBCodable <NSCopying> {

	int _auxiliaryCode;
	NSString* _auxiliaryDomain;
	NSMutableArray* _auxiliaryUserInfos;
	int _code;
	NSString* _message;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                         //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) BOOL hasAuxiliaryDomain; 
@property (nonatomic,retain) NSString * auxiliaryDomain;                       //@synthesize auxiliaryDomain=_auxiliaryDomain - In the implementation block
@property (assign,nonatomic) BOOL hasAuxiliaryCode; 
@property (assign,nonatomic) int auxiliaryCode;                                //@synthesize auxiliaryCode=_auxiliaryCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * auxiliaryUserInfos;              //@synthesize auxiliaryUserInfos=_auxiliaryUserInfos - In the implementation block
+(Class)auxiliaryUserInfoType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)code;
-(id)dictionaryRepresentation;
-(NSString *)message;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCode:(int)arg1 ;
-(void)setHasCode:(BOOL)arg1 ;
-(BOOL)hasCode;
-(BOOL)hasMessage;
-(id)codeAsString:(int)arg1 ;
-(int)StringAsCode:(id)arg1 ;
-(BOOL)hasAuxiliaryDomain;
-(NSString *)auxiliaryDomain;
-(BOOL)hasAuxiliaryCode;
-(int)auxiliaryCode;
-(unsigned long long)auxiliaryUserInfosCount;
-(NSMutableArray *)auxiliaryUserInfos;
-(void)addAuxiliaryUserInfo:(id)arg1 ;
-(void)setAuxiliaryDomain:(NSString *)arg1 ;
-(void)clearAuxiliaryUserInfos;
-(id)auxiliaryUserInfoAtIndex:(unsigned long long)arg1 ;
-(void)setAuxiliaryCode:(int)arg1 ;
-(void)setHasAuxiliaryCode:(BOOL)arg1 ;
-(void)setAuxiliaryUserInfos:(NSMutableArray *)arg1 ;
@end

