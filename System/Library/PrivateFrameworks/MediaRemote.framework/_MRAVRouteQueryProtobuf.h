/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MediaRemote/NSCopying.h>

@class NSString;

@interface _MRAVRouteQueryProtobuf : PBCodable <NSCopying> {

	NSString* _routeUID;

}

@property (nonatomic,readonly) BOOL hasRouteUID; 
@property (nonatomic,retain) NSString * routeUID;              //@synthesize routeUID=_routeUID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRouteUID:(NSString *)arg1 ;
-(BOOL)hasRouteUID;
-(NSString *)routeUID;
@end

