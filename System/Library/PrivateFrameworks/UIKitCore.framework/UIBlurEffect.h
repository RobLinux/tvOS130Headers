/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffect.h>

@class _UIBlurEffectImpl, UIColor;

@interface UIBlurEffect : UIVisualEffect {

	_UIBlurEffectImpl* _impl;

}

@property (nonatomic,readonly) BOOL _canProvideVibrancyEffect; 
@property (nonatomic,readonly) BOOL _canProvideCoreMaterialVibrancyEffect; 
@property (nonatomic,readonly) long long _style; 
@property (nonatomic,readonly) UIColor * _tintColor; 
@property (nonatomic,readonly) BOOL _invertAutomaticStyle; 
+(BOOL)supportsSecureCoding;
+(id)effectWithStyle:(long long)arg1 ;
+(id)effectWithBlurRadius:(double)arg1 ;
+(id)_effectWithBlurRadius:(double)arg1 scale:(double)arg2 ;
+(id)_effectWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ;
+(id)_effectWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(BOOL)arg3 ;
+(id)_effectWithTintColor:(id)arg1 ;
+(id)_effectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3 ;
+(id)_effectWithInfiniteRadius;
+(id)_effectWithInfiniteRadiusScale:(double)arg1 ;
+(void)_addBlurToEffectDescriptor:(id)arg1 blurRadius:(double)arg2 scale:(double)arg3 environment:(id)arg4 ;
+(id)_coreUIImplementationForStyle:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_style;
-(UIColor *)_tintColor;
-(id)effectSettings;
-(id)_initWithImplementation:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(BOOL)_invertAutomaticStyle;
-(BOOL)_canProvideVibrancyEffect;
-(BOOL)_canProvideCoreMaterialVibrancyEffect;
-(long long)_expectedUsage;
-(BOOL)_isATVStyle;
-(BOOL)_isAutomaticStyle;
@end

