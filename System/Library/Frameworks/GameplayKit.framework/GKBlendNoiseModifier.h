/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseModifier.h>

@interface GKBlendNoiseModifier : GKNoiseModifier {

	double _lowerBound;
	double _upperBound;
	double _blendDistance;

}
-(id)init;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithSelectionRangeLowerBound:(double)arg1 selectionRangeUpperBound:(double)arg2 selectionBoundaryBlendDistance:(double)arg3 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end

