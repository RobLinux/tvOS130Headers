/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSMutableSet;

@interface MPStoreSocialServiceController : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _transientStates;

}
+(id)_internalErrorForHTTPResponseCode:(long long)arg1 ;
-(id)init;
-(void)followPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unfollowPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestFollowPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelFollowRequestOnPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)blockPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unblockPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFollower:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)transientFollowStateForPerson:(id)arg1 ;
-(void)acceptAllFollowRequestsWithCompletion:(/*^block*/id)arg1 ;
-(void)acceptFollowRequestFromPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)declineFollowRequestFromPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)transientFollowPendingRequestStateForPerson:(id)arg1 ;
-(void)_handleTransientStateForPersonDidChangeNotification:(id)arg1 ;
-(void)_performTransientFollowState:(long long)arg1 onPerson:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performTransientFollowPendingRequestState:(long long)arg1 onPerson:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_transientStateForPerson:(id)arg1 shouldCreate:(BOOL)arg2 ;
-(void)_populateTransientStatesSnapshot:(id)arg1 ;
-(void)_notifyTransientStatesDidChangeWithSnapshot:(id)arg1 ;
-(void)_transientStatesDidChange;
-(void)_queue_transientStatesDidChange;
-(id)_newOperationForRemovingFollower:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

