/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKRange;

@interface SKPositionConstraint : SKConstraint {

	SKRange* _xRange;
	SKRange* _yRange;

}

@property (copy) SKRange * xRange;              //@synthesize xRange=_xRange - In the implementation block
@property (copy) SKRange * yRange;              //@synthesize yRange=_yRange - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintWithXRange:(id)arg1 ;
+(id)constraintWithYRange:(id)arg1 ;
+(id)constraintWithXRange:(id)arg1 YRange:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKRange *)xRange;
-(SKRange *)yRange;
-(BOOL)isEqualToPositionConstraint:(id)arg1 ;
-(void)setXRange:(SKRange *)arg1 ;
-(void)setYRange:(SKRange *)arg1 ;
-(id)initWithXRange:(id)arg1 YRange:(id)arg2 ;
@end

