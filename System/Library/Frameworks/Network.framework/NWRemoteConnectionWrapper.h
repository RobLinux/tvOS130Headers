/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NWConnection;

@interface NWRemoteConnectionWrapper : NSObject {

	NSUUID* _clientID;
	NWConnection* _connection;

}

@property (retain) NSUUID * clientID;                      //@synthesize clientID=_clientID - In the implementation block
@property (retain) NWConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)setConnection:(NWConnection *)arg1 ;
-(NWConnection *)connection;
-(NSUUID *)clientID;
-(void)setClientID:(NSUUID *)arg1 ;
@end

