/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VSSetupViewDelegate;
@class UIImage, NSString, UIView, VSFontCenter, UIFont, UIStackView, UIButton;

@interface VSSetupView : UIView {

	BOOL _shouldShowAppsButton;
	BOOL _shouldShowAboutButton;
	BOOL _shouldOverrideSkipButtonStyle;
	id<VSSetupViewDelegate> _delegate;
	UIImage* _image;
	NSString* _appName;
	NSString* _appAgeRatingBadge;
	NSString* _footnote;
	NSString* _title;
	NSString* _message;
	NSString* _beginButtonTitle;
	NSString* _skipButtonTitle;
	NSString* _appsButtonTitle;
	UIView* _tvProviderPrivacyButtonContainer;
	UIView* _tvAppPrivacyButtonContainer;
	NSString* _footer;
	VSFontCenter* _fontCenter;
	UIFont* _defaultSkipButtonFont;
	UIFont* _skipButtonFont;
	double _defaultSkipButtonSpacing;
	UIStackView* _stackView;
	UIButton* _beginButton;
	UIButton* _skipButton;
	UIButton* _appsButton;

}

@property (nonatomic,retain) VSFontCenter * fontCenter;                                //@synthesize fontCenter=_fontCenter - In the implementation block
@property (nonatomic,retain) UIFont * defaultSkipButtonFont;                           //@synthesize defaultSkipButtonFont=_defaultSkipButtonFont - In the implementation block
@property (nonatomic,retain) UIFont * skipButtonFont;                                  //@synthesize skipButtonFont=_skipButtonFont - In the implementation block
@property (assign,nonatomic) double defaultSkipButtonSpacing;                          //@synthesize defaultSkipButtonSpacing=_defaultSkipButtonSpacing - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                  //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIButton * beginButton;                                   //@synthesize beginButton=_beginButton - In the implementation block
@property (nonatomic,retain) UIButton * skipButton;                                    //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,retain) UIButton * appsButton;                                    //@synthesize appsButton=_appsButton - In the implementation block
@property (assign,nonatomic,__weak) id<VSSetupViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * image;                                          //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * appName;                                       //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * appAgeRatingBadge;                             //@synthesize appAgeRatingBadge=_appAgeRatingBadge - In the implementation block
@property (nonatomic,retain) NSString * footnote;                                      //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                         //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAppsButton;                                //@synthesize shouldShowAppsButton=_shouldShowAppsButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAboutButton;                               //@synthesize shouldShowAboutButton=_shouldShowAboutButton - In the implementation block
@property (assign,nonatomic) BOOL shouldOverrideSkipButtonStyle;                       //@synthesize shouldOverrideSkipButtonStyle=_shouldOverrideSkipButtonStyle - In the implementation block
@property (nonatomic,copy) NSString * beginButtonTitle;                                //@synthesize beginButtonTitle=_beginButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * skipButtonTitle;                                 //@synthesize skipButtonTitle=_skipButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * appsButtonTitle;                                 //@synthesize appsButtonTitle=_appsButtonTitle - In the implementation block
@property (nonatomic,readonly) UIView * tvProviderPrivacyButtonContainer;              //@synthesize tvProviderPrivacyButtonContainer=_tvProviderPrivacyButtonContainer - In the implementation block
@property (nonatomic,readonly) UIView * tvAppPrivacyButtonContainer;                   //@synthesize tvAppPrivacyButtonContainer=_tvAppPrivacyButtonContainer - In the implementation block
@property (nonatomic,copy) NSString * footer;                                          //@synthesize footer=_footer - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<VSSetupViewDelegate>)delegate;
-(void)setDelegate:(id<VSSetupViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFootnote:(NSString *)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)footnote;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(VSFontCenter *)fontCenter;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(UIButton *)skipButton;
-(double)defaultSkipButtonSpacing;
-(UIFont *)defaultSkipButtonFont;
-(void)setSkipButtonFont:(UIFont *)arg1 ;
-(UIButton *)appsButton;
-(UIButton *)beginButton;
-(void)setShouldOverrideSkipButtonStyle:(BOOL)arg1 ;
-(void)setSkipButtonTitle:(NSString *)arg1 ;
-(void)_beginButtonPressed:(id)arg1 ;
-(void)_skipButtonPressed:(id)arg1 ;
-(void)_appsButtonPressed:(id)arg1 ;
-(NSString *)appAgeRatingBadge;
-(void)setAppAgeRatingBadge:(NSString *)arg1 ;
-(BOOL)shouldShowAppsButton;
-(void)setShouldShowAppsButton:(BOOL)arg1 ;
-(BOOL)shouldShowAboutButton;
-(void)setShouldShowAboutButton:(BOOL)arg1 ;
-(BOOL)shouldOverrideSkipButtonStyle;
-(NSString *)beginButtonTitle;
-(void)setBeginButtonTitle:(NSString *)arg1 ;
-(NSString *)skipButtonTitle;
-(NSString *)appsButtonTitle;
-(void)setAppsButtonTitle:(NSString *)arg1 ;
-(UIView *)tvProviderPrivacyButtonContainer;
-(UIView *)tvAppPrivacyButtonContainer;
-(void)setDefaultSkipButtonFont:(UIFont *)arg1 ;
-(UIFont *)skipButtonFont;
-(void)setDefaultSkipButtonSpacing:(double)arg1 ;
-(void)setBeginButton:(UIButton *)arg1 ;
-(void)setSkipButton:(UIButton *)arg1 ;
-(void)setAppsButton:(UIButton *)arg1 ;
@end

