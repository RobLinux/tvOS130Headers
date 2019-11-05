/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIBezierPath, UIColor;

@interface UIRoundedRectButton : UIButton {

	UIBezierPath* _fillPath;
	UIColor* _fillColor;

}
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_updateState;
-(void)setTintColor:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)_canDrawContent;
-(long long)buttonType;
-(id)_contentBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 fillColor:(id)arg2 ;
-(void)_invalidatePaths;
@end
