/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/SUICFlamesViewDelegate.h>

@protocol UIDictationViewDisplayDelegate;
@class UIKeyboardDicationBackground, UIButton, SUICFlamesView, NSString;

@interface UIDictationView : UIView <SUICFlamesViewDelegate> {

	UIKeyboardDicationBackground* _background;
	UIButton* _endpointButton;
	UIButton* _endpointButtonLandscape;
	int _state;
	BOOL _keyboardInTransition;
	BOOL _automaticAppearanceWasEnabled;
	SUICFlamesView* _flamesView;
	BOOL _showLanguageLabel;
	BOOL _switchingLanguage;
	id<UIDictationViewDisplayDelegate> _displayDelegate;

}

@property (assign,nonatomic) BOOL showLanguageLabel;                                          //@synthesize showLanguageLabel=_showLanguageLabel - In the implementation block
@property (assign,nonatomic) BOOL switchingLanguage;                                          //@synthesize switchingLanguage=_switchingLanguage - In the implementation block
@property (assign,nonatomic) id<UIDictationViewDisplayDelegate> displayDelegate;              //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(CGSize)layoutSize;
+(CGSize)viewSize;
+(id)activeInstance;
+(Class)dictationViewClass;
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(BOOL)visible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(CGPoint)contentOffset;
-(void)applicationWillResignActive;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(BOOL)isShowing;
-(void)endpointButtonPressed;
-(void)finishReturnToKeyboard;
-(void)setSwitchingLanguage:(BOOL)arg1 ;
-(void)returnToKeyboard;
-(void)setDisplayDelegate:(id<UIDictationViewDisplayDelegate>)arg1 ;
-(BOOL)switchingLanguage;
-(void)setShowLanguageLabel:(BOOL)arg1 ;
-(void)highlightEndpointButton;
-(void)prepareForReturnToKeyboard;
-(BOOL)drawsOwnBackground;
-(id)endpointButton;
-(CGSize)currentScreenSize;
-(void)applicationEnteredBackground;
-(CGPoint)positionForShow;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(CGPoint)arg3 ;
-(CGPoint)backgroundOffset;
-(void)keyboardDidShow:(id)arg1 ;
-(id<UIDictationViewDisplayDelegate>)displayDelegate;
-(BOOL)showLanguageLabel;
@end

