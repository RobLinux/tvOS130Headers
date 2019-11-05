/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TAFilterVisits : NSObject
+(BOOL)distanceFromLocation:(id)arg1 toLocation:(id)arg2 satisfyNSigma:(unsigned long long)arg3 satisfyMinDistance:(double)arg4 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg1 settings:(id)arg2 ignoredSet:(id)arg3 outgoingRequests:(id*)arg4 ;
+(BOOL)shouldDetectWithStore:(id)arg1 ;
+(id)getEntryAddressSetInTAPoiSnapshot:(id)arg1 usingSettings:(id)arg2 ;
+(id)getExitAddressSetInTAPoiSnapshot:(id)arg1 usingSettings:(id)arg2 ;
+(id)getIntersectionOfFirstSet:(id)arg1 andSecondSet:(id)arg2 ;
+(double)residualDistanceFromLocation:(id)arg1 toLocation:(id)arg2 nSigma:(unsigned long long)arg3 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg1 ignoredSet:(id)arg2 outgoingRequests:(id*)arg3 ;
+(id)getAddressSetInTAPoiSnapshot:(id)arg1 ;
@end

