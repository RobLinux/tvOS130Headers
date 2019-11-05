/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>

@class RPBroadcastViewController, RPBroadcastExtensionHostContext, NSXPCListenerEndpoint;

@interface RPBroadcastHostViewController : _UIRemoteViewController {

	RPBroadcastViewController* _broadcastViewController;
	RPBroadcastExtensionHostContext* _hostContext;
	NSXPCListenerEndpoint* _listenerEndpoint;

}

@property (assign,nonatomic,__weak) RPBroadcastViewController * broadcastViewController;              //@synthesize broadcastViewController=_broadcastViewController - In the implementation block
@property (nonatomic,retain) RPBroadcastExtensionHostContext * hostContext;                           //@synthesize hostContext=_hostContext - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                                //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(RPBroadcastExtensionHostContext *)hostContext;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setHostContext:(RPBroadcastExtensionHostContext *)arg1 ;
-(void)setBroadcastViewController:(RPBroadcastViewController *)arg1 ;
-(void)updateBroadcastHandlerListenerEndpoint;
-(RPBroadcastViewController *)broadcastViewController;
-(oneway void)completeSetupWithBroadcastURL:(id)arg1 ;
@end

