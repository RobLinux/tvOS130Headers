/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <RelevanceEngine/REDateRelevanceProviderManagerProperties.h>

@class NSDate, NSDateInterval;

@interface REDateRelevanceProviderManager : RERelevanceProviderManager <REDateRelevanceProviderManagerProperties> {

	NSDate* _lastDateUpdate;
	NSDateInterval* _todayInterval;

}

@property (nonatomic,readonly) NSDate * lastDateUpdate; 
@property (nonatomic,readonly) NSDate * todayStart; 
@property (nonatomic,readonly) NSDate * todayEnd; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
+(BOOL)_supportsHistoricProviders;
+(id)_dependencyClasses;
-(void)resume;
-(void)pause;
-(void)_handleSignificantTimeChange;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_prepareForUpdate;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(void)_addedProvider:(id)arg1 ;
-(id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3 ;
-(void)_scheduleUpdatesForDateProvider:(id)arg1 ;
-(void)_scheduleUpdateForDate:(id)arg1 ;
-(NSDate *)lastDateUpdate;
-(NSDate *)todayStart;
-(NSDate *)todayEnd;
-(id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2 ;
@end

