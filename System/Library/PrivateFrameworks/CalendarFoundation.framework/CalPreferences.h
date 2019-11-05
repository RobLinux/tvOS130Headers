/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface CalPreferences : NSObject {

	NSString* _domain;
	NSMutableSet* _registeredNotificationsToReflect;

}
-(id)init;
-(void)dealloc;
-(id)initWithDomain:(id)arg1 ;
-(id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2 ;
-(void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1 ;
-(void)_preferenceChangedInternally:(id)arg1 ;
-(void)_synchronizePreferences;
-(void)registerReflectionForPreferenceWithNotificationName:(id)arg1 ;
-(BOOL)getBooleanPreference:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)setBooleanPreference:(id)arg1 value:(BOOL)arg2 notificationName:(id)arg3 ;
-(long long)getIntegerPreference:(id)arg1 defaultValue:(long long)arg2 ;
-(void)setIntegerPreference:(id)arg1 value:(long long)arg2 notificationName:(id)arg3 ;
-(void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3 ;
-(void)_preferenceChangedExternally:(id)arg1 ;
@end

