/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXRelatedWidget.h>
#import <PhotosUICore/PXReusableObjectPoolDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <PhotosUICore/PXScrollViewControllerObserver.h>
#import <PhotosUICore/PXTilingControllerZoomAnimationCoordinatorDelegate.h>
#import <PhotosUICore/PXTilingControllerPreheatHandler.h>
#import <PhotosUICore/PXUIWidget.h>
#import <PhotosUICore/PXDiagnosticsEnvironment.h>

@class PXOneUpPresentation, PXReusableObjectPool, NSMutableSet, PXPhotoKitUIMediaProvider, PXUITapGestureRecognizer, PXTouchingUIGestureRecognizer, _PXUIRelatedPreviewOrbContext, NSString, PXPhotosDetailsContext, PXWidgetSpec, PXTilingController, PXSectionedSelectionManager;

@interface PXUIRelatedWidget : PXRelatedWidget <PXReusableObjectPoolDelegate, UIGestureRecognizerDelegate, PXScrollViewControllerObserver, PXTilingControllerZoomAnimationCoordinatorDelegate, PXTilingControllerPreheatHandler, PXUIWidget, PXDiagnosticsEnvironment> {

	BOOL _userInteractionEnabled;
	PXReusableObjectPool* __tileReusePool;
	NSMutableSet* __tilesInUse;
	PXPhotoKitUIMediaProvider* __mediaProvider;
	PXUITapGestureRecognizer* __tapGestureRecognizer;
	PXTouchingUIGestureRecognizer* __touchGestureRecognizer;
	_PXUIRelatedPreviewOrbContext* __previewOrbContext;

}

@property (nonatomic,readonly) PXReusableObjectPool * _tileReusePool;                                                       //@synthesize _tileReusePool=__tileReusePool - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _tilesInUse;                                                                  //@synthesize _tilesInUse=__tilesInUse - In the implementation block
@property (nonatomic,readonly) PXPhotoKitUIMediaProvider * _mediaProvider;                                                  //@synthesize _mediaProvider=__mediaProvider - In the implementation block
@property (nonatomic,readonly) PXUITapGestureRecognizer * _tapGestureRecognizer;                                            //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) PXTouchingUIGestureRecognizer * _touchGestureRecognizer;                                     //@synthesize _touchGestureRecognizer=__touchGestureRecognizer - In the implementation block
@property (setter=_setPreviewOrbContext:,nonatomic,retain) _PXUIRelatedPreviewOrbContext * _previewOrbContext;              //@synthesize _previewOrbContext=__previewOrbContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate; 
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context; 
@property (nonatomic,retain) PXWidgetSpec * spec; 
@property (nonatomic,readonly) BOOL hasContentForCurrentInput; 
@property (nonatomic,readonly) BOOL hasLoadedContentData; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> contentView; 
@property (nonatomic,readonly) long long contentViewAnchoringType; 
@property (nonatomic,readonly) PXTilingController * contentTilingController; 
@property (nonatomic,readonly) long long contentLayoutStyle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedCaption; 
@property (nonatomic,readonly) NSString * localizedDisclosureTitle; 
@property (nonatomic,readonly) BOOL allowUserInteractionWithSubtitle; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                                   //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (nonatomic,readonly) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager; 
@property (nonatomic,retain) PXOneUpPresentation * oneUpPresentation; 
-(id)init;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(PXUITapGestureRecognizer *)_tapGestureRecognizer;
-(BOOL)isUserInteractionEnabled;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(PXTouchingUIGestureRecognizer *)_touchGestureRecognizer;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(PXPhotoKitUIMediaProvider *)_mediaProvider;
-(void)prepareForInteractiveTransition:(id)arg1 ;
-(id)_scrollViewController;
-(id)extendedTraitCollection;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)environmentDidUpdateFocusInContext:(id)arg1 ;
-(id)regionOfInterestForContext:(id)arg1 ;
-(id)zoomAnimationCoordinatorForContext:(id)arg1 ;
-(NSObject*)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(NSObject*)arg2 ;
-(void)commitPreviewViewController:(id)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 forCoordinateSpace:(id)arg2 ;
-(id)imageViewBasicTileForPreviewingAtPoint:(CGPoint)arg1 ;
-(void)loadContentData;
-(void)startPreheatingTilesForIdentifiers:(const PXTileIdentifier*)arg1 withGeometries:(const PXTileGeometry*)arg2 count:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)stopPreheatingTilesForIdentifiers:(const PXTileIdentifier*)arg1 withGeometries:(const PXTileGeometry*)arg2 count:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2 ;
-(void)reusableObjectPool:(id)arg1 objectBecameReusable:(id)arg2 ;
-(void)reusableObjectPool:(id)arg1 objectPreparedForReuse:(id)arg2 ;
-(void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2 ;
-(void)installGestureRecognizers;
-(id)createTileAnimator;
-(void)_registerTileClass:(Class)arg1 forReuseIdentifier:(long long)arg2 ;
-(id)_photosDetailsViewControllerForRelatedEntry:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_handleTouchGestureRecognizer:(id)arg1 ;
-(id)_relatedEntryAtLocationOfGestureRecognizer:(id)arg1 ;
-(id)_relatedEntryAtPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(PXSimpleIndexPath)_assetIndexPathAtLocation:(CGPoint)arg1 padding:(UIEdgeInsets)arg2 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(void)_getImageRequester:(id*)arg1 title:(id*)arg2 subtitle:(id*)arg3 forRelatedEntry:(id)arg4 mediaProvider:(id)arg5 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(void)scrollViewControllerDidBeginScrolling:(id)arg1 ;
-(id)_assetsBySizeWithTileIdentifiers:(const PXTileIdentifier*)arg1 withGeometries:(const PXTileGeometry*)arg2 count:(unsigned long long)arg3 ;
-(PXReusableObjectPool *)_tileReusePool;
-(NSMutableSet *)_tilesInUse;
-(_PXUIRelatedPreviewOrbContext *)_previewOrbContext;
-(void)_setPreviewOrbContext:(id)arg1 ;
@end

