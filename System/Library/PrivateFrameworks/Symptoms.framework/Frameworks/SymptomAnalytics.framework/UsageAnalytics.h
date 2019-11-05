/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomAnalytics/ObjectAnalytics.h>

@interface UsageAnalytics : ObjectAnalytics
-(id)init;
-(id)initWithWorkspace:(id)arg1 withCache:(BOOL)arg2 ;
-(id)allUsageMarkersWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 ;
-(id)usageMarkersWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 fromDate:(id)arg3 untilDate:(id)arg4 ;
-(id)lastHappenedWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 ;
-(id)usageMarkersWithTag:(unsigned)arg1 fromDate:(id)arg2 untilDate:(id)arg3 ;
-(id)allUsageMarkersWithTag:(unsigned)arg1 ;
-(id)lastHappenedWithTag:(unsigned)arg1 ;
@end

