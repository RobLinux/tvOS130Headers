/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIVideoAdvisoryViewLayout, _TVImageView, UIView, NSArray;

@interface VUIVideoAdvisoryView : UIView {

	VUIVideoAdvisoryViewLayout* _layout;
	_TVImageView* _logoImageView;
	UIView* _dividerView;
	NSArray* _legendViews;

}

@property (nonatomic,retain) VUIVideoAdvisoryViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * logoImageView;                     //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                             //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,copy) NSArray * legendViews;                              //@synthesize legendViews=_legendViews - In the implementation block
-(VUIVideoAdvisoryViewLayout *)layout;
-(void)setLayout:(VUIVideoAdvisoryViewLayout *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)_isPortrait;
-(UIEdgeInsets)_margin;
-(CGSize)_logoSize;
-(_TVImageView *)logoImageView;
-(void)setLogoImageView:(_TVImageView *)arg1 ;
-(UIView *)dividerView;
-(void)setDividerView:(UIView *)arg1 ;
-(id)initWithRatingInfoDictionary:(id)arg1 ;
-(void)show:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CGSize)_legendSize;
-(CGSize)_dividerSize;
-(UIEdgeInsets)_logoMargin;
-(UIEdgeInsets)_legendsMargin;
-(UIEdgeInsets)_dividerMargin;
-(void)_configureSubviewsWithDictionary:(id)arg1 ;
-(NSArray *)legendViews;
-(void)setLegendViews:(NSArray *)arg1 ;
-(void)_showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_showWithAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)_hideWithAnimationWithCompletion:(/*^block*/id)arg1 ;
@end

