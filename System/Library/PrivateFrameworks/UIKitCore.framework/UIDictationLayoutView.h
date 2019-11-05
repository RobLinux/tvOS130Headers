/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDictationView.h>

@class UIButton, UILabel, NSString;

@interface UIDictationLayoutView : UIDictationView {

	BOOL _hideSwitcher;
	UIButton* _globeButton;
	UIButton* _keyboardButton;
	UILabel* _languageLabel;
	NSString* _currentDictationLanguage;
	UIButton* _waveTapEndpointButton;
	BOOL _blackTextColor;

}
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)darkGrayColor;
-(BOOL)isShowing;
-(void)finishReturnToKeyboard;
-(void)setRenderConfig:(id)arg1 ;
-(void)returnToKeyboard;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(CGPoint)arg3 ;
-(void)keyboardButtonPressed:(id)arg1 ;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 ;
-(void)updateLanguageLabel;
@end

