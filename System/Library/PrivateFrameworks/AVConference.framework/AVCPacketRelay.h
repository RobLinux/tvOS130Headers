/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCPacketRelayDelegate, AVCPacketRelayConnectionProtocol, OS_dispatch_queue;
@class AVCPacketRelayDriver, NSArray, NSObject;

@interface AVCPacketRelay : NSObject {

	AVCPacketRelayDriver* _packetDriver;
	id<AVCPacketRelayDelegate> _delegate;
	NSArray* _connections;
	id<AVCPacketRelayConnectionProtocol> _multiplexedConnection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSArray * connections;                                                   //@synthesize connections=_connections - In the implementation block
@property (retain) id<AVCPacketRelayConnectionProtocol> multiplexedConnection;              //@synthesize multiplexedConnection=_multiplexedConnection - In the implementation block
@property (assign,nonatomic) id<AVCPacketRelayDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<AVCPacketRelayDelegate>)delegate;
-(void)setDelegate:(id<AVCPacketRelayDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(NSArray *)connections;
-(void)setConnections:(NSArray *)arg1 ;
-(id)initWithConnections:(id)arg1 multiplexedConnection:(id)arg2 error:(id*)arg3 ;
-(BOOL)isAllConnectionTypeValid:(id)arg1 ;
-(id)findConnectionToForwardData:(const void*)arg1 size:(int)arg2 ;
-(id<AVCPacketRelayConnectionProtocol>)multiplexedConnection;
-(void)setMultiplexedConnection:(id<AVCPacketRelayConnectionProtocol>)arg1 ;
-(int)startAllConnections;
-(BOOL)stopAllConnections;
-(id)initWithConnection:(id)arg1 connection:(id)arg2 error:(id*)arg3 ;
@end

