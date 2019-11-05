/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:21 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, UIView, UIColor;

@interface MTVibrantImageView : UIView {

	UIImage* _image;
	UIImageView* _imageView;
	UIView* _vibrancyView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * vibrancyView;                //@synthesize vibrancyView=_vibrancyView - In the implementation block
@property (nonatomic,retain) UIImage * image;                      //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) id compositingFilter; 
@property (nonatomic,retain) UIColor * vibrancyColor; 
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)compositingFilter;
-(void)setCompositingFilter:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIView *)vibrancyView;
-(void)setVibrancyView:(UIView *)arg1 ;
-(UIColor *)vibrancyColor;
-(void)setVibrancyColor:(UIColor *)arg1 ;
@end

