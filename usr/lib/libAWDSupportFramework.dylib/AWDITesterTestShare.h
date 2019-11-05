/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:09:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDITesterTestShare : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _shareMethod;
	NSString* _shareOption;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasShareMethod; 
@property (nonatomic,retain) NSString * shareMethod;                    //@synthesize shareMethod=_shareMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasShareOption; 
@property (nonatomic,retain) NSString * shareOption;                    //@synthesize shareOption=_shareOption - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setShareMethod:(NSString *)arg1 ;
-(void)setShareOption:(NSString *)arg1 ;
-(BOOL)hasShareMethod;
-(BOOL)hasShareOption;
-(NSString *)shareMethod;
-(NSString *)shareOption;
@end
