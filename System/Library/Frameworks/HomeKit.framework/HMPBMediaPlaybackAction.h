/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HomeKit/NSCopying.h>

@class NSData, NSMutableArray;

@interface HMPBMediaPlaybackAction : PBCodable <NSCopying> {

	NSData* _actionUUID;
	int _mediaPlaybackState;
	NSMutableArray* _mediaProfiles;
	NSData* _playbackArchive;
	NSData* _volume;
	SCD_Struct_HM1 _has;

}

@property (nonatomic,readonly) BOOL hasActionUUID; 
@property (nonatomic,retain) NSData * actionUUID;                         //@synthesize actionUUID=_actionUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * mediaProfiles;              //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPlaybackState; 
@property (assign,nonatomic) int mediaPlaybackState;                      //@synthesize mediaPlaybackState=_mediaPlaybackState - In the implementation block
@property (nonatomic,readonly) BOOL hasVolume; 
@property (nonatomic,retain) NSData * volume;                             //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackArchive; 
@property (nonatomic,retain) NSData * playbackArchive;                    //@synthesize playbackArchive=_playbackArchive - In the implementation block
+(Class)mediaProfilesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)volume;
-(void)setVolume:(NSData *)arg1 ;
-(BOOL)hasVolume;
-(NSMutableArray *)mediaProfiles;
-(NSData *)playbackArchive;
-(NSData *)actionUUID;
-(int)mediaPlaybackState;
-(void)setActionUUID:(NSData *)arg1 ;
-(void)setMediaPlaybackState:(int)arg1 ;
-(void)setPlaybackArchive:(NSData *)arg1 ;
-(void)setMediaProfiles:(NSMutableArray *)arg1 ;
-(void)addMediaProfiles:(id)arg1 ;
-(unsigned long long)mediaProfilesCount;
-(void)clearMediaProfiles;
-(id)mediaProfilesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasActionUUID;
-(void)setHasMediaPlaybackState:(BOOL)arg1 ;
-(BOOL)hasMediaPlaybackState;
-(BOOL)hasPlaybackArchive;
@end

