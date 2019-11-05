/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OTATaskingAgent;
@class NSXPCConnection;

@interface OTATaskingAgentClient : NSObject {

	NSXPCConnection* _connection;
	id<OTATaskingAgent> _synchRemoteObjectProxy;

}
+(id)sharedClient;
-(id)init;
-(unsigned)uidForUser:(id)arg1 ;
-(BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4 ;
-(BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 ;
-(id)crashreporterKey;
-(id)awdKey;
@end

