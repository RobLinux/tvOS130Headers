/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSString, NSArray;

@interface DownloadEntity : SSSQLiteEntity {

	NSString* _ITunesSafeGUID;

}

@property (nonatomic,readonly) NSArray * allAssetCookies; 
@property (nonatomic,readonly) NSString * downloadKind; 
@property (nonatomic,readonly) unsigned long long itemIdentifier; 
@property (nonatomic,readonly) NSString * ITunesSafeGUID;                      //@synthesize ITunesSafeGUID=_ITunesSafeGUID - In the implementation block
+(void)initialize;
+(id)databaseTable;
+(id)databasePropertyToSetClientProperty:(id)arg1 ;
+(id)joinClauseForProperty:(id)arg1 ;
+(id)databasePropertyToGetClientProperty:(id)arg1 ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)foreignDatabaseColumnForProperty:(id)arg1 ;
+(Class)memoryEntityClass;
+(id)copyJobIDsForDownloadsMatchingPredicate:(id)arg1 inDatabase:(id)arg2 ;
+(id)copyValueDictionaryWithMetadata:(id)arg1 ;
-(unsigned long long)itemIdentifier;
-(NSString *)downloadKind;
-(BOOL)deleteFromDatabase;
-(BOOL)setAssetsUsingDownload:(id)arg1 ;
-(void)_resetAssetProperty:(id)arg1 ;
-(id)_databaseAssetForAsset:(id)arg1 ;
-(void)deleteScratchDirectory;
-(NSArray *)allAssetCookies;
-(id)copyAssetsWithAssetType:(id)arg1 ;
-(void)resetAssetLocalPaths;
-(void)resetAssetURLs;
-(NSString *)ITunesSafeGUID;
-(id)anyAssetForAssetType:(id)arg1 ;
@end

