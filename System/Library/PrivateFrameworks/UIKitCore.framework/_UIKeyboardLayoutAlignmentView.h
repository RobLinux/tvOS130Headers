/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

@interface _UIKeyboardLayoutAlignmentView : UIView {

	CGRect lastKnownKeyboardRect;
	NSLayoutConstraint* bottomConstraint;
	NSLayoutConstraint* widthConstraint;
	NSLayoutConstraint* heightConstraint;
	NSLayoutConstraint* disambiguatingLeftConstraint;
	BOOL _automaticKeyboardFrameTrackingDisabled;

}

@property (assign,nonatomic) BOOL automaticKeyboardFrameTrackingDisabled;              //@synthesize automaticKeyboardFrameTrackingDisabled=_automaticKeyboardFrameTrackingDisabled - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_createConstraints;
-(void)setAutomaticKeyboardFrameTrackingDisabled:(BOOL)arg1 ;
-(void)_keyboardChanged:(id)arg1 ;
-(void)_stopObservingKeyboardNotifications;
-(void)_startObservingKeyboardNotificationsForScreen:(id)arg1 ;
-(BOOL)_shouldOverrideAnimationForFrameChangeNotification:(id)arg1 ;
-(CGRect)_frameInBoundsForKeyboardFrame:(CGRect)arg1 ;
-(BOOL)_shouldIgnoreFrameChangeNotification:(id)arg1 ;
-(void)_updateConstraintsToMatchKeyboardFrame:(CGRect)arg1 ;
-(void)_updateConstraintsForKeyboardNotification:(id)arg1 ;
-(void)_removeConstraints;
-(void)_matchInitialKeyboardFrame;
-(BOOL)automaticKeyboardFrameTrackingDisabled;
@end

