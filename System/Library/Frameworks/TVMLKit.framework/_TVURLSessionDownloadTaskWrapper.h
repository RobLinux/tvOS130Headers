/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSURLSessionDownloadTask;

@interface _TVURLSessionDownloadTaskWrapper : NSObject {

	NSURL* _url;
	NSURLSessionDownloadTask* _downloadTask;
	long long _downloadTaskID;
	long long _state;

}

@property (nonatomic,readonly) long long state; 
-(id)initWithURL:(id)arg1 ;
-(long long)state;
-(void)cancel;
-(void)resumeWithCompletionHandler:(/*^block*/id)arg1 ;
@end

