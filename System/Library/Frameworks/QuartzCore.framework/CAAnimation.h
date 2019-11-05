/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSMutableCopying.h>
#import <QuartzCore/CAPropertyInfo.h>
#import <QuartzCore/NSSecureCoding.h>
#import <QuartzCore/NSCopying.h>
#import <QuartzCore/CAMediaTiming.h>
#import <QuartzCore/CAAction.h>

@class NSArray, CAStateControllerTransition, NSString, CAMediaTimingFunction;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSSecureCoding, NSCopying, CAMediaTiming, CAAction> {

	void* _attr;
	unsigned _flags;

}

@property (assign) BOOL usesSceneTimeBase; 
@property (assign) double fadeInDuration; 
@property (assign) double fadeOutDuration; 
@property (nonatomic,copy) NSArray * animationEvents; 
@property (assign) long long _mapkit_ID; 
@property (__weak) CAStateControllerTransition * CAStateControllerTransition; 
@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * beginTimeMode; 
@property (assign) double frameInterval; 
@property (assign) long long preferredFramesPerSecond; 
@property (assign) BOOL discretizesTime; 
@property (retain) CAMediaTimingFunction * timingFunction; 
@property (retain) id<CAAnimationDelegate> delegate; 
@property (getter=isRemovedOnCompletion) BOOL removedOnCompletion; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) BOOL autoreverses; 
@property (copy) NSString * fillMode; 
+(id)pkui_shakeAnimationWithInitalOffest:(double)arg1 springStiffness:(double)arg2 springDamping:(double)arg3 ;
+(id)pkui_shakeAnimation;
+(id)pkui_smallShakeAnimation;
+(id)animationWithSCNAnimation:(id)arg1 ;
+(id)ak_jiggleAnimation;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)properties;
+(id)animation;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(BOOL)CA_encodesPropertyConditionally:(unsigned)arg1 type:(int)arg2 ;
-(void)pkui_setCompletionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)pkui_didStartHandler;
-(void)pkui_setDidStartHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)pkui_completionHandler;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(void)setUsesSceneTimeBase:(BOOL)arg1 ;
-(BOOL)usesSceneTimeBase;
-(void)setCommitsOnCompletion:(BOOL)arg1 ;
-(BOOL)commitsOnCompletion;
-(void)setAnimationEvents:(NSArray *)arg1 ;
-(NSArray *)animationEvents;
-(void)set_mapkit_ID:(long long)arg1 ;
-(long long)_mapkit_ID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CAAnimationDelegate>)delegate;
-(void)setDelegate:(id<CAAnimationDelegate>)arg1 ;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(double)duration;
-(BOOL)isEnabled;
-(void)setDuration:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)frameInterval;
-(void)setFrameInterval:(double)arg1 ;
-(float)speed;
-(void)setSpeed:(float)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(double)repeatDuration;
-(BOOL)autoreverses;
-(float)repeatCount;
-(double)timeOffset;
-(NSString *)fillMode;
-(void)setTimeOffset:(double)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setRepeatDuration:(double)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setBeginTimeMode:(NSString *)arg1 ;
-(NSString *)beginTimeMode;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(BOOL)isRemovedOnCompletion;
-(void)setDefaultDuration:(double)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(BOOL)removedOnCompletion;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(BOOL)discretizesTime;
-(void)setDiscretizesTime:(BOOL)arg1 ;
@end

