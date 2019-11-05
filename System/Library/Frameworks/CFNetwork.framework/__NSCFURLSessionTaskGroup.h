/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__NSURLSessionTaskGroupForConfiguration.h>

@class NSURLSessionConfiguration, __NSCFURLSession, NSString, NSURLSession;

@interface __NSCFURLSessionTaskGroup : NSObject <__NSURLSessionTaskGroupForConfiguration> {

	NSURLSessionConfiguration* _groupConfiguration_ivar;
	__NSCFURLSession* _groupSession_ivar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)dataTaskWithRequest:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(NSURLSessionConfiguration *)_groupConfiguration;
-(NSURLSession *)_groupSession;
-(id)_initWithTarget:(id)arg1 configuration:(id)arg2 ;
@end

