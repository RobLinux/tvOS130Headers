/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKDaemonClient;

@interface PKManager : NSObject {

	PKDaemonClient* _client;

}

@property (retain) PKDaemonClient * client;              //@synthesize client=_client - In the implementation block
+(id)defaultManager;
+(id)managerForUser:(unsigned)arg1 ;
-(PKDaemonClient *)client;
-(void)setClient:(PKDaemonClient *)arg1 ;
-(id)initForService:(const char*)arg1 ;
-(id)initForUser:(unsigned)arg1 ;
-(id)containingAppForExtensionProperties:(id)arg1 ;
-(void)holdRequest:(id)arg1 flags:(unsigned long long)arg2 result:(/*^block*/id)arg3 ;
-(void)registerPlugInAtURL:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)unregisterPlugInAtURL:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)registerPlugInsInBundle:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)unregisterPlugInsInBundle:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)informationForPlugInWithPid:(int)arg1 ;
-(id)containingAppForPlugInConnectedTo:(id)arg1 ;
-(id)containingAppForPlugInWithPid:(int)arg1 ;
-(void)holdPlugInsInApplication:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)forceHoldPlugIn:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 result:(/*^block*/id)arg3 ;
-(id)holdPlugInsInApplication:(id)arg1 withError:(id*)arg2 ;
-(id)forceHoldPlugIn:(id)arg1 withError:(id*)arg2 ;
-(id)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 withError:(id*)arg3 ;
-(void)releaseHold:(id)arg1 ;
-(void)releaseHold:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)releaseHold:(id)arg1 withError:(id*)arg2 ;
-(void)updateExtensionStatesForPlugIns:(id)arg1 result:(/*^block*/id)arg2 ;
@end

