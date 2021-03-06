/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <accessoryd/accessoryd-Structs.h>
#import <accessoryd/ACCExternalAccessorySession.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;
@class NSMutableArray, NSRecursiveLock, NSObject;

@interface ACCExternalAccessorySessionBasic : ACCExternalAccessorySession {

	unsigned short _maxPayloadSize;
	char* _transferBuffer;
	unsigned short _maxPayloadBufferSize;
	char* _payloadBuffer;
	NSMutableArray* _eaPacketPool;
	NSRecursiveLock* _packetPoolLock;
	BOOL _continueRunningSession;
	BOOL _startSessionTransmitted;
	NSObject*<OS_dispatch_queue> _continueRunningQueue;
	NSObject*<OS_dispatch_semaphore> _continueRunningSemaphore;
	NSObject*<OS_dispatch_queue> _msgSerialQueue;
	NSObject*<OS_dispatch_source> _listenSource;
	NSObject*<OS_dispatch_source> _readSource;

}
-(void)dealloc;
-(void)_openPipeToApp;
-(void)_openPipeFromApp;
-(id)initWithEASessionUUID:(id)arg1 protocolID:(unsigned char)arg2 legacyConnectionID:(unsigned long long)arg3 sessionID:(unsigned short)arg4 ;
-(void)shuttingDownSession;
-(BOOL)closeDataPipes;
-(void)sendEABufferDataToApp:(id)arg1 ;
-(void)sendEABufferDataToApp:(char*)arg1 withLength:(unsigned)arg2 ;
-(unsigned)readEASessionDataFromApp:(id)arg1 maxReadSize:(unsigned)arg2 ;
-(CFDataRef)returnEASessionDataFromApp:(unsigned)arg1 ;
-(void)stopIncomingDataNotifications;
-(void)startIncomingDataNotifications;
@end

