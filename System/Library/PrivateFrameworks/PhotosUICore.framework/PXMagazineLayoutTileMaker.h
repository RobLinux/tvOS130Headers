/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXMagazineGrid, PXMagazineRectArray, NSMutableArray;

@interface PXMagazineLayoutTileMaker : NSObject {

	PXMagazineGrid* _tileGrid;
	PXMagazineRectArray* _cachedTileRects;
	NSMutableArray* _allFrames;
	double _lastTileWidthPadding;
	double _maxFrameAspectRatio;
	double _minFrameAspectRatio;
	BOOL _startLastPadding;
	NSMutableArray* _sharedTempArray;
	double* _normalizedWeights;
	BOOL _layoutFromRightToLeft;
	unsigned long long _numberOfColumns;
	double _tileAspectRatio;
	double _height;
	double _interTileSpacing;
	unsigned long long _maxTilesInFrame;
	CGSize _referenceSize;
	CGSize _defaultTileSize;

}

@property (nonatomic,readonly) CGSize referenceSize;                            //@synthesize referenceSize=_referenceSize - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) double height;                                   //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) CGSize defaultTileSize;                          //@synthesize defaultTileSize=_defaultTileSize - In the implementation block
@property (nonatomic,readonly) double tileAspectRatio;                          //@synthesize tileAspectRatio=_tileAspectRatio - In the implementation block
@property (assign,nonatomic) double interTileSpacing;                           //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (assign,nonatomic) unsigned long long maxTilesInFrame;                //@synthesize maxTilesInFrame=_maxTilesInFrame - In the implementation block
@property (assign,nonatomic) BOOL layoutFromRightToLeft;                        //@synthesize layoutFromRightToLeft=_layoutFromRightToLeft - In the implementation block
+(void)printInputs:(id)arg1 ;
+(void)printPossibleFrames:(unsigned long long)arg1 cellAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 minAspectRato:(double)arg4 ;
+(void)printLayout:(id)arg1 numOfColumns:(unsigned long long)arg2 ;
-(id)description;
-(void)dealloc;
-(double)height;
-(unsigned long long)numberOfColumns;
-(CGSize)referenceSize;
-(double)interTileSpacing;
-(void)setInterTileSpacing:(double)arg1 ;
-(double)tileAspectRatio;
-(id)initWithReferenceSize:(CGSize)arg1 numberOfColumns:(unsigned long long)arg2 ;
-(double)_aspectRatioOfInput:(id)arg1 ;
-(unsigned long long)getMagazineRects:(PXMagazineRect*)arg1 withInputs:(id)arg2 ;
-(void)getFrames:(CGRect*)arg1 withInputs:(id)arg2 ;
-(void)_getFrames:(CGRect*)arg1 magazineRects:(PXMagazineRect*)arg2 withInputs:(id)arg3 ;
-(double*)_normalizeWeightsByInputs:(id)arg1 ;
-(void)_setRandomSeedWithInputs:(id)arg1 ;
-(void)_updateDimensionInfos;
-(void)_resetWithNumberOfAssets:(unsigned long long)arg1 ;
-(id)_generateTilesWithInputs:(id)arg1 ;
-(unsigned long long)_numberOfInputsForLastPadding;
-(void)_findNextChunkWithInputs:(id)arg1 fromIndex:(unsigned long long)arg2 outArray:(id)arg3 ;
-(BOOL)_generateTilesWithInputs:(id)arg1 atIndex:(unsigned long long)arg2 forMaxY:(unsigned long long)arg3 reserveNumberForPadding:(unsigned long long)arg4 outArray:(id)arg5 ;
-(id)_generateLastTilesWithInputs:(id)arg1 baseIndex:(unsigned long long)arg2 returnFallback:(BOOL)arg3 ;
-(BOOL)_findNextTileWithInputs:(id)arg1 atIndex:(unsigned long long)arg2 baseIndex:(unsigned long long)arg3 coordinator:(id)arg4 ;
-(CGRect)_frameFromTileFrame:(PXMagazineRect)arg1 ;
-(id)_getAllFramesInOrder;
-(long long)_availableFrames:(id*)arg1 maxReturnCount:(unsigned long long)arg2 forAspectRatio:(double)arg3 weight:(double)arg4 maxWidth:(unsigned long long)arg5 ;
-(BOOL)checkAndPrintResults:(BOOL)arg1 ;
-(CGSize)defaultTileSize;
-(unsigned long long)maxTilesInFrame;
-(void)setMaxTilesInFrame:(unsigned long long)arg1 ;
-(BOOL)layoutFromRightToLeft;
-(void)setLayoutFromRightToLeft:(BOOL)arg1 ;
@end

