/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
#import <Foundation/Foundation-Structs.h>
@class _NSXPCConnectionExportInfo, NSObject;

@interface _NSXPCConnectionExportedObjectTable : NSObject {

	opaque_pthread_mutex_t _lock;
	_NSXPCConnectionExportInfo* _proxy1;
	CFDictionaryRef _proxyNumberToObject;
	CFDictionaryRef _objectToProxyNumber;
	unsigned long long _next;
	BOOL _valid;
	NSObject*<OS_dispatch_group> _replyGroup;

}
-(id)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)exportedObjectForProxyNumber:(unsigned long long)arg1 ;
-(id)interfaceForProxyNumber:(unsigned long long)arg1 ;
-(void)incrementOutstandingReplyCount;
-(void)decrementOutstandingReplyCount;
-(void)setExportedObject:(id)arg1 forProxyNumber:(unsigned long long)arg2 ;
-(void)setInterface:(id)arg1 forProxyNumber:(unsigned long long)arg2 ;
-(void)receivedReleaseForProxyNumber:(unsigned long long)arg1 userQueue:(id)arg2 ;
-(void)releaseExportedObject:(unsigned long long)arg1 ;
-(unsigned long long)proxyNumberForExportedObject:(id)arg1 interface:(id)arg2 ;
@end

