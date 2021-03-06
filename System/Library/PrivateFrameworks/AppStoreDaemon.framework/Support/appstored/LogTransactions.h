/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <appstored/NSCopying.h>

@class NSMutableArray;

@interface LogTransactions : PBCodable <NSCopying> {

	NSMutableArray* _transactionIDs;

}

@property (nonatomic,retain) NSMutableArray * transactionIDs;              //@synthesize transactionIDs=_transactionIDs - In the implementation block
+(Class)transactionIDType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)formattedText;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)transactionIDs;
-(void)setTransactionIDs:(NSMutableArray *)arg1 ;
-(void)clearTransactionIDs;
-(unsigned long long)transactionIDsCount;
-(id)transactionIDAtIndex:(unsigned long long)arg1 ;
-(void)addTransactionID:(id)arg1 ;
@end

