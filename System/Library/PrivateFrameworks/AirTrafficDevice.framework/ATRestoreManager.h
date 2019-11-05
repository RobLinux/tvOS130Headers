/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficDevice/ATEnvironmentMonitorObserver.h>
#import <AirTrafficDevice/ATSessionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, MSVXPCTransaction, ATDeviceSettings, ATSession, NSString;

@interface ATRestoreManager : NSObject <ATEnvironmentMonitorObserver, ATSessionObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _checkRestoreStatusQueue;
	BOOL _cancelled;
	BOOL _iTunesRestoreActive;
	BOOL _iCloudRestoreActive;
	BOOL _deviceRestoreActive;
	MSVXPCTransaction* _xpcTransaction;
	ATDeviceSettings* _settings;
	ATSession* _restoreSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)resume;
-(void)_start;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)sessionDidFinish:(id)arg1 ;
-(void)restoreSessionActiveWithCompletion:(/*^block*/id)arg1 ;
-(void)_checkActiveRestoreStateWithCompletion:(/*^block*/id)arg1 ;
-(void)setRestoreInProgress:(BOOL)arg1 ;
-(id)_dataClasses;
-(BOOL)_iCloudPhotoLibraryEnabled;
@end

