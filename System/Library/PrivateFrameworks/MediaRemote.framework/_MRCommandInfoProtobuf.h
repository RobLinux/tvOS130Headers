/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MediaRemote/NSCopying.h>

@class NSMutableArray, NSString;

@interface _MRCommandInfoProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR1* _preferredIntervals;
	SCD_Struct_MR8* _supportedInsertionPositions;
	SCD_Struct_MR8* _supportedPlaybackQueueTypes;
	SCD_Struct_MR20* _supportedRates;
	int _canScrub;
	int _command;
	NSMutableArray* _currentPlaybackSessionTypes;
	NSString* _localizedShortTitle;
	NSString* _localizedTitle;
	float _maximumRating;
	float _minimumRating;
	int _numAvailableSkips;
	NSString* _playbackSessionIdentifier;
	float _preferredPlaybackRate;
	int _presentationStyle;
	int _repeatMode;
	int _shuffleMode;
	int _skipFrequency;
	int _skipInterval;
	NSMutableArray* _supportedCustomQueueIdentifiers;
	NSMutableArray* _supportedPlaybackSessionTypes;
	int _upNextItemCount;
	BOOL _active;
	BOOL _enabled;
	BOOL _supportsSharedQueue;
	SCD_Struct_MR21 _has;

}

@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) int command;                                                        //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) BOOL enabled;                                                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL hasActive; 
@property (assign,nonatomic) BOOL active;                                                        //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredIntervalsCount; 
@property (nonatomic,readonly) double* preferredIntervals; 
@property (nonatomic,readonly) BOOL hasLocalizedTitle; 
@property (nonatomic,retain) NSString * localizedTitle;                                          //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedShortTitle; 
@property (nonatomic,retain) NSString * localizedShortTitle;                                     //@synthesize localizedShortTitle=_localizedShortTitle - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumRating; 
@property (assign,nonatomic) float minimumRating;                                                //@synthesize minimumRating=_minimumRating - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumRating; 
@property (assign,nonatomic) float maximumRating;                                                //@synthesize maximumRating=_maximumRating - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedRatesCount; 
@property (nonatomic,readonly) float* supportedRates; 
@property (assign,nonatomic) BOOL hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                                     //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                                    //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (assign,nonatomic) BOOL hasPresentationStyle; 
@property (assign,nonatomic) int presentationStyle;                                              //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) BOOL hasSkipInterval; 
@property (assign,nonatomic) int skipInterval;                                                   //@synthesize skipInterval=_skipInterval - In the implementation block
@property (assign,nonatomic) BOOL hasNumAvailableSkips; 
@property (assign,nonatomic) int numAvailableSkips;                                              //@synthesize numAvailableSkips=_numAvailableSkips - In the implementation block
@property (assign,nonatomic) BOOL hasSkipFrequency; 
@property (assign,nonatomic) int skipFrequency;                                                  //@synthesize skipFrequency=_skipFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasCanScrub; 
@property (assign,nonatomic) int canScrub;                                                       //@synthesize canScrub=_canScrub - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedPlaybackQueueTypesCount; 
@property (nonatomic,readonly) int* supportedPlaybackQueueTypes; 
@property (nonatomic,retain) NSMutableArray * supportedCustomQueueIdentifiers;                   //@synthesize supportedCustomQueueIdentifiers=_supportedCustomQueueIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedInsertionPositionsCount; 
@property (nonatomic,readonly) int* supportedInsertionPositions; 
@property (assign,nonatomic) BOOL hasSupportsSharedQueue; 
@property (assign,nonatomic) BOOL supportsSharedQueue;                                           //@synthesize supportsSharedQueue=_supportsSharedQueue - In the implementation block
@property (assign,nonatomic) BOOL hasUpNextItemCount; 
@property (assign,nonatomic) int upNextItemCount;                                                //@synthesize upNextItemCount=_upNextItemCount - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredPlaybackRate; 
@property (assign,nonatomic) float preferredPlaybackRate;                                        //@synthesize preferredPlaybackRate=_preferredPlaybackRate - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedPlaybackSessionTypes;                     //@synthesize supportedPlaybackSessionTypes=_supportedPlaybackSessionTypes - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentPlaybackSessionTypes;                       //@synthesize currentPlaybackSessionTypes=_currentPlaybackSessionTypes - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackSessionIdentifier; 
@property (nonatomic,retain) NSString * playbackSessionIdentifier;                               //@synthesize playbackSessionIdentifier=_playbackSessionIdentifier - In the implementation block
+(Class)supportedCustomQueueIdentifierType;
+(Class)supportedPlaybackSessionTypesType;
+(Class)currentPlaybackSessionTypesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(int)presentationStyle;
-(void)setPresentationStyle:(int)arg1 ;
-(BOOL)active;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasEnabled;
-(void)setCommand:(int)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(int)command;
-(BOOL)hasLocalizedTitle;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(void)setHasRepeatMode:(BOOL)arg1 ;
-(BOOL)hasRepeatMode;
-(id)repeatModeAsString:(int)arg1 ;
-(int)StringAsRepeatMode:(id)arg1 ;
-(int)shuffleMode;
-(void)setShuffleMode:(int)arg1 ;
-(void)setHasShuffleMode:(BOOL)arg1 ;
-(BOOL)hasShuffleMode;
-(id)shuffleModeAsString:(int)arg1 ;
-(int)StringAsShuffleMode:(id)arg1 ;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(void)addSupportedCustomQueueIdentifier:(id)arg1 ;
-(void)addSupportedPlaybackSessionTypes:(id)arg1 ;
-(void)addCurrentPlaybackSessionTypes:(id)arg1 ;
-(unsigned long long)preferredIntervalsCount;
-(void)clearPreferredIntervals;
-(double)preferredIntervalAtIndex:(unsigned long long)arg1 ;
-(void)addPreferredInterval:(double)arg1 ;
-(unsigned long long)supportedRatesCount;
-(void)clearSupportedRates;
-(float)supportedRateAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedRate:(float)arg1 ;
-(void)setLocalizedShortTitle:(NSString *)arg1 ;
-(unsigned long long)supportedPlaybackQueueTypesCount;
-(void)clearSupportedPlaybackQueueTypes;
-(int)supportedPlaybackQueueTypesAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedPlaybackQueueTypes:(int)arg1 ;
-(unsigned long long)supportedCustomQueueIdentifiersCount;
-(void)clearSupportedCustomQueueIdentifiers;
-(id)supportedCustomQueueIdentifierAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedInsertionPositionsCount;
-(void)clearSupportedInsertionPositions;
-(int)supportedInsertionPositionsAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedInsertionPositions:(int)arg1 ;
-(unsigned long long)supportedPlaybackSessionTypesCount;
-(void)clearSupportedPlaybackSessionTypes;
-(id)supportedPlaybackSessionTypesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentPlaybackSessionTypesCount;
-(void)clearCurrentPlaybackSessionTypes;
-(id)currentPlaybackSessionTypesAtIndex:(unsigned long long)arg1 ;
-(void)setPlaybackSessionIdentifier:(NSString *)arg1 ;
-(void)setHasActive:(BOOL)arg1 ;
-(BOOL)hasActive;
-(double*)preferredIntervals;
-(void)setPreferredIntervals:(double*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasLocalizedShortTitle;
-(void)setMinimumRating:(float)arg1 ;
-(void)setHasMinimumRating:(BOOL)arg1 ;
-(BOOL)hasMinimumRating;
-(void)setMaximumRating:(float)arg1 ;
-(void)setHasMaximumRating:(BOOL)arg1 ;
-(BOOL)hasMaximumRating;
-(float*)supportedRates;
-(void)setSupportedRates:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasPresentationStyle:(BOOL)arg1 ;
-(BOOL)hasPresentationStyle;
-(void)setSkipInterval:(int)arg1 ;
-(void)setHasSkipInterval:(BOOL)arg1 ;
-(BOOL)hasSkipInterval;
-(void)setNumAvailableSkips:(int)arg1 ;
-(void)setHasNumAvailableSkips:(BOOL)arg1 ;
-(BOOL)hasNumAvailableSkips;
-(void)setSkipFrequency:(int)arg1 ;
-(void)setHasSkipFrequency:(BOOL)arg1 ;
-(BOOL)hasSkipFrequency;
-(void)setCanScrub:(int)arg1 ;
-(void)setHasCanScrub:(BOOL)arg1 ;
-(BOOL)hasCanScrub;
-(int*)supportedPlaybackQueueTypes;
-(void)setSupportedPlaybackQueueTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)supportedInsertionPositions;
-(void)setSupportedInsertionPositions:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setSupportsSharedQueue:(BOOL)arg1 ;
-(void)setHasSupportsSharedQueue:(BOOL)arg1 ;
-(BOOL)hasSupportsSharedQueue;
-(void)setUpNextItemCount:(int)arg1 ;
-(void)setHasUpNextItemCount:(BOOL)arg1 ;
-(BOOL)hasUpNextItemCount;
-(void)setPreferredPlaybackRate:(float)arg1 ;
-(void)setHasPreferredPlaybackRate:(BOOL)arg1 ;
-(BOOL)hasPreferredPlaybackRate;
-(BOOL)hasPlaybackSessionIdentifier;
-(NSString *)localizedShortTitle;
-(float)minimumRating;
-(float)maximumRating;
-(int)skipInterval;
-(int)numAvailableSkips;
-(int)skipFrequency;
-(int)canScrub;
-(NSMutableArray *)supportedCustomQueueIdentifiers;
-(void)setSupportedCustomQueueIdentifiers:(NSMutableArray *)arg1 ;
-(BOOL)supportsSharedQueue;
-(int)upNextItemCount;
-(float)preferredPlaybackRate;
-(NSMutableArray *)supportedPlaybackSessionTypes;
-(void)setSupportedPlaybackSessionTypes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentPlaybackSessionTypes;
-(void)setCurrentPlaybackSessionTypes:(NSMutableArray *)arg1 ;
-(NSString *)playbackSessionIdentifier;
@end

