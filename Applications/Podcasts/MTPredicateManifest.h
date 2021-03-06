/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:21 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTBaseEpisodeListManifest.h>
#import <Podcasts/MTResultsChangeGeneratorDelegate.h>
#import <Podcasts/NSFetchedResultsControllerDelegate.h>

@class NSPredicate, NSArray, MTAllPropertyChangesQueryObserver, NSFetchRequest, NSFetchedResultsController, MTResultsChangeGenerator, MTIndexPathShifter, NSString;

@interface MTPredicateManifest : MTBaseEpisodeListManifest <MTResultsChangeGeneratorDelegate, NSFetchedResultsControllerDelegate> {

	BOOL _hasFRCChanges;
	NSPredicate* _predicate;
	NSArray* _explicitSortOrder;
	MTAllPropertyChangesQueryObserver* _allPropertyChangeObserver;
	NSFetchRequest* _fetchRequest;
	NSFetchedResultsController* _frc;
	MTResultsChangeGenerator* _changeGenerator;
	MTIndexPathShifter* _indexPathShifter;

}

@property (nonatomic,retain) MTAllPropertyChangesQueryObserver * allPropertyChangeObserver;              //@synthesize allPropertyChangeObserver=_allPropertyChangeObserver - In the implementation block
@property (nonatomic,retain) NSFetchRequest * fetchRequest;                                              //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * frc;                                           //@synthesize frc=_frc - In the implementation block
@property (nonatomic,retain) MTResultsChangeGenerator * changeGenerator;                                 //@synthesize changeGenerator=_changeGenerator - In the implementation block
@property (nonatomic,retain) MTIndexPathShifter * indexPathShifter;                                      //@synthesize indexPathShifter=_indexPathShifter - In the implementation block
@property (assign,nonatomic) BOOL hasFRCChanges;                                                         //@synthesize hasFRCChanges=_hasFRCChanges - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                                    //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors; 
@property (nonatomic,retain) NSArray * explicitSortOrder;                                                //@synthesize explicitSortOrder=_explicitSortOrder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(void)setFetchRequest:(NSFetchRequest *)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(void)_processResults:(id)arg1 ;
-(void)setFrc:(NSFetchedResultsController *)arg1 ;
-(NSFetchedResultsController *)frc;
-(void)_load:(/*^block*/id)arg1 ;
-(void)_propertyDidChange;
-(id)initWithInitialEpisodeUuid:(id)arg1 predicateToTrack:(id)arg2 sortDescriptors:(id)arg3 ;
-(void)setExplicitSortOrder:(NSArray *)arg1 ;
-(id)initWithInitialEpisodeUuid:(id)arg1 fetchRequest:(id)arg2 ;
-(void)setChangeGenerator:(MTResultsChangeGenerator *)arg1 ;
-(MTResultsChangeGenerator *)changeGenerator;
-(void)generator:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(id)initWithInitialEpisodeUuid:(id)arg1 ;
-(void)setIndexPathShifter:(MTIndexPathShifter *)arg1 ;
-(void)_restrictionsDidChange;
-(void)_refetch:(/*^block*/id)arg1 ;
-(id)_augmentPredicate:(id)arg1 ;
-(void)_frcDidChangeResults:(id)arg1 ;
-(id)_currentEpisodeUuid;
-(NSArray *)explicitSortOrder;
-(MTIndexPathShifter *)indexPathShifter;
-(void)setAllPropertyChangeObserver:(MTAllPropertyChangesQueryObserver *)arg1 ;
-(MTAllPropertyChangesQueryObserver *)allPropertyChangeObserver;
-(void)setHasFRCChanges:(BOOL)arg1 ;
-(BOOL)hasFRCChanges;
-(void)_observeAllPropertyChangesForEntityName:(id)arg1 predicate:(id)arg2 ;
@end

