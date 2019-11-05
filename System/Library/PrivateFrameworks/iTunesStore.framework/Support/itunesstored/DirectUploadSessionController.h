/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/NSURLSessionTaskDelegate.h>

@protocol DirectUploadSessionDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, ISOperationQueue, NSMutableArray, NSString;

@interface DirectUploadSessionController : NSObject <NSURLSessionTaskDelegate> {

	id<DirectUploadSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ISOperationQueue* _preparationQueue;
	NSMutableArray* _progress;
	NSObject*<OS_dispatch_source> _progressFlushTimer;
	NSMutableArray* _sessions;
	NSMutableArray* _uploadDatabaseIDs;

}

@property (assign,nonatomic,__weak) id<DirectUploadSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long numberOfTasks; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<DirectUploadSessionDelegate>)delegate;
-(void)setDelegate:(id<DirectUploadSessionDelegate>)arg1 ;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)_flushProgress;
-(void)_addUploadTaskWithRequest:(id)arg1 configuration:(id)arg2 URLRequest:(id)arg3 ;
-(void)_failUploadWithDatabaseID:(id)arg1 error:(id)arg2 ;
-(void)_asyncModifyTasksForDatabaseIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_cleanupForDatabaseID:(id)arg1 ;
-(void)addUploadTasksWithRequests:(id)arg1 ;
-(void)cancelUploadTasksWithDatabaseIdentifiers:(id)arg1 ;
-(void)invalidURLSessions;
-(long long)numberOfTasks;
-(void)pauseUploadTasksWithDatabaseIdentifiers:(id)arg1 ;
@end

