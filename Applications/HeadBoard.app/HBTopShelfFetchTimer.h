/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:11 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HBTopShelfFetchTimerDelegate, OS_dispatch_queue;
#import <HeadBoard/HeadBoard-Structs.h>
@class NSString, NSObject, HBTopShelfFetchTimerConfiguration;

@interface HBTopShelfFetchTimer : NSObject {

	double _contentBeingUsedFetchAT;
	double _contentNotBeingUsedFetchAT;
	double _lastFetchStartAT;
	double _lastFetchEndAT;
	double _lastSetTimerAT;
	CFRunLoopTimerRef _timer;
	BOOL _contentBeingUsed;
	BOOL _fetching;
	BOOL _shouldAdjustTimerWhenTopShelfItemsChange;
	NSString* _applicationIdentifier;
	long long _fetchPriority;
	id<HBTopShelfFetchTimerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _processingQueue;
	long long _state;
	HBTopShelfFetchTimerConfiguration* _configuration;

}

@property (nonatomic,retain) NSString * applicationIdentifier;                               //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic) long long fetchPriority;                                        //@synthesize fetchPriority=_fetchPriority - In the implementation block
@property (assign,nonatomic,__weak) id<HBTopShelfFetchTimerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                   //@synthesize processingQueue=_processingQueue - In the implementation block
@property (assign,getter=isFetching,nonatomic) BOOL fetching;                                //@synthesize fetching=_fetching - In the implementation block
@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustTimerWhenTopShelfItemsChange;                  //@synthesize shouldAdjustTimerWhenTopShelfItemsChange=_shouldAdjustTimerWhenTopShelfItemsChange - In the implementation block
@property (nonatomic,retain) HBTopShelfFetchTimerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,getter=isContentBeingUsed,nonatomic) BOOL contentBeingUsed;                //@synthesize contentBeingUsed=_contentBeingUsed - In the implementation block
-(void)dealloc;
-(id<HBTopShelfFetchTimerDelegate>)delegate;
-(void)setDelegate:(id<HBTopShelfFetchTimerDelegate>)arg1 ;
-(long long)state;
-(void)resume;
-(void)setState:(long long)arg1 ;
-(void)start;
-(void)stop;
-(HBTopShelfFetchTimerConfiguration *)configuration;
-(void)setConfiguration:(HBTopShelfFetchTimerConfiguration *)arg1 ;
-(void)pause;
-(BOOL)_isPaused;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(BOOL)_isStarted;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setFetching:(BOOL)arg1 ;
-(BOOL)isFetching;
-(void)topShelfContentDidChange;
-(void)topShelfFetchDidStart;
-(void)setContentBeingUsed:(BOOL)arg1 ;
-(void)applicationRestrictionsDidChange:(BOOL)arg1 ;
-(void)internetDidBecomeAvailable;
-(void)applicationWillInstall;
-(void)applicationDidCancelInstall;
-(void)applicationDidFailToInstall;
-(void)applicationDidInstall;
-(void)applicationWillUninstall;
-(void)applicationDidFailToUninstall;
-(void)applicationDidUninstall;
-(id)initWithApplicationIdentifier:(id)arg1 configuration:(id)arg2 fetchPriority:(long long)arg3 processingQueue:(id)arg4 delegate:(id)arg5 ;
-(void)topShelfFetchDidComplete;
-(void)_handleFetchTimerDidFire;
-(BOOL)isContentBeingUsed;
-(double)_initialContentBeingUsedFetchDelay;
-(void)_adjustContentBeingUsedFetchTimeToCurrentTimePlus:(double)arg1 ;
-(void)setShouldAdjustTimerWhenTopShelfItemsChange:(BOOL)arg1 ;
-(void)_adjustContentNotBeingUsedFetchTimeToCurrentTimePlus:(double)arg1 ;
-(void)_suppressFetchTimer;
-(void)_establishNextTimer;
-(void)_invalidateContentBeingUsedFetchTime;
-(BOOL)shouldAdjustTimerWhenTopShelfItemsChange;
-(void)_adjustContentNotBeingUsedFetchTimeTo:(double)arg1 plus:(double)arg2 ;
-(BOOL)_haveUrgentFetchPriority;
-(BOOL)_hasStartedAtLeastOneFetch;
-(void)_updateFetchTimerNextFireDate;
-(BOOL)_canUpdateTimerFireDate;
-(void)_adjustFetchTimeTo:(double)arg1 plus:(double)arg2 isContentBeingUsed:(BOOL)arg3 ;
-(void)_adjustContentBeingUsedFetchTimeTo:(double)arg1 plus:(double)arg2 ;
-(long long)fetchPriority;
-(void)setFetchPriority:(long long)arg1 ;
@end

