/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXDataSectionManager.h>
#import <PhotosUICore/PXCollectionsDataSourceManagerObserver.h>
#import <PhotosUICore/PXNavigationListDataSectionManagerObserver.h>

@class NSMutableDictionary, NSMapTable, PHCollectionList, PXPhotoKitCollectionsDataSourceManager, PXPhotoKitCollectionsDataSource, NSString;

@interface PXNavigationListDataSectionManager : PXDataSectionManager <PXCollectionsDataSourceManagerObserver, PXNavigationListDataSectionManagerObserver> {

	NSMutableDictionary* _childDataSectionManagers;
	NSMutableDictionary* _childDataSectionIndexes;
	NSMapTable* _parentListItems;
	PHCollectionList* _collectionList;
	long long _indentationLevel;
	PXPhotoKitCollectionsDataSourceManager* _collectionsDataSourceManager;
	PXPhotoKitCollectionsDataSource* _collectionsDataSource;

}

@property (nonatomic,readonly) PXPhotoKitCollectionsDataSourceManager * collectionsDataSourceManager;              //@synthesize collectionsDataSourceManager=_collectionsDataSourceManager - In the implementation block
@property (nonatomic,retain) PXPhotoKitCollectionsDataSource * collectionsDataSource;                              //@synthesize collectionsDataSource=_collectionsDataSource - In the implementation block
@property (nonatomic,readonly) PHCollectionList * collectionList;                                                  //@synthesize collectionList=_collectionList - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                                                           //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeCollectionsDataSourceManagerForConfiguration:(id)arg1 ;
-(NSString *)description;
-(id)initWithConfiguration:(id)arg1 ;
-(PHCollectionList *)collectionList;
-(void)setIndentationLevel:(long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithCollectionList:(id)arg1 ;
-(PXPhotoKitCollectionsDataSource *)collectionsDataSource;
-(id)initWithChildDataSectionManagers:(id)arg1 ;
-(id)createDataSection;
-(id)_changeDetailsForItemAtIndex:(long long)arg1 childDataSection:(id)arg2 expanding:(BOOL)arg3 ;
-(void)_requestParentForListItem:(id)arg1 hintIndex:(long long)arg2 resultHandler:(/*^block*/id)arg3 recursionHandler:(/*^block*/id)arg4 ;
-(id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3 ;
-(void)startBackgroundFetchingIfNeeded;
-(void)expandListItem:(id)arg1 hintIndex:(long long)arg2 ;
-(void)collapseListItem:(id)arg1 hintIndex:(long long)arg2 ;
-(long long)indentationLevel;
-(PXPhotoKitCollectionsDataSourceManager *)collectionsDataSourceManager;
-(void)setCollectionsDataSource:(PXPhotoKitCollectionsDataSource *)arg1 ;
@end

