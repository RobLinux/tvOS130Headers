/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleIDAuthSupport.framework/AppleIDAuthSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleIDAuthSupport/AppleIDAuthSupport-Structs.h>
#import <AppleIDAuthSupport/NSURLSessionDelegate.h>

@class NSMutableDictionary, NSURLSession, NSString;

@interface AIASSession : NSObject <NSURLSessionDelegate> {

	BOOL _invalidated;
	NSMutableDictionary* _taskMap;
	NSURLSession* _URLSession;

}

@property (retain) NSMutableDictionary * taskMap;                   //@synthesize taskMap=_taskMap - In the implementation block
@property (retain) NSURLSession * URLSession;                       //@synthesize URLSession=_URLSession - In the implementation block
@property (assign) BOOL invalidated;                                //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)invalidateAndCancel;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(NSURLSession *)URLSession;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(void)setTaskMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)taskMap;
-(id)getRequest:(id)arg1 ;
-(id)requestWithURL:(id)arg1 data:(CFDictionaryRef)arg2 clientInfo:(id)arg3 proxiedClientInfo:(id)arg4 companionClientInfo:(id)arg5 appleITeamId:(id)arg6 appleIClientId:(id)arg7 ;
@end

