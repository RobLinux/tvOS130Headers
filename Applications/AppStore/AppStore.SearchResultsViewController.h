/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:52:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore.StoreCollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>

@interface AppStore.SearchResultsViewController : AppStore.StoreCollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching> {

	 delegate;
	 presenter;
	 objectGraph;
	 appStateController;
	 artworkLoader;
	 storeDataProvider;
	 artworkIconFetcher;
	 searchResultsCollectionViewDataSource;
	 videoViewManager;
	 noResultsView;
	 isLoading;
	 isAutoPlayEnabled;
	 allowsResultFiltering;

}
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
@end

