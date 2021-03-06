/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/backboardd-Structs.h>
#import <backboardd/BKDisplayRenderOverlay.h>
#import <backboardd/CAAnimationDelegate.h>

@class CALayer, CAContext, NSString;

@interface BKDisplayBootUIRenderOverlay : BKDisplayRenderOverlay <CAAnimationDelegate> {

	CALayer* _backgroundLayer;
	unsigned long long _outstandingAnimationsCount;
	BOOL _lightBackground;
	CAContext* _context;
	CALayer* _contentLayer;

}

@property (nonatomic,readonly) CALayer * contentLayer;                                       //@synthesize contentLayer=_contentLayer - In the implementation block
@property (getter=_useLightBackground,nonatomic,readonly) BOOL lightBackground;              //@synthesize lightBackground=_lightBackground - In the implementation block
@property (assign,setter=_setBounds:,getter=_bounds,nonatomic) CGRect bounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanup;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGRect)_bounds;
-(void)_freeze;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CALayer *)contentLayer;
-(void)_setBounds:(CGRect)arg1 ;
-(id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2 ;
-(id)_prepareContentLayerForPresentation:(id)arg1 ;
-(void)_cleanUpContentLayer;
-(BOOL)_useLightBackground;
-(BOOL)disablesDisplayUpdates;
-(BOOL)_presentWithAnimationSettings:(id)arg1 ;
-(void)_dismissWithAnimationSettings:(id)arg1 ;
-(id)_animationForContentLayerCrossfading:(id)arg1 ;
-(id)_animationForBackgroundLayerCrossfading:(id)arg1 ;
@end

