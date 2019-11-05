/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiverKit.framework/AirPlayReceiverKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlayReceiverKit/AirPlayReceiverKit-Structs.h>
#import <AVFoundation/AVQueuePlayer.h>
#import <AirPlayReceiverKit/APRKResourceLoaderHelperDelegate.h>
#import <AirPlayReceiverKit/APRKContentKeyHelperDelegate.h>

@protocol APRKMediaPlayerMessagingDelegate, OS_dispatch_queue;
@class NSString, NSObject, NSArray, NSDictionary, APRKResourceLoaderHelper, APRKContentKeyHelper, NSMutableDictionary, APRKMetadata, UIView;

@interface APRKMediaPlayer : AVQueuePlayer <APRKResourceLoaderHelperDelegate, APRKContentKeyHelperDelegate> {

	NSString* _previousItemUUID;
	NSString* _currentItemUUID;
	BOOL _isInterestedInDateRange;
	long long _stallCount;
	id<APRKMediaPlayerMessagingDelegate> _messagingDelegate;
	NSObject*<OS_dispatch_queue> _messageQueue;
	NSArray* _cachedSelectedMediaArray;
	NSDictionary* _cachedSSLProperties;
	APRKResourceLoaderHelper* _resourceLoaderHelper;
	APRKContentKeyHelper* _contentKeyHelper;
	NSMutableDictionary* _UUIDToMediaItemDictionary;
	OpaqueAPReceiverFairPlayHelperRef _fpHelper;
	long long _internalPlaybackState;
	APRKMetadata* _currentItemMetadata;

}

@property (nonatomic,retain) APRKMetadata * currentItemMetadata;              //@synthesize currentItemMetadata=_currentItemMetadata - In the implementation block
@property (nonatomic,readonly) UIView * playerView; 
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopWithCompletionBlock:(/*^block*/id)arg1 ;
-(UIView *)playerView;
-(void)contentKeyHelper:(id)arg1 wantsToPerformContentKeyRequestWithDictionary:(id)arg2 ;
-(void)contentKeyHelper:(id)arg1 didGenerateSecureStopRecordPayload:(id)arg2 ;
-(void)resourceLoaderHelper:(id)arg1 wantsToPerformUnhandledURLRequestWithDictionary:(id)arg2 forRequestID:(id)arg3 ;
-(void)_registerNotificationHandlersForPlayer;
-(void)_unregisterNotificationHandlersForPlayerItem:(id)arg1 ;
-(void)_unregisterNotificationHandlersForPlayer;
-(void)_updatePlaybackStateWithState:(long long)arg1 stoppedBecauseInterrupted:(BOOL)arg2 ;
-(id)_baseDictionaryForResponseToRequestWithDictionary:(id)arg1 ;
-(void)_sendUpstreamMessageWithDictonary:(id)arg1 ;
-(void)_handleSetValueOfPropertyWithRequestDictionary:(id)arg1 ;
-(id)_handleGetValueForPropertyWithRequestDictionary:(id)arg1 ;
-(id)_currentPlaybackInfoDictionary;
-(id)_SSLPropertiesforTLSInfo:(id)arg1 ;
-(void)_registerNotificationHandlersForPlayerItem:(id)arg1 ;
-(id)messagingDelegate;
-(void)_handleCurrentItemChangedNotification:(id)arg1 ;
-(void)_handleCurrentItemPlaybackStalledNotification:(id)arg1 ;
-(void)_handleTimeJumpedNotification:(id)arg1 ;
-(void)_handleCurrentItemPlayedToEndNotification:(id)arg1 ;
-(void)setIsInterestedInDateRange:(BOOL)arg1 ;
-(APRKMetadata *)currentItemMetadata;
-(void)setCurrentItemMetadata:(APRKMetadata *)arg1 ;
-(BOOL)_attemptToSetSelectedMediaArray:(id)arg1 ;
-(id)_baseDictionaryForUpstreamMessageWithType:(id)arg1 ;
-(void)_sendUpstreamPlaybackStateMessageWithPlaybackStateString:(id)arg1 stoppedBecauseInterrupted:(BOOL)arg2 ;
-(id)_UUIDForAVPlayerItem:(id)arg1 ;
-(void)_prepareForNewItemPlaybackWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setMessagingDelegate:(id)arg1 ;
-(void)executeActionForMessageWithDictionary:(id)arg1 ;
-(void)processTLSInfoDictionary:(id)arg1 ;
-(BOOL)isInterestedInDateRange;
-(BOOL)_ensureFairPlayHelper;
-(void)_sendUpstreamErrorMessageWithError:(id)arg1 ;
-(void)_sendUpstreamRemoteControlMessageWithControlString:(id)arg1 ;
@end

