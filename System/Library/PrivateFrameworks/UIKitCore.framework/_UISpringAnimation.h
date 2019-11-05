/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CASpringAnimation.h>

@class _UISpringAnimationDelegate;

@interface _UISpringAnimation : CASpringAnimation

@property (nonatomic,retain) _UISpringAnimationDelegate * delegate; 
+(double)defaultAnimationDuration;
+(double)defaultStiffness;
+(double)defaultDamping;
+(void)setDefaultDamping:(double)arg1 ;
+(void)setDefaultStiffness:(double)arg1 ;
+(id)springAnimationWithKeyPath:(id)arg1 toLayer:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 ;
-(id)init;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
@end

