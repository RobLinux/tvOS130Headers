/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineIDMappingImplementation.h>

@class NSString;

@interface CPLPrequeliteIDMapping : CPLPrequeliteStorage <CPLEngineIDMappingImplementation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)status;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(BOOL*)arg2 ;
-(id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(BOOL*)arg2 ;
-(BOOL)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(BOOL)arg3 direction:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)setFinalCloudScopedIdentifier:(id)arg1 forPendingCloudScopedIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg1 asFinalWithError:(id*)arg2 ;
-(BOOL)hasPendingIdentifiers;
-(BOOL)removeMappingForCloudScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addAddEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)initializeStorage;
-(BOOL)upgradeStorageToVersion:(long long)arg1 ;
-(id)scopeIndexColumnName;
-(BOOL)removeMappingForLocalScopedIdentifier:(id)arg1 error:(id*)arg2 ;
@end

