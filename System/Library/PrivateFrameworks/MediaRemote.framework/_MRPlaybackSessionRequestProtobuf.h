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

@interface _MRPlaybackSessionRequestProtobuf : PBCodable <NSCopying> {

	NSString* _identifier;
	int _length;
	int _location;
	NSString* _requestID;
	NSString* _type;
	SCD_Struct_MR2 _has;

}

@property (nonatomic,readonly) BOOL hasRequestID; 
@property (nonatomic,retain) NSString * requestID;               //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) int location;                       //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) int length;                         //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                    //@synthesize type=_type - In the implementation block
+(void)initialize;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)length;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setLength:(int)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasLength:(BOOL)arg1 ;
-(BOOL)hasLength;
-(BOOL)hasType;
-(int)location;
-(NSString *)requestID;
-(void)setLocation:(int)arg1 ;
-(BOOL)hasLocation;
-(BOOL)hasIdentifier;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
-(id)customDescription;
-(BOOL)hasRequestID;
@end

