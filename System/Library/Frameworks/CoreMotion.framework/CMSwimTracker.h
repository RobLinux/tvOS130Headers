/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMSwimTrackerInternal;

@interface CMSwimTracker : NSObject {

	CMSwimTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMSwimTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
+(unsigned long long)maxSwimDataEntries;
-(id)init;
-(void)dealloc;
-(CMSwimTrackerInternal *)_internal;
-(void)startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopUpdates;
-(void)querySwimUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

