/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class _CFXPreferences;

@interface _CFXPreferencesHandle : NSObject {

	_CFXPreferences* prefs;
	os_unfair_lock_s lock;
	unsigned overrideEUID;

}
-(id)init;
-(void)dealloc;
-(void)setEUIDOverride:(unsigned)arg1 ;
-(id)copyPrefs;
@end

