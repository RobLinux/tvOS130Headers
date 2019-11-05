/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MediaRemote/NSCopying.h>

@interface _MRAudioStreamPacketDescriptionProtobuf : PBCodable <NSCopying> {

	long long _startOffset;
	unsigned _dataByteSize;
	unsigned _variableFramesInPacket;
	SCD_Struct_MR6 _has;

}

@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) long long startOffset;                        //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) BOOL hasVariableFramesInPacket; 
@property (assign,nonatomic) unsigned variableFramesInPacket;              //@synthesize variableFramesInPacket=_variableFramesInPacket - In the implementation block
@property (assign,nonatomic) BOOL hasDataByteSize; 
@property (assign,nonatomic) unsigned dataByteSize;                        //@synthesize dataByteSize=_dataByteSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)startOffset;
-(void)setStartOffset:(long long)arg1 ;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(void)setVariableFramesInPacket:(unsigned)arg1 ;
-(void)setDataByteSize:(unsigned)arg1 ;
-(unsigned)dataByteSize;
-(unsigned)variableFramesInPacket;
-(void)setHasVariableFramesInPacket:(BOOL)arg1 ;
-(BOOL)hasVariableFramesInPacket;
-(void)setHasDataByteSize:(BOOL)arg1 ;
-(BOOL)hasDataByteSize;
@end

