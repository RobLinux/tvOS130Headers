/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <SafariCore/NSCopying.h>

@class NSString;

@interface WBSAnalyticsSafariAutoFillAuthenticationEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _category;
	int _client;
	NSString* _errorCode;
	NSString* _errorDomain;
	int _status;
	BOOL _onPageLoad;
	SCD_Struct_WB5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCategory; 
@property (assign,nonatomic) int category;                              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasClient; 
@property (assign,nonatomic) int client;                                //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) BOOL hasOnPageLoad; 
@property (assign,nonatomic) BOOL onPageLoad;                           //@synthesize onPageLoad=_onPageLoad - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)client;
-(int)category;
-(void)setCategory:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(unsigned long long)timestamp;
-(void)setClient:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)errorCode;
-(NSString *)errorDomain;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setErrorCode:(NSString *)arg1 ;
-(BOOL)hasErrorCode;
-(BOOL)hasClient;
-(void)setHasCategory:(BOOL)arg1 ;
-(BOOL)hasCategory;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasClient:(BOOL)arg1 ;
-(id)clientAsString:(int)arg1 ;
-(int)StringAsClient:(id)arg1 ;
-(void)setOnPageLoad:(BOOL)arg1 ;
-(void)setHasOnPageLoad:(BOOL)arg1 ;
-(BOOL)hasOnPageLoad;
-(BOOL)onPageLoad;
@end

