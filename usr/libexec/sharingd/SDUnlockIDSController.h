/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/IDSServiceDelegate.h>

@protocol SDUnlockIDSControllerDelegate;
@class IDSService, NSMutableDictionary, NSString;

@interface SDUnlockIDSController : NSObject <IDSServiceDelegate> {

	id<SDUnlockIDSControllerDelegate> _delegate;
	IDSService* _idsService;
	IDSService* _idsServiceClassA;
	NSMutableDictionary* _errorHandlers;

}

@property (retain) IDSService * idsService;                                 //@synthesize idsService=_idsService - In the implementation block
@property (retain) IDSService * idsServiceClassA;                           //@synthesize idsServiceClassA=_idsServiceClassA - In the implementation block
@property (retain) NSMutableDictionary * errorHandlers;                     //@synthesize errorHandlers=_errorHandlers - In the implementation block
@property (__weak) id<SDUnlockIDSControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SDUnlockIDSControllerDelegate>)delegate;
-(void)setDelegate:(id<SDUnlockIDSControllerDelegate>)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)serviceSpaceDidBecomeAvailable:(id)arg1 ;
-(void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(/*^block*/id)arg3 ;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
-(NSMutableDictionary *)errorHandlers;
-(BOOL)hasDefaultDevice;
-(void)sendProtocolBufferData:(id)arg1 withType:(unsigned short)arg2 timeout:(id)arg3 option:(long long)arg4 queueOneID:(id)arg5 errorHandler:(/*^block*/id)arg6 ;
-(void)sendProtocolBufferData:(id)arg1 withType:(unsigned short)arg2 timeout:(id)arg3 option:(long long)arg4 errorHandler:(/*^block*/id)arg5 ;
-(void)sendProtocolBufferData:(id)arg1 withType:(unsigned short)arg2 timeout:(id)arg3 option:(long long)arg4 dataClass:(long long)arg5 queueOneID:(id)arg6 errorHandler:(/*^block*/id)arg7 ;
-(IDSService *)idsServiceClassA;
-(id)dataClassStringForDataClass:(long long)arg1 ;
-(BOOL)isDefaultPairedDeviceNearby;
-(id)activeIDSDevice;
-(void)setIdsServiceClassA:(IDSService *)arg1 ;
-(void)setErrorHandlers:(NSMutableDictionary *)arg1 ;
@end

