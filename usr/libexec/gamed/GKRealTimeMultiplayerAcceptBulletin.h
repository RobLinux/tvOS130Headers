/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKRealTimeMultiplayerActionBulletin.h>

@class NSNumber, NSData;

@interface GKRealTimeMultiplayerAcceptBulletin : GKRealTimeMultiplayerActionBulletin {

	NSNumber* _blobType;
	NSNumber* _relayType;
	NSData* _relayConnectionID;
	NSData* _relayTranscationID;
	NSData* _selfRelayIP;
	NSNumber* _selfRelayPort;
	NSData* _peerRelayIP;
	NSNumber* _peerRelayPort;
	NSData* _relayToken;

}

@property (retain) NSNumber * blobType;                      //@synthesize blobType=_blobType - In the implementation block
@property (retain) NSNumber * relayType;                     //@synthesize relayType=_relayType - In the implementation block
@property (retain) NSData * relayConnectionID;               //@synthesize relayConnectionID=_relayConnectionID - In the implementation block
@property (retain) NSData * relayTranscationID;              //@synthesize relayTranscationID=_relayTranscationID - In the implementation block
@property (retain) NSData * selfRelayIP;                     //@synthesize selfRelayIP=_selfRelayIP - In the implementation block
@property (retain) NSNumber * selfRelayPort;                 //@synthesize selfRelayPort=_selfRelayPort - In the implementation block
@property (retain) NSData * peerRelayIP;                     //@synthesize peerRelayIP=_peerRelayIP - In the implementation block
@property (retain) NSNumber * peerRelayPort;                 //@synthesize peerRelayPort=_peerRelayPort - In the implementation block
@property (retain) NSData * relayToken;                      //@synthesize relayToken=_relayToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)notificationName;
-(id)aggregateDictionaryKey;
-(NSData *)relayConnectionID;
-(void)setRelayConnectionID:(NSData *)arg1 ;
-(void)handleAction:(id)arg1 ;
-(NSNumber *)relayType;
-(void)assembleBulletin;
-(id)initWithPushNotification:(id)arg1 ;
-(id)debugLine;
-(BOOL)isAccept;
-(NSNumber *)blobType;
-(NSData *)relayTranscationID;
-(NSData *)selfRelayIP;
-(NSNumber *)selfRelayPort;
-(NSData *)peerRelayIP;
-(NSNumber *)peerRelayPort;
-(NSData *)relayToken;
-(void)setBlobType:(NSNumber *)arg1 ;
-(void)setRelayType:(NSNumber *)arg1 ;
-(void)setRelayTranscationID:(NSData *)arg1 ;
-(void)setSelfRelayIP:(NSData *)arg1 ;
-(void)setSelfRelayPort:(NSNumber *)arg1 ;
-(void)setPeerRelayIP:(NSData *)arg1 ;
-(void)setPeerRelayPort:(NSNumber *)arg1 ;
-(void)setRelayToken:(NSData *)arg1 ;
@end
