/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class SCNScene, SCNNode;

@interface SK3DNode : SKNode {

	SKC3DNode* _skc3DNode;

}

@property (assign) CGSize viewportSize; 
@property (nonatomic,retain) SCNScene * scnScene; 
@property (assign,nonatomic) double sceneTime; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
+(BOOL)supportsSecureCoding;
+(id)nodeWithViewportSize:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPlaying;
-(void)commonInit;
-(void)setPlaying:(BOOL)arg1 ;
-(CGSize)viewportSize;
-(void)setViewportSize:(CGSize)arg1 ;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(double)sceneTime;
-(void)setSceneTime:(double)arg1 ;
-(SCNNode *)pointOfView;
-(BOOL)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1 ;
-(3)projectPoint:;
-(3)unprojectPoint:;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(id)initWithViewportSize:(CGSize)arg1 ;
-(void)_renderForTime:(double)arg1 ;
-(void)setScnScene:(SCNScene *)arg1 ;
-(SCNScene *)scnScene;
-(void)_scnSceneDidUpdate:(id)arg1 ;
@end

