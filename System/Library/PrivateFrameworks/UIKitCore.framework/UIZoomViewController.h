/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIWindow, UIButton;

@interface UIZoomViewController : UIViewController {

	UIWindow* _window;
	UIButton* _zoomButton;

}
-(id)init;
-(void)dealloc;
-(id)screen;
-(void)loadView;
-(id)_window;
-(void)_changeZoom:(id)arg1 ;
-(void)_applicationDidFinishLaunching:(id)arg1 ;
-(BOOL)isClassicControlWindow:(id)arg1 ;
-(void)_setupPositioningAndRotationForInterfaceOrientation:(long long)arg1 offscreen:(BOOL)arg2 ;
-(void)_zoomOrientationChange:(id)arg1 ;
-(void)_suspendAnimationStarted:(id)arg1 ;
-(void)_updateZoomButton;
-(void)_zoomOrientationAnimationFinished;
-(void)_getRotationContentSettings:(SCD_Struct_UI39*)arg1 forWindow:(id)arg2 ;
@end

