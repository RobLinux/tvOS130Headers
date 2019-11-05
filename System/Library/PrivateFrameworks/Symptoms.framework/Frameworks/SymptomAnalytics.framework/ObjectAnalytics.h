/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AnalyticsWorkspace, NSString;

@interface ObjectAnalytics : NSObject {

	AnalyticsWorkspace* wspace;
	NSString* entityName;
	BOOL managedCache;

}
-(void)save;
-(id)fetchEntitiesFreeForm:(id)arg1 sortDesc:(id)arg2 ;
-(id)initWithWorkspace:(id)arg1 entityName:(id)arg2 withCache:(BOOL)arg3 ;
-(id)_fetch:(id)arg1 sortDesc:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)fetchEntityDictionariesWithProperties:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)fetchEntityDictionariesWithProperties:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 ;
-(id)_fetch:(id)arg1 sortDesc:(id)arg2 ;
-(id)_firstLastHappened:(BOOL)arg1 ;
-(id)createEntityForEntityName:(id)arg1 ;
-(id)createTemporaryEntityForEntityName:(id)arg1 ;
-(id)fetchEntitiesFreeForm:(id)arg1 sortDesc:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)fetchAllEntityDictionariesWithProperties:(id)arg1 ;
-(id)fetchEntityDictionariesWithProperties:(id)arg1 predicate:(id)arg2 ;
-(id)firstHappened;
-(id)lastHappened;
-(id)createEntity;
-(id)createTemporaryEntity;
-(void)moveTemporaryEntityToMainContext:(id)arg1 ;
-(id)getDescriptionForName:(id)arg1 ;
-(void)refresh:(id)arg1 ;
-(void)removeEntities:(id)arg1 ;
-(unsigned long long)countEntitiesMatching:(id)arg1 ;
-(long long)removeEntitiesMatching:(id)arg1 ;
-(unsigned long long)updateEntitiesMatching:(id)arg1 properties:(id)arg2 ;
@end

