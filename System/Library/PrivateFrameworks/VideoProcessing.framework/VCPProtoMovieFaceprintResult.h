/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <VideoProcessing/VCPProtoResultLegacyConversionProtocol.h>
#import <VideoProcessing/NSCopying.h>

@class NSData;

@interface VCPProtoMovieFaceprintResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	unsigned _faceID;
	NSData* _faceprintBlob;

}

@property (assign,nonatomic) unsigned faceID;                     //@synthesize faceID=_faceID - In the implementation block
@property (nonatomic,retain) NSData * faceprintBlob;              //@synthesize faceprintBlob=_faceprintBlob - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)faceID;
-(void)setFaceID:(unsigned)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setFaceprintBlob:(NSData *)arg1 ;
-(NSData *)faceprintBlob;
@end

