/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSMutableDictionary, NSObject;

@interface _CATArbitratorWaitToken : NSObject {

	Ai mState;
	NSMutableDictionary* mTokenByKey;
	NSObject*<OS_dispatch_queue> mDelegateQueue;
	NSObject*<OS_dispatch_group> mGroup;
	/*^block*/id mCompletionBlock;

}
-(void)cancel;
-(void)resume;
-(id)initWithDelegateQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)waitForRegistrationEntry:(id)arg1 forKey:(id)arg2 exclusive:(BOOL)arg3 ;
-(void)performCompletionBlock;
-(BOOL)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2 ;
@end

