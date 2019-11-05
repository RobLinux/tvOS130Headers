/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SRStarkTableViewControllerDelegate;
@class NSArray, UIFocusContainerGuide, NSString;

@interface SRStarkTableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _fullScreen;
	BOOL _showingMore;
	NSArray* _items;
	id<SRStarkTableViewControllerDelegate> _delegate;
	long long _initialNumberOfRowsToDisplay;
	UIFocusContainerGuide* _tableViewFocusContainerGuide;

}

@property (getter=_items,nonatomic,readonly) NSArray * items;                                                          //@synthesize items=_items - In the implementation block
@property (assign,setter=_setShowingMore:,getter=_isShowingMore,nonatomic) BOOL showingMore;                           //@synthesize showingMore=_showingMore - In the implementation block
@property (getter=_delegate,nonatomic,retain) id<SRStarkTableViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=_initialNumberOfRowsToDisplay,nonatomic) long long initialNumberOfRowsToDisplay;              //@synthesize initialNumberOfRowsToDisplay=_initialNumberOfRowsToDisplay - In the implementation block
@property (nonatomic,retain) UIFocusContainerGuide * tableViewFocusContainerGuide;                                     //@synthesize tableViewFocusContainerGuide=_tableViewFocusContainerGuide - In the implementation block
@property (assign,nonatomic) BOOL fullScreen;                                                                          //@synthesize fullScreen=_fullScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SRStarkTableViewControllerDelegate>)arg1 ;
-(id)_delegate;
-(id)_items;
-(BOOL)fullScreen;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredUserInterfaceStyle;
-(void)setFullScreen:(BOOL)arg1 ;
-(id)initWithInitialNumberOfItemsToDisplay:(long long)arg1 items:(id)arg2 delegate:(id)arg3 ;
-(UIFocusContainerGuide *)tableViewFocusContainerGuide;
-(BOOL)_isShowingMore;
-(BOOL)isShowMoreRow:(unsigned long long)arg1 ;
-(void)_setShowingMore:(BOOL)arg1 ;
-(void)redrawRowForItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)_initialNumberOfRowsToDisplay;
-(void)setInitialNumberOfRowsToDisplay:(long long)arg1 ;
-(void)setTableViewFocusContainerGuide:(UIFocusContainerGuide *)arg1 ;
@end

