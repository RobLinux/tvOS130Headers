/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIView, UIImageView, UIVisualEffectView;

@interface HBUIMainAppGridTopShelfContainerView : UICollectionReusableView {

	double _blurFractionComplete;
	UIView* _topShelfContentView;
	unsigned long long _snapshotRequestToken;
	UIImageView* _contentSnapshotOverlayView;
	UIVisualEffectView* _visualEffectView;

}

@property (assign,nonatomic) unsigned long long snapshotRequestToken;               //@synthesize snapshotRequestToken=_snapshotRequestToken - In the implementation block
@property (nonatomic,retain) UIImageView * contentSnapshotOverlayView;              //@synthesize contentSnapshotOverlayView=_contentSnapshotOverlayView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                 //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIView * topShelfContentView;                          //@synthesize topShelfContentView=_topShelfContentView - In the implementation block
@property (assign,nonatomic) double blurFractionComplete;                           //@synthesize blurFractionComplete=_blurFractionComplete - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIView *)topShelfContentView;
-(void)setBlurFractionComplete:(double)arg1 ;
-(void)setContentSnapshotOverlayView:(UIImageView *)arg1 ;
-(void)_updateBlurState;
-(double)blurFractionComplete;
-(void)setSnapshotRequestToken:(unsigned long long)arg1 ;
-(UIImageView *)contentSnapshotOverlayView;
-(unsigned long long)snapshotRequestToken;
-(void)setTopShelfContentView:(UIView *)arg1 ;
@end

