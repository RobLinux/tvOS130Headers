/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <AVConference/NSCopying.h>

@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable <NSCopying> {

	unsigned _formats;
	int _operation;
	unsigned _preferredFormat;
	int _transport;
	SCD_Struct_VC45 _has;

}

@property (assign,nonatomic) int transport;                         //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) int operation;                         //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) unsigned formats;                      //@synthesize formats=_formats - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredFormat; 
@property (assign,nonatomic) unsigned preferredFormat;              //@synthesize preferredFormat=_preferredFormat - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)transport;
-(void)setTransport:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)transportAsString:(int)arg1 ;
-(int)StringAsTransport:(id)arg1 ;
-(unsigned)formats;
-(unsigned)preferredFormat;
-(void)setPreferredFormat:(unsigned)arg1 ;
-(void)setFormats:(unsigned)arg1 ;
-(BOOL)hasPreferredFormat;
-(id)operationAsString:(int)arg1 ;
-(int)StringAsOperation:(id)arg1 ;
-(void)setHasPreferredFormat:(BOOL)arg1 ;
@end

