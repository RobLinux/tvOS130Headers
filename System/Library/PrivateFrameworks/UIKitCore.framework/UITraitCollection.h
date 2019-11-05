/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFallbackEnvironment.h>
#import <UIKitCore/NSCopying.h>
#import <UIKitCore/NSSecureCoding.h>

@class NSDictionary, NSObject, NSString, UIImageConfiguration;

@interface UITraitCollection : NSObject <_UIFallbackEnvironment, NSCopying, NSSecureCoding> {

	SCD_Struct_UI71 _builtinTraits;
	NSDictionary* _clientDefinedTraits;
	NSObject* _environmentWrapper;

}

@property (nonatomic,readonly) BOOL MPU_hasCompactHeight; 
@property (nonatomic,readonly) BOOL MPU_hasCompactWidth; 
@property (nonatomic,readonly) BOOL MPU_hasRegularHeight; 
@property (nonatomic,readonly) BOOL MPU_hasRegularWidth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_isFallback,nonatomic,readonly) BOOL isFallback; 
@property (getter=_imageConfiguration,nonatomic,readonly) UIImageConfiguration * _imageConfiguration; 
@property (getter=_themeKey,nonatomic,readonly) id<_UIThemeKey> _themeKey; 
@property (nonatomic,readonly) NSString * _appearanceName; 
@property (nonatomic,readonly) NSString * _styleEffectAppearanceName; 
@property (nonatomic,readonly) long long _semanticContext; 
@property (nonatomic,readonly) long long _presentationSemanticContext; 
@property (nonatomic,readonly) long long userInterfaceIdiom; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) long long layoutDirection; 
@property (nonatomic,readonly) double displayScale; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
@property (nonatomic,readonly) long long forceTouchCapability; 
@property (nonatomic,copy,readonly) NSString * preferredContentSizeCategory; 
@property (nonatomic,readonly) long long displayGamut; 
@property (nonatomic,readonly) long long accessibilityContrast; 
@property (nonatomic,readonly) long long userInterfaceLevel; 
@property (nonatomic,readonly) long long legibilityWeight; 
+(BOOL)supportsSecureCoding;
+(id)traitCollectionWithPreferredContentSizeCategory:(id)arg1 ;
+(id)traitCollectionWithHorizontalSizeClass:(long long)arg1 ;
+(id)_currentTraitCollection;
+(void)_setCurrentTraitCollection:(id)arg1 ;
+(id)traitCollectionWithTouchLevel:(long long)arg1 ;
+(id)traitCollectionWithDisplayScale:(double)arg1 ;
+(id)traitCollectionWithTraitsFromCollections:(id)arg1 ;
+(id)_defaultTraitCollection;
+(id)traitCollectionWithVerticalSizeClass:(long long)arg1 ;
+(id)traitCollectionWithUserInterfaceStyle:(long long)arg1 ;
+(id)traitCollectionWithUserInterfaceIdiom:(long long)arg1 ;
+(id)currentTraitCollection;
+(void)setCurrentTraitCollection:(id)arg1 ;
+(id)_traitCollectionWithEnvironmentWrapper:(id)arg1 ;
+(id)traitCollectionWithLayoutDirection:(long long)arg1 ;
+(id)traitCollectionWithDisplayGamut:(long long)arg1 ;
+(id)traitCollectionWithAccessibilityContrast:(long long)arg1 ;
+(id)_traitCollectionWithContrast:(long long)arg1 ;
+(id)_fallbackTraitCollection;
+(id)_traitCollectionWithVibrancy:(long long)arg1 ;
+(id)_currentTraitCollectionIfExists;
+(id)_emptyTraitCollection;
+(id)_descriptionForChangeFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 ;
+(id)_traitCollectionWithSemanticContext:(long long)arg1 ;
+(void)_performWithCurrentTraitCollection:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)traitCollectionWithForceTouchCapability:(long long)arg1 ;
+(id)_currentTraitCollectionWithUnmarkedFallback;
+(id)_traitCollectionForThemeKey:(id)arg1 ;
+(void)_setBackgroundThreadFallbackTraitCollection:(id)arg1 ;
+(id)traitCollectionWithUserInterfaceLevel:(long long)arg1 ;
+(id)traitCollectionWithLegibilityWeight:(long long)arg1 ;
+(id)_backgroundThreadFallbackTraitCollection;
+(id)_threadSafeFallbackTraitCollection;
+(id)_currentTraitCollectionWithFallback:(BOOL)arg1 markFallback:(BOOL)arg2 ;
+(id)traitCollectionWithDisplayCornerRadius:(double)arg1 ;
+(id)traitCollectionWithInteractionModel:(unsigned long long)arg1 ;
+(id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)arg1 ;
+(id)traitCollectionWithArtworkSubtype:(unsigned long long)arg1 ;
+(id)_traitCollectionWithPresentationSemanticContext:(long long)arg1 ;
+(id)_traitCollectionWithDebugHighlight:(long long)arg1 ;
+(id)_traitCollectionWithBackgroundLevel:(long long)arg1 ;
+(id)traitCollectionWithTextLegibility:(long long)arg1 ;
+(id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2 ;
+(id)_traitCollectionFromImageConfiguration:(id)arg1 ;
-(BOOL)isLargeTextTraitCollection;
-(BOOL)MPU_hasCompactHeight;
-(BOOL)MPU_hasCompactWidth;
-(BOOL)MPU_hasRegularHeight;
-(BOOL)MPU_hasRegularWidth;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_description;
-(long long)_compare:(id)arg1 ;
-(long long)layoutDirection;
-(long long)displayGamut;
-(NSString *)_appearanceName;
-(long long)userInterfaceIdiom;
-(NSString *)preferredContentSizeCategory;
-(long long)legibilityWeight;
-(long long)_textLegibility;
-(long long)_contrast;
-(BOOL)containsTraitsInCollection:(id)arg1 ;
-(long long)userInterfaceStyle;
-(long long)horizontalSizeClass;
-(double)displayScale;
-(long long)forceTouchCapability;
-(long long)verticalSizeClass;
-(BOOL)hasDifferentColorAppearanceComparedToTraitCollection:(id)arg1 ;
-(double)displayCornerRadius;
-(long long)userInterfaceLevel;
-(UIImageConfiguration *)_imageConfiguration;
-(id)imageConfiguration;
-(unsigned long long)artworkSubtype;
-(long long)accessibilityContrast;
-(id)_environmentWrapper;
-(id)_fallbackTraitCollection;
-(long long)_vibrancy;
-(long long)_presentationSemanticContext;
-(id)_initWithBuiltinTraitStorage:(SCD_Struct_UI71*)arg1 clientDefinedTraits:(id)arg2 ;
-(unsigned long long)interactionModel;
-(unsigned long long)primaryInteractionModel;
-(id)_traitCollectionByReplacingValue:(id)arg1 forTraitName:(id)arg2 ;
-(BOOL)_changedContentSizeCategoryFromTraitCollection:(id)arg1 ;
-(long long)_debugHighlight;
-(void)_enumerateThemeKeysForLookup:(/*^block*/id)arg1 ;
-(id<_UIThemeKey>)_themeKey;
-(NSString *)_styleEffectAppearanceName;
-(BOOL)_matchesIntersectionWithTraitCollection:(id)arg1 ;
-(id)_namedImageDescription;
-(void)_enumerateThemeAppearanceNamesForLookup:(/*^block*/id)arg1 ;
-(id)_initWithBuiltinTraitStorage:(SCD_Struct_UI71*)arg1 clientDefinedTraits:(id)arg2 environmentWrapper:(id)arg3 ;
-(id)_descriptionWithPrivateTraits:(BOOL)arg1 ;
-(id)_fallbackCopy;
-(BOOL)_isFallback;
-(long long)_themeLevelForKey;
-(id)_traitCollectionRelevantForImageConfiguration;
-(id)_traitsDescription;
-(id)_traitNamesForUnspecifiedBuiltInTraits;
-(long long)_countOfIntersectionWithTraitCollection:(id)arg1 ;
-(id)_traitNamesOfIntersectionWithTraitCollection:(id)arg1 ;
-(id)_valueForTraitNamed:(id)arg1 ;
-(long long)touchLevel;
-(long long)_semanticContext;
-(long long)_backgroundLevel;
-(id)_traitCollectionWithIncrementedBackgroundLevel;
-(id)_invertedTraitCollection;
-(void)performAsCurrentTraitCollection:(/*^block*/id)arg1 ;
@end

