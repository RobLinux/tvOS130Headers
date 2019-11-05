/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIScrollView.h>
#import <OpusFoundation/OFUIWindowDraggingDestination.h>
#import <OpusFoundation/OFUIWindowDraggingSource.h>
#import <OpusFoundation/OFUIWindowDraggingAutoscroll.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol OFUIGridViewDataSource, OFUIGridViewDelegate, OFUIWindowDraggingSourceOFUIGridViewDragging;
@class OFUIGridViewController, NSMutableArray, UIPinchGestureRecognizer, OFUIGridViewCell, NSString;

@interface OFUIGridView : OFUIScrollView <OFUIWindowDraggingDestination, OFUIWindowDraggingSource, OFUIWindowDraggingAutoscroll, UIGestureRecognizerDelegate> {

	OFUIGridViewController* _gridViewController;
	unsigned long long _orientation;
	CGSize _cellSize;
	CGSize _minCellSize;
	CGSize _maxCellSize;
	UIEdgeInsets _borderInset;
	unsigned long long _numberOfCellsPerRow;
	double _minimumCellSpacePadding;
	double _cellSpacePadding;
	id<OFUIGridViewDataSource> _dataSource;
	id<OFUIGridViewDelegate> _gridViewDelegate;
	unsigned long long _numberOfCells;
	unsigned long long _numberOfCachedPages;
	unsigned long long _visibleIndexBegin;
	unsigned long long _visibleIndexEnd;
	NSMutableArray* _displayedCells;
	NSMutableArray* _recycledCells;
	BOOL _dirtyLayout;
	BOOL _editing;
	id<OFUIWindowDraggingSource><OFUIGridViewDragging> _draggingSource;
	long long _draggingDestinationIndex;
	long long _draggingDestinationCount;
	BOOL _isDraggingIn;
	UIPinchGestureRecognizer* _liveResizingPinchGestureRecognizer;
	BOOL _allowLiveResizing;
	BOOL _isLiveResizing;
	CGSize _cellSizeBeforeLiveResizing;
	BOOL _allowAutoscroll;
	BOOL _allowFastPanning;
	CGPoint _fastPanningLastTranslation;
	BOOL _isFastPanning;
	BOOL _allowSelectAll;
	BOOL _allowContinuousSelection;
	double _percentageScrolledToRestore;
	BOOL _canUpdateCells;
	OFUIGridViewCell* _lastCellUpdatedForMerge;

}

@property (assign,nonatomic) BOOL isLiveResizing;                                                            //@synthesize isLiveResizing=_isLiveResizing - In the implementation block
@property (assign,nonatomic) long long draggingDestinationIndex;                                             //@synthesize draggingDestinationIndex=_draggingDestinationIndex - In the implementation block
@property (assign,nonatomic) BOOL isFastPanning;                                                             //@synthesize isFastPanning=_isFastPanning - In the implementation block
@property (assign,nonatomic) OFUIGridViewController * gridViewController;                                    //@synthesize gridViewController=_gridViewController - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfCells;                                             //@synthesize numberOfCells=_numberOfCells - In the implementation block
@property (assign,nonatomic) double percentageScrolledToRestore;                                             //@synthesize percentageScrolledToRestore=_percentageScrolledToRestore - In the implementation block
@property (assign,nonatomic) BOOL canUpdateCells;                                                            //@synthesize canUpdateCells=_canUpdateCells - In the implementation block
@property (assign,nonatomic) unsigned long long orientation;                                                 //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) CGSize cellSize;                                                                //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) CGSize minCellSize;                                                             //@synthesize minCellSize=_minCellSize - In the implementation block
@property (assign,nonatomic) CGSize maxCellSize;                                                             //@synthesize maxCellSize=_maxCellSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderInset;                                                       //@synthesize borderInset=_borderInset - In the implementation block
@property (assign,nonatomic) double minimumCellSpacePadding;                                                 //@synthesize minimumCellSpacePadding=_minimumCellSpacePadding - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCachedPages;                                         //@synthesize numberOfCachedPages=_numberOfCachedPages - In the implementation block
@property (assign,nonatomic) id<OFUIGridViewDataSource> dataSource;                                          //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) id<OFUIGridViewDelegate> gridViewDelegate;                                      //@synthesize gridViewDelegate=_gridViewDelegate - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                  //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) id<OFUIWindowDraggingSource><OFUIGridViewDragging> draggingSource;              //@synthesize draggingSource=_draggingSource - In the implementation block
@property (assign,nonatomic) long long draggingDestinationCount;                                             //@synthesize draggingDestinationCount=_draggingDestinationCount - In the implementation block
@property (nonatomic,readonly) BOOL isDraggingIn;                                                            //@synthesize isDraggingIn=_isDraggingIn - In the implementation block
@property (assign,nonatomic) BOOL allowLiveResizing;                                                         //@synthesize allowLiveResizing=_allowLiveResizing - In the implementation block
@property (assign,nonatomic) BOOL allowAutoscroll;                                                           //@synthesize allowAutoscroll=_allowAutoscroll - In the implementation block
@property (assign,nonatomic) BOOL allowFastPanning;                                                          //@synthesize allowFastPanning=_allowFastPanning - In the implementation block
@property (assign,nonatomic) BOOL allowSelectAll;                                                            //@synthesize allowSelectAll=_allowSelectAll - In the implementation block
@property (assign,nonatomic) BOOL allowContinuousSelection;                                                  //@synthesize allowContinuousSelection=_allowContinuousSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)orientation;
-(void)setFrame:(CGRect)arg1 ;
-(void)setOrientation:(unsigned long long)arg1 ;
-(BOOL)isEditing;
-(void)setBounds:(CGRect)arg1 ;
-(id<OFUIGridViewDataSource>)dataSource;
-(void)setDataSource:(id<OFUIGridViewDataSource>)arg1 ;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 ;
-(void)commonInit;
-(CGSize)cellSize;
-(void)setEditing:(BOOL)arg1 ;
-(id)visibleCells;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)forceLayout;
-(void)handlePan:(id)arg1 ;
-(void)_updateContentSize;
-(void)setCellSize:(CGSize)arg1 ;
-(void)_layoutSubviews;
-(CGPoint)draggingSource:(id)arg1 badgeCenterForItem:(id)arg2 ;
-(CGRect)draggingSource:(id)arg1 originalFrameForItem:(id)arg2 ;
-(void)draggingSource:(id)arg1 prepareItem:(id)arg2 ;
-(void)draggingSource:(id)arg1 cleanupItem:(id)arg2 ;
-(CGRect)draggingDestination:(id)arg1 originalFrameForItem:(id)arg2 ;
-(unsigned long long)draggingDestinationEntered:(id)arg1 ;
-(unsigned long long)draggingDestinationUpdated:(id)arg1 ;
-(void)draggingDestinationExited:(id)arg1 ;
-(BOOL)prepareForDragOperation:(id)arg1 ;
-(BOOL)performDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)draggingDestinationEnded:(id)arg1 cancelled:(BOOL)arg2 ;
-(float)autoscrollDistance:(CGRect)arg1 ;
-(void)autoscroll:(float)arg1 ;
-(BOOL)canAutoscroll;
-(void)setGridViewController:(OFUIGridViewController *)arg1 ;
-(void)setGridViewDelegate:(id<OFUIGridViewDelegate>)arg1 ;
-(void)setDraggingSource:(id<OFUIWindowDraggingSource><OFUIGridViewDragging>)arg1 ;
-(void)prepareForUnloading;
-(void)updateLayout:(BOOL)arg1 ;
-(void)setCanUpdateCells:(BOOL)arg1 ;
-(void)setPercentageScrolledToRestore:(double)arg1 ;
-(id)displayedCells;
-(BOOL)isCellVisible:(id)arg1 ;
-(void)handleLiveResizingPinchGesture:(id)arg1 ;
-(void)cleanupDisplayedCells;
-(void)_updateCells;
-(CGPoint)_cellPositionAtIndex:(long long)arg1 ;
-(CGSize)_cellSizeAtIndex:(long long)arg1 ;
-(CGSize)_bestContentSize;
-(double)percentageScrolledToRestore;
-(long long)_indexAtPosition:(CGPoint)arg1 ;
-(NSRange)_displayedCellsRange;
-(id)indexesForDisplayedCells;
-(id<OFUIWindowDraggingSource><OFUIGridViewDragging>)draggingSource;
-(BOOL)isFrameVisible:(CGRect)arg1 ;
-(id)cellAtIndex:(unsigned long long)arg1 ;
-(void)setDraggingDestinationIndex:(long long)arg1 ;
-(void)setIsLiveResizing:(BOOL)arg1 ;
-(void)setIsFastPanning:(BOOL)arg1 ;
-(id)displayedCellWithItem:(id)arg1 ;
-(void)deleteCellsAtIndexes:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDraggingDestinationCount:(long long)arg1 ;
-(unsigned long long)numberOfCells;
-(long long)draggingDestinationCount;
-(long long)draggingDestinationIndex;
-(BOOL)isFrameEntirelyVisible:(CGRect)arg1 ;
-(void)insertCellsAtIndexes:(id)arg1 animated:(BOOL)arg2 ;
-(float)_autoscrollDistanceForProximityToEdge:(float)arg1 ;
-(void)setMinCellSize:(CGSize)arg1 ;
-(void)setMaxCellSize:(CGSize)arg1 ;
-(void)setBorderInset:(UIEdgeInsets)arg1 ;
-(void)setMinimumCellSpacePadding:(double)arg1 ;
-(void)setNumberOfCachedPages:(unsigned long long)arg1 ;
-(void)setAllowLiveResizing:(BOOL)arg1 ;
-(void)setAllowContinuousSelection:(BOOL)arg1 ;
-(void)setAllowFastPanning:(BOOL)arg1 ;
-(id)indexesForVisibleCells;
-(void)moveCellsAtIndexes:(id)arg1 toIndexes:(id)arg2 animated:(BOOL)arg3 ;
-(OFUIGridViewController *)gridViewController;
-(CGSize)minCellSize;
-(CGSize)maxCellSize;
-(UIEdgeInsets)borderInset;
-(double)minimumCellSpacePadding;
-(unsigned long long)numberOfCachedPages;
-(id<OFUIGridViewDelegate>)gridViewDelegate;
-(BOOL)isDraggingIn;
-(BOOL)allowLiveResizing;
-(BOOL)isLiveResizing;
-(BOOL)allowAutoscroll;
-(void)setAllowAutoscroll:(BOOL)arg1 ;
-(BOOL)allowFastPanning;
-(BOOL)isFastPanning;
-(BOOL)allowSelectAll;
-(void)setAllowSelectAll:(BOOL)arg1 ;
-(BOOL)allowContinuousSelection;
-(BOOL)canUpdateCells;
@end

