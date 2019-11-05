/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, PXLayoutPerformerOutput, NSArray, NSPointerArray, PXRoundedCornerOverlayView;

@interface PXCollageView : UIView {

	double _spacing;
	long long _numberOfItems;
	double _cornerRadius;
	UIColor* _cornerBackgroundColor;
	double _imageCornerRadius;
	PXLayoutPerformerOutput* _layoutOutput;
	NSArray* __imageViews;
	NSPointerArray* __imageSizes;
	PXRoundedCornerOverlayView* __roundedCornerOverlayView;

}

@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput;                              //@synthesize layoutOutput=_layoutOutput - In the implementation block
@property (nonatomic,readonly) NSArray * _imageViews;                                             //@synthesize _imageViews=__imageViews - In the implementation block
@property (nonatomic,readonly) NSPointerArray * _imageSizes;                                      //@synthesize _imageSizes=__imageSizes - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * _roundedCornerOverlayView;              //@synthesize _roundedCornerOverlayView=__roundedCornerOverlayView - In the implementation block
@property (assign,nonatomic) double spacing;                                                      //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) long long numberOfItems;                                             //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                 //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,copy) UIColor * cornerBackgroundColor;                                       //@synthesize cornerBackgroundColor=_cornerBackgroundColor - In the implementation block
@property (assign,nonatomic) double imageCornerRadius;                                            //@synthesize imageCornerRadius=_imageCornerRadius - In the implementation block
+(long long)maximumNumberOfItems;
-(double)spacing;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)numberOfItems;
-(void)setSpacing:(double)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(PXLayoutPerformerOutput *)layoutOutput;
-(void)setLayoutOutput:(PXLayoutPerformerOutput *)arg1 ;
-(void)setNumberOfItems:(long long)arg1 ;
-(CGSize)imageSizeForItemAtIndex:(long long)arg1 ;
-(void)setImageSize:(CGSize)arg1 forItemAtIndex:(long long)arg2 ;
-(void)setImageCornerRadius:(double)arg1 ;
-(void)setCornerBackgroundColor:(UIColor *)arg1 ;
-(void)_updateImageViews;
-(void)_updateRoundedCornerOverlayView;
-(UIColor *)cornerBackgroundColor;
-(double)imageCornerRadius;
-(NSArray *)_imageViews;
-(NSPointerArray *)_imageSizes;
-(PXRoundedCornerOverlayView *)_roundedCornerOverlayView;
-(void)set_roundedCornerOverlayView:(PXRoundedCornerOverlayView *)arg1 ;
@end

