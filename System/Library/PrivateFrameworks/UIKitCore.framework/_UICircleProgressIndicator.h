/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, CADisplayLink, UIImageView, UIColor;

@interface _UICircleProgressIndicator : UIView {

	double _animatedValue;
	double _animationEndTime;
	double _animationStartTime;
	double _animationStartValue;
	UIImage* _borderImage;
	UIImage* _centerImage;
	UIEdgeInsets _centerImageInsets;
	CADisplayLink* _displayLink;
	UIImage* _fillImage;
	BOOL _highlighted;
	UIImageView* _indeterminateView;
	BOOL _isAnimating;
	double _progress;
	UIColor* _unhighlightedBackgroundColor;

}

@property (nonatomic,retain) UIImage * borderImage;                                  //@synthesize borderImage=_borderImage - In the implementation block
@property (nonatomic,retain) UIImage * fillImage;                                    //@synthesize fillImage=_fillImage - In the implementation block
@property (nonatomic,retain) UIImage * image;                                        //@synthesize centerImage=_centerImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;                               //@synthesize centerImageInsets=_centerImageInsets - In the implementation block
@property (assign,getter=isIndeterminate,nonatomic) BOOL indeterminate; 
@property (assign,nonatomic) double progress;                                        //@synthesize progress=_progress - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                  //@synthesize highlighted=_highlighted - In the implementation block
+(id)_fillImage;
+(id)_borderImage;
+(id)_indeterminateImage;
-(void)dealloc;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(BOOL)isIndeterminate;
-(void)setIndeterminate:(BOOL)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(UIImage *)fillImage;
-(UIEdgeInsets)imageInsets;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(void)_animateValueOnDisplayLink:(id)arg1 ;
-(void)setFillImage:(UIImage *)arg1 ;
-(void)_startIndeterminateAnimation;
-(void)setBorderImage:(UIImage *)arg1 ;
-(void)_setHidesBorderView:(BOOL)arg1 ;
-(UIImage *)borderImage;
@end

