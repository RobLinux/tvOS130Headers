#import <ATVSlideshow/MPAction.h>
#import <ATVSlideshow/MPConditionalAction.h>
#import <ATVSlideshow/MPAnimationTrigger.h>
#import <ATVSlideshow/MPActionTrigger.h>
#import <ATVSlideshow/MPStateOperation.h>
#import <ATVSlideshow/MPGenericAction.h>
#import <ATVSlideshow/MPTransitionAction.h>
#import <ATVSlideshow/MPActionGroup.h>
#import <ATVSlideshow/MPAnimatedSet.h>
#import <ATVSlideshow/MPAnimationKeyframe.h>
#import <ATVSlideshow/MPAnimationKeyframe1D.h>
#import <ATVSlideshow/MPAnimationKeyframe2D.h>
#import <ATVSlideshow/MPVector.h>
#import <ATVSlideshow/MPAnimationKeyframeVector.h>
#import <ATVSlideshow/MPAnimationKeyframeFunction.h>
#import <ATVSlideshow/MPAnimationManager.h>
#import <ATVSlideshow/MPAnimationPath.h>
#import <ATVSlideshow/MPAnimationPathCombo.h>
#import <ATVSlideshow/MPAnimationPathKeyframed.h>
#import <ATVSlideshow/MPAssetManager.h>
#import <ATVSlideshow/MPPlaylistInternal.h>
#import <ATVSlideshow/MPAudioPlaylist.h>
#import <ATVSlideshow/MPAuthoringController.h>
#import <ATVSlideshow/MPAuthoringUtilities.h>
#import <ATVSlideshow/MPCluster.h>
#import <ATVSlideshow/MPClusterController.h>
#import <ATVSlideshow/MPClusterSlide.h>
#import <ATVSlideshow/MPCropController.h>
#import <ATVSlideshow/MPDocumentInternal.h>
#import <ATVSlideshow/MPDocument.h>
#import <ATVSlideshow/MPEffect.h>
#import <ATVSlideshow/MPEffectContainer.h>
#import <ATVSlideshow/MPEffectManager.h>
#import <ATVSlideshow/MPFileValidationManager.h>
#import <ATVSlideshow/MPFilterInternal.h>
#import <ATVSlideshow/MPFilter.h>
#import <ATVSlideshow/MPFilterManager.h>
#import <ATVSlideshow/MPFrameInternal.h>
#import <ATVSlideshow/MPFrame.h>
#import <ATVSlideshow/MPFrameManager.h>
#import <ATVSlideshow/MPLayer.h>
#import <ATVSlideshow/MPLayerAnimatedSet.h>
#import <ATVSlideshow/MPLayerEffect.h>
#import <ATVSlideshow/MPLayerGroupInternal.h>
#import <ATVSlideshow/MPLayerGroup.h>
#import <ATVSlideshow/MPLayerInternal.h>
#import <ATVSlideshow/MPLayerSerializer.h>
#import <ATVSlideshow/MPNavigatorInternal.h>
#import <ATVSlideshow/MPNavigator.h>
#import <ATVSlideshow/MPSlide.h>
#import <ATVSlideshow/MPSongInternal.h>
#import <ATVSlideshow/MPSong.h>
#import <ATVSlideshow/MPSongManager.h>
#import <ATVSlideshow/MPStyleManager.h>
#import <ATVSlideshow/MPTextInternal.h>
#import <ATVSlideshow/MPText.h>
#import <ATVSlideshow/MPTransition.h>
#import <ATVSlideshow/MPTransitionManager.h>
#import <ATVSlideshow/MPUtilities.h>
#import <ATVSlideshow/MPWeighterConstraint.h>
#import <ATVSlideshow/MPWeighter.h>
#import <ATVSlideshow/MRAnimationManager.h>
#import <ATVSlideshow/MRContextState.h>
#import <ATVSlideshow/MRContext.h>
#import <ATVSlideshow/MRContextVertexAttributes.h>
#import <ATVSlideshow/MRCroppingSprite.h>
#import <ATVSlideshow/MRCroppingSpriteVBO.h>
#import <ATVSlideshow/MREffect.h>
#import <ATVSlideshow/MREffectPList.h>
#import <ATVSlideshow/MREffectBackgroundImage.h>
#import <ATVSlideshow/MREffectGradient.h>
#import <ATVSlideshow/MREffectHangingPictures.h>
#import <ATVSlideshow/MREffectHangingPicturesBackgroundLights.h>
#import <ATVSlideshow/MREffectHangingPicturesBackgroundStars.h>
#import <ATVSlideshow/MREffectHangingPicturesTitle.h>
#import <ATVSlideshow/MREffectJustASlide.h>
#import <ATVSlideshow/MREffectJustATitle.h>
#import <ATVSlideshow/MREffectManager.h>
#import <ATVSlideshow/MREffectPinMap.h>
#import <ATVSlideshow/MREffectMapSlides.h>
#import <ATVSlideshow/MREffectMapTitle.h>
#import <ATVSlideshow/MREffectMapZoom.h>
#import <ATVSlideshow/MREffectModern.h>
#import <ATVSlideshow/MREffectOrigami.h>
#import <ATVSlideshow/MREffectOrigamiTiming.h>
#import <ATVSlideshow/MREffectOrigamiTitle.h>
#import <ATVSlideshow/MREffectPhotoEdges.h>
#import <ATVSlideshow/MRReflectionsLayout.h>
#import <ATVSlideshow/MREffectReflections.h>
#import <ATVSlideshow/MRReflectionsRenderable.h>
#import <ATVSlideshow/MREffectReflectionsBackground.h>
#import <ATVSlideshow/MREffectReflectionsSubtitle.h>
#import <ATVSlideshow/MREffectReflectionsTitle.h>
#import <ATVSlideshow/MREffectScrapbook_Old.h>
#import <ATVSlideshow/MREffectScrapbookTitle.h>
#import <ATVSlideshow/MREffectShatterTitle.h>
#import <ATVSlideshow/MREffectSlidingPanels.h>
#import <ATVSlideshow/MREffectSnapshot.h>
#import <ATVSlideshow/MREffectSnapshotTitle.h>
#import <ATVSlideshow/MREffectTableTop.h>
#import <ATVSlideshow/MREffectTableTopTitle.h>
#import <ATVSlideshow/MREffectVignettingOverlay.h>
#import <ATVSlideshow/MREffectWatercolorBackground.h>
#import <ATVSlideshow/MREffectWatercolorPanel.h>
#import <ATVSlideshow/MREffectWatercolorTitle.h>
#import <ATVSlideshow/MRFrame.h>
#import <ATVSlideshow/MRFrameManager.h>
#import <ATVSlideshow/MRImage.h>
#import <ATVSlideshow/MRImageInfo.h>
#import <ATVSlideshow/MRImageManager.h>
#import <ATVSlideshow/MRAsset.h>
#import <ATVSlideshow/MRGIFMoviePlayer.h>
#import <ATVSlideshow/MRImageProvider.h>
#import <ATVSlideshow/MRLayer.h>
#import <ATVSlideshow/MRLayerCommand.h>
#import <ATVSlideshow/MRLayerEffect.h>
#import <ATVSlideshow/MRLayerNavigator.h>
#import <ATVSlideshow/MRLayerParallelizer.h>
#import <ATVSlideshow/MRLayerSerializer.h>
#import <ATVSlideshow/MRMarimbaLayer.h>
#import <ATVSlideshow/MRPatchworkPatch.h>
#import <ATVSlideshow/MRPatchwork.h>
#import <ATVSlideshow/MROrigamiAnimationPath.h>
#import <ATVSlideshow/MRParallelPlugger.h>
#import <ATVSlideshow/MRAnimationPathPhysics.h>
#import <ATVSlideshow/MRAnimationPathScalar.h>
#import <ATVSlideshow/MRAnimationContext.h>
#import <ATVSlideshow/MRRendererInternal.h>
#import <ATVSlideshow/MRRenderer.h>
#import <ATVSlideshow/MRShaderManager.h>
#import <ATVSlideshow/MRShader.h>
#import <ATVSlideshow/MRUniform.h>
#import <ATVSlideshow/MRSphere.h>
#import <ATVSlideshow/MRTextRenderer.h>
#import <ATVSlideshow/MRMarimbaLayoutManager.h>
#import <ATVSlideshow/MRTexture.h>
#import <ATVSlideshow/MRTiledSprite.h>
#import <ATVSlideshow/MRTransition.h>
#import <ATVSlideshow/MRTransitionCIFilter.h>
#import <ATVSlideshow/MRTransitionAccordion.h>
#import <ATVSlideshow/MRTransitionCrossWipe.h>
#import <ATVSlideshow/MRTransitionDroplet.h>
#import <ATVSlideshow/MRTransitionFadeThruColor.h>
#import <ATVSlideshow/MRTransitionManager.h>
#import <ATVSlideshow/MRTransitionOrigamiFlip.h>
#import <ATVSlideshow/MRTransitionOrigamiFold.h>
#import <ATVSlideshow/MRTransitionPageFlip.h>
#import <ATVSlideshow/MRTransitionRotate.h>
#import <ATVSlideshow/MRTransitionShortMapZoom.h>
#import <ATVSlideshow/MRTransitionSimple3D.h>
#import <ATVSlideshow/MRTransitionSourceUnder.h>
#import <ATVSlideshow/MRTransitionTileFlip.h>
#import <ATVSlideshow/MRTransitionWipe.h>
#import <ATVSlideshow/MRUtilities.h>
#import <ATVSlideshow/MRAnimationTrigger.h>
#import <ATVSlideshow/MURandom.h>
#import <ATVSlideshow/MCAction.h>
#import <ATVSlideshow/MCActionGroup.h>
#import <ATVSlideshow/MCConditionalAction.h>
#import <ATVSlideshow/MCActionForEachPlug.h>
#import <ATVSlideshow/MCTransitionTrigger.h>
#import <ATVSlideshow/MCAnimationTrigger.h>
#import <ATVSlideshow/MCActionTrigger.h>
#import <ATVSlideshow/MCStateOperation.h>
#import <ATVSlideshow/MCStateOperationScalarSet.h>
#import <ATVSlideshow/MCStateOperationStringSet.h>
#import <ATVSlideshow/MCStateOperationExpression.h>
#import <ATVSlideshow/MCMotionTrigger.h>
#import <ATVSlideshow/MCMotionTriggerScalar.h>
#import <ATVSlideshow/MCMotionTriggerExpression.h>
#import <ATVSlideshow/MCGenericAction.h>
#import <ATVSlideshow/MCAnimationKeyframe.h>
#import <ATVSlideshow/MCAnimationKeyframe1D.h>
#import <ATVSlideshow/MCAnimationKeyframeFunction.h>
#import <ATVSlideshow/MCAnimationKeyframe2D.h>
#import <ATVSlideshow/MCAnimationKeyframeVector.h>
#import <ATVSlideshow/MCAnimationPath.h>
#import <ATVSlideshow/MCAnimationPathCombo.h>
#import <ATVSlideshow/MCAnimationPathExpression.h>
#import <ATVSlideshow/MCAnimationPathKeyframed.h>
#import <ATVSlideshow/MCAnimationPathPhysics.h>
#import <ATVSlideshow/MRTransitionHyperGridWipe.h>
#import <ATVSlideshow/MCAsset.h>
#import <ATVSlideshow/MCAssetAudio.h>
#import <ATVSlideshow/MCAssetVideo.h>
#import <ATVSlideshow/MCAudioPlaylist.h>
#import <ATVSlideshow/MCContainer.h>
#import <ATVSlideshow/MCContainerEffect.h>
#import <ATVSlideshow/MCContainerNavigator.h>
#import <ATVSlideshow/MCContainerParallelizer.h>
#import <ATVSlideshow/MCContainerSerializer.h>
#import <ATVSlideshow/MCFilter.h>
#import <ATVSlideshow/MCMontage.h>
#import <ATVSlideshow/MCObjectBase.h>
#import <ATVSlideshow/MCObjectLight.h>
#import <ATVSlideshow/MCObject.h>
#import <ATVSlideshow/MCPlug.h>
#import <ATVSlideshow/MCPlugSlide.h>
#import <ATVSlideshow/MCPlugProxy.h>
#import <ATVSlideshow/MCPlugHaven.h>
#import <ATVSlideshow/MCPlugParallel.h>
#import <ATVSlideshow/MCPlugSerial.h>
#import <ATVSlideshow/MCSlide.h>
#import <ATVSlideshow/MCSlideAsset.h>
#import <ATVSlideshow/MCSong.h>
#import <ATVSlideshow/MCText.h>
#import <ATVSlideshow/MPEmbeddedAssetManager.h>
#import <ATVSlideshow/MCTextConversion.h>
#import <ATVSlideshow/MUMathExpressionBase.h>
#import <ATVSlideshow/MUMathExpressionDoubleBased.h>
#import <ATVSlideshow/MUMathExpressionFloatBased.h>
#import <ATVSlideshow/MRMarimbaFBO.h>
#import <ATVSlideshow/MRGesture.h>
#import <ATVSlideshow/MRHitBlob.h>
#import <ATVSlideshow/MRFlipupRenderable.h>
#import <ATVSlideshow/MREffectFlipup.h>
#import <ATVSlideshow/MREffectFlipupBackground.h>
#import <ATVSlideshow/MREffectFlipupTitle.h>
#import <ATVSlideshow/MRSnapshotter.h>
#import <ATVSlideshow/MPFaceDetector.h>
#import <ATVSlideshow/MREffectCoverCascadeSlideStory.h>
#import <ATVSlideshow/MREffectCoverCascadeEvent.h>
#import <ATVSlideshow/MREffectCoverCascade.h>
#import <ATVSlideshow/MRShiftingTilesRenderable.h>
#import <ATVSlideshow/MRShiftingTilesIteration.h>
#import <ATVSlideshow/MRShiftingTilesTimingInfo.h>
#import <ATVSlideshow/MREffectShiftingTiles.h>
#import <ATVSlideshow/MRPictureFrameImage.h>
#import <ATVSlideshow/MRPictureFrameRenderable.h>
#import <ATVSlideshow/MRPictureFrameInfo.h>
#import <ATVSlideshow/MREffectPictureFrames.h>
#import <ATVSlideshow/MRTransitionReverseCube.h>
#import <ATVSlideshow/MRAudioPlayer.h>
#import <ATVSlideshow/MRAudioItem.h>
#import <ATVSlideshow/MREffectJustAButton.h>
#import <ATVSlideshow/MREffectCalendar.h>
#import <ATVSlideshow/MRTransitionFlatPageFlip.h>
#import <ATVSlideshow/MREffectFramedSlide.h>
#import <ATVSlideshow/MREffectFramedText.h>
#import <ATVSlideshow/MREffectDateline.h>
#import <ATVSlideshow/MRFloatingTimeInfo.h>
#import <ATVSlideshow/MRFloatingRenderable.h>
#import <ATVSlideshow/MREffectFloating.h>
#import <ATVSlideshow/MRScrapbookImage.h>
#import <ATVSlideshow/MRScrapbookLayout.h>
#import <ATVSlideshow/MREffectScrapbook.h>
#import <ATVSlideshow/MURetainingKey.h>
#import <ATVSlideshow/MUPoolObject.h>
#import <ATVSlideshow/MRGestureRecognizer.h>
#import <ATVSlideshow/MRTapGestureRecognizer.h>
#import <ATVSlideshow/MRPanZoomRotationGestureRecognizer.h>
#import <ATVSlideshow/Cube.h>
#import <ATVSlideshow/MRTransitionRevolutionsFlip.h>
#import <ATVSlideshow/MRLayerClock.h>
#import <ATVSlideshow/MRAction.h>
#import <ATVSlideshow/MRMotion.h>
#import <ATVSlideshow/MRGesturePanZoomRotation.h>
#import <ATVSlideshow/MREffectShadedColors.h>
#import <ATVSlideshow/MRCAMLUtilities.h>
#import <ATVSlideshow/MRCAMLBezierData.h>
#import <ATVSlideshow/MRCAMLLayer.h>
#import <ATVSlideshow/MRCAMLTextLayer.h>
#import <ATVSlideshow/MRCAMLAnimation.h>
#import <ATVSlideshow/MRCAMLKeyframe.h>
#import <ATVSlideshow/MRTouch.h>
#import <ATVSlideshow/MRTouchSet.h>
#import <ATVSlideshow/MREffectStretchableSlide.h>
#import <ATVSlideshow/MREffectJustAText.h>
#import <ATVSlideshow/MRRenderArguments.h>
#import <ATVSlideshow/MREffectDotProgress.h>
#import <ATVSlideshow/MRHyperGridIteration.h>
#import <ATVSlideshow/MREffectHyperGrid.h>
#import <ATVSlideshow/MRTransitionRevolutionsFlip2.h>
#import <ATVSlideshow/MRSlideProvider.h>
