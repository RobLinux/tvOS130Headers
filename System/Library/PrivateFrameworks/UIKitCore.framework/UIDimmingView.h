/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIBarButtonItem, UIImageView, NSArray, UIColor, UITapGestureRecognizer, NSString;

@interface UIDimmingView : UIView <UIGestureRecognizerDelegate> {

	UIBarButtonItem* _highlightedBarButtonItem;
	UIImageView* _highlightedImageView;
	UIImageView* _backgroundGlow;
	NSArray* _passthroughViews;
	BOOL _ignoresTouches;
	BOOL _inPassthroughHitTest;
	UIColor* _dimmingColor;
	UITapGestureRecognizer* _singleFingerTapRecognizer;
	BOOL _suppressesBackdrops;
	id _delegate;
	double _percentDisplayed;
	double _percentLightened;

}

@property (assign,nonatomic,__weak) id delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * highlightedBarButtonItem; 
@property (nonatomic,copy) NSArray * passthroughViews;                                //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (assign,nonatomic) BOOL ignoresTouches;                                     //@synthesize ignoresTouches=_ignoresTouches - In the implementation block
@property (nonatomic,readonly) BOOL displayed; 
@property (assign,nonatomic) double percentDisplayed;                                 //@synthesize percentDisplayed=_percentDisplayed - In the implementation block
@property (assign,nonatomic) double percentLightened;                                 //@synthesize percentLightened=_percentLightened - In the implementation block
@property (nonatomic,retain) UIColor * dimmingColor;                                  //@synthesize dimmingColor=_dimmingColor - In the implementation block
@property (assign,nonatomic) BOOL suppressesBackdrops;                                //@synthesize suppressesBackdrops=_suppressesBackdrops - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDimmingColor;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)displayed;
-(void)mouseUp:(GSEventRef)arg1 ;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIColor *)dimmingColor;
-(void)updateBackgroundColor;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)handleSingleTap:(id)arg1 ;
-(NSArray *)passthroughViews;
-(BOOL)ignoresTouches;
-(void)setIgnoresTouches:(BOOL)arg1 ;
-(void)setSuppressesBackdrops:(BOOL)arg1 ;
-(void)setDimmingColor:(UIColor *)arg1 ;
-(void)display:(BOOL)arg1 ;
-(void)setPercentDisplayed:(double)arg1 ;
-(void)setPercentLightened:(double)arg1 ;
-(void)display:(BOOL)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3 ;
-(int)textEffectsVisibilityLevel;
-(void)_simulateTap;
-(BOOL)suppressesBackdrops;
-(id)_backdropViewsToAnimate;
-(void)dimmingRemovalAnimationDidStop;
-(double)percentLightened;
-(double)percentDisplayed;
-(void)setHighlightedBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)highlightedBarButtonItem;
@end

