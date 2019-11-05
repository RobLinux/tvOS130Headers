/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, BUCountingAssertionProviderDelegate;
@class NSObject;

@interface BUCountingAssertionProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _count;
	id<BUCountingAssertionProviderDelegate> _delegate;

}
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_beginAssertion;
-(BOOL)_endAssertion;
-(id)newAssertion;
@end

