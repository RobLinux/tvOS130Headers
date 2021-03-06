/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSMutableDictionary, NSSet, NSObject, NSArray, IDSDService;

@interface IDSDServiceController : NSObject {

	NSMapTable* _services;
	NSMapTable* _servicesToNameMap;
	NSMapTable* _servicesToTopicMap;
	NSMutableDictionary* _deviceIDToSubServicesMap;
	NSSet* _allAdHocServices;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * allServices; 
@property (nonatomic,__weak,readonly) NSArray * allServicesStrings; 
@property (nonatomic,readonly) NSSet * allAdHocServices;                         //@synthesize allAdHocServices=_allAdHocServices - In the implementation block
@property (nonatomic,readonly) NSSet * allPrimaryServices; 
@property (nonatomic,readonly) IDSDService * iTunesService; 
@property (nonatomic,readonly) IDSDService * iCloudService; 
+(id)sharedInstance;
+(BOOL)shouldLoadService:(id)arg1 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)userDefaults;
-(id)serviceLoader;
-(void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3 ;
-(NSArray *)allServices;
-(id)serviceWithName:(id)arg1 ;
-(void)_loadServices;
-(id)serviceWithIdentifier:(id)arg1 ;
-(id)serviceWithPushTopic:(id)arg1 ;
-(IDSDService *)iTunesService;
-(NSArray *)allServicesStrings;
-(NSSet *)allPrimaryServices;
-(void)_loadSubServices;
-(void)_loadService:(id)arg1 ;
-(id)_currentSubServicesForDevice:(id)arg1 superService:(id)arg2 ;
-(void)_updateSubServicesForDevice:(id)arg1 superService:(id)arg2 newSubservices:(id)arg3 ;
-(void)_saveSubServices;
-(BOOL)_anyDeviceUsingSubService:(id)arg1 superService:(id)arg2 ;
-(void)_unloadServiceWithName:(id)arg1 ;
-(void)_loadSubServiceWithName:(id)arg1 usingService:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_combinedServicesForAllDevices;
-(id)allServicesWithAdHocServiceType:(unsigned)arg1 ;
-(IDSDService *)iCloudService;
-(NSSet *)allAdHocServices;
@end

