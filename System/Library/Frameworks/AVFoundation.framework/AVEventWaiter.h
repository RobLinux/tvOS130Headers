/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition;

@interface AVEventWaiter : NSObject {

	NSCondition* _condition;
	BOOL _eventCompleted;

}
-(id)init;
-(void)dealloc;
-(void)markEventAsCompleted;
-(void)waitUntilEventIsCompleted;
@end

