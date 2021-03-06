/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/ASDRequestProxy.h>

@protocol ASDRequestDelegate, RequestController;
@class RequestBrokerClient, ASDRequest;

@interface RequestProxy : NSObject <ASDRequestProxy> {

	RequestBrokerClient* _broker;
	id<ASDRequestDelegate> _delegate;
	ASDRequest*<RequestController> _request;

}

@property (nonatomic,__weak,readonly) RequestBrokerClient * broker;                 //@synthesize broker=_broker - In the implementation block
@property (nonatomic,readonly) id<ASDRequestDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ASDRequest*<RequestController> request;              //@synthesize request=_request - In the implementation block
-(id)init;
-(id<ASDRequestDelegate>)delegate;
-(ASDRequest*<RequestController>)request;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(void)cancelWithErrorHandler:(/*^block*/id)arg1 ;
-(void)startWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithBroker:(id)arg1 request:(id)arg2 delegate:(id)arg3 ;
-(RequestBrokerClient *)broker;
@end

