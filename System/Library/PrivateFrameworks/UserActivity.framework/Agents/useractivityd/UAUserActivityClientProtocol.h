/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UAUserActivityClientProtocol <NSObject>
@required
-(void)doInitializeWithClientVersion:(long long)arg1 clientInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)doFetchUserActivityInfoWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doUpdateUserActivityInfo:(id)arg1 makeCurrent:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)doUpdateUserActivityWithUUID:(id)arg1 setActive:(BOOL)arg2;
-(void)doDeleteUserActivityWithUUID:(id)arg1;
-(void)doAddDynamicUserActivity:(id)arg1 matching:(id)arg2;
-(void)doRemoveDynamicUserActivity:(id)arg1 matching:(id)arg2;
-(void)doMarkUserActivityAsDirty:(id)arg1 forceImmediate:(BOOL)arg2 webpageURL:(id)arg3 expiration:(id)arg4 hasiCloudDocument:(BOOL)arg5 hasUnsynchronizediCloudDoc:(BOOL)arg6;
-(void)doPinUserActivityInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doGetCurrentUserActivityInfo:(/*^block*/id)arg1;
-(void)doDetermineIfUserActivityIsCurrent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doGetLoggingFileForClient:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)doRegisterAsProxyApplicationForPid:(int)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

