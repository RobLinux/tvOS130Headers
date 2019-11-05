/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSDKManagedDeviceDelegate, OS_xpc_object;
@class NSObject;

@interface MSDKManagedDevice : NSObject {

	id<MSDKManagedDeviceDelegate> _delegate;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _helperConnection;

}

@property (retain) NSObject*<OS_xpc_object> connection;                                  //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_xpc_object> helperConnection;                            //@synthesize helperConnection=_helperConnection - In the implementation block
@property (assign,nonatomic,__weak) id<MSDKManagedDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<MSDKManagedDeviceDelegate>)delegate;
-(void)setDelegate:(id<MSDKManagedDeviceDelegate>)arg1 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)handleMessage:(id)arg1 ;
-(BOOL)prepare;
-(BOOL)setupConnection;
-(NSObject*<OS_xpc_object>)helperConnection;
-(void)setHelperConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)cancelOperation;
-(BOOL)isDeviceClassSupported;
-(int)readDemoMode;
-(id)getCacheIdentifier;
-(BOOL)setupConnection:(id)arg1 withMachService:(id)arg2 ;
-(void)handleContentUpdateStatus:(const char*)arg1 event:(id)arg2 ;
-(id)errorWithXPCDictionary:(id)arg1 ;
-(BOOL)prepareWithWiFi:(id)arg1 password:(id)arg2 ;
-(BOOL)isEnrolled;
-(BOOL)isContentFrozen_xpc;
-(unsigned long long)typeOfDemoDevice;
-(long long)getDemoInstallState;
-(BOOL)isContentFrozen;
-(BOOL)lockDemoContent;
-(BOOL)unlockDemoContent;
-(BOOL)unenroll:(BOOL)arg1 ;
-(id)getDeviceOptions;
-(id)getStoreID;
-(BOOL)configureWiFi:(id)arg1 password:(id)arg2 ;
-(BOOL)checkInBlockingUI;
-(BOOL)storeDataBlob:(id)arg1 ;
-(id)retrieveDataBlob;
-(BOOL)deleteDataBlob;
-(id)getPersistentWiFiSsid;
-(BOOL)needOwnershipWarning:(id*)arg1 ;
-(BOOL)clearOwnershipWarning;
-(BOOL)setupHelperConnection;
-(id)readNVRam:(id)arg1 ;
@end

