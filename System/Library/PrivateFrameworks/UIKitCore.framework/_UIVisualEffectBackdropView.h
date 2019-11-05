/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectSubview.h>

@class _UIVisualEffectViewBackdropCaptureGroup, CABackdropLayer;

@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {

	_UIVisualEffectViewBackdropCaptureGroup* _captureGroup;

}

@property (assign,nonatomic) long long renderMode; 
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * captureGroup; 
@property (nonatomic,readonly) CABackdropLayer * backdropLayer; 
+(Class)layerClass;
-(long long)renderMode;
-(void)setRenderMode:(long long)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CABackdropLayer *)backdropLayer;
-(void)removeFromCurrentCaptureGroup;
-(void)setCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(void)applyRequestedFilterEffects;
-(void)applyIdentityFilterEffects;
-(void)_applyScaleHintAsRequested:(BOOL)arg1 ;
-(_UIVisualEffectViewBackdropCaptureGroup *)captureGroup;
@end

