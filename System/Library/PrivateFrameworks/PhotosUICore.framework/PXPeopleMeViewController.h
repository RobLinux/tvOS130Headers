/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PXPeopleMeViewControllerDataSource, PXPerson;
@class UIButton, UILabel, PXPeopleScalableAvatarView;

@interface PXPeopleMeViewController : UIViewController {

	id<PXPeopleMeViewControllerDataSource> _dataSource;
	/*^block*/id _dismissHandler;
	id<PXPerson> _suggestedPerson;
	UIButton* _confirmButton;
	UIButton* _denyButton;
	UILabel* _descriptionLabel;
	PXPeopleScalableAvatarView* _avatarView;

}

@property (retain) id<PXPerson> suggestedPerson;                                               //@synthesize suggestedPerson=_suggestedPerson - In the implementation block
@property (nonatomic,retain) UIButton * confirmButton;                                         //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) UIButton * denyButton;                                            //@synthesize denyButton=_denyButton - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) PXPeopleScalableAvatarView * avatarView;                          //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) id<PXPeopleMeViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) id dismissHandler;                                                  //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (nonatomic,readonly) double preferredHeight; 
-(void)dealloc;
-(id<PXPeopleMeViewControllerDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(double)preferredHeight;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setAvatarView:(PXPeopleScalableAvatarView *)arg1 ;
-(PXPeopleScalableAvatarView *)avatarView;
-(id)dismissHandler;
-(void)setDismissHandler:(id)arg1 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(id)initWithDataSource:(id)arg1 dismissHandler:(/*^block*/id)arg2 ;
-(id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 destructive:(BOOL)arg3 ;
-(void)_dismissViewControllerAsConfirmed:(BOOL)arg1 ;
-(void)_confirmMe:(id)arg1 ;
-(void)_rejectMe:(id)arg1 ;
-(id<PXPerson>)suggestedPerson;
-(void)setSuggestedPerson:(id<PXPerson>)arg1 ;
-(UIButton *)confirmButton;
-(void)setConfirmButton:(UIButton *)arg1 ;
-(UIButton *)denyButton;
-(void)setDenyButton:(UIButton *)arg1 ;
@end
