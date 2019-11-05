/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:33 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <backboardd/backboardd-Structs.h>
@class BSMutableIntegerMap;

@interface BKHIDClientConnectionManager : NSObject {

	IOHIDEventSystemRef _hidEventSystem;
	BSMutableIntegerMap* _taskPortToClientConnectionMapping;
	BSMutableIntegerMap* _pidToClientConnectionMapping;
	CFDictionaryRef _hidConnectionToBKConnection;
	os_unfair_lock_s _lock;

}
-(id)description;
-(void)dealloc;
-(id)initWithHIDEventSystem:(IOHIDEventSystemRef)arg1 ;
-(int)pidForBundleID:(id)arg1 ;
-(id)bundleIDForPID:(int)arg1 ;
-(IOHIDEventSystemConnectionRef)copyClientForTaskPort:(unsigned)arg1 ;
-(IOHIDEventSystemConnectionRef)copyClientForDestination:(id)arg1 ;
-(id)clientForTaskPort:(unsigned)arg1 ;
-(id)clientForDestination:(id)arg1 ;
-(void)_clientConnectionAdded:(IOHIDEventSystemConnectionRef)arg1 ;
-(void)_clientConnectionRemoved:(IOHIDEventSystemConnectionRef)arg1 ;
@end

