/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/FBSceneLayerManagerObserver.h>
#import <UIKitCore/FBSceneObserver.h>
#import <UIKitCore/BSDescriptionProviding.h>
#import <UIKitCore/BSInvalidatable.h>

@protocol UIScenePresentationBinderDelegate;
@class NSString, UIView, NSMutableSet, NSMutableDictionary, FBSSceneSettingsDiffInspector, NSSet;

@interface UIScenePresentationBinder : NSObject <FBSceneLayerManagerObserver, FBSceneObserver, BSDescriptionProviding, BSInvalidatable> {

	NSString* _identifier;
	UIView* _rootView;
	NSMutableSet* _scenes;
	long long _priority;
	unsigned long long _appearanceStyle;
	id<UIScenePresentationBinderDelegate> _delegate;
	BOOL _invalidated;
	NSMutableDictionary* _mapSceneIDToPresenter;
	FBSSceneSettingsDiffInspector* _settingsDiffInspector;
	struct {
		unsigned delegateShouldPresentWithNoSceneLayers : 1;
		unsigned delegateDidStartPresentingScene : 1;
		unsigned delegateDidStopPresentingScene : 1;
	}  _delegateFlags;

}

@property (assign,nonatomic,__weak) id<UIScenePresentationBinderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * scenes;                                                   //@synthesize scenes=_scenes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(void)invalidate;
-(id<UIScenePresentationBinderDelegate>)delegate;
-(void)setDelegate:(id<UIScenePresentationBinderDelegate>)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSSet *)scenes;
-(void)sceneLayerManagerDidStartTrackingLayers:(id)arg1 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg1 ;
-(void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(void)_noteSceneMovedToBackground:(id)arg1 ;
-(void)_noteSceneMovedToForeground:(id)arg1 ;
-(void)_noteSceneChangedLevel:(id)arg1 ;
-(id)_rootView;
-(id)initWithIdentifier:(id)arg1 priority:(long long)arg2 rootView:(id)arg3 appearanceStyle:(unsigned long long)arg4 ;
-(BOOL)_delegateShouldPresentSceneOnlyWhenLayersExist;
-(void)_noteWillStartPresentingScene:(id)arg1 ;
-(void)_noteDidStopPresentingScene:(id)arg1 ;
-(void)_evaluateSceneForHosting:(id)arg1 forReason:(id)arg2 ;
-(void)_removeScene:(id)arg1 forReason:(id)arg2 ;
-(void)removeScene:(id)arg1 ;
-(void)_deactivatePresenter:(id)arg1 scene:(id)arg2 reason:(id)arg3 ;
-(void)_activatePresenter:(id)arg1 scene:(id)arg2 reason:(id)arg3 ;
-(void)_positionPresentationViewInRootViewOrderedCorrectly:(id)arg1 ;
-(void)_delegateDidStartPresentingScene:(id)arg1 ;
-(void)_delegateDidStopPresentingScene:(id)arg1 ;
-(void)addScene:(id)arg1 ;
@end

