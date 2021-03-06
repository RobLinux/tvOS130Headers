/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _originClients;
	NSMutableDictionary* _originClientRequests;

}
+(id)sharedManager;
-(id)debugDescription;
-(id)init;
-(id)playerClientForPlayerPath:(id)arg1 ;
-(id)originClientForOrigin:(id)arg1 ;
-(id)localOriginClient;
-(id)clientForPlayerPath:(id)arg1 ;
-(id)playerClientRequestsForPlayerPath:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(void)removeClient:(id)arg1 ;
-(void)removePlayer:(id)arg1 ;
-(void)removeOrigin:(id)arg1 ;
-(id)originClientForPlayerPath:(id)arg1 ;
-(id)existingOriginClientRequestsForPlayerPath:(id)arg1 ;
-(void)removeOriginRequests:(id)arg1 ;
-(id)existingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(id)originClientRequestsForPlayerPath:(id)arg1 ;
-(id)existingOriginClientForPlayerPath:(id)arg1 ;
-(id)clientRequestsForPlayerPath:(id)arg1 ;
-(id)existingClientRequestsForPlayerPath:(id)arg1 ;
-(id)existingClientForPlayerPath:(id)arg1 ;
@end

