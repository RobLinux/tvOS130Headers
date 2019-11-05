/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCCaptionsSourceDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, AVConferenceXPCClient, NSObject, NSString;

@interface VCCaptionsManager : NSObject <VCCaptionsSourceDelegate> {

	NSMutableDictionary* _streamTokenList;
	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(void)notifyClientsWithStreamToken:(long long)arg1 service:(char*)arg2 arguments:(id)arg3 ;
-(void)streamToken:(long long)arg1 didEnableCaptions:(BOOL)arg2 error:(id)arg3 ;
-(void)streamToken:(long long)arg1 didDisableCaptions:(BOOL)arg2 error:(id)arg3 ;
-(void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2 ;
-(void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2 ;
-(void)streamToken:(long long)arg1 didUpdateCaptions:(id)arg2 ;
-(void)registerCaptionsSource:(id)arg1 streamToken:(long long)arg2 ;
-(void)unregisterCaptionsSourceWithStreamToken:(long long)arg1 ;
-(id)captionsSourceFromClientContext:(id)arg1 ;
@end

