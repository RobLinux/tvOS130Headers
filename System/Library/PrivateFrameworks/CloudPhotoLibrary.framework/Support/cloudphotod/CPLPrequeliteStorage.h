/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLPlatformObject.h>
#import <cloudphotod/CPLEngineStorageImplementation.h>

@class CPLPrequeliteTable, NSString;

@interface CPLPrequeliteStorage : CPLPlatformObject <CPLEngineStorageImplementation> {

	CPLPrequeliteTable* _nameTable;
	CPLPrequeliteTable* _mainTable;
	CPLPrequeliteTable* _tempTable;
	BOOL _initializingStorage;
	BOOL _initializeSuperWasCalled;
	BOOL _superWasCalled;
	BOOL _shouldUpgradeSchema;

}

@property (nonatomic,readonly) BOOL shouldUpgradeSchema;              //@synthesize shouldUpgradeSchema=_shouldUpgradeSchema - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)status;
-(id)valueForVariable:(id)arg1 ;
-(BOOL)openWithError:(id*)arg1 ;
-(id)_scopes;
-(BOOL)closeWithError:(id*)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(id)statusDictionary;
-(id)engineLibrary;
-(long long)stableScopeIndexForScopeIdentifier:(id)arg1 ;
-(id)filterForIncludedScopeIdentifiers:(id)arg1 ;
-(id)filterForExcludedScopeIdentifiers:(id)arg1 ;
-(id)statusPerScopeIndex;
-(BOOL)_checkSuperWasCalled;
-(BOOL)dropIndexWithName:(id)arg1 error:(id*)arg2 ;
-(id)variableWithName:(id)arg1 defaultValue:(id)arg2 type:(id)arg3 ;
-(id)variableWithName:(id)arg1 type:(id)arg2 ;
-(id)pqStore;
-(id)mainTable;
-(BOOL)setValue:(id)arg1 forVariable:(id)arg2 error:(id*)arg3 ;
-(BOOL)initializeStorage;
-(BOOL)createMainTableWithColumnVariables:(id)arg1 error:(id*)arg2 ;
-(BOOL)createVariable:(id)arg1 defaultValue:(id)arg2 error:(id*)arg3 ;
-(BOOL)createIndexOnColumnVariable:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldUpgradeSchema;
-(BOOL)addColumnVariable:(id)arg1 error:(id*)arg2 ;
-(BOOL)createStorage;
-(BOOL)addColumnVariableGroup:(id)arg1 error:(id*)arg2 ;
-(long long)localScopeIndexForScopeIdentifier:(id)arg1 ;
-(long long)cloudScopeIndexForScopeIdentifier:(id)arg1 ;
-(BOOL)upgradeStorageToVersion:(long long)arg1 ;
-(id)recordsDesignation;
-(void)_beforeInitializeStorage;
-(void)_afterInitializeStorage;
-(BOOL)createIndex:(id)arg1 withDefinition:(id)arg2 unique:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)createIndexWithName:(id)arg1 withDefinition:(id)arg2 unique:(BOOL)arg3 error:(id*)arg4 ;
-(id)scopeIndexColumnName;
-(id)_statusPerScopeIndex;
-(BOOL)createMainTableWithDefinition:(id)arg1 error:(id*)arg2 ;
-(id)columnVariableWithName:(id)arg1 type:(id)arg2 ;
-(id)columnVariableWithName:(id)arg1 defaultValue:(id)arg2 type:(id)arg3 ;
-(BOOL)createIndexOnColumn:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetValueForVariable:(id)arg1 error:(id*)arg2 ;
-(id)statusPerScopeIndexWithGroupProperty:(id)arg1 valueDescription:(/*^block*/id)arg2 ;
-(long long)scopeIndexForLocalScopedIdentifier:(id)arg1 ;
-(long long)scopeIndexForCloudScopedIdentifier:(id)arg1 ;
-(id)scopedIdentifierForLocalIdentifier:(id)arg1 scopeIndex:(long long)arg2 ;
-(id)scopedIdentifierForCloudIdentifier:(id)arg1 scopeIndex:(long long)arg2 ;
-(BOOL)isLocalScopeIndexValid:(long long)arg1 ;
-(BOOL)isCloudScopeIndexValid:(long long)arg1 ;
-(BOOL)recreateMainTableWithCopyInstructions:(id)arg1 oldFields:(id)arg2 error:(id*)arg3 ;
@end

