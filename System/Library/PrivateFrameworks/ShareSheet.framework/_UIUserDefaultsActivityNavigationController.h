/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <ShareSheet/_UIAppearanceRestriction.h>

@class NSString;

@interface _UIUserDefaultsActivityNavigationController : UINavigationController <_UIAppearanceRestriction>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(CGSize)preferredContentSize;
-(BOOL)_shouldUseContentOverlayInsetsAsStatusBarUnderlapHeight;
-(double)_statusBarHeightAdjustmentForCurrentOrientation;
-(BOOL)_viewControllerUnderlapsStatusBar;
@end
