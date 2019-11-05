/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface TAVisitState : NSObject {

	unsigned long long _state;
	NSDate* _stateBeginDate;
	unsigned long long _sessionID;

}

@property (nonatomic,readonly) unsigned long long state;                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSDate * stateBeginDate;                   //@synthesize stateBeginDate=_stateBeginDate - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)state;
-(unsigned long long)sessionID;
-(void)generateNewSessionID;
-(NSDate *)stateBeginDate;
-(BOOL)updateWithTACLVisit:(id)arg1 ;
@end

