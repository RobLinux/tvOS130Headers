/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@protocol MKArtworkImageSource;
@class UIImageView, UIColor;

@interface MKArtworkImageView : UIImageView {

	UIImageView* _cachedBadgeView;
	id<MKArtworkImageSource> _imageSource;
	UIColor* _primaryTintColor;
	UIColor* _secondaryTintColor;

}

@property (nonatomic,readonly) UIImageView * badgeView; 
@property (nonatomic,retain) id<MKArtworkImageSource> imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,retain) UIColor * primaryTintColor;                        //@synthesize primaryTintColor=_primaryTintColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTintColor;                      //@synthesize secondaryTintColor=_secondaryTintColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateImageView;
-(void)setImageSource:(id<MKArtworkImageSource>)arg1 ;
-(UIImageView *)badgeView;
-(id<MKArtworkImageSource>)imageSource;
-(UIColor *)primaryTintColor;
-(void)setPrimaryTintColor:(UIColor *)arg1 ;
-(UIColor *)secondaryTintColor;
-(void)setSecondaryTintColor:(UIColor *)arg1 ;
@end
