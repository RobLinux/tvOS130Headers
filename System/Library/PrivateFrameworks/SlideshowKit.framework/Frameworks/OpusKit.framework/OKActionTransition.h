/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKAction.h>
#import <OpusKit/NSSecureCoding.h>
#import <OpusKit/OKActionTransitionExports.h>

@interface OKActionTransition : OKAction <NSSecureCoding, OKActionTransitionExports> {

	float _progress;
	float _velocity;
	unsigned long long _target;

}

@property (nonatomic,readonly) unsigned long long target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) float progress;                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) float velocity;                         //@synthesize velocity=_velocity - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)transitionWithState:(unsigned long long)arg1 target:(unsigned long long)arg2 progress:(float)arg3 velocity:(float)arg4 context:(id)arg5 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)target;
-(float)progress;
-(float)velocity;
@end

