/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <PhotosUICore/PXChangeObserver.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver.h>
#import <PhotosUICore/PXUserInterfaceFeatureViewController.h>
#import <PhotosUICore/PXMemoriesFeedViewControllerHelperDelegate.h>

@protocol PXMemoriesFeedWidgetViewControllerDelegate;
@class NSMutableSet, PXMemoriesFeedViewControllerHelper, PXMemoriesUITileSource, PXBasicUIViewTileAnimator, PXUIScrollViewController, PHCachingImageManager, PXUITapGestureRecognizer, PHImageRequestOptions, PXMemoriesFeedWidgetLayoutMetrics, NSString;

@interface PXMemoriesFeedWidgetViewController : UIViewController <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXUserInterfaceFeatureViewController, PXMemoriesFeedViewControllerHelperDelegate> {

	NSMutableSet* _checkedOutTiles;
	/*^block*/id _refreshMemoriesCompletionHandler;
	long long _waitForDataSourceChangeRequestDismissalID;
	BOOL _hasAppeared;
	BOOL _hasAnyMemories;
	id<PXMemoriesFeedWidgetViewControllerDelegate> _delegate;
	unsigned long long _availableNumberOfRows;
	PXMemoriesFeedViewControllerHelper* __helper;
	PXMemoriesUITileSource* __tileSource;
	PXBasicUIViewTileAnimator* __tileAnimator;
	PXUIScrollViewController* __scrollViewController;
	PHCachingImageManager* __imageManager;
	PXUITapGestureRecognizer* __tapRecognizer;
	PHImageRequestOptions* __assetImageRequestOptions;
	long long __requestDismissalID;
	PXMemoriesFeedWidgetLayoutMetrics* __metrics;

}

@property (nonatomic,readonly) PXMemoriesFeedViewControllerHelper * _helper;                                          //@synthesize _helper=__helper - In the implementation block
@property (nonatomic,readonly) PXMemoriesUITileSource * _tileSource;                                                  //@synthesize _tileSource=__tileSource - In the implementation block
@property (nonatomic,readonly) PXBasicUIViewTileAnimator * _tileAnimator;                                             //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (nonatomic,readonly) PXUIScrollViewController * _scrollViewController;                                      //@synthesize _scrollViewController=__scrollViewController - In the implementation block
@property (nonatomic,readonly) PHCachingImageManager * _imageManager;                                                 //@synthesize _imageManager=__imageManager - In the implementation block
@property (nonatomic,readonly) PXUITapGestureRecognizer * _tapRecognizer;                                             //@synthesize _tapRecognizer=__tapRecognizer - In the implementation block
@property (nonatomic,readonly) PHImageRequestOptions * _assetImageRequestOptions;                                     //@synthesize _assetImageRequestOptions=__assetImageRequestOptions - In the implementation block
@property (assign,setter=_setRequestDismissalID:,nonatomic) long long _requestDismissalID;                            //@synthesize _requestDismissalID=__requestDismissalID - In the implementation block
@property (assign,nonatomic) BOOL hasAnyMemories;                                                                     //@synthesize hasAnyMemories=_hasAnyMemories - In the implementation block
@property (assign,setter=_setAvailableNumberOfRows:,nonatomic) unsigned long long availableNumberOfRows;              //@synthesize availableNumberOfRows=_availableNumberOfRows - In the implementation block
@property (setter=_setMetrics:,nonatomic,copy) PXMemoriesFeedWidgetLayoutMetrics * _metrics;                          //@synthesize _metrics=__metrics - In the implementation block
@property (assign,nonatomic,__weak) id<PXMemoriesFeedWidgetViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long userInterfaceFeature; 
-(id<PXMemoriesFeedWidgetViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PXMemoriesFeedWidgetViewControllerDelegate>)arg1 ;
-(PXMemoriesFeedWidgetLayoutMetrics *)_metrics;
-(PXMemoriesFeedViewControllerHelper *)_helper;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(PHCachingImageManager *)_imageManager;
-(void)_updatePreferredContentSize;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)_dataSourceManager;
-(PXBasicUIViewTileAnimator *)_tileAnimator;
-(long long)userInterfaceFeature;
-(PXUIScrollViewController *)_scrollViewController;
-(BOOL)hasAnyMemories;
-(void)_handleScrollViewTap:(id)arg1 ;
-(id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1 ;
-(PXMemoriesUITileSource *)_tileSource;
-(PXUITapGestureRecognizer *)_tapRecognizer;
-(void)_handleSpecChange;
-(BOOL)memoriesFeedViewControllerHelperFeedIsVisible:(id)arg1 ;
-(id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)arg1 ;
-(void)memoriesFeedViewControllerHelper:(id)arg1 configureMetrics:(id)arg2 ;
-(void)invalidateReferenceSize;
-(void)invalidateNumberOfRowsVisible;
-(void)refreshMemoriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)_incrementRequestDismissalID;
-(void)_callRefreshMemoriesCompletionHandlerWithResult:(unsigned long long)arg1 ;
-(void)_handleNewMemoriesRequestTimeoutWithRequestDismissalID:(long long)arg1 ;
-(void)_handleNewMemoriesRequestFinishedWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_setMetrics:(id)arg1 ;
-(void)_setAvailableNumberOfRows:(unsigned long long)arg1 ;
-(void)_updateAvailableNumberOfRows;
-(void)_handleDataSourceChange;
-(unsigned long long)availableNumberOfRows;
-(PHImageRequestOptions *)_assetImageRequestOptions;
-(long long)_requestDismissalID;
-(void)_setRequestDismissalID:(long long)arg1 ;
-(void)setHasAnyMemories:(BOOL)arg1 ;
@end

