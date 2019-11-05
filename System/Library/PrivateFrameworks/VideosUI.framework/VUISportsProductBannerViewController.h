/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class IKViewElement, VUISportsProductBannerView;

@interface VUISportsProductBannerViewController : UIViewController {

	IKViewElement* _viewElement;
	VUISportsProductBannerView* _bannerView;

}

@property (nonatomic,retain) VUISportsProductBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                          //@synthesize viewElement=_viewElement - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)preferredFocusEnvironments;
-(IKViewElement *)viewElement;
-(VUISportsProductBannerView *)bannerView;
-(void)setBannerView:(VUISportsProductBannerView *)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_configureViewSubviews;
@end

