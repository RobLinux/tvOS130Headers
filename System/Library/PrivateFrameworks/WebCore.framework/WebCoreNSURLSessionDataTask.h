/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class WebCoreNSURLSession, NSURLRequest, NSError, NSString, NSURLResponse;

@interface WebCoreNSURLSessionDataTask : NSObject {

	WebCoreNSURLSession* _session;
	RefPtr<WebCore::PlatformMediaResource, WTF::DumbPtrTraits<WebCore::PlatformMediaResource> >* _resource;
	RetainPtr<NSURLResponse>* _response;
	unsigned long long _taskIdentifier;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	long long _countOfBytesReceived;
	long long _countOfBytesSent;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesExpectedToReceive;
	long long _state;
	NSError* _error;
	NSString* _taskDescription;
	float _priority;

}

@property (assign) WebCoreNSURLSession * session;                        //@synthesize session=_session - In the implementation block
@property (assign) unsigned long long taskIdentifier;                    //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (copy) NSURLRequest * originalRequest;                         //@synthesize originalRequest=_originalRequest - In the implementation block
@property (copy) NSURLRequest * currentRequest;                          //@synthesize currentRequest=_currentRequest - In the implementation block
@property (copy,readonly) NSURLResponse * response; 
@property (assign) long long countOfBytesReceived;                       //@synthesize countOfBytesReceived=_countOfBytesReceived - In the implementation block
@property (assign) long long countOfBytesSent;                           //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (assign) long long countOfBytesExpectedToSend;                 //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign) long long countOfBytesExpectedToReceive;              //@synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive - In the implementation block
@property (assign) long long state;                                      //@synthesize state=_state - In the implementation block
@property (copy) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (copy) NSString * taskDescription;                             //@synthesize taskDescription=_taskDescription - In the implementation block
@property (assign) float priority;                                       //@synthesize priority=_priority - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSError *)error;
-(NSURLRequest *)currentRequest;
-(long long)state;
-(void)cancel;
-(WebCoreNSURLSession *)session;
-(void)resume;
-(void)setState:(long long)arg1 ;
-(void)suspend;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(unsigned long long)taskIdentifier;
-(void)setCountOfBytesReceived:(long long)arg1 ;
-(long long)countOfBytesReceived;
-(void)setError:(NSError *)arg1 ;
-(NSURLResponse *)response;
-(void)setCountOfBytesExpectedToReceive:(long long)arg1 ;
-(void)setTaskDescription:(NSString *)arg1 ;
-(NSString *)taskDescription;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(NSURLRequest *)originalRequest;
-(long long)countOfBytesExpectedToReceive;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(id)_timingData;
-(long long)countOfBytesExpectedToSend;
-(long long)countOfBytesSent;
-(float)priority;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(void)setPriority:(float)arg1 ;
-(void)setSession:(WebCoreNSURLSession *)arg1 ;
-(void)_cancel;
-(id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 request:(id)arg3 ;
-(id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 URL:(id)arg3 ;
-(void)resource:(PlatformMediaResource*)arg1 sentBytes:(unsigned long long)arg2 totalBytesToBeSent:(unsigned long long)arg3 ;
-(void)resource:(PlatformMediaResource*)arg1 receivedResponse:(const ResourceResponse*)arg2 completionHandler:(CompletionHandler<void (WebCore::ShouldContinue)>*)arg3 ;
-(BOOL)resource:(PlatformMediaResource*)arg1 shouldCacheResponse:(const ResourceResponse*)arg2 ;
-(void)resource:(PlatformMediaResource*)arg1 receivedData:(const char*)arg2 length:(int)arg3 ;
-(void)resource:(PlatformMediaResource*)arg1 receivedRedirect:(const ResourceResponse*)arg2 request:(ResourceRequest*)arg3 completionHandler:(CompletionHandler<void (WebCore::ResourceRequest &&)>*)arg4 ;
-(void)resource:(PlatformMediaResource*)arg1 accessControlCheckFailedWithError:(const ResourceError*)arg2 ;
-(void)resource:(PlatformMediaResource*)arg1 loadFailedWithError:(const ResourceError*)arg2 ;
-(void)resourceFinished:(PlatformMediaResource*)arg1 ;
-(void)_resource:(PlatformMediaResource*)arg1 loadFinishedWithError:(id)arg2 ;
-(void)_restart;
-(void)_finish;
@end

