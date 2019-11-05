/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol _UIKeyboardAnimatorState <NSObject>
@property (nonatomic,retain,readonly) UIView * animatingView; 
@property (assign,nonatomic) BOOL inputViewsHidden; 
@property (nonatomic,readonly) CGRect startFrame; 
@property (nonatomic,readonly) CGRect endFrame; 
@required
-(CGRect)endFrame;
-(CGRect)startFrame;
-(void)setInputViewsHidden:(BOOL)arg1;
-(UIView *)animatingView;
-(BOOL)inputViewsHidden;

@end

