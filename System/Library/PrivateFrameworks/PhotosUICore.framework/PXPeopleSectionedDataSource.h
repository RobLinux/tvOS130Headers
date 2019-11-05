/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, NSObject, NSHashTable;

@interface PXPeopleSectionedDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {

	NSString* _localizedTitle;
	NSArray* _dataSources;
	NSObject*<OS_dispatch_queue> _reloadQueue;
	id _pauseToken;
	NSHashTable* _changeObservers;

}

@property (nonatomic,copy,readonly) NSArray * dataSources;                                //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> reloadQueue;                  //@synthesize reloadQueue=_reloadQueue - In the implementation block
@property (nonatomic,retain) id pauseToken;                                               //@synthesize pauseToken=_pauseToken - In the implementation block
@property (nonatomic,retain) NSHashTable * changeObservers;                               //@synthesize changeObservers=_changeObservers - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                     //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) unsigned long long numberOfDisclosedSections; 
@property (nonatomic,readonly) unsigned long long totalPersonCount; 
@property (nonatomic,copy,readonly) NSArray * allPersons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSArray *)dataSources;
-(unsigned long long)numberOfSections;
-(id)initWithSections:(id)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)reloadQueue;
-(id)personAtIndexPath:(id)arg1 ;
-(void)cancelImageLoadingForItem:(id)arg1 ;
-(unsigned long long)numberOfDisclosedSections;
-(unsigned long long)numberOfPersonsInSection:(long long)arg1 ;
-(id)localizedTitleForSection:(long long)arg1 ;
-(id)localizedDisclosedTitleForSection:(long long)arg1 ;
-(BOOL)canReorderMembersInSection:(long long)arg1 ;
-(unsigned long long)fetchTypeForSection:(long long)arg1 ;
-(id)memberAtIndexPath:(id)arg1 ;
-(id)faceTileAtIndexPath:(id)arg1 ;
-(id)personsAtIndexPaths:(id)arg1 ;
-(id)personsForType:(long long)arg1 ;
-(id)titleAtIndexPath:(id)arg1 ;
-(unsigned long long)photoQuantityAtIndexPath:(id)arg1 ;
-(unsigned long long)totalPersonCount;
-(unsigned long long)numberOfPersonsWithContactName;
-(unsigned long long)numberOfPersonsWithStringName;
-(NSArray *)allPersons;
-(id)indexPathOfPerson:(id)arg1 ;
-(void)movePersonAtIndexPath:(id)arg1 toIndexPath:(id)arg2 shouldUpdateImmediately:(BOOL)arg3 ;
-(void)changePersonsAtIndexPaths:(id)arg1 toPersonType:(long long)arg2 ;
-(void)reloadFromDatabase;
-(void)addChangeObserver:(id)arg1 ;
-(void)removeChangeObserver:(id)arg1 ;
-(void)loadAndStartListeningToLibraryNotifications;
-(void)startListeningToLibraryNotifications;
-(void)stopListeningToLibraryNotifications;
-(void)pauseListeningForChangesWithTimeout:(double)arg1 ;
-(void)resumeListeningForChanges;
-(id)_generateChangeDetailsForChangeInstance:(id)arg1 ;
-(void)imageAtIndexPath:(id)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3 fastDisplayBlock:(/*^block*/id)arg4 ;
-(void)addVisiblePerson:(id)arg1 ;
-(void)removeVisiblePerson:(id)arg1 ;
-(id)_dataSourceForFetchType:(unsigned long long)arg1 ;
-(id)_dataSourceForSection:(long long)arg1 ;
-(id)_dataSourceForIndexPath:(id)arg1 ;
-(long long)_sectionForFetchType:(unsigned long long)arg1 ;
-(unsigned long long)_fetchTypeForPersonType:(long long)arg1 ;
-(id)pauseToken;
-(void)setPauseToken:(id)arg1 ;
-(NSHashTable *)changeObservers;
-(void)setChangeObservers:(NSHashTable *)arg1 ;
@end

