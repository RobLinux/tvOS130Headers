/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAReceiver.h>

@class UAUserActivityClientProcessesController;

@interface UALocalItemReceiver : UAReceiver {

	UAUserActivityClientProcessesController* _controller;

}

@property (retain,readonly) UAUserActivityClientProcessesController * controller;              //@synthesize controller=_controller - In the implementation block
-(id)statusString;
-(UAUserActivityClientProcessesController *)controller;
-(id)receivedItems;
-(BOOL)receiving;
-(id)initWithManager:(id)arg1 controller:(id)arg2 ;
@end

