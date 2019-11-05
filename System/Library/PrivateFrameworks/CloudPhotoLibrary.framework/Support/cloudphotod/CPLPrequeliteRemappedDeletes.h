/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineRemappedDeletesImplementation.h>

@class NSString;

@interface CPLPrequeliteRemappedDeletes : CPLPrequeliteStorage <CPLEngineRemappedDeletesImplementation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg1 ;
-(BOOL)discardDeleteForRemappedRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)scheduleDeleteForRemappedRecordWithScopedIdentifier:(id)arg1 realScopedIdentifier:(id)arg2 asap:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)initializeStorage;
-(BOOL)upgradeStorageToVersion:(long long)arg1 ;
@end

