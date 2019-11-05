/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface _PXValueAnimation : NSObject {

	double _duration;
	double _startTime;
	double _currentMediaTime;
	PXValueAnimationSpec _spec;

}

@property (nonatomic,readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) PXValueAnimationSpec spec;              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) double currentValue; 
@property (nonatomic,readonly) BOOL completed; 
@property (assign,nonatomic) double startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double currentMediaTime;                  //@synthesize currentMediaTime=_currentMediaTime - In the implementation block
-(id)description;
-(id)init;
-(double)startTime;
-(BOOL)completed;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(double)currentMediaTime;
-(double)elapsedTime;
-(double)currentValue;
-(double)remainingTime;
-(PXValueAnimationSpec)spec;
-(void)setCurrentMediaTime:(double)arg1 ;
-(id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(PXValueAnimationSpec)arg3 ;
@end

