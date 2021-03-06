/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/CAAnimationDelegate.h>

@protocol CAAnimationDelegate;
@class NSString;

@interface _UIViewWeakCAAnimationDelegate : NSObject <CAAnimationDelegate> {

	id<CAAnimationDelegate> _animationDelegate;
	SCD_Struct_UI27 _flags;

}

@property (nonatomic,__weak,readonly) id<CAAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)weakAnimationDelegate:(id)arg1 ;
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id<CAAnimationDelegate>)animationDelegate;
-(id)initWithAnimationDelegate:(id)arg1 ;
@end

