/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:22 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTPlayerManifest.h>

@protocol OS_dispatch_queue;
@class MTPlayerManifest, NSObject;

@interface MTCompositeManifest : MTPlayerManifest {

	BOOL _isPlayingFromUpNext;
	MTPlayerManifest* _currentManifest;
	MTPlayerManifest* _upNextManifest;
	MTPlayerManifest* _userManifest;
	NSObject*<OS_dispatch_queue> _loadQueue;

}

@property (nonatomic,retain) MTPlayerManifest * upNextManifest;                   //@synthesize upNextManifest=_upNextManifest - In the implementation block
@property (nonatomic,retain) MTPlayerManifest * userManifest;                     //@synthesize userManifest=_userManifest - In the implementation block
@property (nonatomic,retain) MTPlayerManifest * currentManifest;                  //@synthesize currentManifest=_currentManifest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> loadQueue;              //@synthesize loadQueue=_loadQueue - In the implementation block
@property (nonatomic,readonly) BOOL isPlayingFromUpNext;                          //@synthesize isPlayingFromUpNext=_isPlayingFromUpNext - In the implementation block
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)activity;
-(id)currentItem;
-(MTPlayerManifest *)userManifest;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentIndex;
-(MTPlayerManifest *)currentManifest;
-(id)metricsContentIdentifier;
-(id)metricsAdditionalData;
-(void)_load:(/*^block*/id)arg1 ;
-(unsigned long long)determineCompositeIndexWithIndex:(unsigned long long)arg1 fromManifest:(id)arg2 ;
-(BOOL)isIndexFromUpNext:(unsigned long long)arg1 ;
-(MTPlayerManifest *)upNextManifest;
-(BOOL)isPlayingFromManifest:(id)arg1 ;
-(BOOL)isPlayingFromUpNext;
-(void)setUpNextManifest:(MTPlayerManifest *)arg1 ;
-(void)setUserManifest:(MTPlayerManifest *)arg1 ;
-(id)initWithUpNextManifest:(id)arg1 userManifest:(id)arg2 ;
-(void)_currentItemDidChange:(id)arg1 ;
-(void)_determineManifest:(id*)arg1 scalledIndex:(unsigned long long*)arg2 forIndex:(unsigned long long)arg3 ;
-(NSObject*<OS_dispatch_queue>)loadQueue;
-(void)_setupManifestDefaults;
-(void)setCurrentManifest:(MTPlayerManifest *)arg1 ;
-(void)notifyCurrentItemDidChange;
-(void)setLoadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

