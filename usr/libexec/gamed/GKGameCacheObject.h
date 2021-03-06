/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKExpiringCacheObject.h>
#import <gamed/GKCacheObjectImageProtocol.h>

@class NSString, NSNumber, NSDate, GKAchievementDescriptionListCacheObject, NSSet, GKLeaderboardSetListCacheObject, GKTurnBasedSessionListCacheObject;

@interface GKGameCacheObject : GKExpiringCacheObject <GKCacheObjectImageProtocol>

@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * bundleVersion; 
@property (nonatomic,retain) NSString * shortBundleVersion; 
@property (nonatomic,retain) NSNumber * adamID; 
@property (nonatomic,retain) NSNumber * externalVersion; 
@property (nonatomic,retain) NSNumber * platform; 
@property (assign,nonatomic) NSString * softwareType; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) BOOL prerendered; 
@property (assign,nonatomic) BOOL supportsLeaderboards; 
@property (assign,nonatomic) BOOL hasAggregateLeaderboard; 
@property (assign,nonatomic) unsigned numberOfCategories; 
@property (assign,nonatomic) BOOL supportsLeaderboardSets; 
@property (assign,nonatomic) unsigned numberOfLeaderboardSets; 
@property (nonatomic,retain) NSString * defaultCategory; 
@property (assign,nonatomic) BOOL supportsAchievements; 
@property (assign,nonatomic) unsigned numberOfAchievements; 
@property (assign,nonatomic) unsigned maxAchievementPoints; 
@property (assign,nonatomic) BOOL supportsMultiplayer; 
@property (assign,nonatomic) BOOL supportsTurnBasedMultiplayer; 
@property (nonatomic,retain) NSDate * storePiecesExpirationDate; 
@property (nonatomic,retain) NSString * artistName; 
@property (assign,nonatomic) long long numberOfUserRatings; 
@property (assign,nonatomic) float averageUserRating; 
@property (nonatomic,retain) NSString * priceDisplay; 
@property (nonatomic,retain) NSString * viewItemURL; 
@property (nonatomic,retain) NSString * tellAFriendMessageContentsUrl; 
@property (assign,nonatomic) BOOL owned; 
@property (nonatomic,retain) NSString * shortViewItemURL; 
@property (nonatomic,retain) GKAchievementDescriptionListCacheObject * achievementDescriptionList; 
@property (nonatomic,retain) NSSet * achievementLists; 
@property (nonatomic,retain) GKLeaderboardSetListCacheObject * leaderboardSetList; 
@property (nonatomic,retain) NSSet * leaderboardLists; 
@property (nonatomic,retain) NSSet * leaderboards; 
@property (nonatomic,retain) GKTurnBasedSessionListCacheObject * turnBasedSessionList; 
@property (nonatomic,retain) NSSet * turnBasedSessions; 
@property (nonatomic,retain) NSSet * recentPlayerLists; 
@property (nonatomic,retain) NSSet * playerLists; 
@property (nonatomic,retain) NSSet * topGameEntries; 
@property (nonatomic,retain) NSSet * recommendationEntries; 
@property (nonatomic,retain) NSSet * flowRates; 
@property (nonatomic,retain) NSSet * invites; 
@property (nonatomic,retain) NSSet * playersToInvite; 
@property (nonatomic,retain) NSSet * gameRecords; 
@property (nonatomic,retain) NSSet * players; 
@property (nonatomic,retain) NSSet * listEntries; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * image64; 
@property (nonatomic,retain) NSString * image128; 
@property (nonatomic,retain) NSString * image256; 
@property (nonatomic,retain) NSString * image512; 
@property (nonatomic,retain) NSString * imageTemplate; 
+(id)entityName;
+(id)uniqueAttributeName;
+(id)fetchSortDescriptors;
+(const void*)uniqueObjectIDLookupKey;
+(id)gamesForGameDescriptors:(id)arg1 context:(id)arg2 ;
+(id)gamesForBundleIDs:(id)arg1 context:(id)arg2 ;
+(id)_gamesForFullGameDescriptors:(id)arg1 context:(id)arg2 ;
+(id)gameForGameDescriptor:(id)arg1 context:(id)arg2 ;
+(id)gameForBundleID:(id)arg1 context:(id)arg2 ;
-(void)invalidate;
-(BOOL)isValid;
-(id)internalRepresentation;
-(id)gameDescriptor;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
-(void)updateWithGameDescriptor:(id)arg1 ;
-(BOOL)storePiecesValid;
-(void)updateStorePiecesWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)storePiecesExpired;
-(id)leaderboardSetWithIdentifier:(id)arg1 ;
@end

