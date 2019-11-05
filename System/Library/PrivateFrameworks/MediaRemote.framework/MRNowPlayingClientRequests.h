/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, _MRNowPlayingClientProtobuf, NSArray;

@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _playerClients;
	_MRNowPlayingClientProtobuf* _client;
	NSArray* _nowPlayingClients;

}

@property (nonatomic,readonly) _MRNowPlayingClientProtobuf * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSArray * nowPlayingClients;                       //@synthesize nowPlayingClients=_nowPlayingClients - In the implementation block
-(id)debugDescription;
-(_MRNowPlayingClientProtobuf *)client;
-(id)initWithClient:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(NSArray *)nowPlayingClients;
-(id)playerClients;
-(id)nowPlayingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(void)removePlayer:(id)arg1 ;
@end
