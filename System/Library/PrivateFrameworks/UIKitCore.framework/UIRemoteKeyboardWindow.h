/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextEffectsWindow.h>
#import <UIKitCore/_UIContextCustomBinding.h>
#import <UIKitCore/_UIScreenBasedObject.h>

@class NSDictionary, UIScreen, FBSSceneLayer, FBSScene, NSString, CAContext, _UIContextBinder;

@interface UIRemoteKeyboardWindow : UITextEffectsWindow <_UIContextCustomBinding, _UIScreenBasedObject> {

	NSDictionary* _perScreenOptions;
	UIScreen* _intendedScreen;
	BOOL _arePlaceholdersInitialised;
	FBSSceneLayer* _externalSceneLayer;
	FBSScene* _activeScene;
	BOOL _resetRequired;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_UI28 _bindingDescription; 
@property (assign,setter=_setBoundContext:,nonatomic,__weak) CAContext * _boundContext; 
@property (assign,setter=_setContextBinder:,nonatomic,__weak) _UIContextBinder * _contextBinder; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
+(id)remoteKeyboardWindowForScreen:(id)arg1 create:(BOOL)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(NSDictionary *)_options;
-(void)setWindowLevel:(double)arg1 ;
-(BOOL)_isHostedInAnotherProcess;
-(void)endDisablingInterfaceAutorotation;
-(BOOL)_usesWindowServerHitTesting;
-(id)_layerForCoordinateSpaceConversion;
-(void)resetScene;
-(double)_adjustedWindowLevelFromLevel:(double)arg1 ;
-(BOOL)_isFullscreen;
-(BOOL)shouldAttachBindable;
-(BOOL)shouldDetachBindable;
-(void)attachBindable;
-(void)detachBindable;
-(BOOL)_isWindowServerHostingManaged;
-(void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6 ;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(UIScreen *)_intendedScreen;
-(BOOL)_isTextEffectsWindowNotificationOwner;
-(id)_initBasicWithScreen:(id)arg1 options:(id)arg2 ;
-(long long)_orientationInSceneSpace;
-(void)_resetScene;
-(BOOL)_isAlwaysKeyboardWindow;
-(BOOL)_wantsSceneAssociation;
-(BOOL)_alwaysGetsContexts;
-(BOOL)_canIgnoreInteractionEvents;
-(long long)_orientationForClassicPresentation;
@end

