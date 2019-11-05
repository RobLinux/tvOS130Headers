/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHCollection.h>
#import <Photos/PXDisplayCollectionList.h>

@class NSString, NSDate, NSArray, PHQuery, NSManagedObjectID;

@interface PHCollectionList : PHCollection <PXDisplayCollectionList> {

	long long _collectionListType;
	long long _collectionListSubtype;
	NSString* _localizedTitle;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _localizedLocationNames;
	NSArray* _collections;
	PHQuery* _query;
	NSString* _transientIdentifier;
	NSManagedObjectID* _parentFolderObjectID;
	int _plAlbumKind;
	/*^block*/id _childCollectionsSortingComparator;
	unsigned long long _unreadAssetCollectionsCount;
	unsigned long long _estimatedChildCollectionCount;

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
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSString * px_localizedTitle; 
@property (nonatomic,readonly) NSArray * collections;                                         //@synthesize collections=_collections - In the implementation block
@property (nonatomic,readonly) PHQuery * query;                                               //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) id childCollectionsSortingComparator;                     //@synthesize childCollectionsSortingComparator=_childCollectionsSortingComparator - In the implementation block
@property (nonatomic,readonly) unsigned long long unreadAssetCollectionsCount;                //@synthesize unreadAssetCollectionsCount=_unreadAssetCollectionsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedChildCollectionCount;              //@synthesize estimatedChildCollectionCount=_estimatedChildCollectionCount - In the implementation block
@property (nonatomic,readonly) BOOL keyCollectionsAtEnd; 
@property (nonatomic,readonly) NSString * transientIdentifier;                                //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,readonly) long long collectionListType;                                  //@synthesize collectionListType=_collectionListType - In the implementation block
@property (nonatomic,readonly) long long collectionListSubtype;                               //@synthesize collectionListSubtype=_collectionListSubtype - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSArray * localizedLocationNames;                              //@synthesize localizedLocationNames=_localizedLocationNames - In the implementation block
+(id)_assetCollectionsWithAlbumSubtypes:(id)arg1 ;
+(id)px_rootProjectCollectionList;
+(id)px_otherAlbumsCollectionList;
+(id)px_otherAlbumsWithoutDeletedCollectionList;
+(id)px_sharedAlbumsCollectionList;
+(id)px_mediaTypesCollectionList;
+(id)px_rootAlbumCollectionList;
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(BOOL)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)fetchCollectionListsContainingCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchCollectionListsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchCollectionListsWithCloudIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchCollectionListsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3 ;
+(id)fetchCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3 ;
+(id)fetchRootAlbumCollectionListWithOptions:(id)arg1 ;
+(id)fetchRootProjectCollectionListWithOptions:(id)arg1 ;
+(id)fetchMomentListsWithSubtype:(long long)arg1 containingMoment:(id)arg2 options:(id)arg3 ;
+(id)fetchMomentListsWithSubtype:(long long)arg1 options:(id)arg2 ;
+(id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3 photoLibrary:(id)arg4 ;
+(id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 ;
+(id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 ;
+(id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 ;
+(id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 ;
+(id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)fetchCollectionListsForReferences:(id)arg1 photoLibrary:(id)arg2 ;
-(BOOL)px_isFolder;
-(BOOL)px_isRegularFolder;
-(BOOL)px_isSmartFolder;
-(BOOL)px_isFavoriteMemoriesSmartFolder;
-(BOOL)px_isTopLevelFolder;
-(BOOL)px_isSharedAlbumsFolder;
-(BOOL)px_isMediaTypesFolder;
-(BOOL)px_isProjectsFolder;
-(BOOL)px_isMacSyncedEventsFolder;
-(BOOL)px_isMacSyncedFacesFolder;
-(BOOL)px_isTransientPlacesCollection;
-(BOOL)px_fetchIsEmpty;
-(BOOL)px_fetchContainsAnyAssets;
-(NSString *)px_localizedTitle;
-(NSString *)description;
-(PHQuery *)query;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)localizedTitle;
-(BOOL)hasLocationInfo;
-(NSArray *)collections;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(NSArray *)localizedLocationNames;
-(BOOL)collectionHasFixedOrder;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(long long)collectionListType;
-(unsigned long long)collectionFixedOrderPriority;
-(id)parentFolderID;
-(id)effectiveCustomSortKey;
-(NSString *)transientIdentifier;
-(BOOL)canContainCollections;
-(BOOL)keyCollectionsAtEnd;
-(id)initTransientWithCollections:(id)arg1 orQuery:(id)arg2 title:(id)arg3 identifier:(id)arg4 photoLibrary:(id)arg5 ;
-(long long)collectionListSubtype;
-(id)childCollectionsSortingComparator;
-(unsigned long long)unreadAssetCollectionsCount;
-(unsigned long long)estimatedChildCollectionCount;
-(id)pl_assetContainerList;
-(id)objectReference;
@end
