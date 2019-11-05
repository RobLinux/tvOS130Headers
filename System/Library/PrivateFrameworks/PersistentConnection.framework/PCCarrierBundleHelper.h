/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersistentConnection/CoreTelephonyClientDataDelegate.h>
#import <PersistentConnection/CoreTelephonyClientCarrierBundleDelegate.h>

@protocol OS_dispatch_queue;
@class CoreTelephonyClient, NSObject, CTXPCServiceSubscriptionContext, NSHashTable, CTBundle, NSDictionary, NSString;

@interface PCCarrierBundleHelper : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate> {

	CoreTelephonyClient* _ctClient;
	NSObject*<OS_dispatch_queue> _queue;
	CTXPCServiceSubscriptionContext* _currentDataContext;
	NSHashTable* _delegates;
	CTBundle* _bundle;
	NSDictionary* _cachedPushSettings;

}

@property (nonatomic,copy) NSDictionary * cachedPushSettings;              //@synthesize cachedPushSettings=_cachedPushSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)helper;
-(id)init;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)operatorBundleChange:(id)arg1 ;
-(id)copyValueFromPushBundleForKey:(id)arg1 error:(id*)arg2 ;
-(id)copyValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)_processCarrierBundleChange:(id)arg1 ;
-(void)_updateCurrentDataSimContext:(id)arg1 ;
-(BOOL)boolValueFromPushBundleForKey:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)cachedPushSettings;
-(void)setCachedPushSettings:(NSDictionary *)arg1 ;
@end

