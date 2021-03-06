/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSMPFullLegacyIdentity, IDSMPPublicLegacyIdentity;

@interface IDSUTunControlChannelIdentityPair : NSObject {

	IDSMPFullLegacyIdentity* _localFullIdentity;
	IDSMPPublicLegacyIdentity* _remotePublicIdentity;

}

@property (nonatomic,readonly) IDSMPFullLegacyIdentity * localFullIdentity;                   //@synthesize localFullIdentity=_localFullIdentity - In the implementation block
@property (nonatomic,readonly) IDSMPPublicLegacyIdentity * remotePublicIdentity;              //@synthesize remotePublicIdentity=_remotePublicIdentity - In the implementation block
-(id)description;
-(id)initWithLocalFullIdentity:(id)arg1 remotePublicIdentity:(id)arg2 ;
-(IDSMPFullLegacyIdentity *)localFullIdentity;
-(IDSMPPublicLegacyIdentity *)remotePublicIdentity;
@end

