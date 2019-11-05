/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSSecureCoding.h>

@interface _UIViewControllerTransitionCoordinatorContextDescription : NSObject <NSSecureCoding> {

	BOOL _animated;
	BOOL _interactive;
	BOOL _cancelled;
	double _transitionDuration;
	double _percentComplete;
	double _completionVelocity;
	long long _completionCurve;
	long long _toOrientation;
	long long _fromOrientation;
	CGAffineTransform _targetTransform;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated;                    //@synthesize animated=_animated - In the implementation block
@property (assign,getter=isInteractive,nonatomic) BOOL interactive;              //@synthesize interactive=_interactive - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                  //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) double transitionDuration;                          //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) double percentComplete;                             //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) double completionVelocity;                          //@synthesize completionVelocity=_completionVelocity - In the implementation block
@property (assign,nonatomic) long long completionCurve;                          //@synthesize completionCurve=_completionCurve - In the implementation block
@property (assign,nonatomic) CGAffineTransform targetTransform;                  //@synthesize targetTransform=_targetTransform - In the implementation block
@property (assign,nonatomic) long long toOrientation;                            //@synthesize toOrientation=_toOrientation - In the implementation block
@property (assign,nonatomic) long long fromOrientation;                          //@synthesize fromOrientation=_fromOrientation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptionForTransitionCoordinatorContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCancelled;
-(double)percentComplete;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setPercentComplete:(double)arg1 ;
-(BOOL)isAnimated;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(double)transitionDuration;
-(CGAffineTransform)targetTransform;
-(BOOL)isInteractive;
-(void)setTransitionDuration:(double)arg1 ;
-(long long)completionCurve;
-(long long)fromOrientation;
-(long long)toOrientation;
-(void)setCompletionCurve:(long long)arg1 ;
-(double)completionVelocity;
-(void)setToOrientation:(long long)arg1 ;
-(void)setFromOrientation:(long long)arg1 ;
-(void)setCompletionVelocity:(double)arg1 ;
-(void)setTargetTransform:(CGAffineTransform)arg1 ;
@end

