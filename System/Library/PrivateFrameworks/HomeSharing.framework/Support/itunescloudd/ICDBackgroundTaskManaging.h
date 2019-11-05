/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDBackgroundTaskManaging <NSObject>
@property (nonatomic,readonly) id<ICDAccountManaging> accountManager; 
@property (nonatomic,readonly) id<ICDHandlerCoordinating> handlerCoordinator; 
@required
-(id<ICDAccountManaging>)accountManager;
-(void)scheduleTaskOfType:(long long)arg1 forConfiguration:(id)arg2;
-(id<ICDHandlerCoordinating>)handlerCoordinator;
-(id)initWithAccountManager:(id)arg1 handlerCoordinator:(id)arg2;
-(void)startPeriodicPolling;

@end

