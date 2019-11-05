/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:53 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/NSSecureCoding.h>

@class NSString;

@interface TrustedPeersHelperPeerState : NSObject <NSSecureCoding> {

	BOOL _identityIsPreapproved;
	BOOL _memberChanges;
	BOOL _unknownMachineIDsPresent;
	NSString* _peerID;
	unsigned long long _peerStatus;

}

@property (retain) NSString * peerID;                          //@synthesize peerID=_peerID - In the implementation block
@property (assign) BOOL identityIsPreapproved;                 //@synthesize identityIsPreapproved=_identityIsPreapproved - In the implementation block
@property (assign) unsigned long long peerStatus;              //@synthesize peerStatus=_peerStatus - In the implementation block
@property (assign) BOOL memberChanges;                         //@synthesize memberChanges=_memberChanges - In the implementation block
@property (assign) BOOL unknownMachineIDsPresent;              //@synthesize unknownMachineIDsPresent=_unknownMachineIDsPresent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(id)initWithPeerID:(id)arg1 isPreapproved:(BOOL)arg2 status:(unsigned long long)arg3 memberChanges:(BOOL)arg4 unknownMachineIDs:(BOOL)arg5 ;
-(BOOL)identityIsPreapproved;
-(void)setIdentityIsPreapproved:(BOOL)arg1 ;
-(unsigned long long)peerStatus;
-(void)setPeerStatus:(unsigned long long)arg1 ;
-(BOOL)memberChanges;
-(void)setMemberChanges:(BOOL)arg1 ;
-(BOOL)unknownMachineIDsPresent;
-(void)setUnknownMachineIDsPresent:(BOOL)arg1 ;
@end

