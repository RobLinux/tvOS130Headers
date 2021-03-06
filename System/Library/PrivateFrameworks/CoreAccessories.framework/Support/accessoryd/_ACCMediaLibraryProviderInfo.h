/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCMediaLibraryXPCClientProtocol;
@class NSXPCConnection, ACCMediaLibraryServerRemote, NSString, NSMutableDictionary;

@interface _ACCMediaLibraryProviderInfo : NSObject {

	NSXPCConnection* _connection;
	id<ACCMediaLibraryXPCClientProtocol> _remoteObject;
	ACCMediaLibraryServerRemote* _serverRemote;
	NSString* _providerUID;
	NSMutableDictionary* _mediaLibraryList;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<ACCMediaLibraryXPCClientProtocol> remoteObject;              //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) ACCMediaLibraryServerRemote * serverRemote;                     //@synthesize serverRemote=_serverRemote - In the implementation block
@property (nonatomic,retain) NSString * providerUID;                                         //@synthesize providerUID=_providerUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mediaLibraryList;                         //@synthesize mediaLibraryList=_mediaLibraryList - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id<ACCMediaLibraryXPCClientProtocol>)remoteObject;
-(void)setRemoteObject:(id<ACCMediaLibraryXPCClientProtocol>)arg1 ;
-(ACCMediaLibraryServerRemote *)serverRemote;
-(void)setServerRemote:(ACCMediaLibraryServerRemote *)arg1 ;
-(NSString *)providerUID;
-(void)setProviderUID:(NSString *)arg1 ;
-(NSMutableDictionary *)mediaLibraryList;
-(void)setMediaLibraryList:(NSMutableDictionary *)arg1 ;
@end

