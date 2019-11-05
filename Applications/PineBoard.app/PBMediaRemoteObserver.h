/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PBSBulletinServiceDelegate.h>

@protocol PBMediaRemoteObserverDelegate;
@class PBBulletinService, NSNumber, PBSBulletin, NSString;

@interface PBMediaRemoteObserver : NSObject <PBSBulletinServiceDelegate> {

	PBBulletinService* _bulletinService;
	NSNumber* _lastNotificationPID;
	BOOL _metadataUpdateRunning;
	BOOL _playing;
	BOOL _playingMusic;
	BOOL _isMusicAppPlaying;
	BOOL _isPodcastsAppPlaying;
	int _nowPlayingProcessPID;
	NSNumber* _playbackRate;
	PBSBulletin* _currentBulletin;
	id<PBMediaRemoteObserverDelegate> _delegate;
	NSNumber* _trackIdentifier;
	NSString* _mediaType;

}

@property (nonatomic,copy,readonly) NSNumber * trackIdentifier;                              //@synthesize trackIdentifier=_trackIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaType;                                    //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) PBSBulletin * currentBulletin;                                  //@synthesize currentBulletin=_currentBulletin - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * playbackRate;                                 //@synthesize playbackRate=_playbackRate - In the implementation block
@property (nonatomic,readonly) BOOL playing;                                                 //@synthesize playing=_playing - In the implementation block
@property (nonatomic,readonly) BOOL playingMusic;                                            //@synthesize playingMusic=_playingMusic - In the implementation block
@property (nonatomic,readonly) BOOL isMusicAppPlaying;                                       //@synthesize isMusicAppPlaying=_isMusicAppPlaying - In the implementation block
@property (nonatomic,readonly) BOOL isPodcastsAppPlaying;                                    //@synthesize isPodcastsAppPlaying=_isPodcastsAppPlaying - In the implementation block
@property (nonatomic,readonly) int nowPlayingProcessPID;                                     //@synthesize nowPlayingProcessPID=_nowPlayingProcessPID - In the implementation block
@property (assign,nonatomic,__weak) id<PBMediaRemoteObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_allAudioMediaTypes;
+(id)_bulletinInfoForNowPlayingInfo:(id)arg1 ;
-(void)dealloc;
-(id<PBMediaRemoteObserverDelegate>)delegate;
-(void)setDelegate:(id<PBMediaRemoteObserverDelegate>)arg1 ;
-(void)startObserving;
-(void)stopObserving;
-(NSNumber *)playbackRate;
-(NSString *)mediaType;
-(BOOL)playing;
-(void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3 ;
-(int)nowPlayingProcessPID;
-(PBSBulletin *)currentBulletin;
-(void)setCurrentBulletin:(PBSBulletin *)arg1 ;
-(void)_nowPlayingAppDidChange:(id)arg1 ;
-(void)_nowPlayingAppPlaybackStateDidChange:(id)arg1 ;
-(void)_nowPlayingInfoDidChange:(id)arg1 ;
-(void)_setNeedsMetadataUpdate;
-(void)_performMetadataUpdate;
-(void)_updateWithNowPlayingInfoDictionary:(id)arg1 playbackState:(unsigned)arg2 nowPlayingPID:(int)arg3 ;
-(void)_presentTrackChangeBulletinWithInfo:(id)arg1 ;
-(BOOL)nowPlayingMediaTypeAudioOnly;
-(BOOL)playingMusic;
-(BOOL)isMusicAppPlaying;
-(BOOL)isPodcastsAppPlaying;
-(NSNumber *)trackIdentifier;
@end
