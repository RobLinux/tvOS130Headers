/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKPlayerInternal.h>

@class GKPlayerInternal, NSString;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal {

	GKPlayerInternal* _hostPlayerInternal;
	NSString* _guestIdentifier;

}

@property (nonatomic,retain) GKPlayerInternal * hostPlayerInternal;              //@synthesize hostPlayerInternal=_hostPlayerInternal - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(id)playerID;
-(id)initWithHostPlayerInternal:(id)arg1 guestIdentifier:(id)arg2 ;
-(BOOL)isGuestPlayer;
-(GKPlayerInternal *)hostPlayerInternal;
-(id)guestIdentifier;
-(void)setHostPlayerInternal:(GKPlayerInternal *)arg1 ;
-(void)setGuestIdentifier:(id)arg1 ;
@end

