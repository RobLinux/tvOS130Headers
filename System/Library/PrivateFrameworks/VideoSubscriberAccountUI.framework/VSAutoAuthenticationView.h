/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VSAutoAuthenticationViewDelegate;
@class UIImage, NSString, UIView, UIImageView, UILabel, UIButton;

@interface VSAutoAuthenticationView : UIView {

	id<VSAutoAuthenticationViewDelegate> _delegate;
	UIImage* _logo;
	NSString* _title;
	NSString* _message;
	NSString* _signInButtonText;
	NSString* _manualSignInButtonText;
	NSString* _accountUsername;
	NSString* _footerText;
	UIView* _detailsView;
	UIImageView* _logoImageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UILabel* _accountUsernameLabel;
	UIButton* _signInButton;
	UIButton* _manualSignInButton;
	UILabel* _footerLabel;

}

@property (nonatomic,retain) UIView * detailsView;                                              //@synthesize detailsView=_detailsView - In the implementation block
@property (nonatomic,retain) UIImageView * logoImageView;                                       //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                            //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UILabel * accountUsernameLabel;                                    //@synthesize accountUsernameLabel=_accountUsernameLabel - In the implementation block
@property (nonatomic,retain) UIButton * signInButton;                                           //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) UIButton * manualSignInButton;                                     //@synthesize manualSignInButton=_manualSignInButton - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                                             //@synthesize footerLabel=_footerLabel - In the implementation block
@property (assign,nonatomic,__weak) id<VSAutoAuthenticationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * logo;                                                    //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy) NSString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                                  //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * signInButtonText;                                         //@synthesize signInButtonText=_signInButtonText - In the implementation block
@property (nonatomic,copy) NSString * manualSignInButtonText;                                   //@synthesize manualSignInButtonText=_manualSignInButtonText - In the implementation block
@property (nonatomic,copy) NSString * accountUsername;                                          //@synthesize accountUsername=_accountUsername - In the implementation block
@property (nonatomic,copy) NSString * footerText;                                               //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,readonly) CGSize preferredImageSize; 
+(id)_button;
+(id)_textColor;
+(id)_buttonBackgroundColor;
+(id)_labelWithFont:(id)arg1 textColor:(id)arg2 ;
+(id)_footnoteTextColor;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<VSAutoAuthenticationViewDelegate>)delegate;
-(void)setDelegate:(id<VSAutoAuthenticationViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)logo;
-(void)setLogo:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)footerLabel;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIButton *)signInButton;
-(void)setSignInButton:(UIButton *)arg1 ;
-(NSString *)footerText;
-(UIImageView *)logoImageView;
-(void)setFooterText:(NSString *)arg1 ;
-(void)setLogoImageView:(UIImageView *)arg1 ;
-(void)setSignInButtonText:(NSString *)arg1 ;
-(NSString *)manualSignInButtonText;
-(void)setManualSignInButtonText:(NSString *)arg1 ;
-(void)setAccountUsername:(NSString *)arg1 ;
-(CGSize)preferredImageSize;
-(void)_signInButtonPressed:(id)arg1 ;
-(UIView *)detailsView;
-(void)_updateLabelWithKeyPath:(id)arg1 text:(id)arg2 font:(id)arg3 textColor:(id)arg4 superview:(id)arg5 ;
-(void)_updateButtonWithKeyPath:(id)arg1 text:(id)arg2 action:(SEL)arg3 ;
-(void)_manualSignInButtonPressed:(id)arg1 ;
-(UIButton *)manualSignInButton;
-(UILabel *)accountUsernameLabel;
-(NSString *)signInButtonText;
-(NSString *)accountUsername;
-(void)setDetailsView:(UIView *)arg1 ;
-(void)setAccountUsernameLabel:(UILabel *)arg1 ;
-(void)setManualSignInButton:(UIButton *)arg1 ;
@end

