/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIButton, NSDictionary;

@interface UIButtonLabel : UILabel {

	BOOL _reverseShadow;
	UIButton* _button;
	NSDictionary* _cachedDefaultAttributes;
	BOOL _fontIsDefaultForIdiom;

}

@property (nonatomic,readonly) BOOL _fontIsDefaultForIdiom;              //@synthesize fontIsDefaultForIdiom=_fontIsDefaultForIdiom - In the implementation block
+(id)_defaultAttributes;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setFont:(id)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)_setMinimumFontSize:(double)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)_defaultAttributes;
-(void)_setWantsAutolayout;
-(void)_setFont:(id)arg1 isDefaultForIdiom:(BOOL)arg2 ;
-(void)_invalidateCachedDefaultAttributes;
-(void)_updateTextColorWithFallbackColorIfNeeded;
-(id)_initWithFrame:(CGRect)arg1 button:(id)arg2 ;
-(void)setReverseShadow:(BOOL)arg1 ;
-(BOOL)_fontIsDefaultForIdiom;
-(double)_paddingForBaselineSpacingFromEdge:(int)arg1 toNeighborEdge:(int)arg2 ;
@end

