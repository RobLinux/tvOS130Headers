/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMMotionUtils : NSObject
+(BOOL)hasEntitlement:(id)arg1 ;
+(id)sendMessage:(shared_ptr<CLConnectionMessage>*)arg1 withReplyClassesSync:(id)arg2 ;
+(BOOL)featureAvailability:(const char*)arg1 ;
+(long long)authorizationStatus;
+(void)tccServiceMotionAccessWithBlock:(/*^block*/id)arg1 ;
+(BOOL)sendMessageSync:(shared_ptr<CLConnectionMessage>*)arg1 onConnection:(CLConnectionClient*)arg2 timeoutAfter:(double)arg3 withReplyHandler:(/*^block*/id)arg4 ;
+(void)tccServiceMotionAccessWithLabel:(id)arg1 ;
+(id)fileHandleForWritingToURL:(id)arg1 ;
+(id)getExecutablePathFromPid:(int)arg1 ;
+(void)sendMessage:(shared_ptr<CLConnectionMessage>*)arg1 withReplyClasses:(id)arg2 callback:(/*^block*/id)arg3 ;
+(long long)isAuthorizedForEntitlement:(id)arg1 ;
+(BOOL)isMotionActivityEntitled;
+(id)logDirectory;
+(unsigned long long)copyDataFrom:(id)arg1 to:(id)arg2 ;
@end
