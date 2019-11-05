/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewController.h>
#import <Preferences/PSKeyboardNavigationSearchResultsController.h>

@protocol SUIKSearchResultsCollectionViewControllerDelegate;
@class NSObject, NSArray, UICollectionViewDiffableDataSource, _SUIKSearchResultsUpdateOperation;

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController <PSKeyboardNavigationSearchResultsController> {

	NSObject*<SUIKSearchResultsCollectionViewControllerDelegate> _delegate;
	NSArray* _results;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	_SUIKSearchResultsUpdateOperation* _updateOperation;

}

@property (nonatomic,retain) NSArray * results;                                                                         //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;                                   //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,retain) _SUIKSearchResultsUpdateOperation * updateOperation;                                       //@synthesize updateOperation=_updateOperation - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SUIKSearchResultsCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(NSObject*<SUIKSearchResultsCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<SUIKSearchResultsCollectionViewControllerDelegate>)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(double)iconWidth;
-(void)showSelectedSearchResult;
-(void)searchQueryStarted;
-(void)searchQueryFoundItems:(id)arg1 ;
-(void)searchQueryCompleted;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(_SUIKSearchResultsUpdateOperation *)updateOperation;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)setUpdateOperation:(_SUIKSearchResultsUpdateOperation *)arg1 ;
-(void)_selectAndScrollToIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end

