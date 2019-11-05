/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSGLSessionManagerDelegate;
@class NSString, NSMutableArray;

@interface IDSGLSessionManager : NSObject {

	id<IDSGLSessionManagerDelegate> _delegate;
	/*^block*/id _sendBlock;
	/*^block*/id _recvBlock;
	NSString* _sessionID;
	BOOL _isServer;
	int _zudpFd;
	int _connFd;
	int _streamFd;
	NSMutableArray* _serverDataBufferArray;

}
-(void)dealloc;
-(void)invalidate;
-(BOOL)_startReliableServer;
-(BOOL)_startReliableClient;
-(void)_sendServerBufferedData;
-(long long)sendGenericData:(char*)arg1 dataLength:(unsigned long long)arg2 linkID:(char)arg3 ;
-(id)initWithDelegate:(id)arg1 sendBlock:(/*^block*/id)arg2 recvBlock:(/*^block*/id)arg3 sessionID:(id)arg4 ;
-(BOOL)startReliableSession:(BOOL)arg1 ;
-(void)setServerStreamFd:(int)arg1 isServer:(BOOL)arg2 ;
-(void)recvGenericData:(char*)arg1 dataLength:(unsigned long long)arg2 linkID:(char)arg3 ;
-(long long)sendZUDPData:(char*)arg1 dataLength:(long long)arg2 linkID:(char)arg3 ;
-(void)recvZUDPData:(char*)arg1 dataLength:(unsigned long long)arg2 linkID:(char)arg3 ;
@end

