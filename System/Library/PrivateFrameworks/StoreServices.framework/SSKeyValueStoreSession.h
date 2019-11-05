/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase;

@interface SSKeyValueStoreSession : NSObject {

	SSSQLiteDatabase* _database;

}

@property (nonatomic,readonly) SSSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(void)dealloc;
-(SSSQLiteDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2 ;
-(id)copyValueForDomain:(id)arg1 key:(id)arg2 ;
-(id)copyAccountDictionaryForDomain:(id)arg1 ;
-(id)copyDataForDomain:(id)arg1 key:(id)arg2 ;
-(id)existingEntityForDomain:(id)arg1 key:(id)arg2 ;
@end

