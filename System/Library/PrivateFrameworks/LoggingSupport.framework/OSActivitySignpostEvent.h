/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityLogMessageEvent.h>

@interface OSActivitySignpostEvent : OSActivityLogMessageEvent {

	unsigned long long _signpostID;

}

@property (nonatomic,readonly) unsigned long long signpostID;              //@synthesize signpostID=_signpostID - In the implementation block
-(unsigned long long)signpostID;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
@end

