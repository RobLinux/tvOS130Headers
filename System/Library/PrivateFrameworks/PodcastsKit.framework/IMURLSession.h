/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSURLSession.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface IMURLSession : AMSURLSession {

	NSObject*<OS_dispatch_queue> _syncQueue;
	long long _state;
	BOOL _followsRedirects;

}

@property (assign,nonatomic) BOOL followsRedirects;              //@synthesize followsRedirects=_followsRedirects - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) BOOL isUsable; 
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(long long)state;
-(void)invalidateAndCancel;
-(void)finishTasksAndInvalidate;
-(BOOL)isUsable;
-(void)setFollowsRedirects:(BOOL)arg1 ;
-(BOOL)followsRedirects;
-(void)_configureProtocolHandler;
@end

