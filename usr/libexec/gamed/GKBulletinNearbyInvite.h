/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:39 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKMultiplayerBulletin.h>

@class NSDictionary;

@interface GKBulletinNearbyInvite : GKMultiplayerBulletin {

	NSDictionary* _inviteDictionary;

}

@property (retain) NSDictionary * inviteDictionary;              //@synthesize inviteDictionary=_inviteDictionary - In the implementation block
-(void)dealloc;
-(void)handleAction:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 localizedGameName:(id)arg2 inviteDictionary:(id)arg3 ;
-(NSDictionary *)inviteDictionary;
-(void)setInviteDictionary:(NSDictionary *)arg1 ;
@end

