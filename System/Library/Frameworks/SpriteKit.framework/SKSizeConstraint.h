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

@interface SKSizeConstraint : SKConstraint {

	SKRange* _widthRange;
	SKRange* _heightRange;

}

@property (copy) SKRange * widthRange;               //@synthesize widthRange=_widthRange - In the implementation block
@property (copy) SKRange * heightRange;              //@synthesize heightRange=_heightRange - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintWithWidthRange:(id)arg1 ;
+(id)constraintWithHeightRange:(id)arg1 ;
+(id)constraintWithWidthRange:(id)arg1 heightRange:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKRange *)widthRange;
-(SKRange *)heightRange;
-(BOOL)isEqualToSizeConstraint:(id)arg1 ;
-(void)setWidthRange:(SKRange *)arg1 ;
-(void)setHeightRange:(SKRange *)arg1 ;
-(id)initWithWidthRange:(id)arg1 heightRange:(id)arg2 ;
@end

