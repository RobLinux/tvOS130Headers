/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKeyboardImplGeometryDelegate
@property (assign,getter=isMinimized,nonatomic) BOOL minimized; 
@required
-(BOOL)isActive;
-(BOOL)isMinimized;
-(void)setMinimized:(BOOL)arg1;
-(BOOL)isAutomatic;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2;
-(BOOL)shouldSaveMinimizationState;
-(BOOL)canDismiss;

@end

