/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/voiced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <voiced/voiced-Structs.h>
#import <voiced/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface VSSpeechServer : NSObject <NSXPCListenerDelegate> {

	unsigned long long _connectionCount;
	CFRunLoopSourceRef _runloopSourceRef;
	NSXPCListener* _listener;

}

@property (assign,nonatomic) unsigned long long connectionCount;               //@synthesize connectionCount=_connectionCount - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runloopSourceRef;              //@synthesize runloopSourceRef=_runloopSourceRef - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                         //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)resume;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setConnectionCount:(unsigned long long)arg1 ;
-(unsigned long long)connectionCount;
-(void)scheduleBackgroundTask;
-(CFRunLoopSourceRef)runloopSourceRef;
-(void)setRunloopSourceRef:(CFRunLoopSourceRef)arg1 ;
@end
