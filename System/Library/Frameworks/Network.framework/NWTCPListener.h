/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_listener, NWTCPListenerDelegate;
@class NWEndpoint, NSError, NSObject, NWParameters, NSString;

@interface NWTCPListener : NSObject {

	NWEndpoint* _localEndpoint;
	NSError* _error;
	NSObject*<OS_nw_listener> _internalListener;
	NWParameters* _parameters;
	NWEndpoint* _endpoint;
	NSString* _launchdKey;
	id<NWTCPListenerDelegate> _delegate;

}

@property (retain) NSObject*<OS_nw_listener> internalListener;              //@synthesize internalListener=_internalListener - In the implementation block
@property (retain) NWParameters * parameters;                               //@synthesize parameters=_parameters - In the implementation block
@property (retain) NWEndpoint * endpoint;                                   //@synthesize endpoint=_endpoint - In the implementation block
@property (retain) NSString * launchdKey;                                   //@synthesize launchdKey=_launchdKey - In the implementation block
@property (__weak) id<NWTCPListenerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (retain) NWEndpoint * localEndpoint;                              //@synthesize localEndpoint=_localEndpoint - In the implementation block
-(id<NWTCPListenerDelegate>)delegate;
-(void)setDelegate:(id<NWTCPListenerDelegate>)arg1 ;
-(void)handleError:(id)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(NWEndpoint *)endpoint;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(NWEndpoint *)localEndpoint;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(NWParameters *)parameters;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
-(void)setParameters:(NWParameters *)arg1 ;
-(void)handleNewConnection:(id)arg1 ;
-(void)startInternal;
-(NSObject*<OS_nw_listener>)internalListener;
-(void)setInternalListener:(NSObject*<OS_nw_listener>)arg1 ;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 launchdKey:(id)arg3 bonjourEndpoint:(id)arg4 ;
-(id)initWithLaunchdKey:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(id)initWithBonjourServiceEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(NSString *)launchdKey;
-(void)setLaunchdKey:(NSString *)arg1 ;
@end

