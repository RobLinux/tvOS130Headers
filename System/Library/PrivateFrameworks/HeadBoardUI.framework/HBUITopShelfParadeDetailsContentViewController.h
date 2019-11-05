/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <HeadBoardUI/HBUITopShelfParadeItemObserver.h>
#import <HeadBoardUI/HBUITopShelfParadeContentViewController.h>

@protocol HBUITopShelfParadeItem, HBUITopShelfParadeContentViewControllerDelegate, HBUITopShelfParadeAction;
@class NSString;

@interface HBUITopShelfParadeDetailsContentViewController : UIViewController <HBUITopShelfParadeItemObserver, HBUITopShelfParadeContentViewController> {

	id<HBUITopShelfParadeItem> _paradeItem;
	id<HBUITopShelfParadeContentViewControllerDelegate> _delegate;
	id<HBUITopShelfParadeAction> _primaryAction;
	id<HBUITopShelfParadeAction> _secondaryAction;

}

@property (nonatomic,retain) id<HBUITopShelfParadeAction> primaryAction;                                       //@synthesize primaryAction=_primaryAction - In the implementation block
@property (nonatomic,retain) id<HBUITopShelfParadeAction> secondaryAction;                                     //@synthesize secondaryAction=_secondaryAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<HBUITopShelfParadeItem> paradeItem;                                            //@synthesize paradeItem=_paradeItem - In the implementation block
@property (assign,nonatomic,__weak) id<HBUITopShelfParadeContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HBUITopShelfParadeContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HBUITopShelfParadeContentViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(id)_itemDetailsView;
-(void)_primaryActionButtonSelected;
-(void)_secondaryActionButtonSelected;
-(void)_notifyDelegateDidSelectAction:(id)arg1 ;
-(id<HBUITopShelfParadeAction>)primaryAction;
-(id<HBUITopShelfParadeAction>)secondaryAction;
-(void)_primaryActionDidChange;
-(void)_secondaryActionDidChange;
-(void)paradeItemPrimaryActionDidChange:(id)arg1 ;
-(void)paradeItemSecondaryActionDidChange:(id)arg1 ;
-(id<HBUITopShelfParadeItem>)paradeItem;
-(void)setParadeItem:(id<HBUITopShelfParadeItem>)arg1 ;
-(void)setPrimaryAction:(id<HBUITopShelfParadeAction>)arg1 ;
-(void)setSecondaryAction:(id<HBUITopShelfParadeAction>)arg1 ;
@end
