/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEORouteHypothesizer, geo_isolater, GEOXPCActivity;

@interface GEORouteHypothesizerDelayer : NSObject {

	CFBinaryHeapRef _minHeap;
	GEORouteHypothesizer* _nextHypothesizer;
	geo_isolater* _isolater;
	GEOXPCActivity* _activity;

}
+(void)checkin;
-(id)init;
-(void)dealloc;
-(void)_setNextHypothesizer:(id)arg1 ;
-(void)_startValidHypothesizers;
-(void)delayStartOfHypothesizer:(id)arg1 ;
@end

