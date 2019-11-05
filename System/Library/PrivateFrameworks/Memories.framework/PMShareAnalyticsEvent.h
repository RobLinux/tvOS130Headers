/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/PMCoreAnalyticsEvent.h>
#import <Memories/CoreAnalyticsEventProtocol.h>

@class NSString;

@interface PMShareAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol> {

	NSString* _activityType;
	NSString* _orientation;

}

@property (nonatomic,copy) NSString * activityType;                 //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSString * orientation;                  //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)activityType;
-(NSString *)orientation;
-(id)eventName;
-(void)setOrientation:(NSString *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(id)eventPayload;
-(void)sendToCoreAnalytics;
-(id)initWithActivityType:(id)arg1 isLandscape:(BOOL)arg2 ;
@end

