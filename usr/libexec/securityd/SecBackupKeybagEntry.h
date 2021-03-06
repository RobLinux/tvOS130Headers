/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/CKKSSQLDatabaseObject.h>

@class NSData;

@interface SecBackupKeybagEntry : CKKSSQLDatabaseObject {

	NSData* _publickeyHash;
	NSData* _publickey;
	NSData* _musr;

}

@property (retain) NSData * publickeyHash;              //@synthesize publickeyHash=_publickeyHash - In the implementation block
@property (retain) NSData * publickey;                  //@synthesize publickey=_publickey - In the implementation block
@property (retain) NSData * musr;                       //@synthesize musr=_musr - In the implementation block
+(id)sqlTable;
+(id)fromDatabaseRow:(id)arg1 ;
+(id)sqlColumns;
+(id)state:(id)arg1 ;
+(id)fromDatabase:(id)arg1 error:(id*)arg2 ;
+(id)tryFromDatabase:(id)arg1 error:(id*)arg2 ;
-(id)sqlValues;
-(id)whereClauseToFindSelf;
-(id)initWithPublicKey:(id)arg1 publickeyHash:(id)arg2 user:(id)arg3 ;
-(NSData *)publickeyHash;
-(void)setPublickeyHash:(NSData *)arg1 ;
-(NSData *)publickey;
-(void)setPublickey:(NSData *)arg1 ;
-(NSData *)musr;
-(void)setMusr:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

