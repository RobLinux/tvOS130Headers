/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSUserStoreListener <NSObject>
@required
-(void)userStore:(id)arg1 didAddUser:(id)arg2;
-(void)userStore:(id)arg1 didRemoveUser:(id)arg2;
-(void)userStore:(id)arg1 didRemoveAuthenticationCertificateForUser:(id)arg2;

@end

