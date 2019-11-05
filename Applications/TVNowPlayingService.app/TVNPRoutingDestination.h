/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:01:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVNowPlayingService.app/TVNowPlayingService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, NSNumber;

@interface TVNPRoutingDestination : NSObject {

	NSString* _title;
	NSString* _subtitle;
	NSString* _singleLineTitle;
	UIImage* _image;
	NSString* _destinationName;
	BOOL _isCurrentDestination;
	BOOL _local;
	unsigned long long _playbackState;
	unsigned long long _effectiveDeviceType;
	NSString* _uniqueIdentifier;
	NSNumber* _volumeLevel;
	NSString* _nowPlayingBundleIdentifier;
	BOOL _paired;
	BOOL _connected;
	BOOL _disconnected;

}

@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * singleLineTitle;                               //@synthesize singleLineTitle=_singleLineTitle - In the implementation block
@property (nonatomic,retain) UIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * destinationName;                               //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isCurrentDestination;                              //@synthesize isCurrentDestination=_isCurrentDestination - In the implementation block
@property (assign,nonatomic) unsigned long long playbackState;                       //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,copy) NSString * nowPlayingBundleIdentifier;                    //@synthesize nowPlayingBundleIdentifier=_nowPlayingBundleIdentifier - In the implementation block
@property (getter=isLocal,nonatomic,readonly) BOOL local;                            //@synthesize local=_local - In the implementation block
@property (nonatomic,readonly) unsigned long long effectiveDeviceType;               //@synthesize effectiveDeviceType=_effectiveDeviceType - In the implementation block
@property (nonatomic,copy) NSNumber * volumeLevel;                                   //@synthesize volumeLevel=_volumeLevel - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired;                          //@synthesize paired=_paired - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected;                    //@synthesize connected=_connected - In the implementation block
@property (getter=isDisconnected,nonatomic,readonly) BOOL disconnected;              //@synthesize disconnected=_disconnected - In the implementation block
-(id)init;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isConnected;
-(BOOL)isLocal;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDestinationName:(NSString *)arg1 ;
-(NSString *)destinationName;
-(void)setPlaybackState:(unsigned long long)arg1 ;
-(unsigned long long)playbackState;
-(BOOL)isPaired;
-(NSNumber *)volumeLevel;
-(void)setVolumeLevel:(NSNumber *)arg1 ;
-(BOOL)isDisconnected;
-(void)togglePlayPause;
-(id)initWithEndpointRoute:(id)arg1 ;
-(void)refreshPropertiesWithRoute:(id)arg1 ;
-(void)connectAndPair;
-(void)setSingleLineTitle:(NSString *)arg1 ;
-(void)setNowPlayingBundleIdentifier:(NSString *)arg1 ;
-(void)setIsCurrentDestination:(BOOL)arg1 ;
-(NSString *)nowPlayingBundleIdentifier;
-(BOOL)isCurrentDestination;
-(NSString *)singleLineTitle;
-(unsigned long long)effectiveDeviceType;
@end

