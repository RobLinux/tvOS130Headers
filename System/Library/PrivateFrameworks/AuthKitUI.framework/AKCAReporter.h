/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AuthKitUI/AuthKitUI-Structs.h>
@class NSString, NSMutableDictionary;

@interface AKCAReporter : NSObject {

	NSString* _eventName;
	NSMutableDictionary* _reportData;
	unsigned long long _initTime;
	mach_timebase_info _clock_timebase;

}
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithEvent:(id)arg1 ;
-(double)_machAbsoluteTimeToTimeInterval:(unsigned long long)arg1 ;
-(void)sendReport;
@end

