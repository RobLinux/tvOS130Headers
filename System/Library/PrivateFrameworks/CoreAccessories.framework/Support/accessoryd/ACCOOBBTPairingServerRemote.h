/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <accessoryd/ACCOOBBTPairingXPCServerProtocol.h>

@class NSXPCConnection, NSString;

@interface ACCOOBBTPairingServerRemote : NSObject <ACCOOBBTPairingXPCServerProtocol> {

	NSXPCConnection* _XPCConnection;

}

@property (nonatomic,readonly) NSXPCConnection * XPCConnection;              //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSXPCConnection *)XPCConnection;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)initConnection:(/*^block*/id)arg1 ;
-(void)startOOBBTPairing:(id)arg1 ;
-(void)stopOOBBTPairing:(id)arg1 ;
-(void)linkKeyInfo:(id)arg1 oobBtPairingUID:(id)arg2 linkKey:(id)arg3 deviceMacAddr:(id)arg4 ;
-(void)notifyOfProvider:(id)arg1 ;
-(void)requestLegacyConnectionIDForAccessoryUID:(id)arg1 ;
@end

