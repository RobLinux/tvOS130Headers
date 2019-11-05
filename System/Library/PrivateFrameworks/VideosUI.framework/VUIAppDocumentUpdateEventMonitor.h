/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSDate;

@interface VUIAppDocumentUpdateEventMonitor : NSObject {

	BOOL _appIsInForeground;
	BOOL _pendingPlayactivity;
	BOOL _ignoreWLKPlaybackReportNotification;
	int _playbackReportToken;
	NSMapTable* _observerMapTable;
	NSDate* _lastProcesssedPlayActivity;

}

@property (nonatomic,retain) NSMapTable * observerMapTable;                    //@synthesize observerMapTable=_observerMapTable - In the implementation block
@property (assign,nonatomic) int playbackReportToken;                          //@synthesize playbackReportToken=_playbackReportToken - In the implementation block
@property (nonatomic,retain) NSDate * lastProcesssedPlayActivity;              //@synthesize lastProcesssedPlayActivity=_lastProcesssedPlayActivity - In the implementation block
+(id)sharedMonitor;
+(BOOL)_isAppRefreshEventType:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)removeObserver:(id)arg1 ;
-(void)_handleAppDidEnterBackgroundNotification:(id)arg1 ;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1 ;
-(void)_handleSettingsDidChangeNotification:(id)arg1 ;
-(void)_handleAppLibraryDidChangeNotification:(id)arg1 ;
-(void)_handleUpNextRequestDidFinishNotification:(id)arg1 ;
-(void)_handlePurchaseFlowDidFinishNotification:(id)arg1 ;
-(void)_handleSubscriptionDidChangeNotification:(id)arg1 ;
-(void)_handleFavoritesRequestDidFinishNotification:(id)arg1 ;
-(void)_handleRemoveFromPlayHistoryRequestDidFinishNotification:(id)arg1 ;
-(void)_handleClearFromPlayHistoryRequestDidFinishNotification:(id)arg1 ;
-(void)_handleAccountDidChangeNotification:(id)arg1 ;
-(void)_handleRestrictionsDidChangeNotification:(id)arg1 ;
-(void)_handleUTSKDidChangeNotification:(id)arg1 ;
-(void)_handlePreferredVideoFormatDidChangeNotification:(id)arg1 ;
-(void)_handlePlayHistoryUpdatedNotification:(id)arg1 ;
-(void)_handleLocationAuthorizationDidChangeNotification:(id)arg1 ;
-(void)_handleLocationDidChangeNotification:(id)arg1 ;
-(void)_handleAppWillEnterForegroundNotification:(id)arg1 ;
-(void)_handleNowPlayingWillStartNotification:(id)arg1 ;
-(void)_handleNowPlayingDidEndNotification:(id)arg1 ;
-(void)_handlePostPlayUpNextShouldUpdateNotification:(id)arg1 ;
-(void)_handleClearPlayHistoryNotification:(id)arg1 ;
-(void)_handleXPUpNextRequestDidFinishNotification:(id)arg1 ;
-(void)_handleXPPurchaseFlowDidFinishNotification:(id)arg1 ;
-(void)_handlePlaybackReportNotification;
-(NSMapTable *)observerMapTable;
-(void)_notifyObserver:(id)arg1 ofRefreshEvent:(id)arg2 ;
-(void)_notifyObserversOfEvent:(id)arg1 ;
-(NSDate *)lastProcesssedPlayActivity;
-(void)setLastProcesssedPlayActivity:(NSDate *)arg1 ;
-(void)addObserver:(id)arg1 forEventDescriptors:(id)arg2 ;
-(void)_handleEntitlementsDidChangeNotification:(id)arg1 ;
-(void)setObserverMapTable:(NSMapTable *)arg1 ;
-(int)playbackReportToken;
-(void)setPlaybackReportToken:(int)arg1 ;
@end

