/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKGameStatService.h>
#import <gamed/GKGameStatServicePrivate.h>

@protocol GKGameStatServicePrivate <GKGameStatService>
@required
-(oneway void)getAchievementLeaderboardForRequest:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)getHypotheticalLeaderboardRanksForScores:(id)arg1 forGameDescriptor:(id)arg2 handler:(/*^block*/id)arg3;

@end


@class NSString;

@interface GKGameStatServicePrivate : GKGameStatService <GKGameStatServicePrivate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)requiredEntitlements;
+(Class)interfaceClass;
-(oneway void)getAchievementLeaderboardForRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)getHypotheticalLeaderboardRanksForScores:(id)arg1 forGameDescriptor:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

