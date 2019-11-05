/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAClientController.h>

@class UASimulator;

@interface UASimulatorAdvertisementCreator : UAClientController {

	UASimulator* _simulator;

}

@property (retain,readonly) UASimulator * simulator;              //@synthesize simulator=_simulator - In the implementation block
-(long long)priority;
-(id)items;
-(id)statusString;
-(BOOL)active;
-(UASimulator *)simulator;
-(id)eligibleAdvertiseableItemsInOrder;
-(id)initWithManager:(id)arg1 simulator:(id)arg2 ;
@end

