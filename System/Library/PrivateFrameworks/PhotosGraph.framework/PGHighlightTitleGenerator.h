/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGEventEnrichment;
@class PHAssetCollection, PHAsset, PGTitleTuple;

@interface PGHighlightTitleGenerator : NSObject {

	BOOL _createVerboseTitle;
	id<PGEventEnrichment> _collection;
	PHAssetCollection* _curatedAssetCollection;
	PHAsset* _keyAsset;
	PGTitleTuple* _titleTuple;

}

@property (nonatomic,retain) id<PGEventEnrichment> collection;                        //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) PHAssetCollection * curatedAssetCollection;              //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (assign,nonatomic) BOOL createVerboseTitle;                                 //@synthesize createVerboseTitle=_createVerboseTitle - In the implementation block
@property (nonatomic,retain) PGTitleTuple * titleTuple;                               //@synthesize titleTuple=_titleTuple - In the implementation block
+(BOOL)collectionContainsAppleEvent:(id)arg1 ;
+(id)commonMeaningLabelForTitleUsingMomentNodes:(id)arg1 ;
+(id)meaningLabelsSortedByPriority;
-(id<PGEventEnrichment>)collection;
-(void)setCollection:(id<PGEventEnrichment>)arg1 ;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(PHAsset *)keyAsset;
-(PHAssetCollection *)curatedAssetCollection;
-(id)initWithCollection:(id)arg1 curatedAssetCollection:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(BOOL)arg4 ;
-(PGTitleTuple *)titleTuple;
-(void)_generateTitleTuples;
-(void)setCuratedAssetCollection:(PHAssetCollection *)arg1 ;
-(void)setTitleTuple:(PGTitleTuple *)arg1 ;
-(BOOL)createVerboseTitle;
-(void)setCreateVerboseTitle:(BOOL)arg1 ;
@end

