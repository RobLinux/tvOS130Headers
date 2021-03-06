/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PBAttentionMonitorStateMachine.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface RemoteSleepSM : PBAttentionMonitorStateMachine {

	NSObject*<OS_dispatch_source> _timer;
	double _interval;

}
-(id)init;
-(BOOL)_canBeInOnStateAutomatically;
-(void)_enterOnStateAutomatically;
-(void)_enterOffStateAutomatically;
-(BOOL)isAutomaticEnabled;
@end

