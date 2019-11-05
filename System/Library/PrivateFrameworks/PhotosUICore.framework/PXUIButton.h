/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIButton.h>

@interface PXUIButton : UIButton {

	BOOL _allowAnimatedHighlighting;
	UIEdgeInsets _hitTestOutset;

}

@property (assign,nonatomic) UIEdgeInsets hitTestOutset;                  //@synthesize hitTestOutset=_hitTestOutset - In the implementation block
@property (assign,nonatomic) BOOL allowAnimatedHighlighting;              //@synthesize allowAnimatedHighlighting=_allowAnimatedHighlighting - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)hitTestOutset;
-(void)setHitTestOutset:(UIEdgeInsets)arg1 ;
-(BOOL)allowAnimatedHighlighting;
-(void)setAllowAnimatedHighlighting:(BOOL)arg1 ;
@end
