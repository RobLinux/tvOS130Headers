/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKForegroundActiveArbiter.h>

@protocol OS_dispatch_source;
@class NSHashTable, NSObject, NSLock, NSString;

@interface PKUIForegroundActiveArbiter : NSObject <PKForegroundActiveArbiter> {

	BOOL _foreground;
	BOOL _enteringForeground;
	BOOL _enteringForegroundExpired;
	BOOL _active;
	SCD_Struct_PK4 _foregroundActiveState;
	unsigned _deactivationReasons;
	NSHashTable* _observers;
	NSHashTable* _deactivationObservers;
	unsigned long long _backgroundTaskIdentifier;
	NSObject*<OS_dispatch_source> _enteringForegroundTimeout;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(SCD_Struct_PK4)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)willResignActive;
-(void)willEnterForeground;
-(void)didEnterBackground;
-(void)willTerminate;
-(void)didBecomeActive;
-(void)_willAddDeactivationReasonNotification:(id)arg1 ;
-(void)_didRemoveDeactivationReasonNotification:(id)arg1 ;
-(void)_beginEnteringForeground;
-(void)_updateForegroundActiveWithEnteringForegroundPolicy:(long long)arg1 ;
-(unsigned)registerDeactivationObserver:(id)arg1 ;
-(void)unregisterDeactivationObserver:(id)arg1 ;
@end

