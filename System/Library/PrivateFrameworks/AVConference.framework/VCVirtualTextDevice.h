/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaStreamProtocol.h>
#import <AVConference/VCTextSender.h>
#import <AVConference/VCTextReceiverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface VCVirtualTextDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCTextReceiverDelegate> {

	int _clientPid;
	long long _state;
	NSObject*<OS_dispatch_queue> _queue;
	id _sendDelegate;
	id _mediaStreamDelegate;
	NSObject*<OS_dispatch_queue> _mediaStreamDelegateQueue;

}

@property (assign,nonatomic) NSObject*<VCMediaStreamDelegate> mediaStreamDelegate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mediaStreamDelegateQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)resume;
-(void)start;
-(void)stop;
-(void)pause;
-(void)setPause:(BOOL)arg1 ;
-(void)sendCharacter:(unsigned short)arg1 ;
-(void)sendText:(NSString*)arg1 ;
-(void)didReceiveText:(NSString*)arg1 ;
-(id)initWithSendDelegate:(id)arg1 clientPid:(int)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(BOOL)setStreamConfig:(id)arg1 withError:(id*)arg2 ;
-(NSObject*<VCMediaStreamDelegate>)mediaStreamDelegate;
-(id)sendDelegate;
-(NSObject*<OS_dispatch_queue>)mediaStreamDelegateQueue;
-(void)setMediaStreamDelegate:(NSObject*<VCMediaStreamDelegate>)arg1 ;
-(void)setMediaStreamDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

