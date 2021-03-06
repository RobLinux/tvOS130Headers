/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEORPPostedBy : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSString* _nickname;
	NSString* _userDsid;
	int _role;
	struct {
		unsigned has_role : 1;
		unsigned read_unknownFields : 1;
		unsigned read_nickname : 1;
		unsigned read_userDsid : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_nickname : 1;
		unsigned wrote_userDsid : 1;
		unsigned wrote_role : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRole; 
@property (assign,nonatomic) int role; 
@property (nonatomic,readonly) BOOL hasUserDsid; 
@property (nonatomic,retain) NSString * userDsid; 
@property (nonatomic,readonly) BOOL hasNickname; 
@property (nonatomic,retain) NSString * nickname; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)role;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRole:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readUserDsid;
-(void)_readNickname;
-(NSString *)userDsid;
-(void)setUserDsid:(NSString *)arg1 ;
-(void)setHasRole:(BOOL)arg1 ;
-(BOOL)hasRole;
-(id)roleAsString:(int)arg1 ;
-(int)StringAsRole:(id)arg1 ;
-(BOOL)hasUserDsid;
-(BOOL)hasNickname;
@end

