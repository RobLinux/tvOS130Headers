/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITapGestureRecognizer.h>

@class UIScrollView;

@interface WKSyntheticTapGestureRecognizer : UITapGestureRecognizer {

	id _gestureIdentifiedTarget;
	SEL _gestureIdentifiedAction;
	id _gestureFailedTarget;
	SEL _gestureFailedAction;
	id _resetTarget;
	SEL _resetAction;
	RetainPtr<NSNumber>* _lastActiveTouchIdentifier;
	WeakObjCPtr<UIScrollView> _lastTouchedScrollView;

}

@property (nonatomic,__weak,readonly) UIScrollView * lastTouchedScrollView; 
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setGestureIdentifiedTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setGestureFailedTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setResetTarget:(id)arg1 action:(SEL)arg2 ;
-(UIScrollView *)lastTouchedScrollView;
-(id)lastActiveTouchIdentifier;
@end
