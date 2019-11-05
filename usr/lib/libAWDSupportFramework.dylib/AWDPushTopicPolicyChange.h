/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:10:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDPushTopicPolicyChange : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _change;
	unsigned _didCauseFilterChange;
	NSString* _guid;
	NSString* _topic;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                            //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                           //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) BOOL hasChange; 
@property (assign,nonatomic) unsigned change;                            //@synthesize change=_change - In the implementation block
@property (assign,nonatomic) BOOL hasDidCauseFilterChange; 
@property (assign,nonatomic) unsigned didCauseFilterChange;              //@synthesize didCauseFilterChange=_didCauseFilterChange - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)setTopic:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)topic;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)hasGuid;
-(NSString *)guid;
-(BOOL)hasTopic;
-(void)setChange:(unsigned)arg1 ;
-(void)setHasChange:(BOOL)arg1 ;
-(BOOL)hasChange;
-(void)setDidCauseFilterChange:(unsigned)arg1 ;
-(void)setHasDidCauseFilterChange:(BOOL)arg1 ;
-(BOOL)hasDidCauseFilterChange;
-(unsigned)change;
-(unsigned)didCauseFilterChange;
@end

