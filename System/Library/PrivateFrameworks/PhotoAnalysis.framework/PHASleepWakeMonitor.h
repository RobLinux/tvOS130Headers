/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PHASleepWakeMonitor : NSObject {

	unsigned _powerAssertionID;

}

@property (assign) unsigned powerAssertionID;              //@synthesize powerAssertionID=_powerAssertionID - In the implementation block
+(BOOL)isSystemInDarkWake;
-(void)takeUserIdlePowerAssertion;
-(void)releaseUserIdlePowerAssertion;
-(unsigned)powerAssertionID;
-(void)setPowerAssertionID:(unsigned)arg1 ;
@end

