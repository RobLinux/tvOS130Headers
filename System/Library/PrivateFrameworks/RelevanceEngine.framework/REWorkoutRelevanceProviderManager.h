/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <RelevanceEngine/REPredictorObserver.h>
#import <RelevanceEngine/REWorkoutRelevanceProviderManagerProperties.h>

@class NSDate, NSString;

@interface REWorkoutRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REWorkoutRelevanceProviderManagerProperties> {

	unsigned long long _state;
	NSDate* _lastWorkoutDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long state; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
-(unsigned long long)state;
-(void)resume;
-(void)pause;
-(id)initWithQueue:(id)arg1 ;
-(void)predictorDidUpdate:(id)arg1 ;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_prepareForUpdate;
@end

