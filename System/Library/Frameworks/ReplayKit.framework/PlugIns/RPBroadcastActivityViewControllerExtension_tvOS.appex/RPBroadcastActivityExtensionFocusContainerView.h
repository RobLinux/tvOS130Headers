/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/PlugIns/RPBroadcastActivityViewControllerExtension_tvOS.appex/RPBroadcastActivityViewControllerExtension_tvOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface RPBroadcastActivityExtensionFocusContainerView : UIView {

	UIView* _focusView;

}

@property (assign,nonatomic) UIView * focusView;              //@synthesize focusView=_focusView - In the implementation block
-(UIView *)focusView;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(void)setFocusView:(UIView *)arg1 ;
@end

