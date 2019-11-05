/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, GKColorPalette, NSString;

@interface GKTextStyle : NSObject {

	double _UIKitFontLeading;
	BOOL _needsParagraphStyle;
	BOOL _overrideUIKitFontSize;
	UIColor* _color;
	long long _textAlignment;
	long long _lineBreakMode;
	GKColorPalette* _palette;
	NSString* _fontName;
	NSString* _UIKitFontTextStyleName;
	double _fontSize;
	double _minimumLineHeight;
	double _m34;
	double _zPosition;
	SEL _fontSizeRebaseSelector;
	SEL _fontNameRebaseSelector;

}

@property (nonatomic,retain) GKColorPalette * palette;                       //@synthesize palette=_palette - In the implementation block
@property (nonatomic,retain) NSString * fontName;                            //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,retain) NSString * UIKitFontTextStyleName;              //@synthesize UIKitFontTextStyleName=_UIKitFontTextStyleName - In the implementation block
@property (nonatomic,readonly) double fontSize;                              //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double minimumLineHeight;                       //@synthesize minimumLineHeight=_minimumLineHeight - In the implementation block
@property (assign,nonatomic) double m34;                                     //@synthesize m34=_m34 - In the implementation block
@property (assign,nonatomic) double zPosition;                               //@synthesize zPosition=_zPosition - In the implementation block
@property (assign,nonatomic) BOOL needsParagraphStyle;                       //@synthesize needsParagraphStyle=_needsParagraphStyle - In the implementation block
@property (assign,nonatomic) BOOL overrideUIKitFontSize;                     //@synthesize overrideUIKitFontSize=_overrideUIKitFontSize - In the implementation block
@property (assign,nonatomic) SEL fontSizeRebaseSelector;                     //@synthesize fontSizeRebaseSelector=_fontSizeRebaseSelector - In the implementation block
@property (assign,nonatomic) SEL fontNameRebaseSelector;                     //@synthesize fontNameRebaseSelector=_fontNameRebaseSelector - In the implementation block
@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long textAlignment;                        //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) long long lineBreakMode;                        //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
+(id)textStyle;
+(double)standardFontSize;
+(double)bubbleTextScale;
+(id)attributedString:(id)arg1 byReplayingFromBaseStyle:(id)arg2 systemContentSizeDidChange:(BOOL)arg3 ;
+(double)standardLeadingForFontTextStyle:(id)arg1 ;
+(double)scaledValueFromHISpecLeading:(double)arg1 forFontTextStyle:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copy;
-(id)description;
-(id)init;
-(id)attributes;
-(id)info;
-(id)body;
-(long long)lineBreakMode;
-(double)minimumLineHeight;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setMinimumLineHeight:(double)arg1 ;
-(double)fontSize;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(double)zPosition;
-(void)setZPosition:(double)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(NSString *)fontName;
-(id)sectionHeader;
-(id)caption;
-(id)bannerTitle;
-(id)headline;
-(id)initEmpty;
-(id)buttonTitle;
-(id)emphasized;
-(id)footnote;
-(id)centered;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(void)applyToLabel:(id)arg1 ;
-(GKColorPalette *)palette;
-(void)setPalette:(GKColorPalette *)arg1 ;
-(id)light;
-(id)strong;
-(id)styleWithName:(id)arg1 fallback:(id)arg2 layoutMode:(int)arg3 ;
-(id)replayOnBaseStyle:(id)arg1 systemContentSizeDidChange:(BOOL)arg2 ;
-(id)composeMessage;
-(void)applyToEditField:(id)arg1 ;
-(id)scaledForM34:(double)arg1 zPosition:(double)arg2 ;
-(id)bubbleValue;
-(id)bubbleCaption;
-(id)bubbleValueSmall;
-(id)bubbleTextSmall;
-(id)bubbleText;
-(id)resolveFontAndLineSpacing:(double*)arg1 ;
-(id)baseFontRebaseSelector;
-(SEL)fontSizeRebaseSelector;
-(SEL)fontNameRebaseSelector;
-(id)copyWithBaseClass:(Class)arg1 ;
-(void)applyScaleForMesh;
-(void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 leadingOverrideFromHISpec:(double)arg3 shouldOverrideSize:(BOOL)arg4 rebaseSelector:(SEL)arg5 ;
-(void)setFontName:(id)arg1 rebaseSelector:(SEL)arg2 ;
-(void)setFontSize:(double)arg1 rebaseSelector:(SEL)arg2 ;
-(void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 shouldOverrideSize:(BOOL)arg3 rebaseSelector:(SEL)arg4 ;
-(id)header4;
-(void)setM34:(double)arg1 ;
-(id)signInFieldLabel;
-(id)header0;
-(id)header1;
-(id)header2;
-(id)header3;
-(id)caption1;
-(id)caption2;
-(id)bannerMessage;
-(id)roundButtonTitle;
-(id)buyButtonTitle;
-(id)selectedBuyButtonTitle;
-(id)small;
-(id)smallInfo;
-(id)viewBackground;
-(id)emphasizedOnDarkBackground;
-(id)scaled:(double)arg1 ;
-(id)localPlayerColor;
-(id)friendColor;
-(id)friendCaptionColor;
-(id)bold;
-(id)thin;
-(id)regular;
-(id)medium;
-(id)composeFields;
-(id)headerViewSubText1;
-(id)multiplayerNameText;
-(id)multiplayerAddText;
-(id)multiplayerStatusText;
-(id)multiplayerHeaderText;
-(id)multiplayerFooterText;
-(id)thinNumberText;
-(id)gameDetailNameText;
-(id)detailSecondaryHeaderText;
-(id)bubbleCaptionSmall;
-(id)segmentBubbleCaption;
-(id)segmentBubbleValue;
-(id)meBubbleCaption;
-(id)meBubbleValue;
-(id)challengeBubbleValue;
-(id)bubbleHeadline;
-(id)signInTitle;
-(id)signInSubtitle;
-(id)signInField;
-(id)signInLink;
-(id)leaderboardRankSmall;
-(id)leaderboardRankMedium;
-(id)leaderboardRankLarge;
-(id)achievementLeaderboardRank;
-(id)achievementLeaderboardPointsText;
-(id)achievementValueText;
-(id)sectionCaption;
-(id)sectionCaptionSmall;
-(id)cellActionItem;
-(id)challengeText;
-(id)challengeTitleText;
-(id)tableCellTitle;
-(id)tableCellSubtitle;
-(id)tableFooterStyle;
-(id)tabIconCaption;
-(id)removeButtonTitle;
-(id)alignment:(long long)arg1 lineBreakMode:(long long)arg2 ;
-(id)lineBreakMode:(long long)arg1 ;
-(id)lineHeight:(double)arg1 ;
-(id)remoteUISectionHeader:(int)arg1 ;
-(id)remoteUISectionFooter:(int)arg1 ;
-(id)remoteUILabel:(int)arg1 ;
-(id)remoteUIDetailLabel:(int)arg1 ;
-(id)remoteUITableHeaderLabel:(int)arg1 ;
-(id)remoteUITableHeaderSubLabel:(int)arg1 ;
-(id)remoteUITableFooterButton:(int)arg1 ;
-(id)remoteUITableHeaderButton:(int)arg1 ;
-(id)remoteUIEditField:(int)arg1 ;
-(id)remoteUIEditLabel:(int)arg1 ;
-(id)remoteUISelectLabel:(int)arg1 ;
-(id)remoteUISelectField:(int)arg1 ;
-(id)remoteUINickNameField:(int)arg1 ;
-(id)remoteUINickNameLabel:(int)arg1 ;
-(id)settingsLinkText;
-(id)settingsButton;
-(id)settingsBoldButton;
-(id)settingsLabel;
-(id)settingsHeader;
-(id)settingsFooter;
-(NSString *)UIKitFontTextStyleName;
-(void)setUIKitFontTextStyleName:(NSString *)arg1 ;
-(double)m34;
-(BOOL)needsParagraphStyle;
-(void)setNeedsParagraphStyle:(BOOL)arg1 ;
-(BOOL)overrideUIKitFontSize;
-(void)setOverrideUIKitFontSize:(BOOL)arg1 ;
-(void)setFontSizeRebaseSelector:(SEL)arg1 ;
-(void)setFontNameRebaseSelector:(SEL)arg1 ;
@end

