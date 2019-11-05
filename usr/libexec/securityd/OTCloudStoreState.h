/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/CKKSSQLDatabaseObject.h>

@class NSString, NSData, NSDate, CKServerChangeToken;

@interface OTCloudStoreState : CKKSSQLDatabaseObject {

	BOOL _ckzonecreated;
	BOOL _ckzonesubscribed;
	NSString* _ckzone;
	NSData* _encodedChangeToken;
	NSDate* _lastFetchTime;

}

@property (retain) NSString * ckzone;                                                                           //@synthesize ckzone=_ckzone - In the implementation block
@property (assign) BOOL ckzonecreated;                                                                          //@synthesize ckzonecreated=_ckzonecreated - In the implementation block
@property (assign) BOOL ckzonesubscribed;                                                                       //@synthesize ckzonesubscribed=_ckzonesubscribed - In the implementation block
@property (setter=setChangeToken:,getter=getChangeToken,retain) CKServerChangeToken * changeToken; 
@property (retain) NSData * encodedChangeToken;                                                                 //@synthesize encodedChangeToken=_encodedChangeToken - In the implementation block
@property (retain) NSDate * lastFetchTime;                                                                      //@synthesize lastFetchTime=_lastFetchTime - In the implementation block
+(id)sqlTable;
+(id)fromDatabaseRow:(id)arg1 ;
+(id)sqlColumns;
+(id)state:(id)arg1 ;
+(id)fromDatabase:(id)arg1 error:(id*)arg2 ;
+(id)tryFromDatabase:(id)arg1 error:(id*)arg2 ;
-(id)sqlValues;
-(id)whereClauseToFindSelf;
-(id)getChangeToken;
-(NSString *)ckzone;
-(void)setCkzone:(NSString *)arg1 ;
-(BOOL)ckzonecreated;
-(void)setCkzonecreated:(BOOL)arg1 ;
-(BOOL)ckzonesubscribed;
-(void)setCkzonesubscribed:(BOOL)arg1 ;
-(NSData *)encodedChangeToken;
-(void)setEncodedChangeToken:(NSData *)arg1 ;
-(NSDate *)lastFetchTime;
-(void)setLastFetchTime:(NSDate *)arg1 ;
-(id)initWithCKZone:(id)arg1 zoneCreated:(BOOL)arg2 zoneSubscribed:(BOOL)arg3 changeToken:(id)arg4 lastFetch:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setChangeToken:(CKServerChangeToken *)arg1 ;
@end

