/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView, UIVisualEffect, UIVisualEffectView;

@interface _UITableViewCellSeparatorView : UIView {

	UIView* _backgroundView;
	UIView* _overlayView;
	UIVisualEffect* _separatorEffect;
	UIVisualEffectView* _effectView;
	BOOL _drawsWithVibrantLightMode;

}

@property (assign,nonatomic) BOOL drawsWithVibrantLightMode;                //@synthesize drawsWithVibrantLightMode=_drawsWithVibrantLightMode - In the implementation block
@property (nonatomic,retain) UIVisualEffect * separatorEffect;              //@synthesize separatorEffect=_separatorEffect - In the implementation block
-(void)layoutSubviews;
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(void)setDrawsWithVibrantLightMode:(BOOL)arg1 ;
-(BOOL)drawsWithVibrantLightMode;
@end

