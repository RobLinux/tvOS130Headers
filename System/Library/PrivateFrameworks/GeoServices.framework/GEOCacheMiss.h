/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOCacheMiss : PBCodable <NSCopying> {

	NSMutableArray* _errors;
	unsigned _bytes;
	unsigned _count;
	unsigned _httpStatus;
	int _missType;
	int _requestorType;
	struct {
		unsigned has_bytes : 1;
		unsigned has_count : 1;
		unsigned has_httpStatus : 1;
		unsigned has_missType : 1;
		unsigned has_requestorType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRequestorType; 
@property (assign,nonatomic) int requestorType; 
@property (assign,nonatomic) BOOL hasMissType; 
@property (assign,nonatomic) int missType; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) BOOL hasBytes; 
@property (assign,nonatomic) unsigned bytes; 
@property (nonatomic,retain) NSMutableArray * errors; 
@property (assign,nonatomic) BOOL hasHttpStatus; 
@property (assign,nonatomic) unsigned httpStatus; 
+(BOOL)isValid:(id)arg1 ;
+(Class)errorsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)bytes;
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)errors;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(unsigned long long)errorsCount;
-(void)clearErrors;
-(void)setHttpStatus:(unsigned)arg1 ;
-(void)setHasHttpStatus:(BOOL)arg1 ;
-(BOOL)hasHttpStatus;
-(unsigned)httpStatus;
-(void)readAll:(BOOL)arg1 ;
-(void)addErrors:(id)arg1 ;
-(id)errorsAtIndex:(unsigned long long)arg1 ;
-(int)requestorType;
-(void)setRequestorType:(int)arg1 ;
-(void)setHasRequestorType:(BOOL)arg1 ;
-(BOOL)hasRequestorType;
-(id)requestorTypeAsString:(int)arg1 ;
-(int)StringAsRequestorType:(id)arg1 ;
-(int)missType;
-(void)setMissType:(int)arg1 ;
-(void)setHasMissType:(BOOL)arg1 ;
-(BOOL)hasMissType;
-(id)missTypeAsString:(int)arg1 ;
-(int)StringAsMissType:(id)arg1 ;
-(void)setBytes:(unsigned)arg1 ;
-(void)setHasBytes:(BOOL)arg1 ;
-(BOOL)hasBytes;
@end

