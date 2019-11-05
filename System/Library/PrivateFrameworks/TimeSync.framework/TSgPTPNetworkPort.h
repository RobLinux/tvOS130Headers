/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TimeSync-Structs.h>
#import <TimeSync/TSgPTPPort.h>

@class NSMutableArray, NSString;

@interface TSgPTPNetworkPort : TSgPTPPort {

	unsigned _connection;
	NSMutableArray* _clients;
	BOOL _remoteIsSameDevice;
	BOOL _asCapable;
	char _localSyncLogMeanInterval;
	char _remoteSyncLogMeanInterval;
	char _localAnnounceLogMeanInterval;
	char _remoteAnnounceLogMeanInterval;
	unsigned char _localLinkType;
	unsigned char _remoteLinkType;
	unsigned char _localTimestampingMode;
	unsigned char _remoteTimestampingMode;
	BOOL _hasLocalFrequencyTolerance;
	BOOL _hasRemoteFrequencyTolerance;
	BOOL _hasLocalFrequencyStability;
	BOOL _hasRemoteFrequencyStability;
	BOOL _enabled;
	BOOL _overridenReceiveMatching;
	unsigned short _remotePortNumber;
	unsigned short _overridenReceivePortNumber;
	unsigned _propagationDelay;
	unsigned _maximumPropagationDelay;
	unsigned _minimumPropagationDelay;
	unsigned _propagationDelayLimit;
	unsigned _maximumRawDelay;
	unsigned _minimumRawDelay;
	unsigned _localFrequencyTolerance;
	unsigned _remoteFrequencyTolerance;
	unsigned _localFrequencyStability;
	unsigned _remoteFrequencyStability;
	unsigned long long _remoteClockIdentity;
	NSString* _sourceAddressString;
	NSString* _destinationAddressString;
	NSString* _interfaceName;
	unsigned long long _overridenReceiveClockIdentity;

}

@property (assign,nonatomic) unsigned long long remoteClockIdentity;                        //@synthesize remoteClockIdentity=_remoteClockIdentity - In the implementation block
@property (assign,nonatomic) unsigned short remotePortNumber;                               //@synthesize remotePortNumber=_remotePortNumber - In the implementation block
@property (assign,nonatomic) BOOL remoteIsSameDevice;                                       //@synthesize remoteIsSameDevice=_remoteIsSameDevice - In the implementation block
@property (assign,getter=isASCapable,nonatomic) BOOL asCapable;                             //@synthesize asCapable=_asCapable - In the implementation block
@property (assign,nonatomic) unsigned propagationDelay;                                     //@synthesize propagationDelay=_propagationDelay - In the implementation block
@property (assign,nonatomic) unsigned maximumPropagationDelay;                              //@synthesize maximumPropagationDelay=_maximumPropagationDelay - In the implementation block
@property (assign,nonatomic) unsigned minimumPropagationDelay;                              //@synthesize minimumPropagationDelay=_minimumPropagationDelay - In the implementation block
@property (assign,nonatomic) unsigned propagationDelayLimit;                                //@synthesize propagationDelayLimit=_propagationDelayLimit - In the implementation block
@property (assign,nonatomic) unsigned maximumRawDelay;                                      //@synthesize maximumRawDelay=_maximumRawDelay - In the implementation block
@property (assign,nonatomic) unsigned minimumRawDelay;                                      //@synthesize minimumRawDelay=_minimumRawDelay - In the implementation block
@property (assign,nonatomic) char localSyncLogMeanInterval;                                 //@synthesize localSyncLogMeanInterval=_localSyncLogMeanInterval - In the implementation block
@property (assign,nonatomic) char remoteSyncLogMeanInterval;                                //@synthesize remoteSyncLogMeanInterval=_remoteSyncLogMeanInterval - In the implementation block
@property (assign,nonatomic) char localAnnounceLogMeanInterval;                             //@synthesize localAnnounceLogMeanInterval=_localAnnounceLogMeanInterval - In the implementation block
@property (assign,nonatomic) char remoteAnnounceLogMeanInterval;                            //@synthesize remoteAnnounceLogMeanInterval=_remoteAnnounceLogMeanInterval - In the implementation block
@property (assign,nonatomic) unsigned char localLinkType;                                   //@synthesize localLinkType=_localLinkType - In the implementation block
@property (assign,nonatomic) unsigned char remoteLinkType;                                  //@synthesize remoteLinkType=_remoteLinkType - In the implementation block
@property (assign,nonatomic) unsigned char localTimestampingMode;                           //@synthesize localTimestampingMode=_localTimestampingMode - In the implementation block
@property (assign,nonatomic) unsigned char remoteTimestampingMode;                          //@synthesize remoteTimestampingMode=_remoteTimestampingMode - In the implementation block
@property (assign,nonatomic) BOOL hasLocalFrequencyTolerance;                               //@synthesize hasLocalFrequencyTolerance=_hasLocalFrequencyTolerance - In the implementation block
@property (assign,nonatomic) unsigned localFrequencyTolerance;                              //@synthesize localFrequencyTolerance=_localFrequencyTolerance - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteFrequencyTolerance;                              //@synthesize hasRemoteFrequencyTolerance=_hasRemoteFrequencyTolerance - In the implementation block
@property (assign,nonatomic) unsigned remoteFrequencyTolerance;                             //@synthesize remoteFrequencyTolerance=_remoteFrequencyTolerance - In the implementation block
@property (assign,nonatomic) BOOL hasLocalFrequencyStability;                               //@synthesize hasLocalFrequencyStability=_hasLocalFrequencyStability - In the implementation block
@property (assign,nonatomic) unsigned localFrequencyStability;                              //@synthesize localFrequencyStability=_localFrequencyStability - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteFrequencyStability;                              //@synthesize hasRemoteFrequencyStability=_hasRemoteFrequencyStability - In the implementation block
@property (assign,nonatomic) unsigned remoteFrequencyStability;                             //@synthesize remoteFrequencyStability=_remoteFrequencyStability - In the implementation block
@property (nonatomic,copy) NSString * sourceAddressString;                                  //@synthesize sourceAddressString=_sourceAddressString - In the implementation block
@property (nonatomic,copy) NSString * destinationAddressString;                             //@synthesize destinationAddressString=_destinationAddressString - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) unsigned connection; 
@property (assign,nonatomic) BOOL overridenReceiveMatching;                                 //@synthesize overridenReceiveMatching=_overridenReceiveMatching - In the implementation block
@property (assign,nonatomic) unsigned long long overridenReceiveClockIdentity;              //@synthesize overridenReceiveClockIdentity=_overridenReceiveClockIdentity - In the implementation block
@property (assign,nonatomic) unsigned short overridenReceivePortNumber;                     //@synthesize overridenReceivePortNumber=_overridenReceivePortNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * interfaceName;                               //@synthesize interfaceName=_interfaceName - In the implementation block
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)_enabled;
-(unsigned)connection;
-(NSString *)interfaceName;
-(void)removeClient:(id)arg1 ;
-(unsigned short)remotePortNumber;
-(void)addClient:(id)arg1 ;
-(void)_handleNotification:(int)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3 ;
-(BOOL)_commonInitWithService:(unsigned)arg1 ;
-(void)updateProperties;
-(unsigned long long)_remoteClockIdentity;
-(unsigned short)_remotePortNumber;
-(BOOL)_remoteIsSameDevice;
-(BOOL)_isASCapable;
-(unsigned)_propagationDelay;
-(unsigned)_maximumPropagationDelay;
-(unsigned)_minimumPropagationDelay;
-(unsigned)_propagationDelayLimit;
-(unsigned)_maximumRawDelay;
-(unsigned)_minimumRawDelay;
-(char)_localSyncLogMeanInterval;
-(char)_remoteSyncLogMeanInterval;
-(char)_localAnnounceLogMeanInterval;
-(char)_remoteAnnounceLogMeanInterval;
-(unsigned char)_localLinkType;
-(unsigned char)_remoteLinkType;
-(unsigned char)_localTimestampingMode;
-(unsigned char)_remoteTimestampingMode;
-(BOOL)_hasLocalFrequencyTolerance;
-(unsigned)_localFrequencyTolerance;
-(BOOL)_hasRemoteFrequencyTolerance;
-(unsigned)_remoteFrequencyTolerance;
-(BOOL)_hasLocalFrequencyStability;
-(unsigned)_localFrequencyStability;
-(BOOL)_hasRemoteFrequencyStability;
-(unsigned)_remoteFrequencyStability;
-(id)_sourceAddressString;
-(id)_destinationAddressString;
-(BOOL)_overridenReceiveMatching;
-(unsigned long long)_overridenReceiveClockIdentity;
-(unsigned short)_overridenReceivePortNumber;
-(unsigned long long)remoteClockIdentity;
-(void)setRemoteClockIdentity:(unsigned long long)arg1 ;
-(void)setRemotePortNumber:(unsigned short)arg1 ;
-(BOOL)remoteIsSameDevice;
-(void)setRemoteIsSameDevice:(BOOL)arg1 ;
-(BOOL)isASCapable;
-(void)setAsCapable:(BOOL)arg1 ;
-(unsigned)propagationDelay;
-(void)setPropagationDelay:(unsigned)arg1 ;
-(unsigned)maximumPropagationDelay;
-(void)setMaximumPropagationDelay:(unsigned)arg1 ;
-(unsigned)minimumPropagationDelay;
-(void)setMinimumPropagationDelay:(unsigned)arg1 ;
-(unsigned)maximumRawDelay;
-(void)setMaximumRawDelay:(unsigned)arg1 ;
-(unsigned)minimumRawDelay;
-(void)setMinimumRawDelay:(unsigned)arg1 ;
-(char)localSyncLogMeanInterval;
-(void)setLocalSyncLogMeanInterval:(char)arg1 ;
-(char)remoteSyncLogMeanInterval;
-(void)setRemoteSyncLogMeanInterval:(char)arg1 ;
-(char)localAnnounceLogMeanInterval;
-(void)setLocalAnnounceLogMeanInterval:(char)arg1 ;
-(char)remoteAnnounceLogMeanInterval;
-(void)setRemoteAnnounceLogMeanInterval:(char)arg1 ;
-(unsigned char)localLinkType;
-(void)setLocalLinkType:(unsigned char)arg1 ;
-(unsigned char)remoteLinkType;
-(void)setRemoteLinkType:(unsigned char)arg1 ;
-(unsigned char)localTimestampingMode;
-(void)setLocalTimestampingMode:(unsigned char)arg1 ;
-(unsigned char)remoteTimestampingMode;
-(void)setRemoteTimestampingMode:(unsigned char)arg1 ;
-(BOOL)hasLocalFrequencyTolerance;
-(void)setHasLocalFrequencyTolerance:(BOOL)arg1 ;
-(unsigned)localFrequencyTolerance;
-(void)setLocalFrequencyTolerance:(unsigned)arg1 ;
-(BOOL)hasRemoteFrequencyTolerance;
-(void)setHasRemoteFrequencyTolerance:(BOOL)arg1 ;
-(unsigned)remoteFrequencyTolerance;
-(void)setRemoteFrequencyTolerance:(unsigned)arg1 ;
-(BOOL)hasLocalFrequencyStability;
-(void)setHasLocalFrequencyStability:(BOOL)arg1 ;
-(unsigned)localFrequencyStability;
-(void)setLocalFrequencyStability:(unsigned)arg1 ;
-(BOOL)hasRemoteFrequencyStability;
-(void)setHasRemoteFrequencyStability:(BOOL)arg1 ;
-(unsigned)remoteFrequencyStability;
-(void)setRemoteFrequencyStability:(unsigned)arg1 ;
-(NSString *)sourceAddressString;
-(void)setSourceAddressString:(NSString *)arg1 ;
-(NSString *)destinationAddressString;
-(void)setDestinationAddressString:(NSString *)arg1 ;
-(BOOL)overridenReceiveMatching;
-(void)setOverridenReceiveMatching:(BOOL)arg1 ;
-(unsigned long long)overridenReceiveClockIdentity;
-(void)setOverridenReceiveClockIdentity:(unsigned long long)arg1 ;
-(unsigned short)overridenReceivePortNumber;
-(void)setOverridenReceivePortNumber:(unsigned short)arg1 ;
-(BOOL)requestRemoteMessageIntervalsWithPDelayMessageInterval:(char)arg1 syncMessageInterval:(char)arg2 announceMessageInterval:(char)arg3 error:(id*)arg4 ;
-(BOOL)overrideReceiveMatchingWithRemoteClockIdentity:(unsigned long long)arg1 remotePortNumber:(unsigned short)arg2 error:(id*)arg3 ;
-(BOOL)restoreReceiveMatchingError:(id*)arg1 ;
-(BOOL)enablePortError:(id*)arg1 ;
-(BOOL)disablePortError:(id*)arg1 ;
-(BOOL)getCurrentPortInfo:(SCD_Struct_TS4*)arg1 error:(id*)arg2 ;
-(BOOL)registerAsyncCallbackError:(id*)arg1 ;
-(BOOL)deregisterAsyncCallbackError:(id*)arg1 ;
-(unsigned)propagationDelayLimit;
-(void)setPropagationDelayLimit:(unsigned)arg1 ;
@end

