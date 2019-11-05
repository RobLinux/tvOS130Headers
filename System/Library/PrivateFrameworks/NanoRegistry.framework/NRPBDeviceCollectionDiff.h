/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoRegistry/NSCopying.h>

@class NSMutableArray;

@interface NRPBDeviceCollectionDiff : PBCodable <NSCopying> {

	NSMutableArray* _diffs;
	NSMutableArray* _pairingIDs;

}

@property (nonatomic,retain) NSMutableArray * pairingIDs;              //@synthesize pairingIDs=_pairingIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * diffs;                   //@synthesize diffs=_diffs - In the implementation block
+(Class)pairingIDsType;
+(Class)diffsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addPairingIDs:(id)arg1 ;
-(unsigned long long)pairingIDsCount;
-(void)clearPairingIDs;
-(id)pairingIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)pairingIDs;
-(void)setPairingIDs:(NSMutableArray *)arg1 ;
-(void)addDiffs:(id)arg1 ;
-(unsigned long long)diffsCount;
-(void)clearDiffs;
-(id)diffsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)diffs;
-(void)setDiffs:(NSMutableArray *)arg1 ;
@end
