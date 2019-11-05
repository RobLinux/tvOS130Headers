/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAAdvertisableItem.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface UAReplayAdvertisableItem : UAAdvertisableItem {

	NSObject*<OS_dispatch_semaphore> _wasResumed;

}

@property (retain,readonly) NSObject*<OS_dispatch_semaphore> wasResumed;              //@synthesize wasResumed=_wasResumed - In the implementation block
+(id)replayableAdvertisableItemWithAdvertisableItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(BOOL)wasResumedOnAnotherDeviceWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)wasResumed;
@end
