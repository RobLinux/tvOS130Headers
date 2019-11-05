/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class OKWidgetView;


@protocol OKDynamicItemProxiedObject <NSObject>
@property (nonatomic,readonly) OKWidgetView * parentWidgetView; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform dynamicsTransform; 
@required
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1;
-(OKWidgetView *)parentWidgetView;
-(CGAffineTransform)dynamicsTransform;
-(void)setDynamicsTransform:(CGAffineTransform)arg1;

@end

