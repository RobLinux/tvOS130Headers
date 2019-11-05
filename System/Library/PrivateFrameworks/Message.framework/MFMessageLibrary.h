/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, MFAttachmentLibraryDataProvider;

@interface MFMessageLibrary : NSObject {

	NSString* _path;
	MFAttachmentLibraryDataProvider* _attachmentDataProvider;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)commit;
-(BOOL)isBusy;
-(id)dataProvider;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg1 ;
-(void)deleteAccount:(id)arg1 ;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(BOOL)shouldCancel;
-(id)loadMeetingExternalIDForMessage:(id)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg1 ;
-(id)loadMeetingMetadataForMessage:(id)arg1 ;
-(id)messagesWithMessageIDHeader:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2 ;
-(void)invalidateAccount:(id)arg1 ;
-(void)deleteMailboxes:(id)arg1 account:(id)arg2 ;
-(BOOL)renameMailboxes:(id)arg1 to:(id)arg2 ;
-(long long)libraryIDForAccount:(id)arg1 ;
-(long long)createLibraryIDForAccount:(id)arg1 ;
-(unsigned long long)serverUnreadOnlyOnServerCountForMailbox:(id)arg1 ;
-(unsigned)unreadCountForMailbox:(id)arg1 ;
-(unsigned)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2 ;
-(unsigned)nonDeletedCountForMailbox:(id)arg1 ;
-(long long)statusCountDeltaForMailbox:(id)arg1 ;
-(unsigned long long)mostRecentStatusCountForMailbox:(id)arg1 ;
-(void)setMostRecentStatusCount:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(unsigned)mailboxIDForURLString:(id)arg1 ;
-(id)urlForMailboxID:(unsigned)arg1 ;
-(id)mailboxUidForMessage:(id)arg1 ;
-(void)setMessage:(id)arg1 isPartial:(BOOL)arg2 ;
-(BOOL)isMessageContentsLocallyAvailable:(id)arg1 ;
-(void)setSummary:(id)arg1 forMessage:(id)arg2 ;
-(id)dataPathForMessage:(id)arg1 ;
-(id)dataPathForMessage:(id)arg1 part:(id)arg2 ;
-(id)accountForMessage:(id)arg1 ;
-(void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(BOOL)arg3 ;
-(id)dataConsumerForMessage:(id)arg1 part:(id)arg2 ;
-(oneway void)updateMessage:(id)arg1 withMetadata:(/*^block*/id)arg2 ;
-(id)metadataForMessage:(id)arg1 key:(id)arg2 ;
-(id)messageWithLibraryID:(unsigned)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(unsigned)totalCountForMailbox:(id)arg1 ;
-(unsigned)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3 ;
-(unsigned)allNonDeleteCountForMailbox:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3 ;
-(id)messagesWithSummariesForMailbox:(id)arg1 range:(NSRange)arg2 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(unsigned)arg2 limit:(unsigned)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 inRemoteMailbox:(id)arg3 ;
-(id)serverSearchResultMessagesForMailbox:(id)arg1 ;
-(id)dateOfOldestNonIndexedNonSearchResultMessageInMailbox:(id)arg1 ;
-(id)dateOfNewestNonSearchResultMessageInMailbox:(id)arg1 ;
-(id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1 ;
-(id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned)arg3 ;
-(id)messageWithMessageID:(id)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(id)headerDataForMessage:(id)arg1 ;
-(id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
-(id)dataForMimePart:(id)arg1 isComplete:(BOOL*)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(BOOL)arg3 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
-(id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 ;
-(void)deleteDataForMessage:(id)arg1 ;
-(id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2 ;
-(void)compactMessages:(id)arg1 ;
-(void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2 ;
-(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(BOOL)arg9 addPOPUIDs:(BOOL)arg10 dataSectionsByMessage:(id)arg11 ;
-(void)compactMailbox:(id)arg1 ;
-(void)compactMessages:(id)arg1 permanently:(BOOL)arg2 ;
-(void)setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2 ;
-(void)postFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(void)flagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 forMailbox:(id)arg3 setFlags:(unsigned long long)arg4 clearFlags:(unsigned long long)arg5 messageFlagsForMessages:(id)arg6 createNewCacheFiles:(BOOL)arg7 ;
-(void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2 ;
-(void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg1 externalConversationID:(long long)arg2 ;
-(id)messagesNeedingSyncConfirmationForMailbox:(id)arg1 ;
-(id)messagesWithoutSummariesForMailbox:(id)arg1 ;
-(id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(unsigned)arg2 limit:(unsigned)arg3 ;
-(id)orderedBatchOfMessagesEndingAtRowId:(unsigned)arg1 limit:(unsigned)arg2 success:(BOOL*)arg3 ;
-(unsigned)unreadCountForAggregatedMailboxes:(id)arg1 ;
-(unsigned)unreadCountForAggregatedMailboxes:(id)arg1 matchingCriterion:(id)arg2 ;
-(unsigned)attachmentCountForMailboxes:(id)arg1 ;
-(unsigned)deletedCountForMailbox:(id)arg1 ;
-(unsigned)nonDeletedCountForAggregatedMailboxes:(id)arg1 ;
-(unsigned)nonDeletedCountForAggregatedMailboxes:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3 ;
-(void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(void)setLastSyncAndMostRecentStatusCount:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(id)oldestMessageInMailbox:(id)arg1 ;
-(id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2 ;
-(unsigned)maximumRemoteIDForMailbox:(id)arg1 ;
-(unsigned)minimumRemoteIDForMailbox:(id)arg1 ;
-(BOOL)canProvideMinimumRemoteID;
-(id)sequenceIdentifierForMailbox:(id)arg1 ;
-(void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2 ;
-(id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2 ;
-(void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(unsigned)arg2 ;
-(void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3 ;
-(id)getDetailsForMessagesWithRemoteIDInRange:(NSRange)arg1 fromMailbox:(id)arg2 ;
-(id)getDetailsForAllMessagesFromMailbox:(id)arg1 ;
-(id)getDetailsForMessages:(unsigned long long)arg1 absoluteBottom:(unsigned long long)arg2 topOfDesiredRange:(unsigned long long)arg3 range:(NSRange*)arg4 fromMailbox:(id)arg5 ;
-(void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(BOOL)arg2 andNotify:(BOOL)arg3 ;
-(id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 isPartial:(BOOL)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 ;
-(id)metadataForMessage:(id)arg1 ;
-(id)bodyDataForMessage:(id)arg1 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 range:(NSRange)arg4 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 success:(BOOL*)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 success:(BOOL*)arg4 ;
-(BOOL)libraryExists;
-(void)closeDatabaseConnections;
-(void)deletePOPUID:(id)arg1 inMailbox:(id)arg2 ;
-(id)UIDsToDeleteInMailbox:(id)arg1 ;
-(id)deletedUIDsInMailbox:(id)arg1 ;
-(id)allUIDsInMailbox:(id)arg1 ;
-(id)hiddenPOPUIDsInMailbox:(id)arg1 ;
-(void)lockDBForWriting;
-(void)appendOfflineCacheOperation:(id)arg1 forAccount:(long long)arg2 lastTemporaryID:(unsigned)arg3 ;
-(void)markOfflineCacheOperationAsComplete:(id)arg1 ;
-(id)offlineCacheOperationsForAccount:(long long)arg1 lastTemporaryID:(unsigned*)arg2 ;
-(void)appendOfflineCacheReplayData:(id)arg1 forAccountID:(long long)arg2 ;
-(void)consumeOfflineCacheReplayDataForAccount:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)deleteOfflineCacheDataForAccount:(long long)arg1 ;
-(void)updateFlagsForMessagesInPlace:(id)arg1 success:(BOOL*)arg2 ;
-(id)remoteStoreForMessage:(id)arg1 ;
-(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4 ;
-(void)setFlagsForMessages:(id)arg1 ;
-(void)postOldFlags:(unsigned long long)arg1 newFlags:(unsigned long long)arg2 forMessage:(id)arg3 ;
-(id)storedIntegerPropertyWithName:(id)arg1 ;
-(void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2 ;
@end

