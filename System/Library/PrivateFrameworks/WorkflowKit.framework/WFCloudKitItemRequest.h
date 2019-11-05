/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKContainer, CKDatabase;

@interface WFCloudKitItemRequest : NSObject {

	BOOL _performExpensiveFetchOperations;
	CKContainer* _container;
	CKDatabase* _database;

}

@property (nonatomic,readonly) CKContainer * container;                         //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                           //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) BOOL performExpensiveFetchOperations;              //@synthesize performExpensiveFetchOperations=_performExpensiveFetchOperations - In the implementation block
+(void)hydrateItem:(id)arg1 withRecord:(id)arg2 setNilValues:(BOOL)arg3 ;
+(id)createRecordFromItem:(id)arg1 zoneID:(id)arg2 ;
+(void)hydrateItem:(id)arg1 withRecord:(id)arg2 resolvedReferences:(id)arg3 setNilValues:(BOOL)arg4 ;
+(id)desiredKeysFromProperties:(id)arg1 itemType:(Class)arg2 ;
+(void)assignRecordValue:(id)arg1 toItem:(id)arg2 withProperty:(id)arg3 resolvedReferences:(id)arg4 ;
+(id)createRecordIDWithName:(id)arg1 zoneID:(id)arg2 ;
+(id)itemValueForRecordValue:(id)arg1 item:(id)arg2 property:(id)arg3 resolvedReferences:(id)arg4 ;
+(id)recordValueForItemValue:(id)arg1 item:(id)arg2 property:(id)arg3 recordKey:(id)arg4 zoneID:(id)arg5 ;
-(CKContainer *)container;
-(CKDatabase *)database;
-(id)deleteItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)fetchItemWithID:(id)arg1 itemType:(Class)arg2 properties:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithContainer:(id)arg1 database:(id)arg2 ;
-(id)fetchConfigurationAssetWithType:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)fetchConfigurationAssetWithType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)fetchItemsWithPredicate:(id)arg1 itemType:(Class)arg2 properties:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)fetchItemsWithPredicate:(id)arg1 itemType:(Class)arg2 properties:(id)arg3 sortDescriptors:(id)arg4 resultsLimit:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)updateItems:(id)arg1 setNilValues:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)createTaskCancelledError;
-(id)fetchRecordIDs:(id)arg1 desiredKeys:(id)arg2 operationGroup:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)performExpensiveFetchOperations;
-(void)setPerformExpensiveFetchOperations:(BOOL)arg1 ;
@end

