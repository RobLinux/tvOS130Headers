/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/NSXPCListenerDelegate.h>
#import <gamed/APSConnectionDelegate.h>
#import <gamed/GKNATObserverDelegate.h>
#import <gamed/GKPreferencesDelegate.h>
#import <gamed/GKLockStatusObserver.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSXPCListener, GKNATObserver, NSObject, NSData, NSDate, APSConnection, NSMutableDictionary, NSCountedSet, GKApplicationStateMonitor, NSString, GKReachability;

@interface GKDataRequestManager : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, GKNATObserverDelegate, GKPreferencesDelegate, GKLockStatusObserver> {

	NSXPCListener* _publicListener;
	long long _currentEnvironment;
	int _natType;
	GKNATObserver* _natObserver;
	NSObject*<OS_dispatch_semaphore> _natSemaphore;
	NSObject*<OS_dispatch_queue> _natQueue;
	NSData* _pushToken;
	BOOL _receivesMemoryWarnings;
	long long _activePushEnvironment;
	NSDate* _nearbyQueryLastCheckDate;
	double _nearbyQueryAllowance;
	APSConnection* _apsConnection;
	APSConnection* _pushConnectionProd;
	APSConnection* _pushConnectionDev;
	NSMutableDictionary* _transactionBag;
	NSCountedSet* _transactionCounts;
	GKApplicationStateMonitor* _applicationStateMonitor;
	NSString* _authenticatingWithSettingsBundleID;
	GKReachability* _reachability;

}

@property (assign,nonatomic) BOOL receivesMemoryWarnings;                                      //@synthesize receivesMemoryWarnings=_receivesMemoryWarnings - In the implementation block
@property (nonatomic,retain) APSConnection * apsConnection;                                    //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,retain) APSConnection * pushConnectionProd;                               //@synthesize pushConnectionProd=_pushConnectionProd - In the implementation block
@property (nonatomic,retain) APSConnection * pushConnectionDev;                                //@synthesize pushConnectionDev=_pushConnectionDev - In the implementation block
@property (nonatomic,readonly) APSConnection * activePushConnection; 
@property (nonatomic,retain) GKReachability * reachability;                                    //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transactionBag;                             //@synthesize transactionBag=_transactionBag - In the implementation block
@property (nonatomic,retain) NSCountedSet * transactionCounts;                                 //@synthesize transactionCounts=_transactionCounts - In the implementation block
@property (nonatomic,retain) GKApplicationStateMonitor * applicationStateMonitor;              //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (assign) int natType;                                                                //@synthesize natType=_natType - In the implementation block
@property (readonly) long long currentEnvironment;                                             //@synthesize currentEnvironment=_currentEnvironment - In the implementation block
@property (assign) long long activePushEnvironment;                                            //@synthesize activePushEnvironment=_activePushEnvironment - In the implementation block
@property (retain) NSData * pushToken;                                                         //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) long long preferredEnvironment; 
@property (retain) NSString * authenticatingWithSettingsBundleID;                              //@synthesize authenticatingWithSettingsBundleID=_authenticatingWithSettingsBundleID - In the implementation block
@property (retain) NSDate * nearbyQueryLastCheckDate;                                          //@synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate - In the implementation block
@property (assign) double nearbyQueryAllowance;                                                //@synthesize nearbyQueryAllowance=_nearbyQueryAllowance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)clientQueue;
+(id)syncQueue;
+(id)pushQueue;
+(BOOL)allowSelfSignedCertForEnvironment:(long long)arg1 ;
+(id)statsQueue;
+(id)ratingsQueue;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)terminate;
-(void)performAsync:(/*^block*/id)arg1 ;
-(NSData *)pushToken;
-(void)setPushToken:(NSData *)arg1 ;
-(long long)currentEnvironment;
-(void)endTransaction:(id)arg1 ;
-(APSConnection *)apsConnection;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(GKReachability *)reachability;
-(void)setReachability:(GKReachability *)arg1 ;
-(BOOL)receivesMemoryWarnings;
-(void)setReceivesMemoryWarnings:(BOOL)arg1 ;
-(void)reachabilityDidChange:(id)arg1 ;
-(void)performSync:(/*^block*/id)arg1 ;
-(void)beginTransaction:(id)arg1 ;
-(int)natType;
-(void)NATTypeDidChange:(int)arg1 ;
-(void)setNatType:(int)arg1 ;
-(void)lockStatusDidChange;
-(GKApplicationStateMonitor *)applicationStateMonitor;
-(void)setApplicationStateMonitor:(GKApplicationStateMonitor *)arg1 ;
-(NSDate *)nearbyQueryLastCheckDate;
-(void)setNearbyQueryLastCheckDate:(NSDate *)arg1 ;
-(double)nearbyQueryAllowance;
-(void)setNearbyQueryAllowance:(double)arg1 ;
-(void)presentNearbyInvite:(id)arg1 ;
-(void)nearbyInviteWasCancelled:(id)arg1 ;
-(void)updateNotificationTopics;
-(void)gameCenterDidBecomeRestricted;
-(void)finishStartup;
-(void)processIncomingiMessageInvite:(id)arg1 ;
-(void)processIncomingMessage:(id)arg1 ;
-(void)didReceiveIncomingIDSMessage:(id)arg1 ;
-(void)loadLocalizedGameNameForBundleID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)storeBag;
-(void)updateActivePushEnvironment;
-(void)loadConnectivitySettingsAndStartNATObserver;
-(void)iCloudAccountAvailabilityChanged:(id)arg1 ;
-(void)setTransactionBag:(NSMutableDictionary *)arg1 ;
-(void)setTransactionCounts:(NSCountedSet *)arg1 ;
-(long long)preferredEnvironment;
-(void)setActivePushEnvironment:(long long)arg1 ;
-(void)setUpCloudKitNotificationTopics;
-(void)appStateChanged:(id)arg1 ;
-(void)storeBagChanged:(id)arg1 ;
-(void)synchronizeBagWithPreferences;
-(long long)activePushEnvironment;
-(id)pushConnectionForEnvironment:(long long)arg1 ;
-(void)_setPushToken:(id)arg1 ;
-(void)sendPushTokenForClient:(id)arg1 ;
-(void)_clearPushConnections;
-(void)_updateNotificationTopics;
-(void)_setActivePushEnvironment:(long long)arg1 ;
-(void)terminateClient:(id)arg1 ;
-(void)_waitForValidNATType;
-(void)_updatePushEnvironmentWithStoreBag:(id)arg1 ;
-(void)_setConnectivitySettings:(id)arg1 ;
-(void)_resetNATObserverWithSettings:(id)arg1 ;
-(void)clearAllNearbyInvites;
-(void)setAuthenticatingWithSettingsBundleID:(NSString *)arg1 ;
-(void)resetEnvironment;
-(NSCountedSet *)transactionCounts;
-(NSMutableDictionary *)transactionBag;
-(void)clientProxy:(id)arg1 didRefreshContentsForDataType:(unsigned)arg2 userInfo:(id)arg3 ;
-(APSConnection *)activePushConnection;
-(void)clearPushEnvironment;
-(void)getValidNATTypeWithHandler:(/*^block*/id)arg1 ;
-(APSConnection *)pushConnectionProd;
-(void)setPushConnectionProd:(APSConnection *)arg1 ;
-(APSConnection *)pushConnectionDev;
-(void)setPushConnectionDev:(APSConnection *)arg1 ;
-(NSString *)authenticatingWithSettingsBundleID;
-(void)handleNearbyInviteResponse:(id)arg1 ;
-(id)updateRequestWithPushToken:(id)arg1 ;
@end

