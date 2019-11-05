/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensionsDaemon/NSURLSessionDelegate.h>
#import <DiagnosticExtensionsDaemon/NSURLSessionTaskDelegate.h>
#import <DiagnosticExtensionsDaemon/NSURLSessionDataDelegate.h>

@protocol OS_os_log, DEDSeedingClientDelegate;
@class NSObject, DEDBugSessionConfiguration, NSURLSession, NSString;

@interface DEDSeedingClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	NSObject*<OS_os_log> _log;
	DEDBugSessionConfiguration* _config;
	id<DEDSeedingClientDelegate> _uploadDelegate;
	NSURLSession* _foregroundSession;
	NSString* _bugSessionIdentifier;
	NSURLSession* _backgroundSession;

}

@property (retain) NSObject*<OS_os_log> log;                                 //@synthesize log=_log - In the implementation block
@property (retain) DEDBugSessionConfiguration * config;                      //@synthesize config=_config - In the implementation block
@property (__weak) id<DEDSeedingClientDelegate> uploadDelegate;              //@synthesize uploadDelegate=_uploadDelegate - In the implementation block
@property (retain) NSURLSession * foregroundSession;                         //@synthesize foregroundSession=_foregroundSession - In the implementation block
@property (retain) NSString * bugSessionIdentifier;                          //@synthesize bugSessionIdentifier=_bugSessionIdentifier - In the implementation block
@property (retain) NSURLSession * backgroundSession;                         //@synthesize backgroundSession=_backgroundSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)cleanup;
-(void)setBackgroundSession:(NSURLSession *)arg1 ;
-(DEDBugSessionConfiguration *)config;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setConfig:(DEDBugSessionConfiguration *)arg1 ;
-(NSURLSession *)backgroundSession;
-(id<DEDSeedingClientDelegate>)uploadDelegate;
-(NSString *)bugSessionIdentifier;
-(void)setUploadDelegate:(id<DEDSeedingClientDelegate>)arg1 ;
-(void)updatePromise:(id)arg1 withFilename:(id)arg2 size:(long long)arg3 status:(long long)arg4 success:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(void)sendFile:(id)arg1 promise:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithConfiguration:(id)arg1 sessionID:(id)arg2 delegate:(id)arg3 ;
-(void)makePromiseWithUUID:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)updatePromise:(id)arg1 withAttachmentGroup:(id)arg2 status:(long long)arg3 success:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)cancelPromise:(id)arg1 withSuccess:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)setBugSessionIdentifier:(NSString *)arg1 ;
-(BOOL)isLoggedIn;
-(id)loginWithTokenURL;
-(void)postToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(id)filerURL;
-(id)beginUploadWithRequest:(id)arg1 fromFileURL:(id)arg2 ;
-(void)getFilerTokenForPromise:(id)arg1 withSuccess:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)seedingLoginWithSuccess:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(id)newFilerTokenURL;
-(NSURLSession *)foregroundSession;
-(id)HTTPErrorWithResponse:(id)arg1 withData:(id)arg2 ;
-(void)dataForURLRequest:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)jsonForURLRequest:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)performHTTPMethod:(id)arg1 toURL:(id)arg2 parameters:(id)arg3 encoding:(unsigned long long)arg4 success:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(id)bodyDataForParameters:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)contentTypeForParameterEncoding:(unsigned long long)arg1 ;
-(id)promiseConfiguration;
-(id)newFilePromiseURL;
-(id)filePromiseURLForPromise:(id)arg1 ;
-(void)jsonForURL:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)putToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(id)seedingURL;
-(id)_serverErrorFromTask:(id)arg1 ;
-(id)_formEncodedBodyForDictionary:(id)arg1 ;
-(id)_keyValuePairsForKey:(id)arg1 value:(id)arg2 ;
-(void)dataForURL:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)deleteResourceAtURL:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)getPromise:(id)arg1 withSuccess:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)setForegroundSession:(NSURLSession *)arg1 ;
@end

