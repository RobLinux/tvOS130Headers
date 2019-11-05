/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSURLSessionEventDelegate, OS_dispatch_queue, _NSURLSessionHTTPRewriter;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject, NSMutableDictionary;

@interface __CFN_GlobalMetrics : NSObject {

	os_unfair_lock_s lock;
	id<_NSURLSessionEventDelegate> delegate;
	NSObject*<OS_dispatch_queue> delegateQueue;
	id<_NSURLSessionHTTPRewriter> _HTTPRewriter;
	id<_NSURLSessionEventDelegate> _forwardingDelegate;
	NSMutableDictionary* _defaultSessionMetrics;
	NSMutableDictionary* _ephemeralSessionMetrics;
	NSMutableDictionary* _backgroundSessionMetrics;

}

@property (nonatomic,retain) id<_NSURLSessionEventDelegate> forwardingDelegate;              //@synthesize forwardingDelegate=_forwardingDelegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * defaultSessionMetrics;                    //@synthesize defaultSessionMetrics=_defaultSessionMetrics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ephemeralSessionMetrics;                  //@synthesize ephemeralSessionMetrics=_ephemeralSessionMetrics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backgroundSessionMetrics;                 //@synthesize backgroundSessionMetrics=_backgroundSessionMetrics - In the implementation block
@property (retain) id<_NSURLSessionHTTPRewriter> HTTPRewriter;                               //@synthesize HTTPRewriter=_HTTPRewriter - In the implementation block
+(id)globalMetrics;
-(id)init;
-(id<_NSURLSessionHTTPRewriter>)HTTPRewriter;
-(void)sessionDestroy:(id)arg1 ;
-(void)sessionCreate:(id)arg1 ;
-(void)setHTTPRewriter:(id<_NSURLSessionHTTPRewriter>)arg1 ;
-(id<_NSURLSessionEventDelegate>)forwardingDelegate;
-(void)setForwardingDelegate:(id<_NSURLSessionEventDelegate>)arg1 ;
-(NSMutableDictionary *)defaultSessionMetrics;
-(void)setDefaultSessionMetrics:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)ephemeralSessionMetrics;
-(void)setEphemeralSessionMetrics:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)backgroundSessionMetrics;
-(void)setBackgroundSessionMetrics:(NSMutableDictionary *)arg1 ;
@end

