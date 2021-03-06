/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iapd/iapd-Structs.h>
@class NSMutableDictionary, NSString, NSObject, NSDate, NSArray, IAPApplicationStateMonitor;

@interface MediaPlayerHelper : NSObject {

	NSMutableDictionary* _nowPlayingInfo;
	opaque_pthread_mutex_t _nowPlayingInfoLock;
	NSString* _nowPlayingAppIdentifier;
	NSString* _nowPlayingAppName;
	unsigned char _nowPlayingAppChanged;
	unsigned char _nowPlayingAppIsIPod;
	unsigned char _nowPlayingAppIsIPodRadio;
	unsigned char _nowPlayingAppIsIPodIsValid;
	unsigned char _nowPlayingAppIsPlaying;
	NSObject*<OS_dispatch_queue> nowPlayingHandlerQueue;
	int repeatModeCache;
	int shuffleModeCache;
	int expectedRepeatMode;
	int expectedShuffleMode;
	unsigned expectedRepeatModeTimestamp;
	unsigned expectedShuffleModeTimestamp;
	NSDate* _nowPlayingAppIsPlayingTimestamp;
	NSArray* pbqItems;
	unsigned _fakeStreamTrackIndex;
	unsigned _fakeStreamTrackCount;
	BOOL _fakeStreamTrackIndexSet;
	unsigned _fakeStreamTrackIndexSetTimestamp;
	BOOL _fakeStreamTrackIndexNeedChange;
	unsigned _lastTimeNowPlayingPBRateChangeToPauseOrStop;
	BOOL _explicitControlOccurred;
	BOOL _lastWasStreamPlayback;
	CFArrayRef _currentSupportedCommands;
	BOOL _nowPlayingInfoEverReceived;
	IAPApplicationStateMonitor* _appStateMonitor;
	int _cachedPlaybackStateResult;
	BOOL podcastAppSelected;
	BOOL iBooksAppSelected;
	BOOL iTunesUAppSelected;

}

@property (assign,nonatomic) int repeatModeCache; 
@property (assign,nonatomic) int shuffleModeCache; 
@property (assign,nonatomic) BOOL podcastAppSelected; 
@property (assign,nonatomic) BOOL iBooksAppSelected; 
@property (assign,nonatomic) BOOL iTunesUAppSelected; 
@property (nonatomic,readonly) BOOL fakeStreamTrackIndexSet;                                     //@synthesize fakeStreamTrackIndexSet=_fakeStreamTrackIndexSet - In the implementation block
@property (nonatomic,readonly) BOOL fakeStreamTrackIndexTimeExpired; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> nowPlayingHandlerQueue; 
-(id)init;
-(void)dealloc;
-(double)currentPlaybackTime;
-(void)_canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)_mediaLibraryChanged:(id)arg1 ;
-(void)_supportedCommandsDidChangeNotification;
-(void)_supportedCommandsDidChange:(CFArrayRef)arg1 ;
-(BOOL)_isCommandSupported:(unsigned)arg1 ;
-(BOOL)_isSetElapsedTimeAvailable;
-(void)_playbackQueueDidChangeNotification:(id)arg1 ;
-(void)_handleNowPlayingInfo:(CFDictionaryRef)arg1 ;
-(void)_handleNowPlayingAppIsPlayingDidChange:(unsigned char)arg1 ;
-(MRMediaRemoteCommandInfoRef)_findCommandRefForCommand:(unsigned)arg1 ;
-(void)_nowPlayingInfoChanged:(id)arg1 ;
-(void)_nowPlayingAppIsPlayingChanged:(id)arg1 ;
-(void)initPBQItemsFromQueueQuery;
-(void)_startMusicPlayerNotifications:(id)arg1 ;
-(void)_stopMusicPlayerNotifications:(id)arg1 ;
-(void)_nowPlayingAppChanged:(id)arg1 ;
-(void)_itemPlaybackDidEnd:(id)arg1 ;
-(void)_shuffleModeChanged:(id)arg1 ;
-(void)_nowPlayingItemChanged:(id)arg1 ;
-(int)prepareForPlaybackWithQuery:(id)arg1 andFirstItem:(id)arg2 ;
-(unsigned char)nowPlayingAppIsIPodApp;
-(void)_waitForNowPlayingInfoReceived;
-(BOOL)isLoadingRadioStation;
-(unsigned char)nowPlayingAppIsiBooksApp;
-(unsigned)currentNowPlayingInfoChapterCount;
-(id)currentNowPlayingInfoString:(id)arg1 ;
-(unsigned)currentNowPlayingInfoNumber:(id)arg1 ;
-(BOOL)fakeStreamTrackIndexTimeExpired;
-(unsigned)currentNowPlayingInfoChapter;
-(void)_calcNewFakeStreamIndexCount;
-(unsigned char)nowPlayingAppIsiTunesRadio;
-(id)_nowPlayingInfoDesc:(id)arg1 ;
-(int)nowPlayingAppPlaybackState;
-(unsigned char)nowPlayingAppIsPodcastApp;
-(unsigned char)nowPlayingAppIsiTunesUApp;
-(void)_handlePlaybackQueueDidChange;
-(void)_handleNowPlayingAppDidChange:(id)arg1 ;
-(void)_repeatModeChanged:(id)arg1 ;
-(void)_checkShuffleRepeatModeChange;
-(void)_resetFakeStreamTrackCount;
-(void)_setFakeStreamTrackIndexForSetCurIndex:(unsigned)arg1 ;
-(void)_setFakeStreamTrackIndex:(unsigned)arg1 fromPlay:(BOOL)arg2 ;
-(void)postFakeShuffleModeChanged;
-(unsigned char)nowPlayingAppIsValid;
-(unsigned char)nowPlayingAppIsVideosApp;
-(id)nowPlayingAppName;
-(double)nowPlayingAppPlaybackRate;
-(double)nowPlayingAppPlaybackSpeed;
-(double)currentNowPlayingInfoDuration;
-(unsigned long long)currentNowPlayingInfoPID;
-(id)nowPlayingInfoTitleForAudiobookIndex:(unsigned)arg1 ;
-(unsigned)currentNowPlayingInfoTrack;
-(unsigned)currentNowPlayingInfoTrackCount;
-(unsigned)currentNowPlayingInfoDisc;
-(unsigned)currentNowPlayingInfoDiscCount;
-(unsigned)currentNowPlayingInfoAlbumTrack;
-(unsigned)currentNowPlayingInfoAlbumTrackCount;
-(int)currentShuffleMode;
-(int)currentRepeatMode;
-(void)setExpectedShuffleMode:(int)arg1 ;
-(void)setExpectedRepeatMode:(int)arg1 ;
-(id)currentNowPlayingInfoArtwork;
-(BOOL)currentNowPlayingInfoArtworkExists;
-(BOOL)currentNowPlayingInfoTrackCountExists;
-(id)getPBQItemsFromQueueQuery;
-(void)_printNowPlayingInfo:(id)arg1 forName:(id)arg2 ;
-(void)_setNowPlayingApp:(id)arg1 ;
-(void)notifyExplicitControlOccurred;
-(int)repeatModeCache;
-(void)setRepeatModeCache:(int)arg1 ;
-(int)shuffleModeCache;
-(void)setShuffleModeCache:(int)arg1 ;
-(BOOL)podcastAppSelected;
-(void)setPodcastAppSelected:(BOOL)arg1 ;
-(BOOL)iBooksAppSelected;
-(void)setIBooksAppSelected:(BOOL)arg1 ;
-(BOOL)iTunesUAppSelected;
-(void)setITunesUAppSelected:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)nowPlayingHandlerQueue;
-(BOOL)fakeStreamTrackIndexSet;
@end

