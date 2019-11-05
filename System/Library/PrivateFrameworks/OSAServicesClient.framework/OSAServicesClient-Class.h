/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/OSAServicesClient.framework/OSAServicesClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OTAAgentServices;
#import <OSAServicesClient/OSAServicesClient-Structs.h>
@class NSXPCConnection;

@interface OSAServicesClient : NSObject {

	NSXPCConnection* _connection;
	id<OTAAgentServices> _synchRemoteObjectProxy;

}
+(id)sharedClient;
-(id)init;
-(void)dealloc;
-(unsigned)uidForUser:(id)arg1 ;
-(BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4 ;
-(BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 ;
-(id)crashreporterKey;
-(id)awdKey;
-(id)queryKey:(CFStringRef)arg1 ;
@end
