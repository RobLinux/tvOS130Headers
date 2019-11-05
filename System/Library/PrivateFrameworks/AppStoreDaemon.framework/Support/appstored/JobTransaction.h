/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DownloadTransaction.h>

@interface JobTransaction : DownloadTransaction
-(BOOL)shouldNotifyServerJob:(id)arg1 wasCanceled:(BOOL)arg2 ;
-(id)mergeJobs:(id)arg1 ;
-(id)importDownload:(id)arg1 forJobID:(id)arg2 ;
-(id)mergeJobs:(id)arg1 runScheduler:(BOOL)arg2 isRefresh:(BOOL)arg3 ;
-(BOOL)_jobIsVaild:(id)arg1 ;
-(id)_copyApplicationBundleIDForJob:(id)arg1 ;
-(id)_addApplicationWithBundleID:(id)arg1 database:(id)arg2 ;
-(BOOL)_resetJob:(id)arg1 isUserInitiated:(BOOL)arg2 isRefresh:(BOOL)arg3 ;
-(BOOL)_findAndResumeActiveJobForBundleID:(id)arg1 runScheduler:(BOOL)arg2 ;
-(id)importJobs:(id)arg1 isRefresh:(BOOL)arg2 ;
-(void)_resetDownloadIDs:(id)arg1 userInitiated:(BOOL)arg2 isRefresh:(BOOL)arg3 ;
-(void)finishJob:(id)arg1 withFinalState:(id)arg2 ;
-(BOOL)retryJob:(id)arg1 isUserInitiated:(BOOL)arg2 ;
-(BOOL)resetJob:(id)arg1 isUserInitiated:(BOOL)arg2 ;
@end
