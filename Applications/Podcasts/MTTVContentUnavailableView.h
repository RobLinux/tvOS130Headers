/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIButton, UIImage, NSString;

@interface MTTVContentUnavailableView : UIView {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIImageView* _imageView;
	UIButton* _button;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;               //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIButton * button;                    //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * message; 
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)updateColors;
-(void)configureSubviews;
-(void)setButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end

