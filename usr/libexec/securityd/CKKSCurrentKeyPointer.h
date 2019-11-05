/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/securityd-Structs.h>
#import <securityd/CKKSCKRecordHolder.h>

@class NSString;

@interface CKKSCurrentKeyPointer : CKKSCKRecordHolder {

	NSString* _keyclass;
	NSString* _currentKeyUUID;

}

@property (retain) NSString*<SecCKKSKeyClass> keyclass;              //@synthesize keyclass=_keyclass - In the implementation block
@property (retain) NSString * currentKeyUUID;                        //@synthesize currentKeyUUID=_currentKeyUUID - In the implementation block
+(id)sqlTable;
+(id)fromDatabaseRow:(id)arg1 ;
+(id)sqlColumns;
+(id)all:(id)arg1 error:(id*)arg2 ;
+(BOOL)deleteAll:(id)arg1 error:(id*)arg2 ;
+(id)tryFromDatabase:(NSString*)arg1 zoneID:(id)arg2 error:(id*)arg3 ;
+(id)fromDatabase:(NSString*)arg1 zoneID:(id)arg2 error:(id*)arg3 ;
+(id)forKeyClass:(NSString*)arg1 withKeyUUID:(id)arg2 zoneID:(id)arg3 error:(id*)arg4 ;
-(id)sqlValues;
-(id)whereClauseToFindSelf;
-(id)CKRecordName;
-(id)updateCKRecord:(id)arg1 zoneID:(id)arg2 ;
-(void)setFromCKRecord:(id)arg1 ;
-(BOOL)matchesCKRecord:(id)arg1 ;
-(id)initForClass:(NSString*)arg1 currentKeyUUID:(id)arg2 zoneID:(id)arg3 encodedCKRecord:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)currentKeyUUID;
-(void)setCurrentKeyUUID:(NSString *)arg1 ;
-(NSString*<SecCKKSKeyClass>)keyclass;
-(void)setKeyclass:(NSString*<SecCKKSKeyClass>)arg1 ;
@end

