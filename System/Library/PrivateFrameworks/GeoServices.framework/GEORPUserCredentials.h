/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, NSString;

@interface GEORPUserCredentials : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	NSString* _icloudUserMapsAuthToken;
	NSString* _icloudUserPersonId;
	struct {
		unsigned read_icloudUserMapsAuthToken : 1;
		unsigned read_icloudUserPersonId : 1;
		unsigned wrote_icloudUserMapsAuthToken : 1;
		unsigned wrote_icloudUserPersonId : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasIcloudUserPersonId; 
@property (nonatomic,retain) NSString * icloudUserPersonId; 
@property (nonatomic,readonly) BOOL hasIcloudUserMapsAuthToken; 
@property (nonatomic,retain) NSString * icloudUserMapsAuthToken; 
+(BOOL)isValid:(id)arg1 ;
+(id)_credentialsForPrimaryICloudAccount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setIcloudUserPersonId:(NSString *)arg1 ;
-(void)setIcloudUserMapsAuthToken:(NSString *)arg1 ;
-(void)_readIcloudUserPersonId;
-(void)_readIcloudUserMapsAuthToken;
-(NSString *)icloudUserPersonId;
-(NSString *)icloudUserMapsAuthToken;
-(BOOL)hasIcloudUserPersonId;
-(BOOL)hasIcloudUserMapsAuthToken;
@end

