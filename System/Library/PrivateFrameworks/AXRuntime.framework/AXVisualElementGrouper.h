/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXElementGrouper.h>

@interface AXVisualElementGrouper : AXElementGrouper {

	double _maximumNeighbourDistance;
	double _maximumDistanceForAligningEdges;

}

@property (assign,nonatomic) double maximumNeighbourDistance;                     //@synthesize maximumNeighbourDistance=_maximumNeighbourDistance - In the implementation block
@property (assign,nonatomic) double maximumDistanceForAligningEdges;              //@synthesize maximumDistanceForAligningEdges=_maximumDistanceForAligningEdges - In the implementation block
-(id)_groupablesForItems:(id)arg1 ;
-(id)initWithHeuristics:(long long)arg1 ;
-(void)setMaximumNeighbourDistance:(double)arg1 ;
-(void)setMaximumDistanceForAligningEdges:(double)arg1 ;
-(double)maximumDistanceForAligningEdges;
-(double)maximumNeighbourDistance;
@end

