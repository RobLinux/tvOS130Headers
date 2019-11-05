/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface CKDPResponseOperationHeaderAssetAuthorizationResponse : PBCodable <NSCopying> {

	NSData* _authGetResponseBody;
	NSMutableArray* _responseHeaders;
	NSString* _responseUUID;

}

@property (nonatomic,readonly) BOOL hasResponseUUID; 
@property (nonatomic,retain) NSString * responseUUID;                       //@synthesize responseUUID=_responseUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthGetResponseBody; 
@property (nonatomic,retain) NSData * authGetResponseBody;                  //@synthesize authGetResponseBody=_authGetResponseBody - In the implementation block
@property (nonatomic,retain) NSMutableArray * responseHeaders;              //@synthesize responseHeaders=_responseHeaders - In the implementation block
+(Class)responseHeadersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSMutableArray *)responseHeaders;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)responseUUID;
-(void)setResponseUUID:(NSString *)arg1 ;
-(void)setResponseHeaders:(NSMutableArray *)arg1 ;
-(void)addResponseHeaders:(id)arg1 ;
-(void)setAuthGetResponseBody:(NSData *)arg1 ;
-(unsigned long long)responseHeadersCount;
-(void)clearResponseHeaders;
-(id)responseHeadersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasResponseUUID;
-(BOOL)hasAuthGetResponseBody;
-(NSData *)authGetResponseBody;
@end

