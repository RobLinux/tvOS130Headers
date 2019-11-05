/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIPointFIFO.h>

@class _UIPointVector;

@interface UIBoxcarFilterPointFIFO : UIPointFIFO {

	unsigned long long _width;
	float _spacing;
	_UIPointVector* _prevPoints;

}

@property (assign,nonatomic) unsigned long long width;                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float spacing;                            //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) _UIPointVector * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
-(void)dealloc;
-(void)clear;
-(float)spacing;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)flush;
-(void)addPoint:;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3 ;
-(_UIPointVector *)prevPoints;
-(void)emitAveragedPoint;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 ;
-(void)setSpacing:(float)arg1 ;
-(void)setPrevPoints:(_UIPointVector *)arg1 ;
@end

