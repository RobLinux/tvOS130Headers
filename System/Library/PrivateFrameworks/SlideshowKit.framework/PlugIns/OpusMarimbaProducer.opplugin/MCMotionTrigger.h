/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAction.h>

@class NSString;

@interface MCMotionTrigger : MCAction {

	NSString* _key;
	double _duration;
	double _easeIn;
	double _easeOut;

}

@property (copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double easeIn;                //@synthesize easeIn=_easeIn - In the implementation block
@property (assign,nonatomic) double easeOut;               //@synthesize easeOut=_easeOut - In the implementation block
+(id)motionTriggerForTargetPlugObjectID:(id)arg1 withKey:(id)arg2 andDuration:(double)arg3 ;
-(id)description;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)demolish;
-(double)easeIn;
-(double)easeOut;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)setEaseIn:(double)arg1 ;
-(void)setEaseOut:(double)arg1 ;
@end

