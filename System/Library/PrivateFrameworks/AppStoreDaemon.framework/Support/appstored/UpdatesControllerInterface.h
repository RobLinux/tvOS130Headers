/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UpdatesControllerInterface <NSObject>
@required
-(void)autoUpdateEnabled:(/*^block*/id)arg1;
-(void)confirmAgentRequestedUpdateAll:(/*^block*/id)arg1;
-(void)getUpdatesWithReplyHandler:(/*^block*/id)arg1;
-(void)refreshUpdateCountWithReplyHandler:(/*^block*/id)arg1;
-(void)reloadFromServerWithReplyHandler:(/*^block*/id)arg1;
-(void)setAutoUpdateEnabled:(BOOL)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)updateAllWithOrder:(id)arg1 requestToken:(id)arg2 replyHandler:(/*^block*/id)arg3;

@end

