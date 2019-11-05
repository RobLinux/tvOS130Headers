/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotos/TVPhotos-Structs.h>
#import <TVPhotos/TVPOneupView.h>

@class UIView;

@interface TVPSharedPSOneupView : TVPOneupView {

	UIView* _commentsBubbleView;
	UIView* _itemContainerView;

}

@property (nonatomic,retain) UIView * commentsBubbleView;              //@synthesize commentsBubbleView=_commentsBubbleView - In the implementation block
@property (nonatomic,retain) UIView * itemContainerView;               //@synthesize itemContainerView=_itemContainerView - In the implementation block
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(void)_menuAction:(id)arg1 ;
-(void)_longPressAction:(id)arg1 ;
-(void)_transitionToItemAtIndex:(long long)arg1 ;
-(void)_addAllSubviews;
-(void)_configureItemView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_transitionToCaptionMode;
-(void)_transitionToFullScreenMode;
-(void)_performPushTransitionToView:(id)arg1 atNewIndex:(long long)arg2 ;
-(void)_configureSupplementaryView;
-(UIView *)commentsBubbleView;
-(void)setCommentsBubbleView:(UIView *)arg1 ;
-(void)_setFrameForSecondaryView:(id)arg1 itemViewFrame:(CGRect)arg2 ;
-(id)_getSecondaryCommentsViewFromParentView;
-(void)switchToOneupCaptionView;
-(UIView *)itemContainerView;
-(void)setItemContainerView:(UIView *)arg1 ;
@end

