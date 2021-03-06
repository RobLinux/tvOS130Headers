/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBScene, UIScenePresentationContext;


@protocol UIScenePresenter <BSInvalidatable>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,__weak,readonly) FBScene * scene; 
@property (nonatomic,copy,readonly) UIScenePresentationContext * presentationContext; 
@property (nonatomic,readonly) UIView*<UIScenePresentation> presentationView; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@required
-(void)invalidate;
-(NSString *)identifier;
-(BOOL)isActive;
-(BOOL)isInvalidated;
-(void)activate;
-(void)deactivate;
-(FBScene *)scene;
-(void)modifyPresentationContext:(/*^block*/id)arg1;
-(UIView*<UIScenePresentation>)presentationView;
-(UIScenePresentationContext *)presentationContext;
-(id)newSnapshotContext;
-(id)newSnapshot;
-(id)newSnapshotPresentationView;

@end

