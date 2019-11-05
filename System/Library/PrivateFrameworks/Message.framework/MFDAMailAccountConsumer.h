/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/DAActionConsumer.h>

@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer> {

	NSConditionLock* _doneCondition;
	BOOL _shouldRetryRequest;
	BOOL _alwaysReportFailures;

}
-(id)init;
-(void)dealloc;
-(void)setDone:(BOOL)arg1 ;
-(void)waitUntilDone;
-(BOOL)shouldRetryRequest;
-(id)initWithAlwaysReportFailures:(BOOL)arg1 ;
-(void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3 ;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(BOOL)waitUntilDoneBeforeDate:(id)arg1 ;
@end

