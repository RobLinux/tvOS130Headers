/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCopying.h>

@class _UIButtonBarButtonVisualProvider;

@interface UIKBRenderConfig : NSObject <NSCopying> {

	BOOL _useEmojiStyles;
	BOOL _lightKeyboard;
	long long _forceQuality;
	double _blurRadius;
	double _blurSaturation;
	double _keycapOpacity;
	double _lightKeycapOpacity;
	_UIButtonBarButtonVisualProvider* _buttonBarVisualProvider;

}

@property (assign,nonatomic) BOOL lightKeyboard;                                                        //@synthesize lightKeyboard=_lightKeyboard - In the implementation block
@property (assign,nonatomic) long long forceQuality;                                                    //@synthesize forceQuality=_forceQuality - In the implementation block
@property (assign,nonatomic) double blurRadius;                                                         //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) double blurSaturation;                                                     //@synthesize blurSaturation=_blurSaturation - In the implementation block
@property (assign,nonatomic) double keycapOpacity;                                                      //@synthesize keycapOpacity=_keycapOpacity - In the implementation block
@property (assign,nonatomic) double lightKeycapOpacity;                                                 //@synthesize lightKeycapOpacity=_lightKeycapOpacity - In the implementation block
@property (nonatomic,readonly) BOOL whiteText; 
@property (nonatomic,readonly) long long backdropStyle; 
@property (nonatomic,readonly) long long blurEffectStyle; 
@property (nonatomic,readonly) _UIButtonBarButtonVisualProvider * buttonBarVisualProvider;              //@synthesize buttonBarVisualProvider=_buttonBarVisualProvider - In the implementation block
+(id)configForAppearance:(long long)arg1 inputMode:(id)arg2 ;
+(id)darkConfig;
+(id)defaultConfig;
+(id)defaultEmojiConfig;
+(id)lowQualityDarkConfig;
+(long long)backdropStyleForStyle:(long long)arg1 quality:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)blurRadius;
-(void)setBlurRadius:(double)arg1 ;
-(long long)blurEffectStyle;
-(BOOL)lightKeyboard;
-(_UIButtonBarButtonVisualProvider *)buttonBarVisualProvider;
-(long long)backdropStyle;
-(void)setLightKeyboard:(BOOL)arg1 ;
-(BOOL)whiteText;
-(double)lightKeycapOpacity;
-(double)keycapOpacity;
-(long long)forceQuality;
-(double)blurSaturation;
-(void)setBlurSaturation:(double)arg1 ;
-(void)setKeycapOpacity:(double)arg1 ;
-(void)setLightKeycapOpacity:(double)arg1 ;
-(void)setForceQuality:(long long)arg1 ;
@end

