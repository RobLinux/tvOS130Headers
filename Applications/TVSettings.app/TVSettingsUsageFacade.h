/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSArray, NSNumber;

@interface TVSettingsUsageFacade : NSObject {

	NSObject*<OS_dispatch_queue> _usage_queue;
	BOOL _usageUpdateCancelled;
	NSMutableDictionary* _mediaCache;
	NSArray* _usageBundlesCache;
	BOOL _loadingInstalledApps;
	NSNumber* _usedAppStorage;
	NSNumber* _totalAppStorage;
	NSArray* _installedUserApps;

}

@property (nonatomic,copy) NSArray * installedUserApps;                 //@synthesize installedUserApps=_installedUserApps - In the implementation block
@property (nonatomic,retain) NSNumber * usedAppStorage;                 //@synthesize usedAppStorage=_usedAppStorage - In the implementation block
@property (assign,nonatomic) BOOL loadingInstalledApps;                 //@synthesize loadingInstalledApps=_loadingInstalledApps - In the implementation block
@property (nonatomic,readonly) NSNumber * totalAppStorage;              //@synthesize totalAppStorage=_totalAppStorage - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)loadingInstalledApps;
-(void)uninstallAppWithProxy:(id)arg1 ;
-(void)setLoadingInstalledApps:(BOOL)arg1 ;
-(void)_fetchAppUsageInfo;
-(void)setInstalledUserApps:(NSArray *)arg1 ;
-(void)setUsedAppStorage:(NSNumber *)arg1 ;
-(NSArray *)installedUserApps;
-(NSNumber *)usedAppStorage;
-(NSNumber *)totalAppStorage;
@end

