/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/BKSTerminationAssertionObserver.h>
#import <PineBoard/FBProcessManagerObserver.h>
#import <PineBoard/FBSystemServiceDelegate.h>
#import <PineBoard/FBSDisplayObserving.h>
#import <PineBoard/PBAppInfoControllerDelegate.h>
#import <PineBoard/PBOpenAppTransitionerObserver.h>
#import <PineBoard/PBSceneManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, FBSSystemService, FBProcess, FBSystemService, FBSceneManager, FBProcessManager, FBDisplayManager, PBAppInfoController, NSMutableSet, NSObject, ASDRepairApplicationRequest, NSArray, NSString;

@interface PBProcessManager : NSObject <BKSTerminationAssertionObserver, FBProcessManagerObserver, FBSystemServiceDelegate, FBSDisplayObserving, PBAppInfoControllerDelegate, PBOpenAppTransitionerObserver, PBSceneManagerObserver> {

	NSMutableOrderedSet* _recentApplicationBundleIdentifiers;
	FBSSystemService* _systemService;
	FBProcess* _focusedProcess;
	FBProcess* _systemWakeTargetProcess;
	FBSystemService* _fbSystemAppService;
	FBSceneManager* _fbSceneManager;
	FBProcessManager* _fbProcessManager;
	FBDisplayManager* _fbDisplayManager;
	PBAppInfoController* _appInfoController;
	NSMutableSet* _pendingSnapshots;
	NSObject*<OS_dispatch_queue> _processQueue;
	ASDRepairApplicationRequest* _inFlightAppRepairRequest;

}

@property (nonatomic,readonly) ASDRepairApplicationRequest * inFlightAppRepairRequest;              //@synthesize inFlightAppRepairRequest=_inFlightAppRepairRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recentApplicationBundleIdentifiers; 
@property (nonatomic,readonly) FBProcess * focusedProcess; 
@property (nonatomic,readonly) NSString * focusedProcessBundleIdentifier; 
@property (nonatomic,readonly) BOOL focusedProcessIsKioskApp; 
@property (nonatomic,readonly) BOOL focusedProcessIsDefaultKioskApp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setupProcessManagementWithRecentApplicationBundleIdentifiers:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfFocusedProcess;
-(id)init;
-(void)dealloc;
-(void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)reboot;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(void)systemService:(id)arg1 prepareForShutdownWithOptions:(id)arg2 origin:(id)arg3 ;
-(void)systemServicePrepareForExit:(id)arg1 andRelaunch:(BOOL)arg2 ;
-(void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(id)systemServiceApplicationInfoProvider:(id)arg1 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(void)relaunch;
-(void)appInfoController:(id)arg1 didUpdate:(id)arg2 ;
-(FBProcess *)focusedProcess;
-(void)restoreSystemFromSleepWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareSystemForSleepWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)recentApplicationBundleIdentifiers;
-(void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3 ;
-(void)appTransitioner:(id)arg1 didCompleteAppTransition:(id)arg2 ;
-(NSString *)focusedProcessBundleIdentifier;
-(void)openApplication:(id)arg1 launchURL:(id)arg2 options:(id)arg3 suspended:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)focusedProcessIsDefaultKioskApp;
-(void)killApplication:(id)arg1 removeFromRecents:(BOOL)arg2 ;
-(BOOL)isSiriViewServicePID:(int)arg1 ;
-(BOOL)isAirPlayViewServicePID:(int)arg1 ;
-(void)ensureTVAirPlayRunning;
-(BOOL)_handleSpecialURL:(id)arg1 ;
-(void)_openAppFromRequest:(id)arg1 bundleIdentifier:(id)arg2 URL:(id)arg3 withResult:(/*^block*/id)arg4 ;
-(void)_handleFairplayLaunchFailureForApplication:(id)arg1 ;
-(void)setFocusedProcess:(FBProcess *)arg1 ;
-(BOOL)focusedProcessIsKioskApp;
-(BOOL)isProcessRunningForBundleID:(id)arg1 ;
-(ASDRepairApplicationRequest *)inFlightAppRepairRequest;
@end
