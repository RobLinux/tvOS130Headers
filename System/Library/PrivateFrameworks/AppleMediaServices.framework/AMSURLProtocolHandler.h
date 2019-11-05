/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSURLHandling.h>

@protocol OS_dispatch_queue;
@class AMSURLSession, NSObject, NSString;

@interface AMSURLProtocolHandler : NSObject <AMSURLHandling> {

	AMSURLSession* session;
	NSObject*<OS_dispatch_queue> _responsePingQueue;
	NSObject*<OS_dispatch_queue> _metricsQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responsePingQueue;              //@synthesize responsePingQueue=_responsePingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metricsQueue;                   //@synthesize metricsQueue=_metricsQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) AMSURLSession * session; 
+(double)_randomDouble;
-(id)init;
-(AMSURLSession *)session;
-(void)setSession:(AMSURLSession *)arg1 ;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4 ;
-(id)handleResponse:(id)arg1 task:(id)arg2 ;
-(id)decodeData:(id)arg1 task:(id)arg2 error:(id*)arg3 ;
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3 ;
-(void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id*)arg3 ;
-(BOOL)_URLIsTrustedFromRequest:(id)arg1 bag:(id)arg2 ;
-(BOOL)_shouldEnableReversePushForTask:(id)arg1 ;
-(void)_pingURL:(id)arg1 session:(id)arg2 bag:(id)arg3 ;
-(void)reportMetricsForTaskInfo:(id)arg1 decodedObject:(id)arg2 ;
-(void)_setResponseCookiesFromResponse:(id)arg1 taskInfo:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)responsePingQueue;
-(void)setResponsePingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

