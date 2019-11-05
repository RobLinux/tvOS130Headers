/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue, CLHNetworkControllerDelegate;
@class NSObject, NSOperationQueue, NSURLSession, NSMutableArray, NSDateFormatter, CLHEndpointSelector, NSString;

@interface CLHNetworkController : NSObject <NSURLSessionDataDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	NSURLSession* _session;
	NSMutableArray* _activeTasks;
	NSDateFormatter* _dateFormatter;
	double _timeout;
	CLHEndpointSelector* _endpointSelector;
	id<CLHNetworkControllerDelegate> _delegate;

}

@property (assign,nonatomic) double timeout;                                         //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) CLHEndpointSelector * endpointSelector;                 //@synthesize endpointSelector=_endpointSelector - In the implementation block
@property (nonatomic,retain) id<CLHNetworkControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CLHNetworkControllerDelegate>)delegate;
-(void)setDelegate:(id<CLHNetworkControllerDelegate>)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(double)timeout;
-(id)initWithQueue:(id)arg1 ;
-(void)submitRequest:(id)arg1 ;
-(void)setEndpointSelector:(CLHEndpointSelector *)arg1 ;
-(CLHEndpointSelector *)endpointSelector;
@end

