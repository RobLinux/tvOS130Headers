/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/ENGroupContextDataSource.h>

@class IDSGroupServer, NSString;

@interface IDSDGroupContextDataSource : NSObject <ENGroupContextDataSource> {

	IDSGroupServer* _groupServer;

}

@property (nonatomic,retain) IDSGroupServer * groupServer;              //@synthesize groupServer=_groupServer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)publicDataRepresentationForGroup:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupFromPublicDataRepresentation:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)participantsForCypher:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 upsertGroupWithInfo:(id)arg2 previousGroup:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)groupContext:(id)arg1 fetchGroupWithID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_sponsorAlias;
-(id)_groupWithDeviceIdentity:(id)arg1 parent:(id)arg2 groupInfo:(id)arg3 error:(id*)arg4 ;
-(IDSGroupServer *)groupServer;
-(void)_groupFromServerResponse:(id)arg1 context:(id)arg2 groupID:(id)arg3 error:(id)arg4 resultCode:(long long)arg5 resultDictionary:(id)arg6 allEntries:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)_participantsForDestinations:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_sponsorAccount;
-(void)setGroupServer:(IDSGroupServer *)arg1 ;
@end

