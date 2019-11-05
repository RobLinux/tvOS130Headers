/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/SBSRemoteAlertHandleObserver.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class SSRemoteWebViewRequest, NSObject, NSString;

@interface RemoteWebViewOperation : ISOperation <SBSRemoteAlertHandleObserver> {

	BOOL _didActivate;
	/*^block*/id _activationHandler;
	SSRemoteWebViewRequest* _request;
	NSObject*<OS_dispatch_semaphore> _alertSemaphore;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> alertSemaphore;              //@synthesize alertSemaphore=_alertSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL didActivate;                                             //@synthesize didActivate=_didActivate - In the implementation block
@property (nonatomic,copy) id activationHandler;                                           //@synthesize activationHandler=_activationHandler - In the implementation block
@property (nonatomic,readonly) SSRemoteWebViewRequest * request;                           //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)run;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(SSRemoteWebViewRequest *)request;
-(void)setActivationHandler:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)activationHandler;
-(void)setDidActivate:(BOOL)arg1 ;
-(BOOL)didActivate;
-(id)initWithWebViewRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)alertSemaphore;
-(void)_sendActivationWithError:(id)arg1 ;
-(void)setAlertSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end
