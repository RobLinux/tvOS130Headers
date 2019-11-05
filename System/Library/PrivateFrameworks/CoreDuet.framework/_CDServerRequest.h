/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/NSURLSessionDelegate.h>
#import <CoreDuet/NSURLSessionDownloadDelegate.h>

@class NSOperationQueue, NSURLSession, NSMutableURLRequest, NSHTTPURLResponse, NSMutableData, NSString;

@interface _CDServerRequest : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate> {

	/*^block*/id _responseHandler;
	NSOperationQueue* _sessionQueue;
	NSURLSession* _session;
	NSMutableURLRequest* _request;
	NSHTTPURLResponse* _httpResponse;
	NSMutableData* _responseData;

}

@property (copy) id responseHandler;                                //@synthesize responseHandler=_responseHandler - In the implementation block
@property (retain) NSOperationQueue * sessionQueue;                 //@synthesize sessionQueue=_sessionQueue - In the implementation block
@property (retain) NSURLSession * session;                          //@synthesize session=_session - In the implementation block
@property (retain) NSMutableURLRequest * request;                   //@synthesize request=_request - In the implementation block
@property (retain) NSHTTPURLResponse * httpResponse;                //@synthesize httpResponse=_httpResponse - In the implementation block
@property (retain) NSMutableData * responseData;                    //@synthesize responseData=_responseData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addHTTPIfModifiedSinceToHeaders:(id)arg1 date:(id)arg2 ;
+(id)getHTTPModifiedSinceFromHeaders:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(NSMutableURLRequest *)request;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(NSURLSession *)session;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSMutableData *)responseData;
-(id)startDataTaskWithURI:(id)arg1 headers:(id)arg2 timeoutInterval:(double)arg3 responseHandler:(/*^block*/id)arg4 ;
-(NSOperationQueue *)sessionQueue;
-(id)_requestForMethod:(id)arg1 URI:(id)arg2 queryItems:(id)arg3 headers:(id)arg4 body:(id)arg5 timeoutInterval:(double)arg6 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)_newDefaultSession;
-(id)responseHandler;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(NSHTTPURLResponse *)httpResponse;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(id)startDownloadTaskWithURI:(id)arg1 headers:(id)arg2 timeoutInterval:(double)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setSessionQueue:(NSOperationQueue *)arg1 ;
@end

