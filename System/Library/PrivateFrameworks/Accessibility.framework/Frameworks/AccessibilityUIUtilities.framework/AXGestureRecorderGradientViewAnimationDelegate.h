/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUIUtilities/CAAnimationDelegate.h>

@class NSString;

@interface AXGestureRecorderGradientViewAnimationDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
@end
