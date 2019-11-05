/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SRPagerViewDataSource, SRPagerViewDelegate;
@class SRPagingScrollView, UIView, NSString;

@interface SRPagerView : UIView <UIScrollViewDelegate> {

	SRPagingScrollView* _scrollView;
	BOOL _scrollViewIsDragging;
	BOOL _scrollViewIsScrollingBetweenPages;
	UIView* _activePageView;
	unsigned long long _transitionState;
	id<SRPagerViewDataSource> _dataSource;
	id<SRPagerViewDelegate> _delegate;

}

@property (assign,setter=_setScrollViewIsDragging:,getter=_scrollViewIsDragging,nonatomic) BOOL scrollViewIsDragging;                                                     //@synthesize scrollViewIsDragging=_scrollViewIsDragging - In the implementation block
@property (assign,setter=_setScrollViewIsScrollingBetweenPages:,getter=_scrollViewIsScrollingBetweenPages,nonatomic) BOOL scrollViewIsScrollingBetweenPages;              //@synthesize scrollViewIsScrollingBetweenPages=_scrollViewIsScrollingBetweenPages - In the implementation block
@property (nonatomic,retain) UIView * activePageView;                                                                                                                     //@synthesize activePageView=_activePageView - In the implementation block
@property (assign,getter=isPagingEnabled,nonatomic) BOOL pagingEnabled; 
@property (nonatomic,readonly) unsigned long long transitionState;                                                                                                        //@synthesize transitionState=_transitionState - In the implementation block
@property (assign,nonatomic,__weak) id<SRPagerViewDataSource> dataSource;                                                                                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SRPagerViewDelegate> delegate;                                                                                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SRPagerViewDelegate>)delegate;
-(void)setDelegate:(id<SRPagerViewDelegate>)arg1 ;
-(id<SRPagerViewDataSource>)dataSource;
-(void)setDataSource:(id<SRPagerViewDataSource>)arg1 ;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setPagingEnabled:(BOOL)arg1 ;
-(BOOL)isPagingEnabled;
-(unsigned long long)transitionState;
-(id)_pageViews;
-(id)initWithFrame:(CGRect)arg1 textInputEnabled:(BOOL)arg2 ;
-(void)insertPageView:(id)arg1 atIndex:(long long)arg2 ;
-(void)removePageView:(id)arg1 ;
-(void)setActivePageView:(id)arg1 animated:(BOOL)arg2 ;
-(UIView *)activePageView;
-(void)addPageView:(id)arg1 ;
-(void)setActivePageView:(UIView *)arg1 ;
-(void)_updateTransitionState;
-(BOOL)_multiplePageViewsAreVisible;
-(void)_setScrollViewIsScrollingBetweenPages:(BOOL)arg1 ;
-(void)_setScrollViewIsDragging:(BOOL)arg1 ;
-(void)_scrollingDidEnd;
-(id)_activePageViewBasedOnScrollViewPosition;
-(BOOL)_containsPageView:(id)arg1 ;
-(BOOL)_scrollViewIsDragging;
-(BOOL)_scrollViewIsScrollingBetweenPages;
@end

