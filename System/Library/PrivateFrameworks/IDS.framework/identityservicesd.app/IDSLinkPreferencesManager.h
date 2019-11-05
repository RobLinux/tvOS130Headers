/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSMutableDictionary;

@interface IDSLinkPreferencesManager : NSObject {

	opaque_pthread_mutex_t _preferencesLock;
	NSMutableDictionary* _servicesWithPreferences;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)updateService:(id)arg1 withPreferences:(id)arg2 ;
-(void)resetPreferencesForAllServices;
-(BOOL)_validatePreferences:(id)arg1 forService:(id)arg2 ;
-(id)preferencesForService:(id)arg1 ;
-(id)accumulativePreferencesForAllServices;
@end

