/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/ASDServiceProtocol.h>
#import <appstored/XPCNotificationClient.h>

@class NSData, XPCServiceCatalog, NSXPCConnection, XPCServiceEntitlements, AMSProcessInfo, NSString;

@interface XPCServiceClient : NSObject <ASDServiceProtocol, XPCNotificationClient> {

	NSData* _auditTokenData;
	XPCServiceCatalog* _catalog;
	NSXPCConnection* _connection;
	XPCServiceEntitlements* _entitlements;
	BOOL hasSeenAppStore;
	AMSProcessInfo* _processInfo;

}

@property (readonly) AMSProcessInfo * processInfo;                  //@synthesize processInfo=_processInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newClientForConnection:(id)arg1 withCatalog:(id)arg2 ;
-(AMSProcessInfo *)processInfo;
-(BOOL)hasConnection;
-(void)getCrossfireServiceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)getDiagnosticServiceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)getIAPHistoryServiceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)getInstallationServiceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)getLibraryServiceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)getOcelotServiceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)getPurchaseHistoryServiceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)getPurchaseServiceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)getRepairServiceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)getUpdatesServiceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)deliverDialogRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 andCatalog:(id)arg2 ;
-(void)_provideService:(/*^block*/id)arg1 forEntitlement:(ASDServiceEntitlement)arg2 withReply:(/*^block*/id)arg3 ;
-(void)deliverNotifications:(id)arg1 withBarrierBlock:(/*^block*/id)arg2 ;
-(void)deliverProgress:(id)arg1 withBarrierBlock:(/*^block*/id)arg2 ;
@end

