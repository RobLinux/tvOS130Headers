/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBShapeOperator : NSObject {

	double _scale;

}

@property (assign,nonatomic) double scale;              //@synthesize scale=_scale - In the implementation block
+(id)operatorWithScale:(double)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(id)shapesByResizingShapes:(id)arg1 withOffset:(CGPoint)arg2 ;
-(CGSize)_scaleRange:(CGSize)arg1 factor:(double)arg2 ;
-(CGRect)_scaleRect:(CGRect)arg1 factor:(CGSize)arg2 ;
-(id)shapeByScalingShape:(id)arg1 factor:(CGSize)arg2 ;
-(id)geometryByScalingShapeGeometry:(id)arg1 factor:(CGSize)arg2 ;
-(CGRect)rectByScalingRect:(CGRect)arg1 factor:(CGSize)arg2 ;
-(id)shapesByScalingShapes:(id)arg1 factor:(CGSize)arg2 ;
-(id)shapesByElaboratingShapes:(id)arg1 insideShape:(id)arg2 count:(long long)arg3 ;
-(id)shapesByCenteringShapes:(id)arg1 insideRect:(CGRect)arg2 ;
-(id)shapesByRepositioningShapes:(id)arg1 withOffset:(CGPoint)arg2 ;
-(id)shapesByInsettingShapes:(id)arg1 withInsets:(UIEdgeInsets)arg2 ;
@end

