/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PBAppInfoControllerDelegate.h>
#import <PineBoard/PBOpenAppTransitionerObserver.h>

@protocol PBAppSwitcherDataSourceDelegate;
@class NSArray, PBAppSwitcherItem, NSMutableArray, PBAppInfoController, NSString;

@interface PBAppSwitcherDataSource : NSObject <PBAppInfoControllerDelegate, PBOpenAppTransitionerObserver> {

	id<PBAppSwitcherDataSourceDelegate> _delegate;
	NSArray* _items;
	PBAppSwitcherItem* _kioskItem;
	PBAppSwitcherItem* _focusedProcessItem;
	NSArray* _pendingUpdates;
	NSMutableArray* _itemsIncludingUpdates;
	PBAppInfoController* _appInfoController;

}

@property (nonatomic,copy,readonly) NSMutableArray * itemsIncludingUpdates;                    //@synthesize itemsIncludingUpdates=_itemsIncludingUpdates - In the implementation block
@property (nonatomic,readonly) PBAppInfoController * appInfoController;                        //@synthesize appInfoController=_appInfoController - In the implementation block
@property (assign,nonatomic,__weak) id<PBAppSwitcherDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                                           //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) PBAppSwitcherItem * kioskItem;                                  //@synthesize kioskItem=_kioskItem - In the implementation block
@property (nonatomic,readonly) PBAppSwitcherItem * focusedProcessItem;                         //@synthesize focusedProcessItem=_focusedProcessItem - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingUpdates;                                  //@synthesize pendingUpdates=_pendingUpdates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<PBAppSwitcherDataSourceDelegate>)delegate;
-(void)setDelegate:(id<PBAppSwitcherDataSourceDelegate>)arg1 ;
-(NSArray *)items;
-(id)indexPathForItem:(id)arg1 ;
-(void)appInfoController:(id)arg1 didUpdate:(id)arg2 ;
-(NSArray *)pendingUpdates;
-(PBAppInfoController *)appInfoController;
-(void)appTransitioner:(id)arg1 didCompleteAppTransition:(id)arg2 ;
-(PBAppSwitcherItem *)focusedProcessItem;
-(id)initWithFocusedProcessBundleID:(id)arg1 ;
-(PBAppSwitcherItem *)kioskItem;
-(void)handleActivationRequestForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleLaunchRequestForItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_populateItems:(id)arg1 ;
-(void)_recalculateUpdates;
-(void)_updateWithRemovedItems:(id)arg1 ;
-(BOOL)canSwitchToItem:(id)arg1 ;
-(BOOL)canKillItem:(id)arg1 ;
-(void)handleKillRequestForItem:(id)arg1 ;
-(void)applyPendingUpdates;
-(NSMutableArray *)itemsIncludingUpdates;
@end

