/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MultipeerConnectivity/MultipeerConnectivity-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MultipeerConnectivity/NSCopying.h>

@class NSString;

@interface AWDMultipeerSessionMaxPeersInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _bundleID;
	unsigned _maxPeersCount;
	NSString* _sessionID;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionID; 
@property (nonatomic,retain) NSString * sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasMaxPeersCount; 
@property (assign,nonatomic) unsigned maxPeersCount;                    //@synthesize maxPeersCount=_maxPeersCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasBundleID;
-(BOOL)hasSessionID;
-(void)setMaxPeersCount:(unsigned)arg1 ;
-(void)setHasMaxPeersCount:(BOOL)arg1 ;
-(BOOL)hasMaxPeersCount;
-(unsigned)maxPeersCount;
@end

