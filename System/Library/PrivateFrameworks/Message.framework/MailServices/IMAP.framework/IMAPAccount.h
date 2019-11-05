/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAP/IMAP-Structs.h>
#import <Message/MailAccount.h>
#import <IMAP/MFIMAPConnectionDelegate.h>
#import <IMAP/MFIMAPMailboxListFilter.h>

@class NSString, MFIMAPOperationCache, NSRecursiveLock, NSMutableArray, NSArray, NSSet, NSMutableDictionary;

@interface IMAPAccount : MailAccount <MFIMAPConnectionDelegate, MFIMAPMailboxListFilter> {

	NSString* _separatorChar;
	NSString* _serverNamespace;
	CFArrayRef _cachedConnections;
	CFArrayRef _mailboxesToSynchronize;
	MFIMAPOperationCache* _offlineCache;
	unsigned long long _greatestInboxUid;
	double _timeLastFetchedMailboxList;
	NSRecursiveLock* _flagChangesLock;
	NSMutableArray* _recentFlagChanges;
	NSRecursiveLock* _connectionLock;
	int _nextConnectionTag;
	void* _packetContextAssertion;
	NSArray* _lockOrderingArray;
	unsigned _readBufferSize;
	/*^block*/id _offlineCacheFlushHandler;
	unsigned _fetchedMailboxList : 1;
	unsigned _isOffline : 1;
	NSArray* _lastKnownCapabilities;
	double _lastPushRegistration;
	NSString* _apsTopic;
	NSSet* _pushedMailboxUids;
	NSMutableDictionary* _pushRegisteredMailboxes;
	int _supportedPushServiceLevel;
	unsigned _observingPushedFoldersPrefsChanged : 1;
	unsigned _mustRegisterForPushOnNextConnection : 1;
	unsigned _didRequestPushRegistration : 1;
	unsigned _listeningForDeviceTokenChanges : 1;
	unsigned _didUpdateSeparatorAndNamespace : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accountTypeString;
+(id)accountTypeIdentifier;
+(unsigned)defaultSecurePortNumber;
+(unsigned)defaultPortNumber;
+(void*)legacyKeychainProtocol;
+(id)saslProfileName;
+(id)csAccountTypeString;
+(void)_deleteQueuedMailboxes:(id)arg1 ;
-(void)dealloc;
-(id)serviceName;
-(id)hostname;
-(id)clientToken;
-(void)setDisplayName:(id)arg1 ;
-(BOOL)requiresAuthentication;
-(void)setLibrary:(id)arg1 ;
-(BOOL)isOffline;
-(void)_setCapabilities:(id)arg1 ;
-(void)checkInConnection:(id)arg1 ;
-(id)copyDiagnosticInformation;
-(id)mf_lockOrdering;
-(void)saveState;
-(id)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(BOOL)arg4 ;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(BOOL)deleteInPlaceForMailbox:(id)arg1 ;
-(id)fetchLimits;
-(void)releaseAllConnections;
-(Class)connectionClass;
-(id)certUIService;
-(id)secureServiceName;
-(BOOL)canGoOffline;
-(void)releaseAllForcedConnections;
-(id)nameForMailboxUid:(id)arg1 ;
-(void)resetMailboxTimer;
-(id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2 ;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(BOOL)canFetch;
-(id)_mailboxPathPrefix;
-(id)_specialMailboxUidWithType:(int)arg1 create:(BOOL)arg2 ;
-(id)allMailMailboxUid;
-(void)_setSpecialMailbox:(id)arg1 forType:(int)arg2 ;
-(void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(unsigned)arg2 ;
-(id)_pathComponentForUidName:(id)arg1 ;
-(BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3 ;
-(id)_uidNameForPathComponent:(id)arg1 ;
-(void)_synchronouslyLoadListingForParent:(id)arg1 ;
-(BOOL)_deleteMailbox:(id)arg1 ;
-(BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2 ;
-(Class)storeClass;
-(id)mailboxPathExtension;
-(id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5 ;
-(id)_URLScheme;
-(id)_infoForMatchingURL:(id)arg1 ;
-(id)statisticsKind;
-(id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5 ;
-(void)_writeCustomInfoToMailboxCache:(id)arg1 ;
-(BOOL)supportsAppend;
-(BOOL)isMailboxLocalForType:(int)arg1 ;
-(void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
-(void)fetchMailboxList;
-(BOOL)shouldExpungeMessagesOnDelete;
-(BOOL)isSpecialMailbox:(id)arg1 ;
-(BOOL)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id*)arg2 ;
-(BOOL)canMailboxBeDeleted:(id)arg1 ;
-(void)startListeningForNotifications;
-(void)stopListeningForNotifications;
-(void)transferNotificationSessionToAccount:(id)arg1 ;
-(BOOL)supportsRemoteAppend;
-(BOOL)supportsMailboxEditing;
-(BOOL)deleteInPlaceForAllMailboxes;
-(BOOL)canReceiveNewMailNotifications;
-(BOOL)_registerPushNotificationPrefix:(id)arg1 forMailboxNames:(id)arg2 ;
-(id)pushedMailboxUids;
-(BOOL)supportsUserPushedMailboxes;
-(void)changePushedMailboxUidsAdded:(id)arg1 deleted:(id)arg2 ;
-(void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2 ;
-(void)_readCustomInfoFromMailboxCache:(id)arg1 ;
-(id)errorForResponse:(id)arg1 ;
-(void)setIsOffline:(BOOL)arg1 ;
-(BOOL)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(SCD_Struct_MF2*)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(SCD_Struct_MF2*)arg3 ;
-(void)connectionDidDisconnect:(id)arg1 ;
-(void)serverRegisteredMailboxes:(id)arg1 withTopic:(id)arg2 version:(int)arg3 ;
-(BOOL)shouldRegisterForPush;
-(id)mailboxNamesForPushRegistration;
-(void)setLastPushRegistration:(double)arg1 ;
-(id)separatorChar;
-(void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(int)arg3 ;
-(unsigned)readBufferSize;
-(void)setReadBufferSize:(unsigned)arg1 ;
-(id)serverPathPrefix;
-(void)setAllowsPartialDownloads:(BOOL)arg1 ;
-(BOOL)allowsPartialDownloads;
-(void)acquireNetworkAssertion;
-(id)lastKnownCapabilities;
-(id)offlineCacheDirectoryPath;
-(BOOL)requiresDataForOfflineTransfersFromStore:(id)arg1 ;
-(id)_dataForTemporaryUid:(unsigned)arg1 ;
-(BOOL)hasPendingOfflineOperations;
-(id)_mailboxUidForName:(id)arg1 ;
-(id)_nameForMailboxUid:(id)arg1 ;
-(unsigned long long)minID;
-(id)offlineCacheIfOffline;
-(id)offlineCache;
-(void)setConnectionTag:(unsigned)arg1 forFlagChanges:(id)arg2 forMessages:(id)arg3 ;
-(void)removeFlagChanges:(id)arg1 forMessages:(id)arg2 ;
-(void)addFlagChanges:(id)arg1 forMailboxPath:(id)arg2 UID:(unsigned)arg3 ;
-(id)flagChangesLock;
-(id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3 ;
-(void)checkInConnection:(id)arg1 destroy:(BOOL)arg2 ;
-(void)handleAlertResponse:(id)arg1 ;
-(void)handleOverQuotaResponse:(id)arg1 ;
-(id)flagChangesForMailboxPath:(id)arg1 UID:(unsigned)arg2 connectTime:(double)arg3 ;
-(id)specialUseAttributeForType:(int)arg1 ;
-(id)specialUseAttributesForMailbox:(id)arg1 ;
-(BOOL)xListSupportedOnConnection:(id)arg1 ;
-(void)flushOfflineCache;
-(void)setHandlerForOfflineCacheFlush:(/*^block*/id)arg1 ;
-(id)offlineCacheIfExists;
-(void)_renameLocalSpecialMailboxesToName:(id)arg1 ;
-(BOOL)compactWhenClosingMailboxes;
-(void)_updateSeparatorAndNamespaceWithConnection:(id)arg1 ;
-(void)throttledGetMailboxListWithConnection:(id)arg1 ;
-(void)setCommitTime:(double)arg1 forConnectionTag:(unsigned)arg2 ;
-(void)removeFlagChangesCommittedBefore:(double)arg1 ;
-(void)_purgeStaleFlagChanges;
-(void)_releaseAllConnectionsAndCallSuper:(BOOL)arg1 edgeForcedOnly:(BOOL)arg2 ifIdleForTimeInterval:(double)arg3 saveOfflineCache:(BOOL)arg4 ;
-(void)_invokeBlock:(/*^block*/id)arg1 ;
-(void)_flushOfflineCache;
-(void)networkChanged;
-(void)_releaseAllConnectionsAndCallSuper:(BOOL)arg1 ;
-(id)_listingForMailboxUid:(id)arg1 listAllChildren:(BOOL)arg2 onlySubscribed:(BOOL)arg3 statusDataItems:(id)arg4 withConnection:(id)arg5 statusEntriesByMailbox:(id*)arg6 ;
-(id)_listingForMailboxUid:(id)arg1 listAllChildren:(BOOL)arg2 onlySubscribed:(BOOL)arg3 ;
-(void)unselectMailbox:(id)arg1 ;
-(id)_listingForMailboxUid:(id)arg1 listAllChildren:(BOOL)arg2 ;
-(void)setStoreMailboxType:(int)arg1 onServer:(BOOL)arg2 ;
-(BOOL)storeMailboxTypeOnServer:(int)arg1 ;
-(void)_synchronizeAccountWithServer;
-(BOOL)getMailboxListWithConnection:(id)arg1 statusDataItems:(id)arg2 statusEntriesByMailbox:(id*)arg3 ;
-(void)_mailboxListingChanged;
-(void)_waitForMailboxListingLoadToComplete;
-(id)serverPathPrefixAccountValue;
-(void)setServerPathPrefix:(id)arg1 shouldSync:(BOOL)arg2 ;
-(id)_fileSystemServerPathPrefix;
-(void)setServerPathPrefix:(id)arg1 ;
-(void)messagesAdded:(id)arg1 ;
-(BOOL)mustRegisterForPushOnNextConnection;
-(id)_externalMailboxUids;
-(void)setMustRegisterForPushOnNextConnection:(BOOL)arg1 ;
-(double)lastPushRegistration;
-(int)supportedPushServiceLevel;
-(void)updatePushRegisteredMailboxes:(id)arg1 ;
-(void)setSupportedPushServiceLevel:(int)arg1 ;
-(void)setAPSTopic:(id)arg1 ;
-(id)_notificationNameForMailbox:(id)arg1 withPrefix:(id)arg2 ;
-(id)notificationNamesForPrefix:(id)arg1 mailboxUids:(id)arg2 ;
-(id)_copyMailboxListForNames:(id)arg1 ;
-(void)_schedulePushRegistrationConnection;
-(id)_copyMailboxListPreferenceForKey:(id)arg1 ;
-(id)_copyUserPushedMailboxes;
-(void)_updatePushedMailboxesAndNotify:(BOOL)arg1 ;
-(void)setValueInAccountInfo:(id)arg1 forKey:(id)arg2 ;
-(id)_notesPrefix;
-(id)_copyPushedMailboxesForPrefix:(id)arg1 ;
-(id)mailboxesRegisteredForPushByHash;
-(void)_apsDeviceTokenChanged:(id)arg1 ;
-(BOOL)canAttemptPushRegistration;
-(void)_registerForDeviceTokenChanges;
-(id)apsTopic;
-(void)_unregisterForDeviceTokenChanges;
-(unsigned long long)greatestInboxUid;
-(unsigned long long)minUID;
-(void)setCompactWhenClosingMailboxes:(BOOL)arg1 ;
-(BOOL)needToSynchronizeMailboxCaches;
-(void)_didSynchronizeMailboxCachesAndFoundChanges:(BOOL)arg1 ;
-(unsigned)minimumPartialDownloadSize;
-(BOOL)connectAndAuthenticate:(id)arg1 ;
-(void)checkInConnectionsForStore:(id)arg1 ;
-(void)releaseAllConnectionsIdleForTimeInterval:(double)arg1 ;
-(void)releaseNetworkAssertion;
-(BOOL)getMailboxListWithConnection:(id)arg1 ;
-(id)registerPushNotificationPrefix:(id)arg1 forMailboxUids:(id)arg2 ;
-(void)handlePushNotificationOnMailboxes:(id)arg1 missedNotifications:(BOOL)arg2 ;
@end

