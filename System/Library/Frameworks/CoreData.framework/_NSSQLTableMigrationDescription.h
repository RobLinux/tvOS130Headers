/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSMutableArray, NSMutableDictionary, NSNumber, NSMutableSet;

@interface _NSSQLTableMigrationDescription : NSObject {

	NSSQLEntity* _rootEntity;
	NSSQLEntity* _sourceRootEntity;
	int _migrationType;
	NSMutableArray* _addedEntityMigrations;
	NSMutableArray* _removedEntityMigrations;
	NSMutableArray* _copiedEntityMigrations;
	NSMutableArray* _transformedEntityMigrations;
	NSMutableDictionary* _migrationByEntity;
	NSMutableArray* _addedManyToManys;
	NSMutableArray* _removedManyToManys;
	NSMutableArray* _transformedManyToManys;
	NSMutableDictionary* _tempTableNames;
	NSNumber* _hasComplexSchemaTransformations;
	NSMutableSet* _addedColumnSet;
	NSMutableSet* _renamedColumnSet;
	NSMutableSet* _renamedMTMSet;
	NSMutableSet* _raisedColumnSet;
	NSMutableSet* _droppedEntitySet;
	NSMutableSet* _columnsUpgradedToMandatory;

}

@property (nonatomic,readonly) int migrationType;                     //@synthesize migrationType=_migrationType - In the implementation block
@property (nonatomic,readonly) NSSQLEntity * rootEntity;              //@synthesize rootEntity=_rootEntity - In the implementation block
-(id)description;
-(void)dealloc;
-(NSSQLEntity *)rootEntity;
-(id)newCloudKitMetadataUpdateStatements;
-(int)migrationType;
-(id)_addedManyToManys;
-(id)_removedManyToManys;
-(id)_transformedManyToManys;
-(id)_sourceRootEntity;
-(BOOL)_doAttributesHaveChangesRequiringCopyForMigration:(id)arg1 withContext:(NSSQLMigrationContext)arg2 ;
-(BOOL)_doRelationshipsHaveChangesRequiringCopyForMigration:(id)arg1 inContext:(NSSQLMigrationContext)arg2 ;
-(void)_determineSchemaTransformationComplexityInMigrationContext:(NSSQLMigrationContext)arg1 ;
-(BOOL)_hasComplexSchemaTransformationsInMigrationContext:(NSSQLMigrationContext)arg1 ;
-(id)_tempNameForTableName:(id)arg1 ;
-(id)createDeleteStatementForEntityMigrations:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createInsertStatementForEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createFEKUpdateStatementsForEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createUpdateStatementForEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createDefaultValuePopulationStatementsForAddedColumnsEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)newCopyAndInsertStatementForToOne:(id)arg1 toManyToMany:(id)arg2 fromTableName:(id)arg3 invertColumns:(BOOL)arg4 migrationContext:(NSSQLMigrationContext)arg5 ;
-(id)_retainedRemovedSubEntitiesOfEntity:(id)arg1 ;
-(id)initWithRootEntity:(id)arg1 migrationType:(int)arg2 ;
-(void)addEntityMigrationDescription:(id)arg1 ;
-(void)appendStatementsToRenameTables:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)appendStatementsToCreateOrDropTables:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)appendStatementsToPerformMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)appendStatementsToCompleteMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
@end

