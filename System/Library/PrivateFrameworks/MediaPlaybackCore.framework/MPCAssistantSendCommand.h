/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPCAssistantConnection, MPCAssistantDiscovery;

@interface MPCAssistantSendCommand : NSObject {

	MPCAssistantConnection* _connection;
	MPCAssistantDiscovery* _discovery;

}
-(id)init;
-(void)_sendCommand:(unsigned)arg1 withOptions:(id)arg2 toEndpoint:(void*)arg3 toDestination:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_formGroupAndSendCommand:(unsigned)arg1 withOptions:(id)arg2 toExternalDestination:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_sendCommand:(unsigned)arg1 path:(void*)arg2 options:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_isAnyDeviceControllable:(id)arg1 ;
-(void*)_findEndpointFromEndpoints:(id)arg1 byGroupLeader:(id)arg2 ;
-(void)sendMediaRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 toLocalDestination:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendMediaRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 toEndpointDestination:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

