/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxShape : NSObject {

	FxShapePriv* _priv;

}
+(id)shapeWithRect:(CGRect)arg1 ;
+(id)infiniteShape;
-(void)dealloc;
-(id)initWithRect:(CGRect)arg1 ;
-(CGRect)extent;
-(BOOL)isInfinite;
-(id)initWithInfiniteBounds;
-(id)intersectWithShape:(id)arg1 ;
@end

