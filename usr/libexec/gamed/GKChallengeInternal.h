/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKInternalRepresentation.h>

@class NSString, NSDate, NSOrderedSet, GKGameInternal, GKPlayerInternal;

@interface GKChallengeInternal : GKInternalRepresentation {

	NSString* _challengeID;
	NSString* _message;
	NSDate* _issueDate;
	NSDate* _completionDate;
	NSOrderedSet* _compatibleBundleIDs;
	GKGameInternal* _game;
	GKPlayerInternal* _issuingPlayer;
	GKPlayerInternal* _receivingPlayer;
	long long _state;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * challengeID;                          //@synthesize challengeID=_challengeID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSDate * issueDate;                              //@synthesize issueDate=_issueDate - In the implementation block
@property (nonatomic,retain) NSDate * completionDate;                         //@synthesize completionDate=_completionDate - In the implementation block
@property (assign,nonatomic) long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSOrderedSet * compatibleBundleIDs;              //@synthesize compatibleBundleIDs=_compatibleBundleIDs - In the implementation block
@property (nonatomic,retain) NSString * message;                              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) GKGameInternal * game;                           //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * issuingPlayer;                //@synthesize issuingPlayer=_issuingPlayer - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * receivingPlayer;              //@synthesize receivingPlayer=_receivingPlayer - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * titleText; 
@property (nonatomic,readonly) NSString * subtitleText; 
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(NSString *)subtitleText;
-(id)serverRepresentation;
-(GKGameInternal *)game;
-(void)setGame:(GKGameInternal *)arg1 ;
-(id)descriptionSubstitutionMap;
-(GKPlayerInternal *)receivingPlayer;
-(void)setIssuingPlayer:(GKPlayerInternal *)arg1 ;
-(GKPlayerInternal *)issuingPlayer;
-(NSString *)challengeID;
-(NSDate *)issueDate;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
-(id)findLocalGameBundleID;
-(void)setChallengeID:(NSString *)arg1 ;
-(void)setReceivingPlayer:(GKPlayerInternal *)arg1 ;
-(NSOrderedSet *)compatibleBundleIDs;
-(void)setCompatibleBundleIDs:(NSOrderedSet *)arg1 ;
-(void)setIssueDate:(NSDate *)arg1 ;
@end

