/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInputMode.h>
#import <UIKitCore/NSCopying.h>

@class NSString, NSArray, NSExtension, NSBundle;

@interface UIKeyboardInputMode : UITextInputMode <NSCopying> {

	BOOL isDisplayed;
	BOOL _extensionInputModeHasDictation;
	NSString* _primaryLanguage;
	NSString* _languageWithRegion;
	NSString* identifier;
	NSString* normalizedIdentifier;
	NSString* softwareLayout;
	NSString* hardwareLayout;
	NSArray* _multilingualLanguages;

}

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * normalizedIdentifier; 
@property (nonatomic,retain) NSString * languageWithRegion;                              //@synthesize languageWithRegion=_languageWithRegion - In the implementation block
@property (nonatomic,retain) NSString * softwareLayout; 
@property (nonatomic,retain) NSString * hardwareLayout; 
@property (nonatomic,retain) NSArray * multilingualLanguages;                            //@synthesize multilingualLanguages=_multilingualLanguages - In the implementation block
@property (nonatomic,readonly) NSString * identifierWithLayouts; 
@property (nonatomic,retain) NSString * primaryLanguage;                                 //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
@property (nonatomic,readonly) NSString * automaticHardwareLayout; 
@property (nonatomic,retain,readonly) NSArray * normalizedIdentifierLevels; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * extendedDisplayName; 
@property (nonatomic,readonly) BOOL isDefaultRightToLeft; 
@property (nonatomic,readonly) BOOL defaultLayoutIsASCIICapable; 
@property (nonatomic,readonly) BOOL isExtensionInputMode; 
@property (nonatomic,readonly) BOOL isStalledExtensionInputMode; 
@property (assign,nonatomic) BOOL extensionInputModeHasDictation;                        //@synthesize extensionInputModeHasDictation=_extensionInputModeHasDictation - In the implementation block
@property (nonatomic,readonly) NSExtension * extension; 
@property (nonatomic,readonly) NSBundle * containingBundle; 
@property (nonatomic,readonly) NSString * containingBundleDisplayName; 
@property (assign,nonatomic) BOOL isDisplayed; 
@property (nonatomic,readonly) BOOL isSpecializedInputMode; 
@property (nonatomic,retain) NSString * dictationLanguage; 
@property (nonatomic,readonly) NSString * dictationDisplayName; 
+(BOOL)supportsSecureCoding;
+(id)keyboardInputModeWithIdentifier:(id)arg1 ;
+(id)intlInputMode;
+(id)canonicalLanguageIdentifierFromIdentifier:(id)arg1 ;
+(id)softwareLayoutFromIdentifier:(id)arg1 ;
+(id)hardwareLayoutFromIdentifier:(id)arg1 ;
+(id)dictationInputMode;
+(id)autofillSignupInputMode;
-(id)safe__extendedDisplayName;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)primaryLanguage;
-(NSString *)displayName;
-(NSExtension *)extension;
-(NSBundle *)containingBundle;
-(NSArray *)multilingualLanguages;
-(void)setMultilingualLanguages:(NSArray *)arg1 ;
-(NSString *)softwareLayout;
-(NSString *)languageWithRegion;
-(BOOL)isExtensionInputMode;
-(NSString *)identifierWithLayouts;
-(NSString *)normalizedIdentifier;
-(NSString *)hardwareLayout;
-(NSString *)extendedDisplayName;
-(BOOL)isSpecializedInputMode;
-(NSString *)automaticHardwareLayout;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(BOOL)defaultLayoutIsASCIICapable;
-(BOOL)isStalledExtensionInputMode;
-(BOOL)isAllowedForTraits:(id)arg1 ;
-(void)setNormalizedIdentifier:(NSString *)arg1 ;
-(void)setLanguageWithRegion:(NSString *)arg1 ;
-(void)setSoftwareLayout:(NSString *)arg1 ;
-(void)setHardwareLayout:(NSString *)arg1 ;
-(NSString *)dictationLanguage;
-(NSArray *)normalizedIdentifierLevels;
-(BOOL)isDefaultRightToLeft;
-(NSString *)containingBundleDisplayName;
-(BOOL)includeBarHeight;
-(BOOL)isDesiredForTraits:(id)arg1 ;
-(NSString *)dictationDisplayName;
-(void)setDictationLanguage:(NSString *)arg1 ;
-(void)setLastUsedDictationLanguage;
-(BOOL)isDisplayed;
-(void)setIsDisplayed:(BOOL)arg1 ;
-(BOOL)extensionInputModeHasDictation;
-(void)setExtensionInputModeHasDictation:(BOOL)arg1 ;
@end

