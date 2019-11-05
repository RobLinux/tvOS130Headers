/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKFootprint : NSObject {

	Box<double, 2> _boundingRect;
	VKFootprintConvexHull_struct _convexHull;
	double _maxDistance;
	Matrix<double, 3, 1> _furthestGroundPoint;
	double _minDistance;
	Matrix<double, 3, 1> _nearestGroundPoint;
	double _minDepth;
	double _maxDepth;
	double _centerDepth;
	int _cornerGroundPointsCount;
	Matrix<double, 3, 1> _cornerGroundPoints[12];

}

@property (nonatomic,readonly) Box<double boundingRect;                              //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) VKFootprintConvexHull_struct convexHull;              //@synthesize convexHull=_convexHull - In the implementation block
@property (nonatomic,readonly) double minDepth;                                      //@synthesize minDepth=_minDepth - In the implementation block
@property (nonatomic,readonly) double maxDepth;                                      //@synthesize maxDepth=_maxDepth - In the implementation block
@property (nonatomic,readonly) double centerDepth;                                   //@synthesize centerDepth=_centerDepth - In the implementation block
@property (nonatomic,readonly) Matrix<double furthestGroundPoint;                    //@synthesize furthestGroundPoint=_furthestGroundPoint - In the implementation block
@property (nonatomic,readonly) Matrix<double nearestGroundPoint;                     //@synthesize nearestGroundPoint=_nearestGroundPoint - In the implementation block
@property (nonatomic,readonly) Matrix<double* cornerGroundPoints; 
@property (nonatomic,readonly) int cornerGroundPointsCount;                          //@synthesize cornerGroundPointsCount=_cornerGroundPointsCount - In the implementation block
-(Box<double)boundingRect;
-(Matrix<double)nearestGroundPoint;
-(/*^block*/id)annotationRectTest;
-(/*^block*/id)annotationCoordinateTest;
-(void)computeFromCamera:(id)arg1 ;
-(Box<double, 2>)_expandedBoundingRect;
-(Matrix<double*)cornerGroundPoints;
-(BOOL)rejectsRect:(const Box<double, 2>*)arg1 ;
-(BOOL)containsGroundPoint:(const Matrix<double, 3, 1>*)arg1 ;
-(VKFootprintConvexHull_struct)convexHull;
-(double)minDepth;
-(double)maxDepth;
-(double)centerDepth;
-(Matrix<double)furthestGroundPoint;
-(int)cornerGroundPointsCount;
@end

