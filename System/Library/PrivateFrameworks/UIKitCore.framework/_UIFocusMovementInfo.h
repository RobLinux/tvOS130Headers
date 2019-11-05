/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCopying.h>
#import <UIKitCore/BSXPCCoding.h>

@class NSString;

@interface _UIFocusMovementInfo : NSObject <NSCopying, BSXPCCoding> {

	BOOL _shouldLoadScrollableContainer;
	BOOL _isInitialMovement;
	BOOL _isVelocityBased;
	_UIFocusMovementInfo* _primaryMovementInfo;
	_UIFocusMovementInfo* _secondaryMovementInfo;
	unsigned long long _heading;
	unsigned long long _secondaryHeading;
	unsigned long long _linearHeading;
	CGVector _velocity;

}

@property (assign,setter=_setHeading:,nonatomic) unsigned long long heading;                                                                                  //@synthesize heading=_heading - In the implementation block
@property (assign,setter=_setSecondaryHeading:,getter=_secondaryHeading,nonatomic) unsigned long long secondaryHeading;                                       //@synthesize secondaryHeading=_secondaryHeading - In the implementation block
@property (assign,setter=_setLinearHeading:,getter=_linearHeading,nonatomic) unsigned long long linearHeading;                                                //@synthesize linearHeading=_linearHeading - In the implementation block
@property (assign,setter=_setShouldLoadScrollableContainer:,getter=_shouldLoadScrollableContainer,nonatomic) BOOL shouldLoadScrollableContainer;              //@synthesize shouldLoadScrollableContainer=_shouldLoadScrollableContainer - In the implementation block
@property (assign,setter=_setVelocity:,getter=_velocity,nonatomic) CGVector velocity;                                                                         //@synthesize velocity=_velocity - In the implementation block
@property (assign,setter=_setIsInitialMovement:,getter=_isInitialMovement,nonatomic) BOOL isInitialMovement;                                                  //@synthesize isInitialMovement=_isInitialMovement - In the implementation block
@property (assign,setter=_setIsVelocityBased:,getter=_isVelocityBased,nonatomic) BOOL isVelocityBased;                                                        //@synthesize isVelocityBased=_isVelocityBased - In the implementation block
@property (nonatomic,readonly) _UIFocusMovementInfo * primaryMovementInfo;                                                                                    //@synthesize primaryMovementInfo=_primaryMovementInfo - In the implementation block
@property (nonatomic,readonly) _UIFocusMovementInfo * secondaryMovementInfo;                                                                                  //@synthesize secondaryMovementInfo=_secondaryMovementInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_movementWithHeading:(unsigned long long)arg1 isInitial:(BOOL)arg2 ;
+(id)_movementWithHeading:(unsigned long long)arg1 linearHeading:(unsigned long long)arg2 shouldLoadScrollableContainer:(BOOL)arg3 isInitial:(BOOL)arg4 ;
+(id)_movementWithVelocity:(CGVector)arg1 isInitial:(BOOL)arg2 ;
+(id)_movementWithHeading:(unsigned long long)arg1 velocity:(CGVector)arg2 isInitial:(BOOL)arg3 ;
+(id)_movementWithHeading:(unsigned long long)arg1 secondaryHeading:(unsigned long long)arg2 velocity:(CGVector)arg3 isInitial:(BOOL)arg4 ;
+(id)_movementWithHeading:(unsigned long long)arg1 linearHeading:(unsigned long long)arg2 isInitial:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)heading;
-(CGVector)_velocity;
-(void)_setVelocity:(CGVector)arg1 ;
-(void)_setHeading:(unsigned long long)arg1 ;
-(void)_setIsInitialMovement:(BOOL)arg1 ;
-(void)_setIsVelocityBased:(BOOL)arg1 ;
-(void)_setSecondaryHeading:(unsigned long long)arg1 ;
-(void)_setLinearHeading:(unsigned long long)arg1 ;
-(void)_setShouldLoadScrollableContainer:(BOOL)arg1 ;
-(unsigned long long)_secondaryHeading;
-(BOOL)_isInitialMovement;
-(BOOL)_isVelocityBased;
-(BOOL)_isLinearMovement;
-(_UIFocusMovementInfo *)primaryMovementInfo;
-(_UIFocusMovementInfo *)secondaryMovementInfo;
-(unsigned long long)_linearHeading;
-(BOOL)_shouldLoadScrollableContainer;
@end

