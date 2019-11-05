/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SATVFooterView.h>
#import <Setup/SATVPulsingViewImpl.h>
#import <Setup/SATVPulsingView.h>

@protocol SATVPulsingAnimationDelegate;
@class NSString;

@interface SATVPulsingFooterView : SATVFooterView <SATVPulsingViewImpl, SATVPulsingView> {

	BOOL _opacityRunning;
	BOOL _scaleRunning;
	unsigned long long _mode;
	id<SATVPulsingAnimationDelegate> _animationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL opacityRunning;                                                    //@synthesize opacityRunning=_opacityRunning - In the implementation block
@property (assign,nonatomic) BOOL scaleRunning;                                                      //@synthesize scaleRunning=_scaleRunning - In the implementation block
@property (assign,nonatomic,__weak) id<SATVPulsingAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                //@synthesize mode=_mode - In the implementation block
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithMode:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)setAnimationDelegate:(id<SATVPulsingAnimationDelegate>)arg1 ;
-(id<SATVPulsingAnimationDelegate>)animationDelegate;
-(void)pulseAtBeginTime:(double)arg1 ;
-(BOOL)opacityRunning;
-(BOOL)scaleRunning;
-(void)setOpacityRunning:(BOOL)arg1 ;
-(void)setScaleRunning:(BOOL)arg1 ;
@end

