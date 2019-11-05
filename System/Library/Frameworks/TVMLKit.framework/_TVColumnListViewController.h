/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVMLKit/_TVCollectionViewDelegate.h>
#import <TVMLKit/_TVColumnListViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>

@class IKViewElement, _TVColumnListView, NSArray, NSString;

@interface _TVColumnListViewController : UIViewController <_TVCollectionViewDelegate, _TVColumnListViewDelegateFlowLayout, UICollectionViewDataSource> {

	IKViewElement* _columnListElement;
	_TVColumnListView* _collectionView;
	CGSize _cachedSize;
	NSArray* _cachedDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(void)_updateViewLayout;
-(CGSize)_collectionView:(id)arg1 layout:(id)arg2 sizeThatFits:(CGSize)arg3 ;
-(id)_dataSourceWithSections:(id)arg1 numColumns:(unsigned long long)arg2 lineSpace:(double)arg3 ;
-(void)_dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2 ;
@end

