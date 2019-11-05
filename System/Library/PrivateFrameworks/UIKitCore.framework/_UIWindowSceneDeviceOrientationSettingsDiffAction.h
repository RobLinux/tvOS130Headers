/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISceneSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, FBSSceneSettingsDiffInspector, NSString;

@interface _UIWindowSceneDeviceOrientationSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsDeviceOrientationDiffInspector;

}

@property (nonatomic,readonly) FBSSceneSettingsDiffInspector * sceneSettingsDeviceOrientationDiffInspector; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(FBSSceneSettingsDiffInspector *)sceneSettingsDeviceOrientationDiffInspector;
-(void)_updateDeviceOrientationWithSettingObserverContext:(SCD_Struct_UI26)arg1 windowScene:(id)arg2 transitionContext:(id)arg3 ;
@end

