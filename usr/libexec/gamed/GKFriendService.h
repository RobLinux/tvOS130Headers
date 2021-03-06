/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:38 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKService.h>
#import <gamed/GKFriendService.h>

@protocol GKFriendService <NSObject>
@required
-(oneway void)getFriendsForPlayer:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)getChallengableFriendsForPlayer:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)getNearbyTokenForLocalPlayerWithHandler:(/*^block*/id)arg1;
-(oneway void)establishNearbyRelationshipsUsingPlayerTokens:(id)arg1 handler:(/*^block*/id)arg2;

@end


@class NSString;

@interface GKFriendService : GKService <GKFriendService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)requiredEntitlements;
+(Class)interfaceClass;
-(oneway void)getFriendsForPlayer:(id)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)getChallengableFriendsForPlayer:(id)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)getNearbyTokenForLocalPlayerWithHandler:(/*^block*/id)arg1 ;
-(oneway void)establishNearbyRelationshipsUsingPlayerTokens:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)getFriendsForPlayer:(id)arg1 commonFriends:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)getFriendIDsForPlayer:(id)arg1 commonFriends:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)getFriendIDsForPlayer:(id)arg1 withPredicate:(/*^block*/id)arg2 commonFriends:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)updateFriendsOfLocalPlayerWithHandler:(/*^block*/id)arg1 ;
@end

