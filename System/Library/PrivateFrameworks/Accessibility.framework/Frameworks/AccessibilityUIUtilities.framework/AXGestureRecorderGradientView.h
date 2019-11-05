/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class CAGradientLayer;

@interface AXGestureRecorderGradientView : UIView

@property (nonatomic,readonly) CAGradientLayer * gradientLayer; 
+(Class)layerClass;
-(CAGradientLayer *)gradientLayer;
-(id)_copyColorsArrayWithTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(void)_configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 locations:(id)arg3 animated:(BOOL)arg4 duration:(double)arg5 completion:(/*^block*/id)arg6 ;
-(id)_copyLocationsArrayWithTopColorLocation:(float)arg1 bottomColorLocation:(float)arg2 ;
-(void)configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(void)configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 topColorLocation:(float)arg3 bottomColorLocation:(float)arg4 ;
-(void)configureGradientAnimatedWithTopColor:(id)arg1 bottomColor:(id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)configureGradientAnimatedWithTopColor:(id)arg1 bottomColor:(id)arg2 topColorLocation:(float)arg3 bottomColorLocation:(float)arg4 duration:(double)arg5 completion:(/*^block*/id)arg6 ;
@end

