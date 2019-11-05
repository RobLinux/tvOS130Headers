/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol SiriUISiriStatusViewProtocol <NSObject>
@property (assign,nonatomic) long long mode; 
@property (assign,nonatomic) double flamesViewWidth; 
@property (assign,nonatomic) double disabledMicOpacity; 
@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewDelegate> delegate; 
@property (nonatomic,readonly) UIView * flamesContainerView; 
@property (assign,nonatomic) BOOL flamesViewDeferred; 
@property (assign,getter=isInUITrackingMode,nonatomic) BOOL inUITrackingMode; 
@property (assign,nonatomic) BOOL paused; 
@property (nonatomic,readonly) double statusViewHeight; 
@required
-(id<SiriUISiriStatusViewDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setMode:(long long)arg1;
-(long long)mode;
-(void)setPaused:(BOOL)arg1;
-(BOOL)paused;
-(void)fadeOutCurrentAura;
-(double)flamesViewWidth;
-(void)setupOrbIfNeeded;
-(void)forceMicVisible:(BOOL)arg1;
-(void)setFlamesViewWidth:(double)arg1;
-(double)disabledMicOpacity;
-(void)setDisabledMicOpacity:(double)arg1;
-(UIView *)flamesContainerView;
-(BOOL)flamesViewDeferred;
-(void)setFlamesViewDeferred:(BOOL)arg1;
-(BOOL)isInUITrackingMode;
-(void)setInUITrackingMode:(BOOL)arg1;
-(double)statusViewHeight;

@end
