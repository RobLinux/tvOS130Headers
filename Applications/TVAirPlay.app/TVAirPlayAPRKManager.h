/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:07:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVAirPlay.app/TVAirPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVAirPlay/TVAirPlay-Structs.h>
#import <TVAirPlay/TVAirPlayAPRKSessionDelegate.h>
#import <TVAirPlay/APRKStreamRenderingManagerDelegate.h>
#import <TVAirPlay/APRKStreamRendererDelegate.h>
#import <TVAirPlay/TVAirPlayLegacyReceiverDelegateEventSink.h>

@protocol OS_dispatch_queue;
@class NSObject, APRKStreamRenderingManager, TVAirPlaySessionManager, TVAirPlayLegacyReceiverDelegate, APRKStreamRenderer, NSString;

@interface TVAirPlayAPRKManager : NSObject <TVAirPlayAPRKSessionDelegate, APRKStreamRenderingManagerDelegate, APRKStreamRendererDelegate, TVAirPlayLegacyReceiverDelegateEventSink> {

	BOOL _started;
	BOOL _hasActiveRenderer;
	NSObject*<OS_dispatch_queue> _delegateSerialQueue;
	APRKStreamRenderingManager* _streamRenderingManager;
	TVAirPlaySessionManager* _sessionManager;
	TVAirPlayLegacyReceiverDelegate* _legacyReceiverDelegate;
	APRKStreamRenderer* _activeRenderer;

}

@property (assign,nonatomic) BOOL started;                                                          //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL hasActiveRenderer;                                                //@synthesize hasActiveRenderer=_hasActiveRenderer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateSerialQueue;                      //@synthesize delegateSerialQueue=_delegateSerialQueue - In the implementation block
@property (nonatomic,retain) APRKStreamRenderingManager * streamRenderingManager;                   //@synthesize streamRenderingManager=_streamRenderingManager - In the implementation block
@property (nonatomic,retain) TVAirPlaySessionManager * sessionManager;                              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,retain) TVAirPlayLegacyReceiverDelegate * legacyReceiverDelegate;              //@synthesize legacyReceiverDelegate=_legacyReceiverDelegate - In the implementation block
@property (nonatomic,retain) APRKStreamRenderer * activeRenderer;                                   //@synthesize activeRenderer=_activeRenderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)started;
-(void)setStarted:(BOOL)arg1 ;
-(void)setSessionManager:(TVAirPlaySessionManager *)arg1 ;
-(TVAirPlaySessionManager *)sessionManager;
-(void)didChangeStreamRendererModeTo:(unsigned long long)arg1 forRenderer:(id)arg2 ;
-(void)didStartStreamingWithRenderer:(id)arg1 ;
-(void)didStopStreamingWithRenderer:(id)arg1 ;
-(void)shouldShowGlobalPasscodeWithString:(id)arg1 withClientName:(id)arg2 ;
-(void)shouldHideGlobalPasscode;
-(void)startReceiverServer;
-(void)stopReceiverServer;
-(id)initWithSessionManager:(id)arg1 streamRenderingManager:(id)arg2 legacyReceiverDelegate:(id)arg3 ;
-(APRKStreamRenderingManager *)streamRenderingManager;
-(APRKStreamRenderer *)activeRenderer;
-(void)_enqueueAsyncDelegateSerialQueueBlock:(/*^block*/id)arg1 ;
-(TVAirPlayLegacyReceiverDelegate *)legacyReceiverDelegate;
-(NSObject*<OS_dispatch_queue>)delegateSerialQueue;
-(void)_stopAndClearActiveRenderer;
-(void)_deregisterActiveVideoSessionIfRequired;
-(void)setActiveRenderer:(APRKStreamRenderer *)arg1 ;
-(void)_registerActiveVideoSessionIfRequiredForRenderer:(id)arg1 ;
-(void)_onMainQueue_deregisterSession:(id)arg1 ;
-(void)_onMainQueue_registerGlobalPinSession:(id)arg1 clientName:(id)arg2 ;
-(void)_performSessionManagerWorkOnMainQueueWithBlock:(/*^block*/id)arg1 ;
-(void)_onMainQueue_deregisterGlobalPinSession;
-(void)setHasActiveRenderer:(BOOL)arg1 ;
-(void)_onMainQueue_registerSession:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)sessionDidReceiveUserStop:(id)arg1 ;
-(void)airPlayReceiverDelegate:(id)arg1 postEvent:(id)arg2 withInfo:(id)arg3 ;
-(BOOL)hasActiveRenderer;
-(void)setDelegateSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStreamRenderingManager:(APRKStreamRenderingManager *)arg1 ;
-(void)setLegacyReceiverDelegate:(TVAirPlayLegacyReceiverDelegate *)arg1 ;
@end

