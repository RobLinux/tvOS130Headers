/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol PXSampleGadgetViewDelegate;
@class UIColor, UIView;

@interface PXSampleGadgetView : UICollectionViewCell {

	UIColor* _color;
	id<PXSampleGadgetViewDelegate> _delegate;
	UIView* _colorView;

}

@property (nonatomic,retain) UIView * colorView;                                          //@synthesize colorView=_colorView - In the implementation block
@property (assign,nonatomic,__weak) id<PXSampleGadgetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * color;                                             //@synthesize color=_color - In the implementation block
-(id<PXSampleGadgetViewDelegate>)delegate;
-(void)setDelegate:(id<PXSampleGadgetViewDelegate>)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)colorView;
-(void)setColorView:(UIView *)arg1 ;
@end

