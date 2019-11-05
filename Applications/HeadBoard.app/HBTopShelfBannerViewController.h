/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/HeadBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <HeadBoard/HBTopShelfBannerViewCellDelegate.h>
#import <HeadBoard/TVCarouselViewDataSource.h>
#import <HeadBoard/TVCarouselViewDelegate.h>

@class _TVCarouselView, NSString;

@interface HBTopShelfBannerViewController : UIViewController <HBTopShelfBannerViewCellDelegate, TVCarouselViewDataSource, TVCarouselViewDelegate> {

	_TVCarouselView* _carouselView;
	CGSize _imageSize;

}

@property (assign,nonatomic) CGSize imageSize;                            //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) _TVCarouselView * carouselView;              //@synthesize carouselView=_carouselView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)imageSize;
-(void)loadView;
-(void)setImageSize:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(Class)cellClass;
-(id)preferredFocusEnvironments;
-(_TVCarouselView *)carouselView;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(void)collectionViewCellDidUnfocus:(id)arg1 ;
-(void)collectionViewCellDidChangeFocusDirection:(id)arg1 ;
-(void)applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)applicationWillResignActiveNotification:(id)arg1 ;
-(void)_updateCarouselViewSettings;
-(void)configureCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2 ;
-(id)initWithImageSize:(CGSize)arg1 ;
-(void)setCarouselView:(_TVCarouselView *)arg1 ;
@end

