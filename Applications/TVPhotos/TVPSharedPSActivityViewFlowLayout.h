/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotos/TVPhotos-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSDictionary, NSMutableDictionary;

@interface TVPSharedPSActivityViewFlowLayout : UICollectionViewLayout {

	double _totalContentXOffset;
	NSDictionary* _photoBatchFrames;
	NSMutableDictionary* _indexPathToAttributesForCell;

}

@property (assign,nonatomic) double totalContentXOffset;                                      //@synthesize totalContentXOffset=_totalContentXOffset - In the implementation block
@property (nonatomic,copy) NSDictionary * photoBatchFrames;                                   //@synthesize photoBatchFrames=_photoBatchFrames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * indexPathToAttributesForCell;              //@synthesize indexPathToAttributesForCell=_indexPathToAttributesForCell - In the implementation block
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)_contentSize;
-(void)prepareLayout;
-(id)_batchFramesForPhotoBatches:(id)arg1 ;
-(double)totalContentXOffset;
-(void)setTotalContentXOffset:(double)arg1 ;
-(NSDictionary *)photoBatchFrames;
-(void)setPhotoBatchFrames:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)indexPathToAttributesForCell;
-(void)setIndexPathToAttributesForCell:(NSMutableDictionary *)arg1 ;
@end
