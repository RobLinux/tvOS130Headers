/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class PKExtendedPhysicsBody, PKPhysicsJoint, NSArray;

@interface UIAttachmentBehavior : UIDynamicBehavior {

	CGPoint _anchorPoint;
	CGPoint _anchorPointA;
	CGPoint _anchorPointB;
	PKExtendedPhysicsBody* _anchorBody;
	PKPhysicsJoint* _joint;
	double _damping;
	double _frequency;
	double _length;
	CGVector _axis;
	unsigned long long _attachmentType;
	long long _type;
	struct {
		unsigned dampingSet : 1;
		unsigned frequencySet : 1;
		unsigned lengthSet : 1;
		unsigned rangeSet : 1;
		unsigned frictionTorqueSet : 1;
		unsigned isRevolute : 1;
	}  _stateFlags;
	long long _attachedBehaviorType;
	double _frictionTorque;
	CGSize _attachmentRange;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) long long attachedBehaviorType;              //@synthesize attachedBehaviorType=_attachedBehaviorType - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double frequency; 
@property (assign,nonatomic) double frictionTorque;                         //@synthesize frictionTorque=_frictionTorque - In the implementation block
@property (assign,nonatomic) CGSize attachmentRange;                        //@synthesize attachmentRange=_attachmentRange - In the implementation block
+(id)slidingAttachmentWithItem:(id)arg1 attachmentAnchor:(CGPoint)arg2 axisOfTranslation:(CGVector)arg3 ;
+(BOOL)_isPrimitiveBehavior;
+(id)slidingAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(CGPoint)arg3 axisOfTranslation:(CGVector)arg4 ;
+(id)limitAttachmentWithItem:(id)arg1 offsetFromCenter:(UIOffset)arg2 attachedToItem:(id)arg3 offsetFromCenter:(UIOffset)arg4 ;
+(id)fixedAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(CGPoint)arg3 ;
+(id)pinAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(CGPoint)arg3 ;
-(id)description;
-(id)init;
-(double)length;
-(long long)type;
-(void)setLength:(double)arg1 ;
-(NSArray *)items;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(double)frictionTorque;
-(void)setFrictionTorque:(double)arg1 ;
-(id)initWithItem:(id)arg1 attachedToAnchor:(CGPoint)arg2 ;
-(void)setAttachmentRange:(CGSize)arg1 ;
-(CGSize)attachmentRange;
-(id)initWithItem:(id)arg1 offsetFromCenter:(UIOffset)arg2 attachedToItem:(id)arg3 offsetFromCenter:(UIOffset)arg4 ;
-(id)initWithItem:(id)arg1 offsetFromCenter:(UIOffset)arg2 attachedToAnchor:(CGPoint)arg3 ;
-(id)initWithItem:(id)arg1 attachedToItem:(id)arg2 ;
-(void)_updateJointWithRange:(CGSize)arg1 ;
-(void)_changedParameter;
-(id)initWithItem:(id)arg1 point:(CGPoint)arg2 attachedToAnchor:(CGPoint)arg3 ;
-(id)initWithItem:(id)arg1 point:(CGPoint)arg2 attachedToItem:(id)arg3 point:(CGPoint)arg4 ;
-(void)_reevaluateJoint;
-(void)_associate;
-(void)_dissociate;
-(long long)attachedBehaviorType;
@end

