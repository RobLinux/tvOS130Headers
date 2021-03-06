/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MessageProtection/NSCopying.h>

@class NSData;

@interface NGMPBInnerMessage : PBCodable <NSCopying> {

	unsigned _counter;
	NSData* _debugInfo;
	NSData* _message;
	SCD_Struct_NG2 _has;

}

@property (nonatomic,retain) NSData * message;                 //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL hasCounter; 
@property (assign,nonatomic) unsigned counter;                 //@synthesize counter=_counter - In the implementation block
@property (nonatomic,readonly) BOOL hasDebugInfo; 
@property (nonatomic,retain) NSData * debugInfo;               //@synthesize debugInfo=_debugInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)counter;
-(NSData *)message;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMessage:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCounter:(unsigned)arg1 ;
-(void)setHasCounter:(BOOL)arg1 ;
-(BOOL)hasCounter;
-(void)setDebugInfo:(NSData *)arg1 ;
-(BOOL)hasDebugInfo;
-(NSData *)debugInfo;
@end

