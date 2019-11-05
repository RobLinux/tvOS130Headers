/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>
#import <Photos/PXDisplayCollection.h>

@class NSDate, NSString, PHCollectionList, NSDictionary, NSManagedObjectID, NSSortDescriptor, NSArray;

@interface PHCollection : PHObject <PXDisplayCollection> {

	BOOL _customSortAscending;
	unsigned _customSortKey;
	unsigned long long _estimatedPhotosCount;
	unsigned long long _estimatedVideosCount;
	NSDate* _creationDate;
	NSString* _localizedSubtitle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL px_isUserCreated; 
@property (nonatomic,readonly) BOOL px_isRegularAlbum; 
@property (nonatomic,readonly) BOOL px_isStandInAlbum; 
@property (nonatomic,readonly) BOOL px_isImportedAlbum; 
@property (nonatomic,readonly) BOOL px_isMyPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL px_isUserSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRootSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isMediaTypeSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isAllPhotosSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isFavoritesSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isPlacesSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isHiddenSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRecentlyAddedSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRecentlyDeletedSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRecentsSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRecentlyEditedSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isScreenRecordingsSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isSharedAlbum; 
@property (nonatomic,readonly) BOOL px_isOwnedSharedAlbum; 
@property (nonatomic,readonly) BOOL px_isCloudMultipleContributorsEnabled; 
@property (nonatomic,readonly) BOOL px_isFolder; 
@property (nonatomic,readonly) BOOL px_isRegularFolder; 
@property (nonatomic,readonly) BOOL px_isSmartFolder; 
@property (nonatomic,readonly) BOOL px_isFavoriteMemoriesSmartFolder; 
@property (nonatomic,readonly) BOOL px_isTopLevelFolder; 
@property (nonatomic,readonly) BOOL px_isSharedAlbumsFolder; 
@property (nonatomic,readonly) BOOL px_isMediaTypesFolder; 
@property (nonatomic,readonly) BOOL px_isProjectsFolder; 
@property (nonatomic,readonly) BOOL px_isMacSyncedAlbum; 
@property (nonatomic,readonly) BOOL px_isMacSyncedEventsFolder; 
@property (nonatomic,readonly) BOOL px_isMacSyncedFacesFolder; 
@property (nonatomic,readonly) BOOL px_isProject; 
@property (nonatomic,readonly) BOOL px_isPhotosVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isMomentsVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isMemoriesVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isPeopleVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isSharedActivityVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isTransientPlacesCollection; 
@property (nonatomic,readonly) BOOL px_isImportHistoryCollection; 
@property (nonatomic,readonly) BOOL px_isImportSessionCollection; 
@property (nonatomic,readonly) BOOL px_canRearrangeContent; 
@property (nonatomic,readonly) BOOL px_allowsAssetsDrop; 
@property (nonatomic,readonly) BOOL px_allowsSpringLoading; 
@property (nonatomic,readonly) BOOL px_allowsImplicitSelectionForProjectOrSharingAction; 
@property (nonatomic,readonly) PHCollectionList * px_rootCollectionList; 
@property (nonatomic,readonly) NSDictionary * px_debugDictionary; 
@property (nonatomic,readonly) NSManagedObjectID * parentFolderID; 
@property (nonatomic,copy,readonly) NSString * effectiveCustomSortKey; 
@property (nonatomic,copy,readonly) NSSortDescriptor * defaultSortDescriptor; 
@property (nonatomic,readonly) BOOL isAlbumContentSort; 
@property (nonatomic,readonly) BOOL isAlbumContentTitleSort; 
@property (nonatomic,readonly) BOOL isUserSmartAlbum; 
@property (nonatomic,readonly) unsigned long long estimatedPhotosCount;                               //@synthesize estimatedPhotosCount=_estimatedPhotosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedVideosCount;                               //@synthesize estimatedVideosCount=_estimatedVideosCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedTitle; 
@property (nonatomic,readonly) BOOL hasLocationInfo; 
@property (nonatomic,readonly) NSDate * creationDate;                                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSString * localizedSubtitle;                                          //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (getter=isTrashed,nonatomic,readonly) BOOL trashed; 
@property (nonatomic,readonly) BOOL customSortAscending;                                              //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (nonatomic,readonly) unsigned customSortKey;                                                //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * effectiveCustomSortDescriptors; 
@property (nonatomic,readonly) BOOL canContainAssets; 
@property (nonatomic,readonly) BOOL canContainCollections; 
@property (nonatomic,readonly) NSString * localizedTitle; 
+(id)managedEntityName;
+(id)fetchType;
+(BOOL)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2 ;
+(id)fetchTopLevelUserCollectionsWithOptions:(id)arg1 ;
+(id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
-(BOOL)px_isUserCreated;
-(BOOL)px_isRegularAlbum;
-(BOOL)px_isStandInAlbum;
-(BOOL)px_isImportedAlbum;
-(BOOL)px_isMyPhotoStreamAlbum;
-(BOOL)px_isUserSmartAlbum;
-(BOOL)px_isSmartAlbum;
-(BOOL)px_isRootSmartAlbum;
-(BOOL)px_isMediaTypeSmartAlbum;
-(BOOL)px_isAllPhotosSmartAlbum;
-(BOOL)px_isFavoritesSmartAlbum;
-(BOOL)px_isPlacesSmartAlbum;
-(BOOL)px_isHiddenSmartAlbum;
-(BOOL)px_isRecentlyAddedSmartAlbum;
-(BOOL)px_isRecentlyDeletedSmartAlbum;
-(BOOL)px_isRecentsSmartAlbum;
-(BOOL)px_isRecentlyEditedSmartAlbum;
-(BOOL)px_isScreenRecordingsSmartAlbum;
-(BOOL)px_isSharedAlbum;
-(BOOL)px_isOwnedSharedAlbum;
-(BOOL)px_isCloudMultipleContributorsEnabled;
-(BOOL)px_isFolder;
-(BOOL)px_isRegularFolder;
-(BOOL)px_isSmartFolder;
-(BOOL)px_isFavoriteMemoriesSmartFolder;
-(BOOL)px_isTopLevelFolder;
-(BOOL)px_isSharedAlbumsFolder;
-(BOOL)px_isMediaTypesFolder;
-(BOOL)px_isProjectsFolder;
-(BOOL)px_isMacSyncedAlbum;
-(BOOL)px_isMacSyncedEventsFolder;
-(BOOL)px_isMacSyncedFacesFolder;
-(BOOL)px_isProject;
-(BOOL)px_isPhotosVirtualCollection;
-(BOOL)px_isMomentsVirtualCollection;
-(BOOL)px_isMemoriesVirtualCollection;
-(BOOL)px_isPeopleVirtualCollection;
-(BOOL)px_isSharedActivityVirtualCollection;
-(BOOL)px_isTransientPlacesCollection;
-(BOOL)px_isImportHistoryCollection;
-(BOOL)px_isImportSessionCollection;
-(BOOL)px_canRearrangeContent;
-(BOOL)px_allowsAssetsDrop;
-(BOOL)px_allowsSpringLoading;
-(BOOL)px_allowsImplicitSelectionForProjectOrSharingAction;
-(id)px_fetchAncestryIncludingRoot:(BOOL)arg1 ;
-(id)px_fetchContainedAssetCollections;
-(BOOL)px_fetchIsEmpty;
-(BOOL)px_fetchContainsAnyAssets;
-(NSDictionary *)px_debugDictionary;
-(PHCollectionList *)px_rootCollectionList;
-(NSString *)description;
-(NSDate *)creationDate;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(BOOL)hasLocationInfo;
-(BOOL)hasLocalizedTitle;
-(BOOL)isTrashed;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(BOOL)customSortAscending;
-(unsigned)customSortKey;
-(BOOL)collectionHasFixedOrder;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(unsigned long long)estimatedPhotosCount;
-(unsigned long long)estimatedVideosCount;
-(unsigned long long)collectionFixedOrderPriority;
-(BOOL)isUserSmartAlbum;
-(NSManagedObjectID *)parentFolderID;
-(NSString *)effectiveCustomSortKey;
-(BOOL)isAlbumContentSort;
-(BOOL)isAlbumContentTitleSort;
-(BOOL)canContainAssets;
-(BOOL)canContainCollections;
-(NSSortDescriptor *)defaultSortDescriptor;
-(id)objectReference;
-(unsigned long long)ancestryIndexOfCollectionList:(id)arg1 context:(id)arg2 ;
-(NSArray *)effectiveCustomSortDescriptors;
-(id)_effectiveSortDescriptorsFromCustomSortKey:(id)arg1 ;
@end

