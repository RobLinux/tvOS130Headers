/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVCoreSettings/HMHomeManagerDelegatePrivate.h>
#import <TVCoreSettings/HMAccessoryBrowserPrivateDelegate.h>

@protocol OS_dispatch_queue;
@class TVCSAccessory, HMAccessory, SFDeviceSetupWHAService, HMHomeManager, HMAccessoryBrowser, NSObject, NSArray, TVCSHome, NSString;

@interface TVCSHomeManager : NSObject <HMHomeManagerDelegatePrivate, HMAccessoryBrowserPrivateDelegate> {

	BOOL _advertising;
	BOOL _configurationInProgress;
	BOOL _browsingForAccessory;
	long long _homeConfigurationState;
	TVCSAccessory* _localAccessory;
	HMAccessory* _browsedCurrentHMAccessory;
	SFDeviceSetupWHAService* _setupService;
	HMHomeManager* _homeManager;
	HMAccessoryBrowser* _accessoryBrowser;
	NSObject*<OS_dispatch_queue> _homeManagerQueue;
	NSArray* _cachedOwnedHomes;

}

@property (assign,nonatomic) long long homeConfigurationState;                                                            //@synthesize homeConfigurationState=_homeConfigurationState - In the implementation block
@property (assign,getter=isAdvertising,nonatomic) BOOL advertising;                                                       //@synthesize advertising=_advertising - In the implementation block
@property (assign,getter=isBrowsingForAccessory,nonatomic) BOOL browsingForAccessory;                                     //@synthesize browsingForAccessory=_browsingForAccessory - In the implementation block
@property (nonatomic,retain) HMAccessory * browsedCurrentHMAccessory;                                                     //@synthesize browsedCurrentHMAccessory=_browsedCurrentHMAccessory - In the implementation block
@property (assign,getter=isConfigurationInProgress,nonatomic) BOOL configurationInProgress;                               //@synthesize configurationInProgress=_configurationInProgress - In the implementation block
@property (retain) SFDeviceSetupWHAService * setupService;                                                                //@synthesize setupService=_setupService - In the implementation block
@property (nonatomic,retain) TVCSAccessory * localAccessory;                                                              //@synthesize localAccessory=_localAccessory - In the implementation block
@property (retain) HMHomeManager * homeManager;                                                                           //@synthesize homeManager=_homeManager - In the implementation block
@property (retain) HMAccessoryBrowser * accessoryBrowser;                                                                 //@synthesize accessoryBrowser=_accessoryBrowser - In the implementation block
@property (getter=_homeManagerQueue,readonly) NSObject*<OS_dispatch_queue> homeManagerQueue;                              //@synthesize homeManagerQueue=_homeManagerQueue - In the implementation block
@property (setter=_setCachedOwnedHomes:,getter=_cachedOwnedHomes,nonatomic,copy) NSArray * cachedOwnedHomes;              //@synthesize cachedOwnedHomes=_cachedOwnedHomes - In the implementation block
@property (nonatomic,readonly) NSArray * allOwnedHomes; 
@property (nonatomic,readonly) TVCSHome * ownedCurrentHome; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)_applyCurrentAirPlaySettingsToHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)keyPathsForValuesAffectingLocalAccessory;
-(id)_init;
-(BOOL)isAdvertising;
-(void)homeManagerDidUpdateCurrentHome:(id)arg1 ;
-(void)homeManagerDidUpdateDataSyncState:(id)arg1 ;
-(void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(id)homes;
-(void)setAdvertising:(BOOL)arg1 ;
-(void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2 ;
-(void)setConfigurationInProgress:(BOOL)arg1 ;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(void)setAccessoryBrowser:(HMAccessoryBrowser *)arg1 ;
-(HMAccessoryBrowser *)accessoryBrowser;
-(SFDeviceSetupWHAService *)setupService;
-(void)setSetupService:(SFDeviceSetupWHAService *)arg1 ;
-(void)recomputeCurrentAccessoryState;
-(void)accessoryStateChanged;
-(void)_calculateCurrentStateAndFindLocalAccessory;
-(id)_homeManagerQueue;
-(void)stopAdvertisingForProximityKeyTransfer;
-(long long)homeConfigurationState;
-(void)_queueStopBrowsingForLocalAccessory;
-(void)_queueCalculateCurrentStateAndFindLocalAccessory;
-(NSArray *)allOwnedHomes;
-(void)_setCachedOwnedHomes:(id)arg1 ;
-(void)_updateCachedOwnedHomes;
-(void)_updateAccessoryState;
-(BOOL)_isAuthenticatedWithiCloud;
-(void)_setLocalAccessory:(id)arg1 homeConfigurationState:(long long)arg2 ;
-(id)_currentHMAccessory;
-(TVCSAccessory *)localAccessory;
-(void)_moveLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_addLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_nextAvailableDefaultHomeName;
-(void)reloadHomeConfiguration;
-(void)forgetHomeConfiguration:(/*^block*/id)arg1 ;
-(void)startAdvertisingForProximityKeyTransferWithType:(long long)arg1 ;
-(void)startBrowsingForLocalAccessory;
-(void)stopBrowsingForLocalAccessory;
-(TVCSHome *)ownedCurrentHome;
-(void)moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createRoomNamed:(id)arg1 inHome:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createDefaultHomeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setHomeConfigurationState:(long long)arg1 ;
-(BOOL)isConfigurationInProgress;
-(void)setLocalAccessory:(TVCSAccessory *)arg1 ;
-(BOOL)isBrowsingForAccessory;
-(void)setBrowsingForAccessory:(BOOL)arg1 ;
-(HMAccessory *)browsedCurrentHMAccessory;
-(void)setBrowsedCurrentHMAccessory:(HMAccessory *)arg1 ;
-(id)_cachedOwnedHomes;
@end

