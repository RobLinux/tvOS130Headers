/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:33 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BKAccelerometerClient.h>

@interface BKAccelerometerClientUIApp : BKAccelerometerClient {

	long long _lastOrientation;

}
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_queue_invalidate;
-(id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3 ;
-(void)handleAccelerometerEventWithTimestamp:(double)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 samplingInterval:(double)arg5 ;
-(void)handleOrientationEvent:(long long)arg1 orientationLocked:(BOOL)arg2 ;
@end

