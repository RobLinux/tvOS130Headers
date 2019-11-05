/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MediaRemote/NSCopying.h>

@class NSString;

@interface _MRNowPlayingPlayerProtobuf : PBCodable <NSCopying> {

	int _audioSessionType;
	NSString* _displayName;
	NSString* _identifier;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL hasAudioSessionType; 
@property (assign,nonatomic) int audioSessionType;                  //@synthesize audioSessionType=_audioSessionType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasDisplayName;
-(void)setAudioSessionType:(int)arg1 ;
-(int)audioSessionType;
-(BOOL)hasAudioSessionType;
-(void)setHasAudioSessionType:(BOOL)arg1 ;
-(id)audioSessionTypeAsString:(int)arg1 ;
-(int)StringAsAudioSessionType:(id)arg1 ;
@end

