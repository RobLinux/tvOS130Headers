/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>

@protocol PXPeopleStripCollectionViewControllerDelegate;
@class PXPeopleDataSource, PXPeopleStripCollectionViewCell, NSString;

@interface PXPeopleStripCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching> {

	id<PXPeopleStripCollectionViewControllerDelegate> _delegate;
	PXPeopleDataSource* _dataSource;
	PXPeopleStripCollectionViewCell* _preloadedCell;

}

@property (assign,nonatomic,__weak) id<PXPeopleStripCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) PXPeopleDataSource * dataSource;                                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXPeopleStripCollectionViewCell * preloadedCell;                                //@synthesize preloadedCell=_preloadedCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXPeopleStripCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PXPeopleStripCollectionViewControllerDelegate>)arg1 ;
-(PXPeopleDataSource *)dataSource;
-(void)setDataSource:(PXPeopleDataSource *)arg1 ;
-(void)viewDidLoad;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 ;
-(void)contentWidthChanged;
-(PXPeopleStripCollectionViewCell *)preloadedCell;
-(void)setPreloadedCell:(PXPeopleStripCollectionViewCell *)arg1 ;
@end

