/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPBInspecting;
@class NSXPCConnection;

@interface RPBClientConnection : NSObject {

	NSXPCConnection* _xpconnection;
	id<RPBInspecting> _proxyInterface;

}

@property (retain) NSXPCConnection * xpconnection;                //@synthesize xpconnection=_xpconnection - In the implementation block
@property (retain) id<RPBInspecting> proxyInterface;              //@synthesize proxyInterface=_proxyInterface - In the implementation block
-(id<RPBInspecting>)proxyInterface;
-(void)setProxyInterface:(id<RPBInspecting>)arg1 ;
-(NSXPCConnection *)xpconnection;
-(void)setXpconnection:(NSXPCConnection *)arg1 ;
@end

