/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/JXOperation.h>
#import <ActionKit/NSURLConnectionDelegate.h>
#import <ActionKit/NSURLConnectionDataDelegate.h>

@class NSMutableURLRequest, NSURLResponse, NSError, NSOutputStream, NSURLConnection, NSString;

@interface JXURLConnectionOperation : JXOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

	NSMutableURLRequest* _request;
	NSURLResponse* _response;
	NSError* _error;
	NSOutputStream* _outputStream;
	long long _bytesDownloaded;
	long long _bytesUploaded;
	NSURLConnection* _connection;

}

@property (retain) NSURLConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (retain) NSMutableURLRequest * request;                   //@synthesize request=_request - In the implementation block
@property (retain) NSURLResponse * response;                        //@synthesize response=_response - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (assign) long long bytesDownloaded;                       //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (assign) long long bytesUploaded;                         //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (retain) NSOutputStream * outputStream;                   //@synthesize outputStream=_outputStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)networkThread;
+(void)runLoopForever;
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(NSError *)error;
-(NSMutableURLRequest *)request;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSURLResponse *)response;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSURLConnection *)connection;
-(NSOutputStream *)outputStream;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(long long)bytesDownloaded;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)main;
-(long long)bytesUploaded;
-(void)setBytesUploaded:(long long)arg1 ;
-(void)setBytesDownloaded:(long long)arg1 ;
-(void)startConnection;
-(void)willFinish;
-(void)stopConnection;
@end

