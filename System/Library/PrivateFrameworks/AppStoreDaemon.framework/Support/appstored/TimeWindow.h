/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/NSCopying.h>

@interface TimeWindow : NSObject <NSCopying> {

	double _endTime;
	double _startTime;

}

@property (readonly) double endTime;                       //@synthesize endTime=_endTime - In the implementation block
@property (readonly) double startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (readonly) long long currentStatus; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(double)endTime;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 ;
-(long long)currentStatus;
@end

