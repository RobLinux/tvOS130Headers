/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableArray;

@interface IMPerfProfiler : NSObject {

	NSMutableArray* _sinks;

}
+(id)instance;
-(id)init;
-(void)dealloc;
-(void)addSink:(id)arg1 withBehavior:(id)arg2 ;
-(void)logMeasurement:(IMPerfMeasurement_t*)arg1 ;
@end

