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

@class NSString;

@interface CKCDPCodeServiceRequestOperationGroup : PBCodable <NSCopying> {

	long long _operationGroupQuantity;
	NSString* _operationGroupId;
	NSString* _operationGroupName;
	NSString* _operationId;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasOperationId; 
@property (nonatomic,retain) NSString * operationId;                        //@synthesize operationId=_operationId - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationGroupId; 
@property (nonatomic,retain) NSString * operationGroupId;                   //@synthesize operationGroupId=_operationGroupId - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationGroupName; 
@property (nonatomic,retain) NSString * operationGroupName;                 //@synthesize operationGroupName=_operationGroupName - In the implementation block
@property (assign,nonatomic) BOOL hasOperationGroupQuantity; 
@property (assign,nonatomic) long long operationGroupQuantity;              //@synthesize operationGroupQuantity=_operationGroupQuantity - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)operationGroupName;
-(NSString *)operationId;
-(void)setOperationId:(NSString *)arg1 ;
-(void)setOperationGroupName:(NSString *)arg1 ;
-(long long)operationGroupQuantity;
-(void)setOperationGroupQuantity:(long long)arg1 ;
-(void)setOperationGroupId:(NSString *)arg1 ;
-(BOOL)hasOperationGroupName;
-(void)setHasOperationGroupQuantity:(BOOL)arg1 ;
-(BOOL)hasOperationGroupQuantity;
-(BOOL)hasOperationId;
-(BOOL)hasOperationGroupId;
-(NSString *)operationGroupId;
@end

