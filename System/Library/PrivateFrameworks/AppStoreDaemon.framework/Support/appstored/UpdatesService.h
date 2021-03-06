/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/ASDUpdatesServiceProtocol.h>

@protocol OS_dispatch_queue, UpdatesControllerInterface;
@class NSObject;

@interface UpdatesService : NSObject <ASDUpdatesServiceProtocol> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	id<UpdatesControllerInterface> _updatesInterface;

}

@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;                   //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (retain) id<UpdatesControllerInterface> updatesInterface;              //@synthesize updatesInterface=_updatesInterface - In the implementation block
+(id)defaultService;
-(id)init;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)autoUpdateEnabled:(/*^block*/id)arg1 ;
-(void)getUpdatesWithReplyHandler:(/*^block*/id)arg1 ;
-(void)refreshUpdateCountWithReplyHandler:(/*^block*/id)arg1 ;
-(void)reloadFromServerWithReplyHandler:(/*^block*/id)arg1 ;
-(void)setAutoUpdateEnabled:(BOOL)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)updateAllWithOrder:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)reloadFromServerInBackgroundWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)compatibilityUpdateForBundleIDs:(id)arg1 userInitiated:(BOOL)arg2 withReplyHandler:(/*^block*/id)arg3 ;
-(id<UpdatesControllerInterface>)updatesInterface;
-(void)setUpdatesInterface:(id<UpdatesControllerInterface>)arg1 ;
@end

