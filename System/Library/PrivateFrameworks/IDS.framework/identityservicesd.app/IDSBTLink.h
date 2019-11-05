/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLink.h>
#import <identityservicesd/NSStreamDelegate.h>

@protocol IDSLinkDelegate;
@class NSString, CBScalablePipe;

@interface IDSBTLink : NSObject <IDSLink, NSStreamDelegate> {

	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	unsigned long long _state;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	unsigned long long _discardedRawBytes;
	unsigned long long _correctRawBytesSinceLastCorruption;
	unsigned long long _correctFramesSinceLastCorruption;
	double _previousReportTime;
	NSString* _linkID;
	CBScalablePipe* _pipe;
	IDSOSDataChannelRef _dataChannel;
	unsigned _dataChannelPendingTx;
	unsigned _totalReceivedRawBytes;
	SCD_Struct_ID23* _currentIncomingPacket;
	SCD_Struct_ID23* _currentOutgoingPacket;
	BOOL _resyncing;
	BOOL _magnetCorruptionRecoveryMode;
	BOOL _previousCorruptionsDetected;
	double _lastResyncTime;
	double _lastNewMagnetCorruptionTime;
	double _lastDownstreamDumpLogTime;
	double _lastUpstreamDumpLogTime;
	BOOL _writeSuspended;
	BOOL _remoteHostAwake;
	BOOL _postedFirstHostStateChange;
	BOOL _linkSuspended;
	id<IDSLinkDelegate> _delegate;
	id<IDSLinkDelegate> _alternateDelegate;

}

@property (copy,readonly) NSString * linkID;                                       //@synthesize linkID=_linkID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * cbuuid;                                              //@synthesize cbuuid=_cbuuid - In the implementation block
@property (retain) NSString * deviceUniqueID;                                      //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long headerOverhead; 
@property (__weak) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<IDSLinkDelegate> alternateDelegate;                          //@synthesize alternateDelegate=_alternateDelegate - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id<IDSLinkDelegate>)delegate;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(unsigned long long)state;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)sendPacketBufferArray:(/*function pointer*/void**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID23*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2 ;
-(id)copyLinkStatsDict;
-(NSString *)cbuuid;
-(void)setCbuuid:(NSString *)arg1 ;
-(NSString *)deviceUniqueID;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id<IDSLinkDelegate>)arg1 ;
-(NSString *)linkID;
-(void)_processIncomingPacket;
-(void)_localDetectedCorruption;
-(void)triggerBTCorruptionRecovery;
-(BOOL)isLinkSuspended;
-(void)suspendLink:(BOOL)arg1 ;
-(void)injectFakePacket:(SCD_Struct_ID23*)arg1 ;
-(void)remoteDetectedCorruption;
-(void)flushBuffer:(unsigned long long)arg1 ;
-(id)initWithPipe:(id)arg1 useSkywalkChannel:(BOOL)arg2 withDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(void)_dumpLogs:(double)arg1 isDownstream:(BOOL)arg2 ;
-(void)_processOutgoingPacket;
-(long long)_readFromDataChannel:(void*)arg1 size:(unsigned long long)arg2 withFlags:(int)arg3 isSynced:(BOOL*)arg4 ;
-(void)_submitMagnetCorruptionMetricsToAWD;
-(void)_resetMagnetCorruptionMetrics;
@end

