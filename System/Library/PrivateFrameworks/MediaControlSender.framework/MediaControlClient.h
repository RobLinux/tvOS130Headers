/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaControlSender/MediaControlSender-Structs.h>
@class NSObject;

@interface MediaControlClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	MediaControlClientImpRef _client;
	NSObject*<OS_dispatch_queue> _eventHandlerQueue;
	/*^block*/id _eventHandlerBlock;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setHost:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(MediaControlClientImpRef)internalClient;
-(void)checkAuthentication;
-(void)ensureConnected;
-(void)ensureDisconnected;
-(void)performRemoteAction:(id)arg1 withParams:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setEventHandlerQueue:(id)arg1 eventHandlerBlock:(/*^block*/id)arg2 ;
-(void)startPresentation:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)sendPhotoData:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)sendPhotoData:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getProperty:(id)arg1 qualifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completionQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)getSlideshowFeaturesWithOptions:(unsigned)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getSlideshowInfoWithOptions:(unsigned)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setSlideshowInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

