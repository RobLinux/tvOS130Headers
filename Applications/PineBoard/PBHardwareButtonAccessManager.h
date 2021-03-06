/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PBSceneManagerObserver.h>

@protocol OS_os_log;
@class NSObject, BKSApplicationStateMonitor, NSMutableSet, NSMutableOrderedSet, NSString;

@interface PBHardwareButtonAccessManager : NSObject <PBSceneManagerObserver> {

	NSObject*<OS_os_log> _logObject;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	NSMutableSet* _viewServiceApplicationBundleIdentifiers;
	NSMutableSet* _foregroundApplicationBundleIdentifiers;
	NSMutableOrderedSet* _appsWithVolumeButtonAccess;
	NSMutableOrderedSet* _appsWithExclusivePlayPauseButtonAccess;
	NSMutableSet* _suspendedAppsWithVolumeButtonAccess;
	NSMutableSet* _suspendedAppsWithExclusivePlayPauseButtonAccess;
	NSString* _focusedSceneBundleIdentifier;
	NSString* _appWithVolumeButtonAccess;
	NSString* _appWithExclusivePlayPauseButtonAccess;

}

@property (nonatomic,copy) NSString * appWithVolumeButtonAccess;                          //@synthesize appWithVolumeButtonAccess=_appWithVolumeButtonAccess - In the implementation block
@property (nonatomic,copy) NSString * appWithExclusivePlayPauseButtonAccess;              //@synthesize appWithExclusivePlayPauseButtonAccess=_appWithExclusivePlayPauseButtonAccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3 ;
-(void)setExclusivePlayPauseButtonAccessEnabled:(BOOL)arg1 forApp:(id)arg2 ;
-(void)setVolumeButtonAccessEnabled:(BOOL)arg1 forApp:(id)arg2 ;
-(NSString *)appWithExclusivePlayPauseButtonAccess;
-(void)_updateApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 withInfo:(id)arg3 ;
-(void)_updateAppButtonAccess;
-(void)setAppWithExclusivePlayPauseButtonAccess:(NSString *)arg1 ;
-(void)setAppWithVolumeButtonAccess:(NSString *)arg1 ;
-(void)_updateApplicationStateForBundleIdentifier:(id)arg1 ;
-(NSString *)appWithVolumeButtonAccess;
@end

