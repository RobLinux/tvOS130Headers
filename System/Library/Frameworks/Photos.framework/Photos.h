#import <Photos/PHCompositeMediaResult.h>
#import <Photos/PHPhotosHighlightChangeRequest.h>
#import <Photos/PHSafeNSCacheDelegateReflector.h>
#import <Photos/PHAlbum.h>
#import <Photos/PHCollectionDeleteRequest.h>
#import <Photos/PHSmartAlbumChangeRequest.h>
#import <Photos/PHImageCache.h>
#import <Photos/PHSmartAlbum.h>
#import <Photos/PHProject.h>
#import <Photos/PHFaceGroup.h>
#import <Photos/PHVideoResult.h>
#import <Photos/PHFaceGroupDeleteRequest.h>
#import <Photos/PHPersonSuggestion.h>
#import <Photos/PHMomentList.h>
#import <Photos/PHChangeValidationController.h>
#import <Photos/PHAssetExportRequestOptions.h>
#import <Photos/PHAssetExportRequest.h>
#import <Photos/_PHAnimatedImageLoadOperation.h>
#import <Photos/PHAnimatedImage.h>
#import <Photos/PHAnimatedImageRequestOptions.h>
#import <Photos/PHImageRequest.h>
#import <Photos/PHMediaResourceResult.h>
#import <Photos/PHVisionAnalysisUtilities.h>
#import <Photos/PHFaceprint.h>
#import <Photos/PHAssetCollection.h>
#import <Photos/PHInternalAssetExportRequest.h>
#import <Photos/PHMediaRequestContext.h>
#import <Photos/PHAssetDeleteRequest.h>
#import <Photos/PHImageCacheEntry.h>
#import <Photos/PHObjectChangeDetails.h>
#import <Photos/PHVideoRequest.h>
#import <Photos/PHPerformChangesRequest.h>
#import <Photos/PHRecyclableObjectVendor.h>
#import <Photos/PHPersonPLAdapter.h>
#import <Photos/PHKeywordChangeRequest.h>
#import <Photos/PHAssetCreationRequestPlaceholderSupport.h>
#import <Photos/PHAssetCreationRequestPlaceholderSupportNotificationManager.h>
#import <Photos/PHAssetCreationRequestPlaceholderSupportCrashRecovery.h>
#import <Photos/PHObjectDeleteRequest.h>
#import <Photos/PHEntityKeyMap.h>
#import <Photos/PHImageIODecoder.h>
#import <Photos/PHSuggestionMessageMatchingResult.h>
#import <Photos/PHCollectionList.h>
#import <Photos/PHFaceGroupChangeRequest.h>
#import <Photos/PHAdjustmentDataRequestContext.h>
#import <Photos/PHChangeRequestHelper.h>
#import <Photos/PHRelationshipChangeRequestHelper.h>
#import <Photos/PHAssetPLAdapter.h>
#import <Photos/PHImageDecoderAsyncDecodeRequestHandle.h>
#import <Photos/PHImageDecoder.h>
#import <Photos/PHCachingImageManager.h>
#import <Photos/PHImageDisplaySpec.h>
#import <Photos/PHCloudSharedPhoto.h>
#import <Photos/PHCollectionListChangeRequest.h>
#import <Photos/PHPhotosHighlight.h>
#import <Photos/PHPersistentChangeToken.h>
#import <Photos/PHPersistentChangeFetchResult.h>
#import <Photos/PHImportSession.h>
#import <Photos/PHMemoryFeature.h>
#import <Photos/PHMemoryFeatureEncoder.h>
#import <Photos/PHMemoryFeatureDecoder.h>
#import <Photos/PHResourceDownloadRequestOptions.h>
#import <Photos/PHResourceDownloadRequest.h>
#import <Photos/PHMemoryGenerationOptions.h>
#import <Photos/PHMemory.h>
#import <Photos/PHMoment.h>
#import <Photos/PHMemoryChangeRequest.h>
#import <Photos/PHChange.h>
#import <Photos/PHAssetCreationPhotoStreamPublishingRequest.h>
#import <Photos/PHAssetResourceCreationOptions.h>
#import <Photos/PHAssetCreationAdjustmentBakeInOptions.h>
#import <Photos/PHAssetCreationMetadataCopyOptions.h>
#import <Photos/PHAssetCreationOptions.h>
#import <Photos/PHAssetCreationRequest.h>
#import <Photos/_PHAssetCreationRequestValidator.h>
#import <Photos/PHResourceRepairRequest.h>
#import <Photos/PHThumbnailAsset.h>
#import <Photos/PHFetchOptions.h>
#import <Photos/PHTrashableObjectDeleteRequest.h>
#import <Photos/PHLivePhotoRequestContext.h>
#import <Photos/PHMomentChangeRequest.h>
#import <Photos/PHFaceGroupPLAdapter.h>
#import <Photos/PHFaceCropChangeRequest.h>
#import <Photos/PHAssetResourceWriteRequest.h>
#import <Photos/PHResourceAvailabilityDataStoreManager.h>
#import <Photos/PHImageResult.h>
#import <Photos/PHAssetChangeRequest.h>
#import <Photos/PHContentEditingInputRequestOptions.h>
#import <Photos/PHAssetResource.h>
#import <Photos/PHProjectChangeRequest.h>
#import <Photos/PHImageRequestColorSpace.h>
#import <Photos/PHImageRequestUniformTypeIdentifier.h>
#import <Photos/PHImageRequestResource.h>
#import <Photos/PHPhotoLibrary.h>
#import <Photos/PHSceneClassification.h>
#import <Photos/PHAsset.h>
#import <Photos/PHAssetPropertySet.h>
#import <Photos/PHAssetOriginalMetadataProperties.h>
#import <Photos/PHAssetGridMetadataProperties.h>
#import <Photos/PHAssetPhotosOneUpProperties.h>
#import <Photos/PHAssetLocalDateProperties.h>
#import <Photos/PHAssetPhotosInfoPanelExtendedProperties.h>
#import <Photos/PHAssetPhotosInfoPanelLocationProperties.h>
#import <Photos/PHAssetDescriptionProperties.h>
#import <Photos/PHAssetPhotoCommentProperties.h>
#import <Photos/PHAssetAnalysisStateProperties.h>
#import <Photos/PHAssetSceneAnalysisProperties.h>
#import <Photos/PHAssetUserActivityProperties.h>
#import <Photos/PHAssetPhotoIrisProperties.h>
#import <Photos/PHAssetAdjustmentProperties.h>
#import <Photos/PHAssetCurationProperties.h>
#import <Photos/PHAssetAestheticProperties.h>
#import <Photos/PHAssetMediaAnalysisProperties.h>
#import <Photos/PHAssetImportProperties.h>
#import <Photos/PHAssetSceneprintProperties.h>
#import <Photos/PHAssetDestinationAssetCopyProperties.h>
#import <Photos/PHAssetKeywordProperties.h>
#import <Photos/PHLocallyAvailableResourceBag.h>
#import <Photos/PHCloudInvitation.h>
#import <Photos/PHAdjustmentData.h>
#import <Photos/PHTextFeature.h>
#import <Photos/PHTextFeatureEncoder.h>
#import <Photos/PHTextFeatureDecoder.h>
#import <Photos/PHFaceChangeRequest.h>
#import <Photos/PHPersonChangeRequest.h>
#import <Photos/PHSuggestionMessageContext.h>
#import <Photos/PHVideoRequestContext.h>
#import <Photos/PHAssetCollectionChangeRequest.h>
#import <Photos/PHResourceAvailabilityRequestManager.h>
#import <Photos/PHResourceAvailabilityJob.h>
#import <Photos/PHPerson.h>
#import <Photos/PHFaceDeleteRequest.h>
#import <Photos/PHExternalAssetResource.h>
#import <Photos/PHResourceChooserList.h>
#import <Photos/PHLivePhoto.h>
#import <Photos/PHLivePhotoCreationOperation.h>
#import <Photos/PHVideoChoosingAndAvailabilityRequest.h>
#import <Photos/PHRelatedCollection.h>
#import <Photos/PHRelatedFetchOptions.h>
#import <Photos/PHChangeBuilder.h>
#import <Photos/PHLibraryChangeRequest.h>
#import <Photos/PHMomentShareDeleteRequest.h>
#import <Photos/PHSandboxExtensionWrapper.h>
#import <Photos/PHCloudIdentifier.h>
#import <Photos/PHFace.h>
#import <Photos/PHFacePropertySet.h>
#import <Photos/PHFaceClusteringProperties.h>
#import <Photos/PHPersonResetOperation.h>
#import <Photos/PHPersonResetManager.h>
#import <Photos/PHMomentShareParticipantChangeRequest.h>
#import <Photos/PHSuggestionDeleteRequest.h>
#import <Photos/PHPersistentChangeFetchRequest.h>
#import <Photos/PHImageRequestContext.h>
#import <Photos/PHObjectDeleteValidator.h>
#import <Photos/PHMediaRequest.h>
#import <Photos/PHObject.h>
#import <Photos/PHObjectPlaceholder.h>
#import <Photos/PHObjectReference.h>
#import <Photos/PHAssetReference.h>
#import <Photos/PHCollectionReference.h>
#import <Photos/PHAssetCollectionReference.h>
#import <Photos/PHCollectionListReference.h>
#import <Photos/PHPersonReference.h>
#import <Photos/PHImageManagerRequestTracer.h>
#import <Photos/PHMomentShareChangeRequest.h>
#import <Photos/PHMomentShareParticipant.h>
#import <Photos/PHQuery.h>
#import <Photos/PHPhotoRepresentation.h>
#import <Photos/PHCloudSharedAssetExportRequest.h>
#import <Photos/PHContentEditingOutput.h>
#import <Photos/PHContentEditingOutputRequestOptions.h>
#import <Photos/PHSuggestionChangeRequest.h>
#import <Photos/PHImageResourceChooser.h>
#import <Photos/PHQueryPersonContext.h>
#import <Photos/PHAssetResourceRequestOptions.h>
#import <Photos/PHAssetResourceManager.h>
#import <Photos/PHContentEditingInputRequestContext.h>
#import <Photos/PHContentEditingInput.h>
#import <Photos/PHSuggestion.h>
#import <Photos/PHLivePhotoResult.h>
#import <Photos/PHObjectPLAdapter.h>
#import <Photos/PHMomentSharePreview.h>
#import <Photos/PHPhotosHighlightDeleteRequest.h>
#import <Photos/PHPhotoLibraryAppPrivateData.h>
#import <Photos/PHAssetResourceQualityClass.h>
#import <Photos/PHVideoRequestBehaviorSpec.h>
#import <Photos/PHMemoryDeleteRequest.h>
#import <Photos/PHCollection.h>
#import <Photos/PHCollectionListAncestryContext.h>
#import <Photos/PHResourceAvailabilityRequest.h>
#import <Photos/PHFacePLAdapter.h>
#import <Photos/PHAvailabilityRequest.h>
#import <Photos/PHAssetResourceRequest.h>
#import <Photos/PHMomentShare.h>
#import <Photos/PHValidator.h>
#import <Photos/_PHValidation.h>
#import <Photos/PHAdjustmentDataResult.h>
#import <Photos/PHBatchFetchingArray.h>
#import <Photos/PHMomentShareParticipantDeleteRequest.h>
#import <Photos/PHPreviewImageRequest.h>
#import <Photos/PHPlaceholderImageHelper.h>
#import <Photos/PHKeyword.h>
#import <Photos/PHContentEditingInputResult.h>
#import <Photos/PHResourceAvailabilityChangeRequest.h>
#import <Photos/PHFaceCrop.h>
#import <Photos/PHAssetResourceValidatedContext.h>
#import <Photos/_PHPhotoLibraryValidator.h>
#import <Photos/PHAssetResourceBag.h>
#import <Photos/PHFetchResultChangeDetails.h>
#import <Photos/PHConcurrentMapTable.h>
#import <Photos/PHImageRequestBehaviorSpec.h>
#import <Photos/PHKeywordDeleteRequest.h>
#import <Photos/PHAssetComment.h>
#import <Photos/PHLivePhotoEditingContext.h>
#import <Photos/PHPhotoMaster.h>
#import <Photos/PHFigDecoder.h>
#import <Photos/PHChangeRequest.h>
#import <Photos/PHCloudSharedAlbum.h>
#import <Photos/PHPersonDeleteRequest.h>
#import <Photos/PHImageRequestOptions.h>
#import <Photos/PHLivePhotoRequestOptions.h>
#import <Photos/PHVideoRequestOptions.h>
#import <Photos/PHImageManager.h>
#import <Photos/PHLivePhotoExportSession.h>
#import <Photos/PHLivePhotoExportSessionOptions.h>
#import <Photos/PHAdjustmentDataRequestBehaviorSpec.h>
#import <Photos/PHAdjustmentDataRequest.h>
#import <Photos/_PHFetchRequestWrapper.h>
#import <Photos/PHFetchResult.h>
#import <Photos/PHManualFetchResult.h>
#import <Photos/PHUnauthorizedFetchResult.h>
#import <Photos/PHMediaResourceRequest.h>
#import <Photos/PHFaceCropDeleteRequest.h>
