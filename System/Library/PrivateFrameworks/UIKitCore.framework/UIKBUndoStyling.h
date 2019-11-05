/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIBlurEffect, UIVibrancyEffect, UIColor;

@interface UIKBUndoStyling : NSObject {

	BOOL _undoRedoIconOnly;
	BOOL _isRTL;
	BOOL _cutCopyPasteIconOnly;
	UIBlurEffect* _backgroundBlurEffect;
	UIVibrancyEffect* _backgroundVibrancyEffect;
	UIColor* _HUDbackgroundColor;
	UIColor* _HUDShadowColor;
	UIColor* _buttonGlyphColorEnabled;
	UIColor* _buttonGlyphColorPressed;
	UIColor* _buttonGlyphColorDisabled;
	UIColor* _elementBackgroundColor;
	UIColor* _elementCoverColor;

}

@property (nonatomic,retain) UIBlurEffect * backgroundBlurEffect;                      //@synthesize backgroundBlurEffect=_backgroundBlurEffect - In the implementation block
@property (nonatomic,retain) UIVibrancyEffect * backgroundVibrancyEffect;              //@synthesize backgroundVibrancyEffect=_backgroundVibrancyEffect - In the implementation block
@property (nonatomic,retain) UIColor * HUDbackgroundColor;                             //@synthesize HUDbackgroundColor=_HUDbackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * HUDShadowColor;                                 //@synthesize HUDShadowColor=_HUDShadowColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonGlyphColorEnabled;                        //@synthesize buttonGlyphColorEnabled=_buttonGlyphColorEnabled - In the implementation block
@property (nonatomic,retain) UIColor * buttonGlyphColorPressed;                        //@synthesize buttonGlyphColorPressed=_buttonGlyphColorPressed - In the implementation block
@property (nonatomic,retain) UIColor * buttonGlyphColorDisabled;                       //@synthesize buttonGlyphColorDisabled=_buttonGlyphColorDisabled - In the implementation block
@property (nonatomic,retain) UIColor * elementBackgroundColor;                         //@synthesize elementBackgroundColor=_elementBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * elementCoverColor;                              //@synthesize elementCoverColor=_elementCoverColor - In the implementation block
@property (assign,nonatomic) BOOL undoRedoIconOnly;                                    //@synthesize undoRedoIconOnly=_undoRedoIconOnly - In the implementation block
@property (assign,nonatomic) BOOL cutCopyPasteIconOnly;                                //@synthesize cutCopyPasteIconOnly=_cutCopyPasteIconOnly - In the implementation block
@property (assign,nonatomic) BOOL isRTL;                                               //@synthesize isRTL=_isRTL - In the implementation block
-(BOOL)isRTL;
-(UIBlurEffect *)backgroundBlurEffect;
-(void)setIsRTL:(BOOL)arg1 ;
-(id)vibrancyEffectForBlur:(id)arg1 ;
-(void)updateBackgroundForAppearance:(long long)arg1 ;
-(void)setHUDbackgroundColor:(UIColor *)arg1 ;
-(void)setHUDShadowColor:(UIColor *)arg1 ;
-(id)initWithKeyboardAppearance:(long long)arg1 isRTL:(BOOL)arg2 ;
-(void)setBackgroundBlurEffect:(UIBlurEffect *)arg1 ;
-(UIVibrancyEffect *)backgroundVibrancyEffect;
-(void)setBackgroundVibrancyEffect:(UIVibrancyEffect *)arg1 ;
-(UIColor *)HUDbackgroundColor;
-(UIColor *)HUDShadowColor;
-(UIColor *)buttonGlyphColorEnabled;
-(void)setButtonGlyphColorEnabled:(UIColor *)arg1 ;
-(UIColor *)buttonGlyphColorPressed;
-(void)setButtonGlyphColorPressed:(UIColor *)arg1 ;
-(UIColor *)buttonGlyphColorDisabled;
-(void)setButtonGlyphColorDisabled:(UIColor *)arg1 ;
-(UIColor *)elementBackgroundColor;
-(void)setElementBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)elementCoverColor;
-(void)setElementCoverColor:(UIColor *)arg1 ;
-(BOOL)undoRedoIconOnly;
-(void)setUndoRedoIconOnly:(BOOL)arg1 ;
-(BOOL)cutCopyPasteIconOnly;
-(void)setCutCopyPasteIconOnly:(BOOL)arg1 ;
@end

