/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKDAssetBatch, NSMutableDictionary;

@interface CKDTransactionState : NSObject {

	CKDAssetBatch* _assetBatch;
	NSMutableDictionary* _itemByAssetId;

}

@property (nonatomic,retain) CKDAssetBatch * assetBatch;                       //@synthesize assetBatch=_assetBatch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemByAssetId;              //@synthesize itemByAssetId=_itemByAssetId - In the implementation block
-(id)init;
-(CKDAssetBatch *)assetBatch;
-(void)setAssetBatch:(CKDAssetBatch *)arg1 ;
-(NSMutableDictionary *)itemByAssetId;
-(void)setItemByAssetId:(NSMutableDictionary *)arg1 ;
@end
