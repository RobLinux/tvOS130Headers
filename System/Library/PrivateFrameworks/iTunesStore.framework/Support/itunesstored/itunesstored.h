#import <itunesstored/DownloadsDatabase.h>
#import <itunesstored/DownloadsTransaction.h>
#import <itunesstored/DownloadsChangeset.h>
#import <itunesstored/SubscriptionStatusOperation.h>
#import <itunesstored/PurchaseManifest.h>
#import <itunesstored/PurchaseManifestItem.h>
#import <itunesstored/FamilyCircleOperation.h>
#import <itunesstored/StoreDownloadQueueResponse.h>
#import <itunesstored/SKDownloadInternal.h>
#import <itunesstored/SKDownload.h>
#import <itunesstored/SKDownloadChangeset.h>
#import <itunesstored/AcceptTermsAndConditionsOperation.h>
#import <itunesstored/LoadDownloadQueueOperation.h>
#import <itunesstored/PurchaseOperation.h>
#import <itunesstored/PurchaseResponseInfo.h>
#import <itunesstored/DownloadHandlerClient.h>
#import <itunesstored/DialogManager.h>
#import <itunesstored/MediaSocialStatusPollRequest.h>
#import <itunesstored/DownloadSessionProperties.h>
#import <itunesstored/FinishDownloadResponse.h>
#import <itunesstored/MediaDRMOperation.h>
#import <itunesstored/CheckoutRentalKeysOperation.h>
#import <itunesstored/AccountCacheDBClient.h>
#import <itunesstored/BatterySaverWatcher.h>
#import <itunesstored/ISFairPlayRentalInfo.h>
#import <itunesstored/SinfsArray.h>
#import <itunesstored/DownloadEntity.h>
#import <itunesstored/SyncRentalOperation.h>
#import <itunesstored/DemotedApplication.h>
#import <itunesstored/DeviceScorerContext.h>
#import <itunesstored/DeviceScorer.h>
#import <itunesstored/PipelineDownloadTaskState.h>
#import <itunesstored/MicroPaymentQueue.h>
#import <itunesstored/ArrayHash.h>
#import <itunesstored/MicroPaymentClient.h>
#import <itunesstored/MicroPaymentClientMergeResults.h>
#import <itunesstored/MicroPayment.h>
#import <itunesstored/BuyMicroPaymentOperation.h>
#import <itunesstored/MediaContentTasteUpdateController.h>
#import <itunesstored/SKPaymentTransaction.h>
#import <itunesstored/SKPaymentTransactionInternal.h>
#import <itunesstored/MicroPaymentQueueResponse.h>
#import <itunesstored/MicroPaymentProductDiscount.h>
#import <itunesstored/SKProductSubscriptionPeriodInternal.h>
#import <itunesstored/SKProductSubscriptionPeriod.h>
#import <itunesstored/SKProduct.h>
#import <itunesstored/SKProductInternal.h>
#import <itunesstored/LoadMatchStatusOperation.h>
#import <itunesstored/FinishMicroPaymentOperation.h>
#import <itunesstored/ApplicationWorkspaceState.h>
#import <itunesstored/SpringBoardAlertProxy.h>
#import <itunesstored/PurchaseProtocolDataProvider.h>
#import <itunesstored/ApplicationWorkspaceOperation.h>
#import <itunesstored/CacheDeleteCoordinator.h>
#import <itunesstored/PurchaseActionsDatabaseTransaction.h>
#import <itunesstored/GarbageCollectAssetsOperation.h>
#import <itunesstored/StoreKitRequestQueue.h>
#import <itunesstored/AppReceiptHandleInvalidOperation.h>
#import <itunesstored/LoadMicroPaymentProductsOperation.h>
#import <itunesstored/ReceiptRefreshOperation.h>
#import <itunesstored/DirectUploadSessionController.h>
#import <itunesstored/KeybagRequestOperation.h>
#import <itunesstored/MicroPaymentProductsResponse.h>
#import <itunesstored/DirectUploadController.h>
#import <itunesstored/MicroPaymentProductSubscriptionPeriod.h>
#import <itunesstored/MicroPaymentProduct.h>
#import <itunesstored/CheckDownloadQueueOperation.h>
#import <itunesstored/MediaSocialPostEntity.h>
#import <itunesstored/LoadCompletedMicroPaymentsOperation.h>
#import <itunesstored/ApplicationWorkspaceClearProgressOperation.h>
#import <itunesstored/RingtonePurchase.h>
#import <itunesstored/RingtonePurchaseStore.h>
#import <itunesstored/UpdateAssetsOperation.h>
#import <itunesstored/RequestQueue.h>
#import <itunesstored/DaemonBiometricOptInOperation.h>
#import <itunesstored/RestoreDownloadDataOperation.h>
#import <itunesstored/StoreServicesRequestQueue.h>
#import <itunesstored/UpdateAllMIDBasedSINFsOperation.h>
#import <itunesstored/DisplayPaymentSheetOperation.h>
#import <itunesstored/LoadExternalDownloadManifestOperation.h>
#import <itunesstored/FinishDownloadMemoryEntity.h>
#import <itunesstored/SKPaymentDiscount.h>
#import <itunesstored/PromotedIAPDatabaseSchema.h>
#import <itunesstored/ExternalDownloadManifest.h>
#import <itunesstored/ExtractFileOperation.h>
#import <itunesstored/RestoreDemotedApplicationsOperation.h>
#import <itunesstored/PushNotificationRequestOperation.h>
#import <itunesstored/FairPlayDecryptFileOperation.h>
#import <itunesstored/DownloadDRM.h>
#import <itunesstored/DownloadSinf.h>
#import <itunesstored/LoadMicroPaymentQueueCountOperation.h>
#import <itunesstored/MicroPaymentQueueRequest.h>
#import <itunesstored/LoadMicroPaymentQueuesOperation.h>
#import <itunesstored/LoadMicroPaymentQueuePaymentsOperation.h>
#import <itunesstored/PurchaseIntent.h>
#import <itunesstored/LoadMicroPaymentQueueOperation.h>
#import <itunesstored/InstallToneOperation.h>
#import <itunesstored/PersistentStore.h>
#import <itunesstored/PersistentStoreConfiguration.h>
#import <itunesstored/SubscriptionEntitlementsOperation.h>
#import <itunesstored/StreamingZipDownloadDataConsumer.h>
#import <itunesstored/GetPlayInfoOperation.h>
#import <itunesstored/AuthorizeMachineOperation.h>
#import <itunesstored/PushNotificationController.h>
#import <itunesstored/PushNotificationRegisterBlock.h>
#import <itunesstored/PushNotificationClient.h>
#import <itunesstored/BagContract.h>
#import <itunesstored/DownloadAssetFairPlayStreamingKeyLoader.h>
#import <itunesstored/WatchMetricsController.h>
#import <itunesstored/PushNotification.h>
#import <itunesstored/PushNotificationSoundsSyncOperation.h>
#import <itunesstored/PushNotificationEnvironment.h>
#import <itunesstored/PostPushNotificationTokenOperation.h>
#import <itunesstored/PushNotificationDisplayOperation.h>
#import <itunesstored/SKPaymentQueueClient.h>
#import <itunesstored/SetAutomaticDownloadKindsOperation.h>
#import <itunesstored/AddItemToIPodLibraryOperation.h>
#import <itunesstored/ShowServerPromptOperation.h>
#import <itunesstored/CheckinRentalOperation.h>
#import <itunesstored/XPCClient.h>
#import <itunesstored/XPCClientBackgroundTask.h>
#import <itunesstored/DownloadAssetEntity.h>
#import <itunesstored/MediaSocialExternalTargetEntity.h>
#import <itunesstored/DownloadManagerClient.h>
#import <itunesstored/TransactionEntity.h>
#import <itunesstored/StoreDownloadQueue.h>
#import <itunesstored/CarrierBundlingEligibilityResponse.h>
#import <itunesstored/StoreDownloadQueueRequest.h>
#import <itunesstored/UpdateMigrator.h>
#import <itunesstored/UpdateMigratorOperation.h>
#import <itunesstored/UpdateMigratorPromotionOperation.h>
#import <itunesstored/UpdateMigratorAutoUpdateOperation.h>
#import <itunesstored/SubscriptionOperation.h>
#import <itunesstored/PrepareDirectUploadOperation.h>
#import <itunesstored/DemoteApplicationOperation.h>
#import <itunesstored/EpubRightsDataParser.h>
#import <itunesstored/StoreDownload.h>
#import <itunesstored/InstallSoftwareOperation.h>
#import <itunesstored/SoftwareProperties.h>
#import <itunesstored/CarrierBundlingEligibilityOperation.h>
#import <itunesstored/FinishDownloadsOperation.h>
#import <itunesstored/PurchaseIntentDatabaseRow.h>
#import <itunesstored/PurchaseActionsDatabase.h>
#import <itunesstored/FinishedDownloadEntity.h>
#import <itunesstored/DownloadArtworkCacheOperation.h>
#import <itunesstored/AccountPasswordSettingsController.h>
#import <itunesstored/ServerAuthenticationOperation.h>
#import <itunesstored/PersistentDownloadManagerEntity.h>
#import <itunesstored/PersistentDownloadEntity.h>
#import <itunesstored/PersistentDownloadManagerKindEntity.h>
#import <itunesstored/NetworkRequestQueue.h>
#import <itunesstored/MediaSocialAuthenticationCoordinator.h>
#import <itunesstored/MediaSocialAuthenticationResponse.h>
#import <itunesstored/IPodLibrary.h>
#import <itunesstored/RestoreDownloadsOperation.h>
#import <itunesstored/DownloadHandle.h>
#import <itunesstored/DaemonBiometricKeychain.h>
#import <itunesstored/FinishDownloadStepOperation.h>
#import <itunesstored/RestoreDownloadItemsOperation.h>
#import <itunesstored/LoadPassbookPassOperation.h>
#import <itunesstored/URLBagTimer.h>
#import <itunesstored/DownloadApplicationIdentifierEntity.h>
#import <itunesstored/RestoreBackupOperation.h>
#import <itunesstored/ApplicationWorkspace.h>
#import <itunesstored/DownloadDatabaseSchema.h>
#import <itunesstored/LoadRentalInformationOperation.h>
#import <itunesstored/InstallDownloadOperation.h>
#import <itunesstored/ClearAssetCacheOperation.h>
#import <itunesstored/IPodLibraryItem.h>
#import <itunesstored/RedeemCodesProtocolDataProvider.h>
#import <itunesstored/PreorderEntity.h>
#import <itunesstored/CanceledPreorderEntity.h>
#import <itunesstored/MediaSocialContentItemEntity.h>
#import <itunesstored/LoadPreorderQueueOperation.h>
#import <itunesstored/CheckPreorderQueueOperation.h>
#import <itunesstored/StorePreorderQueue.h>
#import <itunesstored/AppReceiptRefreshOperation.h>
#import <itunesstored/SKPayment.h>
#import <itunesstored/SKMutablePayment.h>
#import <itunesstored/SKPaymentInternal.h>
#import <itunesstored/FinishDownloadAssetMemoryEntity.h>
#import <itunesstored/CancelPreordersOperation.h>
#import <itunesstored/MediaSocialErrorCoordinator.h>
#import <itunesstored/PreorderQueueClient.h>
#import <itunesstored/DirectUploadEntity.h>
#import <itunesstored/FilesystemDownloadDataConsumer.h>
#import <itunesstored/DownloadErrorController.h>
#import <itunesstored/DownloadError.h>
#import <itunesstored/DownloadFatalError.h>
#import <itunesstored/DownloadGenericError.h>
#import <itunesstored/DownloadDiskSpaceError.h>
#import <itunesstored/DownloadIncompatibleAppError.h>
#import <itunesstored/DownloadNetworkConstraintError.h>
#import <itunesstored/UserNotificationCenter.h>
#import <itunesstored/UserNotification.h>
#import <itunesstored/InstallAttributionParams.h>
#import <itunesstored/DownloadClientEntity.h>
#import <itunesstored/RestoreDownloadItem.h>
#import <itunesstored/ApplicationHandle.h>
#import <itunesstored/PurchaseHistoryOperation.h>
#import <itunesstored/DownloadDataConsumer.h>
#import <itunesstored/CheckHashesOperation.h>
#import <itunesstored/DaemonDialogOperation.h>
#import <itunesstored/ScratchManager.h>
#import <itunesstored/AppReceiptOperationResult.h>
#import <itunesstored/DevicePasscodePromptOperation.h>
#import <itunesstored/AppExtensionSupport.h>
#import <itunesstored/GetAutomaticDownloadKindsOperation.h>
#import <itunesstored/MediaContentTasteUpdateOperation.h>
#import <itunesstored/SKProductsResponse.h>
#import <itunesstored/SKProductsResponseInternal.h>
#import <itunesstored/EBookManifest.h>
#import <itunesstored/DownloadPipeline.h>
#import <itunesstored/PerformDownloadOperation.h>
#import <itunesstored/DistributedNotificationCenter.h>
#import <itunesstored/DistributedNotificationObserver.h>
#import <itunesstored/KeyValueObserver.h>
#import <itunesstored/KeyValueObserverItem.h>
#import <itunesstored/SKProductDiscountInternal.h>
#import <itunesstored/SKProductDiscount.h>
#import <itunesstored/EventMonitor.h>
#import <itunesstored/EventMonitorEvent.h>
#import <itunesstored/EventMonitorBlockEvent.h>
#import <itunesstored/RestoreStatistics.h>
#import <itunesstored/EventDispatcher.h>
#import <itunesstored/CloudServiceAPITokenOperation.h>
#import <itunesstored/ManagedApplicationController.h>
#import <itunesstored/StoreKitClient.h>
#import <itunesstored/LookupRequestOperation.h>
#import <itunesstored/Download.h>
#import <itunesstored/InstallEBookDownloadOperation.h>
#import <itunesstored/PrivacyPromptOperation.h>
#import <itunesstored/DownloadAsset.h>
#import <itunesstored/GratisClaimOperation.h>
#import <itunesstored/BundleValidator.h>
#import <itunesstored/RescueAbandonedPlaceholderOperation.h>
#import <itunesstored/DirectUploadArtistEntity.h>
#import <itunesstored/MediaSocialPostResponse.h>
#import <itunesstored/SpringBoardUtility.h>
#import <itunesstored/SpringBoardPendingAlert.h>
#import <itunesstored/DownloadController.h>
#import <itunesstored/Daemon.h>
#import <itunesstored/ApplicationWorkspaceFinishOperation.h>
#import <itunesstored/BackgroundTaskRequest.h>
#import <itunesstored/PurchaseActionsDatabaseSchema.h>
#import <itunesstored/DownloadsSession.h>
#import <itunesstored/DownloadsSessionDescriptor.h>
#import <itunesstored/PromotedIAPDatabaseTransaction.h>
#import <itunesstored/PrepareDownloadOperation.h>
#import <itunesstored/PrepareDownloadResponse.h>
#import <itunesstored/UpdatableAssetControllerDeferredScheduleValues.h>
#import <itunesstored/UpdatableAssetController.h>
#import <itunesstored/AppReceiptController.h>
#import <itunesstored/MetricsController.h>
#import <itunesstored/AskPermissionActionOperation.h>
#import <itunesstored/GratisClaimProtocolDataProvider.h>
#import <itunesstored/MediaSocialPostAttachment.h>
#import <itunesstored/InAppReviewRequest.h>
#import <itunesstored/MediaSocialStatusPollOperation.h>
#import <itunesstored/DownloadPolicyEntity.h>
#import <itunesstored/ExplicitPreferenceManager.h>
#import <itunesstored/RemoteWebViewOperation.h>
#import <itunesstored/InstallDocumentDownloadOperation.h>
#import <itunesstored/DownloadPolicy.h>
#import <itunesstored/DownloadPolicyManager.h>
#import <itunesstored/DownloadPolicyChangeset.h>
#import <itunesstored/DownloadHandlerManager.h>
#import <itunesstored/FinishDownloadOperation.h>
#import <itunesstored/DownloadHandlerSession.h>
#import <itunesstored/WatchAnalyticsReportingOperation.h>
#import <itunesstored/DownloadHandlerAuthenticationOperation.h>
#import <itunesstored/ExternalDownloadState.h>
#import <itunesstored/ApplicationWorkspaceFailedPlaceholderOperation.h>
#import <itunesstored/DownloadsExternalTransaction.h>
#import <itunesstored/ApplicationDownloadProgress.h>
#import <itunesstored/KeybagSyncOperation.h>
#import <itunesstored/DaemonBiometricStore.h>
#import <itunesstored/DelayedGotoSemaphore.h>
#import <itunesstored/DaemonCachedObject.h>
#import <itunesstored/MicroPaymentDownload.h>
#import <itunesstored/InstallMicroPaymentDownloadOperation.h>
#import <itunesstored/SaveInstallAttributionParamsOperation.h>
#import <itunesstored/ClaimStoreKitClientOperation.h>
#import <itunesstored/ExpiredDownloadRecoveryOperation.h>
#import <itunesstored/ExpiredDownloadRecoveryResponse.h>
#import <itunesstored/MediaSocialPostOperation.h>
#import <itunesstored/SoftwareLibraryLookupOperation.h>
#import <itunesstored/SoftwareLibraryUpdateOperation.h>
#import <itunesstored/RestorePodcastItemsOperation.h>
#import <itunesstored/DirectUploadRequest.h>
#import <itunesstored/RestoreDownloadItemsResponse.h>
#import <itunesstored/RestorePodcastItemsResponse.h>
#import <itunesstored/DirectUploadProgress.h>
#import <itunesstored/InstallAttributionPingback.h>
#import <itunesstored/EnableAllAutomaticDownloadKindsOperation.h>
#import <itunesstored/BookAssetDaemonUtility.h>
#import <itunesstored/LoadSoftwareThumbnailOperation.h>
#import <itunesstored/RedeemCodesOperation.h>
#import <itunesstored/DaemonPBFusePreferences.h>
#import <itunesstored/KeyValueStore.h>
#import <itunesstored/StoreKitClientIdentity.h>
#import <itunesstored/AppReceiptRefreshOperationOptions.h>
#import <itunesstored/LogoutOperation.h>
#import <itunesstored/DownloadsDatabaseGarbageCollectionOperation.h>
#import <itunesstored/AnalyticsRecordingOperation.h>
#import <itunesstored/RemoveableSoftwareLookupOperation.h>
#import <itunesstored/SendInstallAttributionPingbackOperation.h>
#import <itunesstored/ErrorHandlerManager.h>
#import <itunesstored/Transaction.h>
#import <itunesstored/ErrorHandlerClient.h>
#import <itunesstored/ErrorHandlerSession.h>
#import <itunesstored/ErrorHandlerResponse.h>
#import <itunesstored/DaemonProtocolDataProvider.h>
#import <itunesstored/RefreshStoreQueueDownloadOperation.h>
#import <itunesstored/DirectUploadResponse.h>
#import <itunesstored/PromotedIAPManager.h>
#import <itunesstored/RefreshMicroPaymentDownloadOperation.h>
#import <itunesstored/RefreshITunesMatchDownloadOperation.h>
#import <itunesstored/UpdateAccountPasswordSettingsOperation.h>
#import <itunesstored/CheckForDemotedApplicationsOperation.h>
#import <itunesstored/PurchaseManagerClient.h>
#import <itunesstored/PromotedIAPDatabase.h>
#import <itunesstored/PurchaseController.h>
#import <itunesstored/FairPlayDecryptSession.h>
#import <itunesstored/DirectUploadDatabaseSchema.h>
#import <itunesstored/PurchaseAuthenticateOperation.h>
#import <itunesstored/PurchaseManagerOperation.h>
#import <itunesstored/MappedPropertyList.h>
#import <itunesstored/PurchaseDownloadsTransaction.h>
#import <itunesstored/DisplayPaymentSheetContainerOperation.h>
#import <itunesstored/URLConnectionRequestOperation.h>
#import <itunesstored/WiFiManager.h>
#import <itunesstored/DaemonPurchaseResponse.h>
#import <itunesstored/DaemonPBFuseItemPreference.h>
#import <itunesstored/InstallMediaDownloadOperation.h>
#import <itunesstored/PurchaseEntity.h>
#import <itunesstored/PurchaseManagerEntity.h>
#import <itunesstored/AppStoreUtility.h>
#import <itunesstored/PurchaseActionsManager.h>
#import <itunesstored/PurchaseManager.h>
#import <itunesstored/MediaSocialStatusPollingCoordinator.h>
#import <itunesstored/ApplicationWorkspaceInstallPlaceholderOperation.h>
#import <itunesstored/InstallSoftwareDownloadOperation.h>
#import <itunesstored/CloudServiceCapabilitiesOperation.h>
#import <itunesstored/AppClusterMapping.h>
#import <itunesstored/SKXPCConnection.h>
#import <itunesstored/SoftwareUpdatesStore.h>
#import <itunesstored/SKWeakReference.h>
#import <itunesstored/ApplicationWorkspaceUninstallOperation.h>
#import <itunesstored/WorkspaceDownloadObserverClient.h>
#import <itunesstored/WorkspaceDownloadObserver.h>
#import <itunesstored/DownloadAssetProgress.h>
#import <itunesstored/AppReceipt.h>
#import <itunesstored/AnalyticsReportingOperation.h>
#import <itunesstored/IPodLibraryML3TrackImporter.h>
#import <itunesstored/PurchaseIntentActionOperation.h>
#import <itunesstored/DownloadDRMOperation.h>
#import <itunesstored/ApplicationWorkspaceChange.h>
#import <itunesstored/UserNotificationManager.h>
#import <itunesstored/ApplicationWorkspaceProgressOperation.h>
