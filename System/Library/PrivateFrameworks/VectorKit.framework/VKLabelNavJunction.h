/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKLabelNavFeature.h>

@class NSMutableArray, VKLabelNavRoad, NSString, VKLabelNavRoadLabel, NSArray;

@interface VKLabelNavJunction : NSObject <VKLabelNavFeature> {

	shared_ptr<md::LabelTile>* _tile;
	Matrix<float, 2, 1> _tileCoordinate;
	SCD_Struct_VK269* _geoJunction;
	PolylineCoordinate _routeOffset;
	NSMutableArray* _roads;
	VKLabelNavRoad* _incomingRoad;
	VKLabelNavRoad* _outgoingRoad;
	float _distanceFromPreviousShieldLabel;
	int _preferredLabelPlacement;
	BOOL _isOnDualCarriageway;
	BOOL _hasSharedRouteDirection;
	Matrix<float, 2, 1> _sharedRouteDirection;
	BOOL _foundRoads;
	BOOL _isOverpass;
	BOOL _isRouteOverpass;
	int _largestRoadClass;
	SCD_Struct_VK322* _labelFeature;
	NSString* _name;
	VKLabelNavRoadLabel* _junctionSign;
	BOOL _areLabelsDisabled;
	unsigned long long _depthFromRoute;
	double _worldUnitsPerMeter;
	VKLabelNavJunction* _overpassJunction;
	BOOL _cachedSignVisibility[3];
	BOOL _isVisibilityCached[3];
	BOOL _isVisible;
	BOOL _isPicked;
	Matrix<double, 3, 1> _worldCoordinate;
	double _sortValue;
	BOOL _isRouteRefineJunction;

}

@property (nonatomic,readonly) const shared_ptr<md::LabelTile>* tile;              //@synthesize tile=_tile - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_VK269* geoJunction;                //@synthesize geoJunction=_geoJunction - In the implementation block
@property (nonatomic,readonly) Matrix<float tileCoordinate;                        //@synthesize tileCoordinate=_tileCoordinate - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeOffset;                       //@synthesize routeOffset=_routeOffset - In the implementation block
@property (nonatomic,readonly) NSArray * roads;                                    //@synthesize roads=_roads - In the implementation block
@property (nonatomic,readonly) VKLabelNavRoad * outgoingRoad;                      //@synthesize outgoingRoad=_outgoingRoad - In the implementation block
@property (nonatomic,readonly) VKLabelNavRoad * incomingRoad;                      //@synthesize incomingRoad=_incomingRoad - In the implementation block
@property (assign,nonatomic) float distanceFromPreviousShieldLabel;                //@synthesize distanceFromPreviousShieldLabel=_distanceFromPreviousShieldLabel - In the implementation block
@property (assign,nonatomic) BOOL isOnDualCarriageway;                             //@synthesize isOnDualCarriageway=_isOnDualCarriageway - In the implementation block
@property (nonatomic,readonly) BOOL hasSharedRouteDirection;                       //@synthesize hasSharedRouteDirection=_hasSharedRouteDirection - In the implementation block
@property (assign,nonatomic) Matrix<float sharedRouteDirection;                    //@synthesize sharedRouteDirection=_sharedRouteDirection - In the implementation block
@property (nonatomic,readonly) BOOL isOnRoute; 
@property (nonatomic,readonly) BOOL isIntraRamp; 
@property (nonatomic,readonly) BOOL isTileEdgeJunction; 
@property (assign,nonatomic) BOOL isRouteRefineJunction;                           //@synthesize isRouteRefineJunction=_isRouteRefineJunction - In the implementation block
@property (nonatomic,readonly) BOOL isRoadTerminus; 
@property (nonatomic,readonly) BOOL isIntersection; 
@property (nonatomic,readonly) BOOL isMultiRoadIntersection; 
@property (nonatomic,readonly) BOOL isAwayFromRoute; 
@property (nonatomic,readonly) BOOL isOffRouteGraph; 
@property (nonatomic,readonly) BOOL isOverpass;                                    //@synthesize isOverpass=_isOverpass - In the implementation block
@property (assign,nonatomic) BOOL isRouteOverpass;                                 //@synthesize isRouteOverpass=_isRouteOverpass - In the implementation block
@property (nonatomic,readonly) int largestRoadClass; 
@property (assign,nonatomic) unsigned long long depthFromRoute;                    //@synthesize depthFromRoute=_depthFromRoute - In the implementation block
@property (assign,nonatomic) VKLabelNavJunction * overpassJunction;                //@synthesize overpassJunction=_overpassJunction - In the implementation block
@property (nonatomic,readonly) double worldUnitsPerMeter;                          //@synthesize worldUnitsPerMeter=_worldUnitsPerMeter - In the implementation block
@property (nonatomic,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) VKLabelNavRoadLabel * junctionSign;                 //@synthesize junctionSign=_junctionSign - In the implementation block
@property (nonatomic,readonly) BOOL isVisible;                                     //@synthesize isVisible=_isVisible - In the implementation block
@property (nonatomic,readonly) int requiredLabelPlacement; 
@property (assign,nonatomic) int preferredLabelPlacement;                          //@synthesize preferredLabelPlacement=_preferredLabelPlacement - In the implementation block
@property (nonatomic,readonly) BOOL isRamp; 
@property (nonatomic,readonly) NSString * shieldDisplayGroup; 
@property (nonatomic,readonly) BOOL isStartOfRoadName; 
@property (nonatomic,readonly) BOOL isInGuidance; 
@property (nonatomic,readonly) long long intraRoadPriority; 
@property (nonatomic,readonly) BOOL isGuidanceStepStart; 
@property (nonatomic,readonly) BOOL isEtaFeature; 
@property (nonatomic,readonly) BOOL isTrafficCameraFeature; 
@property (assign,nonatomic) BOOL isPicked;                                        //@synthesize isPicked=_isPicked - In the implementation block
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(BOOL)isVisible;
-(const shared_ptr<md::LabelTile>*)tile;
-(BOOL)isRamp;
-(BOOL)isPicked;
-(PolylineCoordinate)routeOffset;
-(void)layoutWithNavContext:(NavContext*)arg1 ;
-(void)setIsPicked:(BOOL)arg1 ;
-(BOOL)isTrafficCameraFeature;
-(BOOL)isEtaFeature;
-(BOOL)isOnRoute;
-(BOOL)isAwayFromRoute;
-(NSString *)shieldDisplayGroup;
-(BOOL)isStartOfRoadName;
-(BOOL)isInGuidance;
-(long long)intraRoadPriority;
-(BOOL)isGuidanceStepStart;
-(void)prepareStyleVarsWithContext:(NavContext*)arg1 ;
-(void)setRouteOffset:(PolylineCoordinate)arg1 ;
-(void)_updateWithNavContext:(NavContext*)arg1 threshold:(double)arg2 ;
-(unsigned long long)depthFromRoute;
-(void)_updateWithNavContext:(NavContext*)arg1 ;
-(BOOL)isOnDualCarriageway;
-(double)worldUnitsPerMeter;
-(BOOL)isMultiRoadIntersection;
-(VKLabelNavRoad *)outgoingRoad;
-(VKLabelNavRoad *)incomingRoad;
-(void)createLabelWithNavContext:(NavContext*)arg1 isDrivingSideRight:(BOOL)arg2 artworkCache:(VKLabelNavArtworkCache*)arg3 ;
-(VKLabelNavRoadLabel *)junctionSign;
-(NSArray *)roads;
-(void)evaluateCrossStreets;
-(void)setDepthFromRoute:(unsigned long long)arg1 ;
-(BOOL)isOverpass;
-(BOOL)isIntraRamp;
-(void)setIsRouteOverpass:(BOOL)arg1 ;
-(void)evaluateCrossStreetsUsingRouteJunction:(id)arg1 ;
-(int)requiredLabelPlacement;
-(void)setPreferredLabelPlacement:(int)arg1 ;
-(Matrix<float)tileCoordinate;
-(void)findRoads;
-(BOOL)isIntersection;
-(unsigned char)_signOrientationWithDrivingSide:(BOOL)arg1 ;
-(Matrix<double, 3, 1>)_anchorCoordinateForSignOrientation:(unsigned char)arg1 ;
-(id)initWithGEOJunction:(SCD_Struct_VK269*)arg1 routeOffset:(PolylineCoordinate)arg2 tile:(const shared_ptr<md::LabelTile>*)arg3 ;
-(id)initWithRoadEdge:(const SCD_Struct_VK273*)arg1 atA:(BOOL)arg2 routeOffset:(PolylineCoordinate)arg3 tile:(const shared_ptr<md::LabelTile>*)arg4 ;
-(BOOL)matchesLocationForJunction:(id)arg1 ;
-(BOOL)isTileEdgeJunction;
-(BOOL)isRoadTerminus;
-(BOOL)isOffRouteGraph;
-(int)largestRoadClass;
-(void)addRouteEdge:(const VKLabelNavRouteRoadEdge*)arg1 atA:(BOOL)arg2 ;
-(void)setSharedRouteDirection:(Matrix<float)arg1 ;
-(const SCD_Struct_VK269*)geoJunction;
-(int)preferredLabelPlacement;
-(float)distanceFromPreviousShieldLabel;
-(void)setDistanceFromPreviousShieldLabel:(float)arg1 ;
-(void)setIsOnDualCarriageway:(BOOL)arg1 ;
-(BOOL)hasSharedRouteDirection;
-(Matrix<float)sharedRouteDirection;
-(VKLabelNavJunction *)overpassJunction;
-(void)setOverpassJunction:(VKLabelNavJunction *)arg1 ;
-(BOOL)isRouteOverpass;
-(BOOL)isRouteRefineJunction;
-(void)setIsRouteRefineJunction:(BOOL)arg1 ;
@end

