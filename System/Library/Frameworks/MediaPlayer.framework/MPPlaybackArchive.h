/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/NSSecureCoding.h>

@class MPPlaybackArchiveDisplayProperties, NSString, NSData;

@interface MPPlaybackArchive : NSObject <NSSecureCoding> {

	MPPlaybackArchiveDisplayProperties* _displayProperties;
	NSString* _bundleIdentifier;
	unsigned long long _supportedOptions;
	unsigned long long _copyOptions;
	unsigned long long _queueControlOptions;
	NSString* _playbackSessionIdentifier;
	NSString* _playbackSessionType;
	NSData* _playbackSessionData;

}

@property (assign,nonatomic) unsigned long long copyOptions;                                        //@synthesize copyOptions=_copyOptions - In the implementation block
@property (assign,nonatomic) unsigned long long queueControlOptions;                                //@synthesize queueControlOptions=_queueControlOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * playbackSessionIdentifier;                           //@synthesize playbackSessionIdentifier=_playbackSessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * playbackSessionType;                                 //@synthesize playbackSessionType=_playbackSessionType - In the implementation block
@property (nonatomic,copy,readonly) NSData * playbackSessionData;                                   //@synthesize playbackSessionData=_playbackSessionData - In the implementation block
@property (nonatomic,readonly) MPPlaybackArchiveDisplayProperties * displayProperties;              //@synthesize displayProperties=_displayProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedOptions;                                 //@synthesize supportedOptions=_supportedOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)createPlaybackArchiveForPlayerID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSData *)playbackSessionData;
-(NSString *)playbackSessionIdentifier;
-(MPPlaybackArchiveDisplayProperties *)displayProperties;
-(id)copyWithOptions:(unsigned long long)arg1 ;
-(id)initWithPlaybackSessionIdentifier:(id)arg1 playbackSessionData:(id)arg2 playbackSessionType:(id)arg3 bundleIdentifier:(id)arg4 supportedOptions:(unsigned long long)arg5 displayProperties:(id)arg6 ;
-(void)setBOOLValue:(BOOL)arg1 forOption:(long long)arg2 ;
-(BOOL)boolValueForOption:(long long)arg1 ;
-(id)initWithPlaybackSessionIdentifier:(id)arg1 playbackSessionData:(id)arg2 playbackSessionType:(id)arg3 bundleIdentifier:(id)arg4 displayProperties:(id)arg5 ;
-(unsigned long long)supportedOptions;
-(unsigned long long)copyOptions;
-(void)setCopyOptions:(unsigned long long)arg1 ;
-(unsigned long long)queueControlOptions;
-(void)setQueueControlOptions:(unsigned long long)arg1 ;
-(NSString *)playbackSessionType;
@end

