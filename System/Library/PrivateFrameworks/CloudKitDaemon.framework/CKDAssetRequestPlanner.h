/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetRequestPlanner : NSObject {

	unsigned _assetTokenRequestSizeLimit;
	NSArray* _assetRegisterAndPutBatches;
	NSArray* _assetGetChunkKeysBatches;
	NSArray* _assetTokenRequests;
	NSMutableDictionary* _rerefAssetBatchesByZoneID;
	NSMutableDictionary* _assetBatchesByZoneID;
	unsigned long long _mmcsEncryptionSupport;
	NSMutableOrderedSet* _items;
	NSMutableDictionary* _assetZoneByKey;

}

@property (nonatomic,retain) NSArray * assetRegisterAndPutBatches;                         //@synthesize assetRegisterAndPutBatches=_assetRegisterAndPutBatches - In the implementation block
@property (nonatomic,retain) NSArray * assetGetChunkKeysBatches;                           //@synthesize assetGetChunkKeysBatches=_assetGetChunkKeysBatches - In the implementation block
@property (nonatomic,retain) NSArray * assetTokenRequests;                                 //@synthesize assetTokenRequests=_assetTokenRequests - In the implementation block
@property (assign,nonatomic) unsigned long long mmcsEncryptionSupport;                     //@synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * items;                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetZoneByKey;                         //@synthesize assetZoneByKey=_assetZoneByKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetBatchesByZoneID;                   //@synthesize assetBatchesByZoneID=_assetBatchesByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * rerefAssetBatchesByZoneID;              //@synthesize rerefAssetBatchesByZoneID=_rerefAssetBatchesByZoneID - In the implementation block
@property (nonatomic,readonly) unsigned assetTokenRequestSizeLimit;                        //@synthesize assetTokenRequestSizeLimit=_assetTokenRequestSizeLimit - In the implementation block
-(id)description;
-(NSMutableOrderedSet *)items;
-(void)setItems:(NSMutableOrderedSet *)arg1 ;
-(id)CKPropertiesDescription;
-(unsigned long long)mmcsEncryptionSupport;
-(void)setMmcsEncryptionSupport:(unsigned long long)arg1 ;
-(void)addMMCSItem:(id)arg1 ;
-(void)addRereferencedMMCSItem:(id)arg1 ;
-(void)addMMCSSectionItem:(id)arg1 ;
-(BOOL)hasSuccessfulBatches;
-(NSArray *)assetRegisterAndPutBatches;
-(NSArray *)assetGetChunkKeysBatches;
-(NSArray *)assetTokenRequests;
-(id)initWithMMCSEncryptionSupport:(unsigned long long)arg1 ;
-(void)resetAssetTokenRequests;
-(void)planRegisterBatches;
-(void)planGetChunkKeysBatches;
-(void)planAssetRequests;
-(void)failBatch:(id)arg1 ;
-(BOOL)hasSuccessfulAssetTokenRequests;
-(void)setAssetRegisterAndPutBatches:(NSArray *)arg1 ;
-(void)setAssetGetChunkKeysBatches:(NSArray *)arg1 ;
-(unsigned)assetTokenRequestSizeLimit;
-(void)setAssetTokenRequests:(NSArray *)arg1 ;
-(NSMutableDictionary *)rerefAssetBatchesByZoneID;
-(void)setRerefAssetBatchesByZoneID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)assetBatchesByZoneID;
-(void)setAssetBatchesByZoneID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)assetZoneByKey;
-(void)setAssetZoneByKey:(NSMutableDictionary *)arg1 ;
@end

