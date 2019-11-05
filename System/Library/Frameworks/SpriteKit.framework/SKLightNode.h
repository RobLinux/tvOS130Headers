/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class UIColor;

@interface SKLightNode : SKNode {

	SKCLightNode* _skcLightNode;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIColor * lightColor; 
@property (nonatomic,retain) UIColor * ambientColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) double falloff; 
@property (assign,nonatomic) unsigned categoryBitMask; 
+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(double)falloff;
-(void)setFalloff:(double)arg1 ;
-(void)commonInit;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(UIColor *)ambientColor;
-(void)setAmbientColor:(UIColor *)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)setLightColor:(UIColor *)arg1 ;
-(void)setLightCategoryBitMask:(unsigned)arg1 ;
-(void)setLightDecay:(double)arg1 ;
-(UIColor *)lightColor;
-(double)lightDecay;
-(unsigned)lightCategoryBitMask;
@end

