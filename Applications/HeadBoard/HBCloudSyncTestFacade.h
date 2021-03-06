/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:10 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HBCloudSyncTestFacade : NSObject
+(void)initialize;
-(id)foldersWithChangedDisplayNamesFromFolder:(id)arg1 folderIdentifiersMappedToDisplayNames:(id)arg2 ;
-(id)_sampleCKRecordForSingleAppFromFolder:(id)arg1 ;
-(id)_sampleCKFolderRecordFromFolder:(id)arg1 ;
-(id)_recordsForApp:(id)arg1 movedIntoChildFolder:(id)arg2 ;
-(id)_recordsForAppMovedBackToHomeScreen:(id)arg1 ;
-(id)_recordsForFolderGettingCreatedFromApp:(id)arg1 ;
-(id)_recordIDForFolderGettingDeleted:(id)arg1 fromApp:(id)arg2 ;
-(id)_recordForAppRemovedFromFolder:(id)arg1 ;
-(id)_recordForApp:(id)arg1 movedFromFolder:(id)arg2 toFolder:(id)arg3 ;
-(id)_recordForFolderChangingDisplayNames:(id)arg1 ;
-(id)_defaultHomeScreenRecord;
-(id)_defaultAppRecordForApp:(id)arg1 ;
-(id)_defaultFolderRecordForApp:(id)arg1 FromFolder:(id)arg2 ;
-(id)newTestFolderAfterMovingAnAppInRootFolder:(id)arg1 ;
-(id)newTestFolderAfterMovingAFolderInsideAFolder:(id)arg1 ;
-(id)newTestFolderAfterMovingAnApp:(id)arg1 intoAFolder:(id)arg2 rootFolder:(id)arg3 ;
-(id)newTestFolderAfterMovingAnApp:(id)arg1 toHomeScreenWithRootFolder:(id)arg2 ;
-(id)newTestFolderAfterFolderGettingCreatedFromApp:(id)arg1 rootFolder:(id)arg2 ;
-(id)newTestFolderAfterFolderGettingDeleted:(id)arg1 fromApp:(id)arg2 rootFolder:(id)arg3 ;
-(id)newTestFolderAfterMovingAnApp:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3 rootFolder:(id)arg4 ;
-(id)newTestFolderAfterFolderChangingDisplayNames:(id)arg1 rootFolder:(id)arg2 ;
-(BOOL)doItemsCollideInFolder:(id)arg1 ;
-(void)updateItemsWithNewOrderIdsFromFolder:(id)arg1 ;
-(void)updateFolderAfterAppsMovedInFolder:(id)arg1 ;
-(id)itemsToParentMappingFromFolder:(id)arg1 ;
-(id)updatedItemsListFromFolder:(id)arg1 itemsToParentMapping:(id)arg2 ;
-(id)deletedItemIdsFromFolder:(id)arg1 itemsToParentMapping:(id)arg2 ;
-(id)folderIdentifiersMappedToDisplayNamesFromFolder:(id)arg1 ;
@end

