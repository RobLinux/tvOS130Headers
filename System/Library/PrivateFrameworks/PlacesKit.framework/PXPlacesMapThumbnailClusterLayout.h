/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <PlacesKit/PXPlacesMapLayout.h>

@protocol PXPlacesMapLayoutResult;
@class NSArray;

@interface PXPlacesMapThumbnailClusterLayout : PXPlacesMapLayout {

	double _horizontalClusteringDistancePixels;
	double _verticalClusteringDistancePixels;
	id<PXPlacesMapLayoutResult> _currentMapLayoutResult;
	unsigned long long _currentChangeType;
	NSArray* _geotaggablesSortDescriptors;

}

@property (nonatomic,retain) id<PXPlacesMapLayoutResult> currentMapLayoutResult;              //@synthesize currentMapLayoutResult=_currentMapLayoutResult - In the implementation block
@property (assign,nonatomic) unsigned long long currentChangeType;                            //@synthesize currentChangeType=_currentChangeType - In the implementation block
@property (nonatomic,retain) NSArray * geotaggablesSortDescriptors;                           //@synthesize geotaggablesSortDescriptors=_geotaggablesSortDescriptors - In the implementation block
@property (assign,nonatomic) double horizontalClusteringDistancePixels;                       //@synthesize horizontalClusteringDistancePixels=_horizontalClusteringDistancePixels - In the implementation block
@property (assign,nonatomic) double verticalClusteringDistancePixels;                         //@synthesize verticalClusteringDistancePixels=_verticalClusteringDistancePixels - In the implementation block
-(id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2 ;
-(id)_handlePanToViewPort:(id)arg1 dataSourceChange:(id)arg2 ;
-(id)_handlePitchChangeToViewPort:(id)arg1 dataSourceChange:(id)arg2 ;
-(id)_handleZoomInToViewPort:(id)arg1 ;
-(id)_handleZoomOutToViewPort:(id)arg1 ;
-(id)_createIncrementalClusterForViewport:(id)arg1 relativeToLayoutResult:(id)arg2 dataSourceChange:(id)arg3 ;
-(id)_createIncrementalClusterForViewport:(id)arg1 fromViewPort:(id)arg2 appendLayoutItems:(id)arg3 ;
-(id)_clusterGeotaggablesInViewPort:(id)arg1 ;
-(id)_clusterGeotaggablesInRect:(SCD_Struct_PX2)arg1 forViewPort:(id)arg2 ;
-(id)_clusterGeotaggables:(id)arg1 fromMapRect:(SCD_Struct_PX2)arg2 viewPort:(id)arg3 ;
-(id)_clusterGeotaggables:(id)arg1 usingHorizontalClusteringDistance:(double)arg2 verticalClusteringDistance:(double)arg3 viewPort:(id)arg4 dataSource:(id)arg5 primaryLayoutGeotaggables:(id)arg6 maskToMapRect:(SCD_Struct_PX2)arg7 ;
-(id)_mutableSortedOrderdGeotaggablesSetFromSet:(id)arg1 ;
-(void)_sortGeotaggables:(id)arg1 ;
-(id)_primaryGeotaggleInLayoutItem:(id)arg1 ;
-(void)_sortLayoutItems:(id)arg1 ;
-(NSArray *)geotaggablesSortDescriptors;
-(unsigned long long)_viewPortChangeTypeFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)_zoom:(double)arg1 isEqualToZoom:(double)arg2 ;
-(SCD_Struct_PX2)_minimalRectForLayoutItem:(id)arg1 atScale:(double)arg2 ;
-(SCD_Struct_PX2)_minimalRectForGeotaggable:(id)arg1 atScale:(double)arg2 ;
-(SCD_Struct_PX2)_minimalRectAtCoordinate:(CLLocationCoordinate2D)arg1 atScale:(double)arg2 ;
-(long long)_divideRectsOf:(id)arg1 from:(id)arg2 into:(SCD_Struct_PX2*)arg3 ;
-(long long)_substractRect:(SCD_Struct_PX2)arg1 from:(SCD_Struct_PX2)arg2 into:(SCD_Struct_PX2*)arg3 ;
-(id)_copyLayoutItem:(id)arg1 ;
-(double)horizontalClusteringDistancePixels;
-(void)setHorizontalClusteringDistancePixels:(double)arg1 ;
-(double)verticalClusteringDistancePixels;
-(void)setVerticalClusteringDistancePixels:(double)arg1 ;
-(id<PXPlacesMapLayoutResult>)currentMapLayoutResult;
-(void)setCurrentMapLayoutResult:(id<PXPlacesMapLayoutResult>)arg1 ;
-(unsigned long long)currentChangeType;
-(void)setCurrentChangeType:(unsigned long long)arg1 ;
-(void)setGeotaggablesSortDescriptors:(NSArray *)arg1 ;
@end

