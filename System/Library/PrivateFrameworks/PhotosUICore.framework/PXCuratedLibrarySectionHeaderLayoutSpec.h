/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class PXTitleSubtitleLabelSpec, PXCuratedLibraryStyleGuide;

@interface PXCuratedLibrarySectionHeaderLayoutSpec : PXFeatureSpec {

	BOOL _showZoomButtons;
	BOOL _showAspectFitButtons;
	BOOL _wantsTitle;
	BOOL _wantsSubtitle;
	BOOL _shouldOmitYear;
	BOOL _shouldAvoidOverlapWithSecondaryToolbar;
	BOOL _wantsInlineHeader;
	BOOL _requiresTitleRenderedAsView;
	BOOL _swapTitleWithSubtitle;
	BOOL _shouldFadeOutWhenReachingTop;
	BOOL _shouldAccomdateAccessibilityButtonLayout;
	BOOL _gradientRespectsSafeArea;
	BOOL _gradientAlwaysSticksToTop;
	double _buttonHeight;
	double _buttonSpacing;
	double _buttonHorizontalPadding;
	PXTitleSubtitleLabelSpec* _titleSubtitleLabelSpec;
	PXTitleSubtitleLabelSpec* _debugInterestingTitleSubtitleLabelSpec;
	PXTitleSubtitleLabelSpec* _debugNonInterestingTitleSubtitleLabelSpec;
	unsigned long long _inlineHeaderStyle;
	double _fadeOutDistanceFromSafeAreaTop;
	double _fadeOutDistance;
	double _fadeOutMinimumAlpha;
	double _gradientAlpha;
	double _gradientHeight;
	double _minimumSpacingBetweenTopSafeAreaAndContentTop;
	double _minimumSpacingBetweenTopSafeAreaAndTitleTop;
	PXCuratedLibraryStyleGuide* _styleGuide;
	PXCuratedLibrarySectionHeaderLayoutSpec* _smallVariantSpec;
	SCD_Struct_PX73 _cornerRadius;
	UIEdgeInsets _padding;
	UIEdgeInsets _contentPadding;
	UIEdgeInsets _titlePadding;

}

@property (assign,nonatomic) UIEdgeInsets padding;                                                            //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX74 cornerRadius;                                                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double buttonHeight;                                                             //@synthesize buttonHeight=_buttonHeight - In the implementation block
@property (assign,nonatomic) double buttonSpacing;                                                            //@synthesize buttonSpacing=_buttonSpacing - In the implementation block
@property (assign,nonatomic) double buttonHorizontalPadding;                                                  //@synthesize buttonHorizontalPadding=_buttonHorizontalPadding - In the implementation block
@property (assign,nonatomic) BOOL showZoomButtons;                                                            //@synthesize showZoomButtons=_showZoomButtons - In the implementation block
@property (assign,nonatomic) BOOL showAspectFitButtons;                                                       //@synthesize showAspectFitButtons=_showAspectFitButtons - In the implementation block
@property (assign,nonatomic) BOOL wantsTitle;                                                                 //@synthesize wantsTitle=_wantsTitle - In the implementation block
@property (assign,nonatomic) BOOL wantsSubtitle;                                                              //@synthesize wantsSubtitle=_wantsSubtitle - In the implementation block
@property (assign,nonatomic) BOOL shouldOmitYear;                                                             //@synthesize shouldOmitYear=_shouldOmitYear - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentPadding;                                                     //@synthesize contentPadding=_contentPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets titlePadding;                                                       //@synthesize titlePadding=_titlePadding - In the implementation block
@property (assign,nonatomic) BOOL shouldAvoidOverlapWithSecondaryToolbar;                                     //@synthesize shouldAvoidOverlapWithSecondaryToolbar=_shouldAvoidOverlapWithSecondaryToolbar - In the implementation block
@property (nonatomic,copy) PXTitleSubtitleLabelSpec * titleSubtitleLabelSpec;                                 //@synthesize titleSubtitleLabelSpec=_titleSubtitleLabelSpec - In the implementation block
@property (nonatomic,copy) PXTitleSubtitleLabelSpec * debugInterestingTitleSubtitleLabelSpec;                 //@synthesize debugInterestingTitleSubtitleLabelSpec=_debugInterestingTitleSubtitleLabelSpec - In the implementation block
@property (nonatomic,copy) PXTitleSubtitleLabelSpec * debugNonInterestingTitleSubtitleLabelSpec;              //@synthesize debugNonInterestingTitleSubtitleLabelSpec=_debugNonInterestingTitleSubtitleLabelSpec - In the implementation block
@property (assign,nonatomic) BOOL wantsInlineHeader;                                                          //@synthesize wantsInlineHeader=_wantsInlineHeader - In the implementation block
@property (assign,nonatomic) BOOL requiresTitleRenderedAsView;                                                //@synthesize requiresTitleRenderedAsView=_requiresTitleRenderedAsView - In the implementation block
@property (assign,nonatomic) unsigned long long inlineHeaderStyle;                                            //@synthesize inlineHeaderStyle=_inlineHeaderStyle - In the implementation block
@property (assign,nonatomic) BOOL swapTitleWithSubtitle;                                                      //@synthesize swapTitleWithSubtitle=_swapTitleWithSubtitle - In the implementation block
@property (assign,nonatomic) BOOL shouldFadeOutWhenReachingTop;                                               //@synthesize shouldFadeOutWhenReachingTop=_shouldFadeOutWhenReachingTop - In the implementation block
@property (assign,nonatomic) double fadeOutDistanceFromSafeAreaTop;                                           //@synthesize fadeOutDistanceFromSafeAreaTop=_fadeOutDistanceFromSafeAreaTop - In the implementation block
@property (assign,nonatomic) double fadeOutDistance;                                                          //@synthesize fadeOutDistance=_fadeOutDistance - In the implementation block
@property (assign,nonatomic) double fadeOutMinimumAlpha;                                                      //@synthesize fadeOutMinimumAlpha=_fadeOutMinimumAlpha - In the implementation block
@property (assign,nonatomic) BOOL shouldAccomdateAccessibilityButtonLayout;                                   //@synthesize shouldAccomdateAccessibilityButtonLayout=_shouldAccomdateAccessibilityButtonLayout - In the implementation block
@property (assign,nonatomic) double gradientAlpha;                                                            //@synthesize gradientAlpha=_gradientAlpha - In the implementation block
@property (assign,nonatomic) double gradientHeight;                                                           //@synthesize gradientHeight=_gradientHeight - In the implementation block
@property (assign,nonatomic) BOOL gradientRespectsSafeArea;                                                   //@synthesize gradientRespectsSafeArea=_gradientRespectsSafeArea - In the implementation block
@property (assign,nonatomic) BOOL gradientAlwaysSticksToTop;                                                  //@synthesize gradientAlwaysSticksToTop=_gradientAlwaysSticksToTop - In the implementation block
@property (nonatomic,retain) PXCuratedLibrarySectionHeaderLayoutSpec * smallVariantSpec;                      //@synthesize smallVariantSpec=_smallVariantSpec - In the implementation block
@property (nonatomic,readonly) double maximumTitleSubtitleHeight; 
@property (nonatomic,readonly) double minimumSpacingBetweenTopSafeAreaAndContentTop;                          //@synthesize minimumSpacingBetweenTopSafeAreaAndContentTop=_minimumSpacingBetweenTopSafeAreaAndContentTop - In the implementation block
@property (nonatomic,readonly) double minimumSpacingBetweenTopSafeAreaAndTitleTop;                            //@synthesize minimumSpacingBetweenTopSafeAreaAndTitleTop=_minimumSpacingBetweenTopSafeAreaAndTitleTop - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryStyleGuide * styleGuide;                                       //@synthesize styleGuide=_styleGuide - In the implementation block
-(SCD_Struct_PX74)cornerRadius;
-(void)setCornerRadius:(SCD_Struct_PX74)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(BOOL)shouldOmitYear;
-(void)setShouldOmitYear:(BOOL)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)wantsInlineHeader;
-(unsigned long long)inlineHeaderStyle;
-(PXCuratedLibraryStyleGuide *)styleGuide;
-(double)maximumTitleSubtitleHeight;
-(double)buttonHeight;
-(void)setButtonHeight:(double)arg1 ;
-(double)buttonSpacing;
-(void)setButtonSpacing:(double)arg1 ;
-(double)buttonHorizontalPadding;
-(void)setButtonHorizontalPadding:(double)arg1 ;
-(BOOL)showZoomButtons;
-(void)setShowZoomButtons:(BOOL)arg1 ;
-(BOOL)showAspectFitButtons;
-(void)setShowAspectFitButtons:(BOOL)arg1 ;
-(BOOL)wantsTitle;
-(void)setWantsTitle:(BOOL)arg1 ;
-(BOOL)wantsSubtitle;
-(void)setWantsSubtitle:(BOOL)arg1 ;
-(UIEdgeInsets)contentPadding;
-(void)setContentPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)titlePadding;
-(void)setTitlePadding:(UIEdgeInsets)arg1 ;
-(BOOL)shouldAvoidOverlapWithSecondaryToolbar;
-(void)setShouldAvoidOverlapWithSecondaryToolbar:(BOOL)arg1 ;
-(PXTitleSubtitleLabelSpec *)titleSubtitleLabelSpec;
-(void)setTitleSubtitleLabelSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(PXTitleSubtitleLabelSpec *)debugInterestingTitleSubtitleLabelSpec;
-(void)setDebugInterestingTitleSubtitleLabelSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(PXTitleSubtitleLabelSpec *)debugNonInterestingTitleSubtitleLabelSpec;
-(void)setDebugNonInterestingTitleSubtitleLabelSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(void)setWantsInlineHeader:(BOOL)arg1 ;
-(BOOL)requiresTitleRenderedAsView;
-(void)setRequiresTitleRenderedAsView:(BOOL)arg1 ;
-(void)setInlineHeaderStyle:(unsigned long long)arg1 ;
-(BOOL)swapTitleWithSubtitle;
-(void)setSwapTitleWithSubtitle:(BOOL)arg1 ;
-(BOOL)shouldFadeOutWhenReachingTop;
-(void)setShouldFadeOutWhenReachingTop:(BOOL)arg1 ;
-(double)fadeOutDistanceFromSafeAreaTop;
-(void)setFadeOutDistanceFromSafeAreaTop:(double)arg1 ;
-(double)fadeOutDistance;
-(void)setFadeOutDistance:(double)arg1 ;
-(double)fadeOutMinimumAlpha;
-(void)setFadeOutMinimumAlpha:(double)arg1 ;
-(BOOL)shouldAccomdateAccessibilityButtonLayout;
-(void)setShouldAccomdateAccessibilityButtonLayout:(BOOL)arg1 ;
-(double)gradientAlpha;
-(void)setGradientAlpha:(double)arg1 ;
-(double)gradientHeight;
-(void)setGradientHeight:(double)arg1 ;
-(BOOL)gradientRespectsSafeArea;
-(void)setGradientRespectsSafeArea:(BOOL)arg1 ;
-(BOOL)gradientAlwaysSticksToTop;
-(void)setGradientAlwaysSticksToTop:(BOOL)arg1 ;
-(double)minimumSpacingBetweenTopSafeAreaAndContentTop;
-(double)minimumSpacingBetweenTopSafeAreaAndTitleTop;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)smallVariantSpec;
-(void)setSmallVariantSpec:(PXCuratedLibrarySectionHeaderLayoutSpec *)arg1 ;
@end

