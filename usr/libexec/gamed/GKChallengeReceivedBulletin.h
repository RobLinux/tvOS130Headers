/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKChallengeBulletin.h>

@interface GKChallengeReceivedBulletin : GKChallengeBulletin
+(void)loadBulletinsForPushNotification:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)handleAction:(id)arg1 ;
-(void)notifyClient:(id)arg1 ;
-(unsigned long long)launchEventType;
-(void)assembleBulletin;
-(void)handleDeclineAction;
@end

