/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMPIdentity.h>

@class ENGroupID, IDSMPFullAccountIdentity, NSArray, NSData;

@interface IDSMPFullAccountIdentityCluster : IDSMPIdentity {

	SecKeyRef _publicKey;

}

@property (nonatomic,readonly) ENGroupID * groupID; 
@property (nonatomic,readonly) IDSMPFullAccountIdentity * fullAccountIdentity; 
@property (nonatomic,readonly) NSArray * fullServiceIdentitiesAdmin; 
@property (nonatomic,readonly) NSArray * fullServiceIdentitiesSigning; 
@property (nonatomic,readonly) SecKeyRef publicKey;                                         //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) NSData * forwardingTicket; 
+(id)clusterWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)clusterWithFullAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id*)arg4 ;
-(SecKeyRef)publicKey;
-(ENGroupID *)groupID;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(IDSMPFullAccountIdentity *)fullAccountIdentity;
-(id)adminServiceIdentityWithType:(long long)arg1 ;
-(id)signingServiceIdentityWithType:(long long)arg1 ;
-(id)signData:(id)arg1 withError:(id*)arg2 ;
-(NSData *)forwardingTicket;
-(id)publicAccountClusterWithError:(id*)arg1 ;
-(id)clusterByUpdatingGroupID:(id)arg1 error:(id*)arg2 ;
-(id)rolledClusterWithFullAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id*)arg4 ;
-(NSArray *)fullServiceIdentitiesAdmin;
-(NSArray *)fullServiceIdentitiesSigning;
-(BOOL)isParentOfCluster:(id)arg1 ;
@end

