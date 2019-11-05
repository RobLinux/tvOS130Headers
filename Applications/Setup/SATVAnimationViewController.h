/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <Setup/CAStateControllerDelegate.h>

@class CAStateController, CALayer, CAAnimationGroup, SATVIntroAnimator, MicaAnimator, TVPVideoView;

@interface SATVAnimationViewController : UIViewController <CAStateControllerDelegate> {

	double _clickDuration;
	CAStateController* _stateController;
	CALayer* _rootLayer;
	CALayer* _remoteClickLayer;
	CAAnimationGroup* _remoteClickAnimation;
	CALayer* _remoteClickShadowLayer;
	CAAnimationGroup* _remoteClickShadowAnimation;
	/*^block*/id _animationCompletion;
	SATVIntroAnimator* _introAnimator;
	MicaAnimator* _animator;
	TVPVideoView* _flyoverPreviewVideoView;

}

@property (nonatomic,retain) CAStateController * stateController;                        //@synthesize stateController=_stateController - In the implementation block
@property (nonatomic,retain) CALayer * rootLayer;                                        //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,retain) CALayer * remoteClickLayer;                                 //@synthesize remoteClickLayer=_remoteClickLayer - In the implementation block
@property (nonatomic,retain) CAAnimationGroup * remoteClickAnimation;                    //@synthesize remoteClickAnimation=_remoteClickAnimation - In the implementation block
@property (nonatomic,retain) CALayer * remoteClickShadowLayer;                           //@synthesize remoteClickShadowLayer=_remoteClickShadowLayer - In the implementation block
@property (nonatomic,retain) CAAnimationGroup * remoteClickShadowAnimation;              //@synthesize remoteClickShadowAnimation=_remoteClickShadowAnimation - In the implementation block
@property (nonatomic,copy) id animationCompletion;                                       //@synthesize animationCompletion=_animationCompletion - In the implementation block
@property (nonatomic,retain) SATVIntroAnimator * introAnimator;                          //@synthesize introAnimator=_introAnimator - In the implementation block
@property (nonatomic,retain) MicaAnimator * animator;                                    //@synthesize animator=_animator - In the implementation block
@property (assign,nonatomic) double clickDuration;                                       //@synthesize clickDuration=_clickDuration - In the implementation block
@property (nonatomic,retain) TVPVideoView * flyoverPreviewVideoView;                     //@synthesize flyoverPreviewVideoView=_flyoverPreviewVideoView - In the implementation block
-(void)dealloc;
-(void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3 ;
-(CALayer *)rootLayer;
-(MicaAnimator *)animator;
-(void)setRootLayer:(CALayer *)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CAStateController *)stateController;
-(void)setAnimator:(MicaAnimator *)arg1 ;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)hideAnimation;
-(void)setAnimationState:(unsigned long long)arg1 ;
-(void)setRemoteClickLayer:(CALayer *)arg1 ;
-(CALayer *)remoteClickLayer;
-(void)setRemoteClickAnimation:(CAAnimationGroup *)arg1 ;
-(void)setRemoteClickShadowLayer:(CALayer *)arg1 ;
-(CALayer *)remoteClickShadowLayer;
-(void)setRemoteClickShadowAnimation:(CAAnimationGroup *)arg1 ;
-(CAAnimationGroup *)remoteClickAnimation;
-(void)setAnimationState:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_CAStateForState:(unsigned long long)arg1 ;
-(void)setAnimationCompletion:(id)arg1 ;
-(SATVIntroAnimator *)introAnimator;
-(CAAnimationGroup *)remoteClickShadowAnimation;
-(void)setIntroAnimator:(SATVIntroAnimator *)arg1 ;
-(double)clickDuration;
-(TVPVideoView *)flyoverPreviewVideoView;
-(void)setFlyoverPreviewVideoView:(TVPVideoView *)arg1 ;
-(id)animationCompletion;
-(void)_updateContentsScaleForLayer:(id)arg1 ;
-(void)beginTrackpadClickAnimationWithCyclingViews:(id)arg1 ;
-(void)stopTrackpadClickAnimation;
-(void)configureFlyoverVideo;
-(void)startFlyoverVideo;
-(void)stopFlyoverVideo;
-(void)setClickDuration:(double)arg1 ;
@end
