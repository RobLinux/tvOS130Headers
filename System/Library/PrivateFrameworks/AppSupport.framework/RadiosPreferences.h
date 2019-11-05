/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RadiosPreferencesDelegate, OS_dispatch_queue, OS_os_log;
#import <AppSupport/AppSupport-Structs.h>
@class NSObject;

@interface RadiosPreferences : NSObject {

	SCPreferencesRef _prefs;
	int _applySkipCount;
	id<RadiosPreferencesDelegate> _delegate;
	BOOL _isCachedAirplaneModeValid;
	BOOL _cachedAirplaneMode;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_os_log> radios_prefs_log;
	BOOL notifyForExternalChangeOnly;

}

@property (assign,nonatomic) BOOL airplaneMode; 
@property (assign,nonatomic) id<RadiosPreferencesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL notifyForExternalChangeOnly; 
-(oneway void)release;
-(id)init;
-(void)dealloc;
-(void)synchronize;
-(void)setValue:(void*)arg1 forKey:(id)arg2 ;
-(id<RadiosPreferencesDelegate>)delegate;
-(void)setDelegate:(id<RadiosPreferencesDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void*)getValueForKey:(id)arg1 ;
-(void)notifyTarget:(unsigned)arg1 ;
-(void)initializeSCPrefs:(id)arg1 ;
-(void)setAirplaneModeWithoutMirroring:(BOOL)arg1 ;
-(void*)getValueWithLockForKey:(id)arg1 ;
-(void)setCallback:(/*function pointer*/void*)arg1 withContext:(SCD_Struct_Ra8*)arg2 ;
-(BOOL)notifyForExternalChangeOnly;
-(void)refresh;
-(BOOL)airplaneMode;
-(void)setAirplaneMode:(BOOL)arg1 ;
-(BOOL)telephonyStateWithBundleIdentifierOut:(id*)arg1 ;
-(void)setTelephonyState:(BOOL)arg1 fromBundleID:(id)arg2 ;
-(void)setNotifyForExternalChangeOnly:(BOOL)arg1 ;
@end

