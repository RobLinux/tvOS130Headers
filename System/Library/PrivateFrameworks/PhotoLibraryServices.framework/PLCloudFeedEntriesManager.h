/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary;

@interface PLCloudFeedEntriesManager : NSObject {

	PLPhotoLibrary* _library;

}

@property (nonatomic,readonly) PLPhotoLibrary * library;              //@synthesize library=_library - In the implementation block
-(PLPhotoLibrary *)library;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)_firstEntryOnOrBeforeDate:(id)arg1 ;
-(id)_firstEntryAfterDate:(id)arg1 ;
-(id)_firstEntryOnOrAfterDate:(id)arg1 ;
-(id)_firstEntryRelativeToDate:(id)arg1 ascending:(BOOL)arg2 includeSameDate:(BOOL)arg3 ;
-(void)_getEarliestDate:(id*)arg1 latestDate:(id*)arg2 forRangeOfContiguousCommentsEntriesAroundDate:(id)arg3 ;
-(id)_invitationReceivedEntryForSharedAlbum:(id)arg1 ;
-(id)_subscriptionEntryForSharedAlbum:(id)arg1 ;
-(id)_albumCreatedEntryForSharedAlbum:(id)arg1 ;
-(id)_singleEntryOfType:(long long)arg1 forSharedAlbum:(id)arg2 ;
-(id)_invitationAcceptedEntryForInvitationRecord:(id)arg1 ;
-(id)_invitationDeclinedEntryForInvitationRecord:(id)arg1 ;
-(id)_singleEntryOfType:(long long)arg1 forInvitationRecord:(id)arg2 ;
-(void)processAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)rebuildAllEntries:(/*^block*/id)arg1 ;
-(void)_noteDidUpdateSharedAlbum:(id)arg1 ;
-(void)_noteContentDeletionAffectingInvitationEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingSubscriptionEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingInvitationResponseEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingAlbumCreatedEntry:(id)arg1 ;
-(void)_noteDidReceiveSharedAsset:(id)arg1 ;
-(void)_noteDidReceiveSharedAssetPublishedBeforeSubscription:(id)arg1 ;
-(void)_noteDidReceiveSharedComments:(id)arg1 ;
-(void)_noteDidReceiveSharedComment:(id)arg1 ;
-(void)_noteDidUpdateInvitationRecord:(id)arg1 ;
-(void)_noteContentDeletionAffectingAssetsEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingCommentsEntry:(id)arg1 ;
-(id)_dateForAsset:(id)arg1 ;
-(id)_subscriptionDateForSharedAlbum:(id)arg1 ;
-(BOOL)_wasAssetPublishedBeforeSubscription:(id)arg1 ;
-(BOOL)_wasCommentPublishedBeforeSubscription:(id)arg1 ;
-(BOOL)_commentIsBatchCaption:(id)arg1 ;
-(BOOL)_shouldIgnoreAsset:(id)arg1 ;
-(BOOL)_shouldIgnoreComment:(id)arg1 ;
-(BOOL)_shouldIgnoreInvitationRecord:(id)arg1 ;
-(BOOL)_shouldMergeAsset:(id)arg1 intoEntry:(id)arg2 ;
-(/*^block*/id)_assetSortingComparator;
-(/*^block*/id)_commentSortingComparator;
-(void)_addAsset:(id)arg1 toEntry:(id)arg2 ;
-(void)_mergeOlderEntry:(id)arg1 intoMoreRecentEntry:(id)arg2 ;
-(void)_splitEntriesAtDate:(id)arg1 ;
-(void)_mergeEntriesAroundDate:(id)arg1 ;
-(BOOL)_tryMergingComment:(id)arg1 withEntry:(id)arg2 ;
@end

