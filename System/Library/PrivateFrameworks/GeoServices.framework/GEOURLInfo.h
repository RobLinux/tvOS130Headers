/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBUnknownFields, NSString, NSURL;

@interface GEOURLInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _url;
	unsigned _alternativeMultipathTCPPort;
	BOOL _supportsMultipathTCP;
	BOOL _useAuthProxy;
	SCD_Struct_GE86 _flags;

}

@property (nonatomic,readonly) NSURL * nsURL; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (assign,nonatomic) BOOL hasUseAuthProxy; 
@property (assign,nonatomic) BOOL useAuthProxy; 
@property (assign,nonatomic) BOOL hasSupportsMultipathTCP; 
@property (assign,nonatomic) BOOL supportsMultipathTCP; 
@property (assign,nonatomic) BOOL hasAlternativeMultipathTCPPort; 
@property (assign,nonatomic) unsigned alternativeMultipathTCPPort; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)url;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasUrl;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)useAuthProxy;
-(void)setUseAuthProxy:(BOOL)arg1 ;
-(void)setHasUseAuthProxy:(BOOL)arg1 ;
-(BOOL)hasUseAuthProxy;
-(BOOL)supportsMultipathTCP;
-(void)setSupportsMultipathTCP:(BOOL)arg1 ;
-(void)setHasSupportsMultipathTCP:(BOOL)arg1 ;
-(BOOL)hasSupportsMultipathTCP;
-(unsigned)alternativeMultipathTCPPort;
-(void)setAlternativeMultipathTCPPort:(unsigned)arg1 ;
-(void)setHasAlternativeMultipathTCPPort:(BOOL)arg1 ;
-(BOOL)hasAlternativeMultipathTCPPort;
-(NSURL *)nsURL;
@end

