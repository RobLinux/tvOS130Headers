/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKRotate : SKAction {

	SKCRotate* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateByAngle:(double)arg1 duration:(double)arg2 ;
+(id)rotateToAngle:(double)arg1 duration:(double)arg2 ;
+(id)rotateToAngle:(double)arg1 duration:(double)arg2 shortestUnitArc:(BOOL)arg3 ;
+(id)rotateByX:(double)arg1 duration:(double)arg2 ;
+(id)rotateToX:(double)arg1 duration:(double)arg2 ;
+(id)rotateByY:(double)arg1 duration:(double)arg2 ;
+(id)rotateToY:(double)arg1 duration:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

