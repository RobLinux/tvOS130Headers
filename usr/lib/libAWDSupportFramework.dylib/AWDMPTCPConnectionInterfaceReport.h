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

@interface AWDMPTCPConnectionInterfaceReport : PBCodable <NSCopying> {

	SCD_Struct_AW15* _postConnectSubflowFailureErrors;
	long long _dataInKB;
	long long _dataOutKB;
	unsigned long long _timestamp;
	NSString* _interfaceName;
	int _secondaryFlowFailureCount;
	int _secondaryFlowSuccessCount;
	BOOL _postConnectTcpFallbackCount;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasInterfaceName; 
@property (nonatomic,retain) NSString * interfaceName;                                               //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,readonly) unsigned long long postConnectSubflowFailureErrorsCount; 
@property (nonatomic,readonly) int* postConnectSubflowFailureErrors; 
@property (assign,nonatomic) BOOL hasDataInKB; 
@property (assign,nonatomic) long long dataInKB;                                                     //@synthesize dataInKB=_dataInKB - In the implementation block
@property (assign,nonatomic) BOOL hasDataOutKB; 
@property (assign,nonatomic) long long dataOutKB;                                                    //@synthesize dataOutKB=_dataOutKB - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryFlowSuccessCount; 
@property (assign,nonatomic) int secondaryFlowSuccessCount;                                          //@synthesize secondaryFlowSuccessCount=_secondaryFlowSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryFlowFailureCount; 
@property (assign,nonatomic) int secondaryFlowFailureCount;                                          //@synthesize secondaryFlowFailureCount=_secondaryFlowFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hasPostConnectTcpFallbackCount; 
@property (assign,nonatomic) BOOL postConnectTcpFallbackCount;                                       //@synthesize postConnectTcpFallbackCount=_postConnectTcpFallbackCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)postConnectSubflowFailureErrorsCount;
-(void)clearPostConnectSubflowFailureErrors;
-(int)postConnectSubflowFailureErrorsAtIndex:(unsigned long long)arg1 ;
-(void)addPostConnectSubflowFailureErrors:(int)arg1 ;
-(BOOL)hasInterfaceName;
-(int*)postConnectSubflowFailureErrors;
-(void)setPostConnectSubflowFailureErrors:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setDataInKB:(long long)arg1 ;
-(void)setHasDataInKB:(BOOL)arg1 ;
-(BOOL)hasDataInKB;
-(void)setDataOutKB:(long long)arg1 ;
-(void)setHasDataOutKB:(BOOL)arg1 ;
-(BOOL)hasDataOutKB;
-(void)setSecondaryFlowSuccessCount:(int)arg1 ;
-(void)setHasSecondaryFlowSuccessCount:(BOOL)arg1 ;
-(BOOL)hasSecondaryFlowSuccessCount;
-(void)setSecondaryFlowFailureCount:(int)arg1 ;
-(void)setHasSecondaryFlowFailureCount:(BOOL)arg1 ;
-(BOOL)hasSecondaryFlowFailureCount;
-(void)setPostConnectTcpFallbackCount:(BOOL)arg1 ;
-(void)setHasPostConnectTcpFallbackCount:(BOOL)arg1 ;
-(BOOL)hasPostConnectTcpFallbackCount;
-(long long)dataInKB;
-(long long)dataOutKB;
-(int)secondaryFlowSuccessCount;
-(int)secondaryFlowFailureCount;
-(BOOL)postConnectTcpFallbackCount;
@end

