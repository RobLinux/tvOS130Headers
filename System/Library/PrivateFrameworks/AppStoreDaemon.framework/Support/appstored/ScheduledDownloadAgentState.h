/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DownloadAgentState.h>

@interface ScheduledDownloadAgentState : DownloadAgentState
-(void)onMessage:(id)arg1 ;
-(void)onEnter;
-(void)_didRefreshPriorityWithPriority:(double)arg1 ;
-(void)_didRefreshRateLimitWithRateLimit:(long long)arg1 ;
-(void)_didCompleteWithResult:(BOOL)arg1 error:(id)arg2 ;
@end

