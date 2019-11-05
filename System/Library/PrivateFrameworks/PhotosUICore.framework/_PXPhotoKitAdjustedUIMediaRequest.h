/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXPhotoKitAdjustedDisplayAsset, OS_dispatch_queue;
@class PXPhotoKitEditSourceLoader, NSObject, PHImageManager, PLEditSource, NSError, PICompositionController;

@interface _PXPhotoKitAdjustedUIMediaRequest : NSObject {

	PXPhotoKitEditSourceLoader* _editSourceLoader;
	BOOL _delayRenders;
	BOOL _useCachedRenders;
	id<PXPhotoKitAdjustedDisplayAsset> _asset;
	NSObject*<OS_dispatch_queue> _renderQueue;
	PHImageManager* _imageManager;
	PLEditSource* _editSource;
	NSError* _loadError;
	PICompositionController* _baseCompositionController;
	double _progress;

}

@property (nonatomic,readonly) id<PXPhotoKitAdjustedDisplayAsset> asset;                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> renderQueue;                       //@synthesize renderQueue=_renderQueue - In the implementation block
@property (nonatomic,readonly) PHImageManager * imageManager;                                  //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) PLEditSource * editSource;                                        //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,retain) NSError * loadError;                                              //@synthesize loadError=_loadError - In the implementation block
@property (nonatomic,retain) PICompositionController * baseCompositionController;              //@synthesize baseCompositionController=_baseCompositionController - In the implementation block
@property (assign,nonatomic) double progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL delayRenders;                                                //@synthesize delayRenders=_delayRenders - In the implementation block
@property (assign,nonatomic) BOOL useCachedRenders;                                            //@synthesize useCachedRenders=_useCachedRenders - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)start;
-(double)progress;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgress:(double)arg1 ;
-(id<PXPhotoKitAdjustedDisplayAsset>)asset;
-(NSError *)loadError;
-(PLEditSource *)editSource;
-(PHImageManager *)imageManager;
-(BOOL)useCachedRenders;
-(void)setUseCachedRenders:(BOOL)arg1 ;
-(BOOL)delayRenders;
-(void)setDelayRenders:(BOOL)arg1 ;
-(void)editSourceDidChange;
-(void)progressDidChange;
-(PICompositionController *)baseCompositionController;
-(void)beginLoadingEditSource;
-(id)initWithAsset:(id)arg1 renderQueue:(id)arg2 imageManager:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)renderQueue;
-(void)setEditSource:(PLEditSource *)arg1 ;
-(void)_handleEditSourceLoadingFinished;
-(void)setLoadError:(NSError *)arg1 ;
-(void)setBaseCompositionController:(PICompositionController *)arg1 ;
@end

