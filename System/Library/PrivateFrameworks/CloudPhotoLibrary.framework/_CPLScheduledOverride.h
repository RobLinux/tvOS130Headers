/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, _CPLScheduledOverrideDelegate;
@class NSObject, NSString, NSDate;

@interface _CPLScheduledOverride : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSString* _storageKey;
	NSDate* _endDate;
	unsigned long long _budget;
	NSObject*<OS_dispatch_queue> _queue;
	id<_CPLScheduledOverrideDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long budget;                                    //@synthesize budget=_budget - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<_CPLScheduledOverrideDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * status; 
+(unsigned long long)_systemBudgetForBudgetKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<_CPLScheduledOverrideDelegate>)delegate;
-(void)setDelegate:(id<_CPLScheduledOverrideDelegate>)arg1 ;
-(void)cancel;
-(NSString *)status;
-(unsigned long long)budget;
-(BOOL)scheduleEndOfOverride;
-(id)initWithBudget:(unsigned long long)arg1 queue:(id)arg2 ;
-(void)_scheduleEndWithTimeInterval:(double)arg1 ;
-(BOOL)scheduleEndFromPersistedOverride;
@end

