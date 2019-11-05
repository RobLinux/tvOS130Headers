/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/NSURLSessionDelegate.h>

@protocol OS_os_transaction;
@class NSMutableDictionary, NSURLSession, NSObject, NSString;

@interface SecMetrics : NSObject <NSURLSessionDelegate> {

	NSMutableDictionary* _taskMap;
	NSURLSession* _URLSession;
	NSObject*<OS_os_transaction> _transaction;
	long long _lostEvents;

}

@property (retain) NSMutableDictionary * taskMap;                         //@synthesize taskMap=_taskMap - In the implementation block
@property (retain) NSURLSession * URLSession;                             //@synthesize URLSession=_URLSession - In the implementation block
@property (retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign) long long lostEvents;                                  //@synthesize lostEvents=_lostEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)managerObject;
+(id)c2MetricsEndpoint;
-(void)submitEvent:(id)arg1 ;
-(void)sendEvent:(id)arg1 pushTopic:(id)arg2 ;
-(id)requestForGenericEvent:(id)arg1 ;
-(long long)lostEvents;
-(void)setLostEvents:(long long)arg1 ;
-(id)init;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(NSObject*<OS_os_transaction>)transaction;
-(NSURLSession *)URLSession;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setTaskMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)taskMap;
-(id)getEvent:(id)arg1 ;
-(id)generateDeviceInfo;
-(id)gzipEncode:(id)arg1 ;
@end

