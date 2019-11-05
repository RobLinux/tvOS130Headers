/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:28:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/system/libxpc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libxpc.dylib/OS_xpc_object.h>
#import <libxpc.dylib/OS_xpc_int64.h>

@protocol OS_xpc_int64 <OS_xpc_object>
@end


@class NSString;

@interface OS_xpc_int64 : OS_xpc_object <OS_xpc_int64>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
@end

