/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:39 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKBulletin.h>

@class NSString, GKPlayerInternal, NSURL, NSArray;

@interface GKGameplayBulletin : GKBulletin {

	unsigned char _gameLocation;
	NSString* _receiverPlayerID;
	NSString* _originatorPlayerID;
	GKPlayerInternal* _receiverPlayer;
	GKPlayerInternal* _originatorPlayer;
	NSString* _receiverGuestPlayerID;
	NSString* _originatorGuestPlayerID;
	GKPlayerInternal* _receiverGuestPlayer;
	GKPlayerInternal* _originatorGuestPlayer;
	NSURL* _storeURL;
	NSArray* _compatibleVersions;
	NSArray* _compatibleShortVersions;

}

@property (retain) NSString * receiverPlayerID;                           //@synthesize receiverPlayerID=_receiverPlayerID - In the implementation block
@property (retain) NSString * originatorPlayerID;                         //@synthesize originatorPlayerID=_originatorPlayerID - In the implementation block
@property (retain) GKPlayerInternal * receiverPlayer;                     //@synthesize receiverPlayer=_receiverPlayer - In the implementation block
@property (retain) GKPlayerInternal * originatorPlayer;                   //@synthesize originatorPlayer=_originatorPlayer - In the implementation block
@property (retain) NSString * receiverGuestPlayerID;                      //@synthesize receiverGuestPlayerID=_receiverGuestPlayerID - In the implementation block
@property (retain) NSString * originatorGuestPlayerID;                    //@synthesize originatorGuestPlayerID=_originatorGuestPlayerID - In the implementation block
@property (retain) GKPlayerInternal * receiverGuestPlayer;                //@synthesize receiverGuestPlayer=_receiverGuestPlayer - In the implementation block
@property (retain) GKPlayerInternal * originatorGuestPlayer;              //@synthesize originatorGuestPlayer=_originatorGuestPlayer - In the implementation block
@property (retain) NSURL * storeURL;                                      //@synthesize storeURL=_storeURL - In the implementation block
@property (retain) NSArray * compatibleVersions;                          //@synthesize compatibleVersions=_compatibleVersions - In the implementation block
@property (retain) NSArray * compatibleShortVersions;                     //@synthesize compatibleShortVersions=_compatibleShortVersions - In the implementation block
@property (assign) unsigned char gameLocation;                            //@synthesize gameLocation=_gameLocation - In the implementation block
@property (retain,readonly) NSString * URLContext; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)storeURL;
-(void)setStoreURL:(NSURL *)arg1 ;
-(GKPlayerInternal *)originatorPlayer;
-(NSString *)originatorPlayerID;
-(void)setGameLocation:(unsigned char)arg1 ;
-(unsigned char)gameLocation;
-(void)loadStoreItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)URLContext;
-(void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)receiverPlayerID;
-(void)setReceiverPlayerID:(NSString *)arg1 ;
-(GKPlayerInternal *)receiverPlayer;
-(void)setReceiverPlayer:(GKPlayerInternal *)arg1 ;
-(void)setOriginatorPlayerID:(NSString *)arg1 ;
-(void)setOriginatorPlayer:(GKPlayerInternal *)arg1 ;
-(BOOL)isPushFromLocalPlayers;
-(BOOL)isPushForLocalPlayers;
-(void)loadOriginatorPlayerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setReceiverGuestPlayerID:(NSString *)arg1 ;
-(void)setOriginatorGuestPlayerID:(NSString *)arg1 ;
-(void)setCompatibleVersions:(NSArray *)arg1 ;
-(void)setCompatibleShortVersions:(NSArray *)arg1 ;
-(BOOL)isCompatibleWithGameDescriptor:(id)arg1 ;
-(NSString *)receiverGuestPlayerID;
-(NSString *)originatorGuestPlayerID;
-(GKPlayerInternal *)receiverGuestPlayer;
-(GKPlayerInternal *)originatorGuestPlayer;
-(NSArray *)compatibleVersions;
-(NSArray *)compatibleShortVersions;
-(BOOL)playerIsLocal:(id)arg1 ;
-(void)determineGameLocationOnDeviceOnly;
-(void)determineGameLocationOnDeviceViaCompatibilityMatrixWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)gamePlatformForBundleID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)gamePlatformWithHandler:(/*^block*/id)arg1 ;
-(void)setReceiverGuestPlayer:(GKPlayerInternal *)arg1 ;
-(void)setOriginatorGuestPlayer:(GKPlayerInternal *)arg1 ;
@end

