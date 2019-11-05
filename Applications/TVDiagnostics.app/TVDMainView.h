/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:58:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVDiagnostics.app/TVDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVDiagnostics/TVDiagnostics-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TVDMainViewDelegate;
@class DACheckAnimationView, UIView, UIActivityIndicatorView, UIProgressView, UILabel, TVDMarqueeButton, DADeviceIdentifierView, NSLayoutConstraint;

@interface TVDMainView : UIView {

	id<TVDMainViewDelegate> _delegate;
	DACheckAnimationView* _checkAnimationView;
	UIView* _contentView;
	UIActivityIndicatorView* _activityIndicator;
	UIProgressView* _progressView;
	UILabel* _applicationTitleLabel;
	UILabel* _statusLabel;
	TVDMarqueeButton* _closeButton;
	TVDMarqueeButton* _historyButton;
	DADeviceIdentifierView* _deviceIdentifier;
	NSLayoutConstraint* _deviceIdentifierHeightConstraint;

}

@property (nonatomic,retain) UIView * contentView;                                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                        //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                      //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UILabel * applicationTitleLabel;                                    //@synthesize applicationTitleLabel=_applicationTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                              //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) TVDMarqueeButton * closeButton;                                     //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) TVDMarqueeButton * historyButton;                                   //@synthesize historyButton=_historyButton - In the implementation block
@property (nonatomic,retain) DADeviceIdentifierView * deviceIdentifier;                          //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * deviceIdentifierHeightConstraint;              //@synthesize deviceIdentifierHeightConstraint=_deviceIdentifierHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<TVDMainViewDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) DACheckAnimationView * checkAnimationView;                          //@synthesize checkAnimationView=_checkAnimationView - In the implementation block
-(id<TVDMainViewDelegate>)delegate;
-(void)setDelegate:(id<TVDMainViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(DADeviceIdentifierView *)deviceIdentifier;
-(void)setDeviceIdentifier:(DADeviceIdentifierView *)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)updateProgress:(id)arg1 ;
-(void)updateConstraints;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIProgressView *)progressView;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(void)doneTapped:(id)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)closeTapped:(id)arg1 ;
-(void)historyTapped:(id)arg1 ;
-(void)updateWithDeviceState:(id)arg1 ;
-(UILabel *)applicationTitleLabel;
-(TVDMarqueeButton *)closeButton;
-(TVDMarqueeButton *)historyButton;
-(NSLayoutConstraint *)deviceIdentifierHeightConstraint;
-(DACheckAnimationView *)checkAnimationView;
-(void)setDeviceIdentifierHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateText:(id)arg1 ;
-(void)hideText:(BOOL)arg1 ;
-(void)showActivityIndicator:(BOOL)arg1 ;
-(void)hideProgressView:(BOOL)arg1 ;
-(void)showButtonsAndApplicationTitle;
-(void)showCloseButtonWithDone:(BOOL)arg1 ;
-(BOOL)setDeviceIdentifierVisible:(BOOL)arg1 ;
-(BOOL)displayDeviceIdentifier:(id)arg1 ;
-(void)setCheckAnimationView:(DACheckAnimationView *)arg1 ;
-(void)setApplicationTitleLabel:(UILabel *)arg1 ;
-(void)setCloseButton:(TVDMarqueeButton *)arg1 ;
-(void)setHistoryButton:(TVDMarqueeButton *)arg1 ;
@end

