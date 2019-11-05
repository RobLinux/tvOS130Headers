/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsTVTopShelfExtension/MTSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, MTPropertyChangeQueryObserver;

@interface MTListenNowManager : MTSingleton {

	unsigned long long _backgroundTaskIdentifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	MTPropertyChangeQueryObserver* _listenNowQueryObserver;
	unsigned long long _updateCount;

}

@property (assign,nonatomic) unsigned long long backgroundTaskIdentifier;                         //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) MTPropertyChangeQueryObserver * listenNowQueryObserver;              //@synthesize listenNowQueryObserver=_listenNowQueryObserver - In the implementation block
@property (assign,nonatomic) unsigned long long updateCount;                                      //@synthesize updateCount=_updateCount - In the implementation block
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)_predicate;
-(unsigned long long)updateCount;
-(void)setUpdateCount:(unsigned long long)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)update;
-(void)_endBackgroundTask;
-(void)_beginBackgroundTask;
-(void)startObservingChanges;
-(void)stopObservingChanges;
-(unsigned long long)backgroundTaskIdentifier;
-(void)setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(void)results:(/*^block*/id)arg1 ;
-(void)_endBackgroundTask:(BOOL)arg1 ;
-(void)setListenNowQueryObserver:(MTPropertyChangeQueryObserver *)arg1 ;
-(MTPropertyChangeQueryObserver *)listenNowQueryObserver;
-(void)processListenNowEpisodes:(id)arg1 ;
@end
