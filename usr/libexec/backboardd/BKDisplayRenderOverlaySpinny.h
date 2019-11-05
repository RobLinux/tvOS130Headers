/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BKDisplayBootUIRenderOverlay.h>

@class BKImageSequence, CAKeyframeAnimation;

@interface BKDisplayRenderOverlaySpinny : BKDisplayBootUIRenderOverlay {

	unsigned long long _background;
	BKImageSequence* _imageSequence;
	CAKeyframeAnimation* _animation;

}

@property (assign,nonatomic) unsigned long long background;              //@synthesize background=_background - In the implementation block
+(id)overlayWithLevel:(float)arg1 display:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)background;
-(void)setBackground:(unsigned long long)arg1 ;
-(void)_setScale:(double)arg1 ;
-(void)_stopAnimating;
-(void)_startAnimating;
-(id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2 ;
-(id)_prepareContentLayerForPresentation:(id)arg1 ;
-(void)_cleanUpContentLayer;
-(id)_spinnyImageSequence;
-(void)_unloadSpinnyImageSequence;
-(BOOL)_useLightBackground;
-(id)_assetPrefix;
@end
