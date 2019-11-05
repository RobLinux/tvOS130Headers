/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class BrightnessSystemClientInternal, NSObject;

@interface BrightnessSystemClient : NSObject {

	BrightnessSystemClientInternal* bsci;
	NSObject*<OS_os_log> _logHandle;
	/*^block*/id _displayNotificationBlock;
	/*^block*/id _keyboardNotificationBlock;
	/*^block*/id _propertyNotificationBlock;

}
-(id)init;
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(BOOL)isAlsSupported;
-(void)unregisterDisplayNotificationBlock;
-(void)unregisterKeyboardNotificationBlock;
-(void)unregisterPropertyNotificationBlock;
-(BOOL)setProperty:(id)arg1 withKey:(id)arg2 andDisplay:(unsigned long long)arg3 ;
-(id)copyPropertyForKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)registerDisplayNotificationCallbackBlock:(/*^block*/id)arg1 ;
-(void)registerNotificationForKey:(id)arg1 ;
-(void)unregisterNotificationForKey:(id)arg1 ;
-(void)registerNotificationForKeys:(id)arg1 ;
-(void)unregisterNotificationForKeys:(id)arg1 ;
-(void)registerNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)unregisterNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)registerNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)unregisterNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(BOOL)setProperty:(id)arg1 withKey:(id)arg2 keyboardID:(unsigned long long)arg3 ;
-(id)copyPropertyForKey:(id)arg1 keyboardID:(unsigned long long)arg2 ;
-(void)registerKeyboardNotificationCallbackBlock:(/*^block*/id)arg1 ;
-(void)registerNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2 ;
-(void)unregisterNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2 ;
@end

