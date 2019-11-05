/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StreamingZip/StreamingUnzipProtocol.h>

@protocol OS_os_transaction, StreamingUnzipDelegateProtocol, OS_dispatch_queue;
@class StreamingUnzipState, NSObject, NSXPCConnection;

@interface StreamingUnzipper : NSObject <StreamingUnzipProtocol> {

	long long _sandboxToken;
	void* _decompressionOutputBuffer;
	StreamingUnzipState* _currentState;
	NSObject*<OS_os_transaction> _sessionTransaction;
	int _activeDelegateMethods;
	double _lastExtractionProgressSent;
	NSXPCConnection* xpcConnection;
	id<StreamingUnzipDelegateProtocol> inProcessExtractorDelegate;
	NSObject*<OS_dispatch_queue> inProcessDelegateQueue;

}

@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection; 
@property (assign,nonatomic,__weak) id<StreamingUnzipDelegateProtocol> inProcessExtractorDelegate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> inProcessDelegateQueue; 
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char*)arg2 options:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)supplyBytes:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)suspendStreamWithReply:(/*^block*/id)arg1 ;
-(void)finishStreamWithReply:(/*^block*/id)arg1 ;
-(void)terminateStreamWithReply:(/*^block*/id)arg1 ;
-(void)setActiveDelegateMethods:(int)arg1 ;
-(id)initForClient:(id)arg1 ;
-(void)setInProcessExtractorDelegate:(id<StreamingUnzipDelegateProtocol>)arg1 ;
-(void)setInProcessDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_extractionEnteredPassThroughMode;
-(void)_setErrorState;
-(id<StreamingUnzipDelegateProtocol>)inProcessExtractorDelegate;
-(NSObject*<OS_dispatch_queue>)inProcessDelegateQueue;
-(id)_beginNonStreamablePassthroughWithRemainingBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)_sendExtractionProgress:(double)arg1 ;
-(void)_sendExtractionCompleteAtArchivePath:(id)arg1 ;
-(void)_supplyBytes:(const char*)arg1 length:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
@end

