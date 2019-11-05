/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/C2RequestDelegate.h>

@protocol OS_dispatch_queue;
@class CKStreamingAsset, NSObject, NSURLSessionDataTask, NSString;

@interface CKStreamingAssetAppendContext : NSObject <C2RequestDelegate> {

	BOOL _appending;
	BOOL _currentAppendCancelled;
	BOOL _fakeMissingUploadReceipt;
	CKStreamingAsset* _streamingAsset;
	NSObject*<OS_dispatch_queue> _appendQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	unsigned long long _currentSegmentLength;
	NSURLSessionDataTask* _dataTask;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) CKStreamingAsset * streamingAsset;                                        //@synthesize streamingAsset=_streamingAsset - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> appendQueue;                                 //@synthesize appendQueue=_appendQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,getter=isAppending,nonatomic) BOOL appending;                                        //@synthesize appending=_appending - In the implementation block
@property (assign,getter=isCurrentAppendCancelled,nonatomic) BOOL currentAppendCancelled;              //@synthesize currentAppendCancelled=_currentAppendCancelled - In the implementation block
@property (assign,nonatomic) unsigned long long currentSegmentLength;                                  //@synthesize currentSegmentLength=_currentSegmentLength - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;                                          //@synthesize dataTask=_dataTask - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL fakeMissingUploadReceipt;                                            //@synthesize fakeMissingUploadReceipt=_fakeMissingUploadReceipt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestToAppendSegmentData:(id)arg1 uploadURL:(id)arg2 offset:(unsigned long long)arg3 ;
-(NSString *)description;
-(id)init;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)abort;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(NSURLSessionDataTask *)dataTask;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(CKStreamingAsset *)streamingAsset;
-(BOOL)appendSegmentWithData:(id)arg1 newStreamingAsset:(id*)arg2 error:(id*)arg3 ;
-(void)appendSegmentWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)appendQueue;
-(BOOL)isAppending;
-(void)setAppending:(BOOL)arg1 ;
-(void)setCurrentAppendCancelled:(BOOL)arg1 ;
-(void)setCurrentSegmentLength:(unsigned long long)arg1 ;
-(BOOL)isCurrentAppendCancelled;
-(BOOL)fakeMissingUploadReceipt;
-(unsigned long long)currentSegmentLength;
-(id)initWithStreamingAsset:(id)arg1 ;
-(BOOL)appendSegmentWithData:(id)arg1 error:(id*)arg2 ;
-(void)setStreamingAsset:(CKStreamingAsset *)arg1 ;
-(void)setAppendQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFakeMissingUploadReceipt:(BOOL)arg1 ;
@end

