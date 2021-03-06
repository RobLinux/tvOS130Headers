/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIImage, NSString, MTTVContentUnavailableView;

@interface MTTVContentUnavailableViewController : UIViewController {

	UIImage* _image;
	NSString* _primaryText;
	NSString* _secondaryText;
	NSString* _buttonTitle;
	MTTVContentUnavailableView* _emptyOverlay;

}

@property (nonatomic,retain) MTTVContentUnavailableView * emptyOverlay;              //@synthesize emptyOverlay=_emptyOverlay - In the implementation block
@property (nonatomic,retain) UIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * primaryText;                                 //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,retain) NSString * secondaryText;                               //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,retain) NSString * buttonTitle;                                 //@synthesize buttonTitle=_buttonTitle - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(MTTVContentUnavailableView *)emptyOverlay;
-(void)setEmptyOverlay:(MTTVContentUnavailableView *)arg1 ;
@end

