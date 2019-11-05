/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreTelephonyClientDataDelegate;
#import <IDSFoundation/IDSFoundation-Structs.h>
@class CoreTelephonyClient, NSString, NSHashTable, NSMutableDictionary;

@interface IDSCellularLinkMonitor : NSObject {

	CTServerConnectionRef _ctServerConnection;
	CoreTelephonyClient* _ctClient;
	id<CoreTelephonyClientDataDelegate> _ctClientDataDelegate;
	BOOL _dataUsable;
	NSString* _dataIndicator;
	NSString* _cellularDataInterfaceName;
	unsigned _radioAccessTechnology;
	unsigned _cellularMTU;
	NSHashTable* _cellularLinkDelegates;
	NSMutableDictionary* _notificationRegInfo;

}

@property (readonly) BOOL dataUsable;                                   //@synthesize dataUsable=_dataUsable - In the implementation block
@property (readonly) NSString * cellularDataInterfaceName;              //@synthesize cellularDataInterfaceName=_cellularDataInterfaceName - In the implementation block
@property (readonly) unsigned radioAccessTechnology;                    //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (readonly) unsigned cellularMTU;                              //@synthesize cellularMTU=_cellularMTU - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)reset;
-(unsigned)radioAccessTechnology;
-(void)processCTConnectionStateChangeNotification:(id)arg1 connectionStatus:(id)arg2 ;
-(void)_setupCTServerConnection;
-(BOOL)_updateCellularDataInterface:(BOOL)arg1 ;
-(BOOL)_updateRadioAccessTechnology;
-(BOOL)_updateCellularMTU;
-(void)_updateDataStatus;
-(id)_getCurrentDataSimContext:(id)arg1 inContextArray:(id)arg2 ;
-(id)_getCTXPCServiceSubscriptionContext;
-(BOOL)_updateCellularDataInterfaceNameByConnectionState:(int)arg1 isStateActiveRequired:(BOOL)arg2 interfaceName:(id)arg3 ;
-(BOOL)_dataContextUsable:(id)arg1 dataStatus:(id)arg2 ;
-(void)removePacketNotificationFilter;
-(void)addCellularLinkDelegate:(id)arg1 ;
-(void)removeCellularLinkDelegate:(id)arg1 ;
-(NSString *)cellularDataInterfaceName;
-(unsigned)cellularMTU;
-(BOOL)dataUsable;
-(BOOL)setPacketNotificationFilter:(sockaddr*)arg1 remote:(sockaddr*)arg2 uniqueTag:(unsigned)arg3 callType:(unsigned char)arg4 ;
-(BOOL)dropIPPackets:(id)arg1 localAddress:(sockaddr*)arg2 remoteAddress:(sockaddr*)arg3 isRelay:(BOOL)arg4 channelNumberMSB:(unsigned char)arg5 ;
-(void)updateProtocolQualityOfService:(BOOL)arg1 localAddress:(sockaddr*)arg2 ;
-(void)currentCellularSignalStrength:(int*)arg1 signalStrength:(int*)arg2 signalGrade:(int*)arg3 ;
-(void)registerCellularDataStatusNotification:(BOOL)arg1 ;
@end

