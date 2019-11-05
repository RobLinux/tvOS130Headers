/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPAsset, NSString;

@interface CKDPAssetUploadTokenRetrieveResponseUploadToken : PBCodable <NSCopying> {

	long long _tokenExpiration;
	CKDPAsset* _asset;
	NSString* _token;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token;                       //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasAsset; 
@property (nonatomic,retain) CKDPAsset * asset;                      //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL hasTokenExpiration; 
@property (assign,nonatomic) long long tokenExpiration;              //@synthesize tokenExpiration=_tokenExpiration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)token;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPAsset *)asset;
-(BOOL)hasToken;
-(void)setAsset:(CKDPAsset *)arg1 ;
-(long long)tokenExpiration;
-(BOOL)hasAsset;
-(void)setTokenExpiration:(long long)arg1 ;
-(void)setHasTokenExpiration:(BOOL)arg1 ;
-(BOOL)hasTokenExpiration;
@end

