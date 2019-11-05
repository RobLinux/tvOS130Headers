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

@class NSString;

@interface _MRPlaybackQueueContextProtobuf : PBCodable <NSCopying> {

	NSString* _revision;

}

@property (nonatomic,readonly) BOOL hasRevision; 
@property (nonatomic,retain) NSString * revision;              //@synthesize revision=_revision - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRevision:(NSString *)arg1 ;
-(BOOL)hasRevision;
-(NSString *)revision;
@end

