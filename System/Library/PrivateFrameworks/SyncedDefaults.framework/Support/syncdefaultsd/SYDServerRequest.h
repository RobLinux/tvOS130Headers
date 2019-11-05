/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <syncdefaultsd/C2RequestDelegate.h>

@class NSMutableArray, NSURLSessionDataTask, NSMutableURLRequest, NSHTTPURLResponse, NSString;

@interface SYDServerRequest : NSObject <C2RequestDelegate> {

	BOOL _allowsCellular;
	BOOL _cancelled;
	/*^block*/id _completionBlock;
	NSMutableArray* _fragments;
	NSURLSessionDataTask* _dataTask;
	NSMutableURLRequest* _request;
	NSHTTPURLResponse* _response;

}

@property (assign,nonatomic) BOOL allowsCellular;                             //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (nonatomic,retain) NSMutableArray * fragments;                      //@synthesize fragments=_fragments - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;                 //@synthesize dataTask=_dataTask - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * request;                   //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * response;                    //@synthesize response=_response - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) NSMutableURLRequest * URLRequest; 
@property (nonatomic,copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newRequestWithURL:(id)arg1 body:(id)arg2 scheduler:(id)arg3 error:(id*)arg4 ;
+(id)newConfigRequestWithURL:(id)arg1 lastModifiedHeaderForConfig:(id)arg2 scheduler:(id)arg3 ;
+(id)_newURLRequestWithURL:(id)arg1 HTTPMethod:(id)arg2 scheduler:(id)arg3 ;
-(void)setCompletionBlock:(id)arg1 ;
-(NSMutableURLRequest *)request;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
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
-(void)cancel;
-(NSHTTPURLResponse *)response;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)start;
-(BOOL)isCancelled;
-(id)completionBlock;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setAllowsCellular:(BOOL)arg1 ;
-(BOOL)allowsCellular;
-(NSMutableArray *)fragments;
-(NSMutableURLRequest *)URLRequest;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(NSURLSessionDataTask *)dataTask;
-(void)_finishWithError:(id)arg1 ;
-(void)setFragments:(NSMutableArray *)arg1 ;
-(id)initWithURLRequest:(id)arg1 scheduler:(id)arg2 ;
@end

