/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSSocketPairConnectionProtocol.h>

@protocol IDSSocketPairConnectionDelegate, OS_dispatch_queue;
@class NSSet, NSMutableData, NSObject, NSData, NSMutableArray, NSMutableDictionary, NSString, IDSStallDetector;

@interface IDSSocketPairConnection : NSObject <IDSSocketPairConnectionProtocol> {

	NSMutableData* _headerData;
	NSMutableData* _currentMessageData;
	id<IDSSocketPairConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	os_unfair_lock_s _lock;
	unsigned long long _currentOutgoingDataIndex;
	NSData* _outgoingData;
	NSMutableArray* _outgoingMessageArray;
	unsigned _currentOutgoingFragmentedMessageID;
	unsigned long long _inFlightMessageCountLowWaterMark;
	NSMutableDictionary* _incomingDataFragments;
	NSString* _connectionID;
	unsigned _fragmentationSize;
	BOOL _isConnected;
	unsigned _currentDataLength;
	long long _bytesReceived;
	double _prevBPS;
	int _connectedSocket;
	BOOL _writeSocketIsResumed;
	double _lastDateCheck;
	BOOL _notifyWhenConnectionReceivesBytes;
	long long _priority;
	/*^block*/id _encryptionBlock;
	/*^block*/id _decryptionBlock;
	unsigned _maxAllowedMessageSize;
	double _lastSocketActivityTime;
	IDSStallDetector* _outgoingStallDetector;
	unsigned long long _linkType;
	BOOL _hasEndedSession;

}

@property (assign,nonatomic) BOOL hasEndedSession;                                             //@synthesize hasEndedSession=_hasEndedSession - In the implementation block
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic) unsigned fragmentationSize; 
@property (nonatomic,readonly) unsigned long long inFlightMessageCount; 
@property (assign,nonatomic) unsigned long long inFlightMessageCountLowWaterMark; 
@property (nonatomic,readonly) NSSet * inFlightMessages; 
@property (assign,nonatomic) unsigned maxAllowedMessageSize;                                   //@synthesize maxAllowedMessageSize=_maxAllowedMessageSize - In the implementation block
@property (nonatomic,copy) NSString * connectionID;                                            //@synthesize connectionID=_connectionID - In the implementation block
@property (nonatomic,readonly) double lastSocketActivityTime; 
@property (nonatomic,retain) IDSStallDetector * outgoingStallDetector;                         //@synthesize outgoingStallDetector=_outgoingStallDetector - In the implementation block
-(void)dealloc;
-(BOOL)isEmpty;
-(void)start;
-(BOOL)isConnected;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(void)endSession;
-(NSString *)connectionID;
-(void)setConnectionID:(NSString *)arg1 ;
-(void)_processBytesAvailable;
-(void)_sendToConnectedSocket;
-(BOOL)_processIncomingMessage:(id)arg1 ;
-(void)_endSession;
-(BOOL)hasEndedSession;
-(long long)_read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)_queueNextOutgoingData;
-(BOOL)sendDataMessage:(id)arg1 canFragment:(BOOL)arg2 ;
-(void)setHasEndedSession:(BOOL)arg1 ;
-(BOOL)sendDataMessage:(id)arg1 ;
-(void)processStoredIncomingMessage:(id)arg1 ;
-(void)setOTREncryptionBlock:(/*^block*/id)arg1 decryptionBlock:(/*^block*/id)arg2 ;
-(double)lastSocketActivityTime;
-(NSSet *)inFlightMessages;
-(id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 priority:(long long)arg4 connectionID:(id)arg5 linkType:(unsigned long long)arg6 ;
-(unsigned)fragmentationSize;
-(unsigned long long)inFlightMessageCount;
-(unsigned long long)inFlightMessageCountLowWaterMark;
-(void)setFragmentationSize:(unsigned)arg1 ;
-(void)setInFlightMessageCountLowWaterMark:(unsigned long long)arg1 ;
-(void)removePendingMessagesForProtectionClass:(unsigned)arg1 ;
-(void)setNotifyWhenConnectionReceivesBytes:(BOOL)arg1 ;
-(unsigned)maxAllowedMessageSize;
-(void)setMaxAllowedMessageSize:(unsigned)arg1 ;
-(IDSStallDetector *)outgoingStallDetector;
-(void)setOutgoingStallDetector:(IDSStallDetector *)arg1 ;
@end

