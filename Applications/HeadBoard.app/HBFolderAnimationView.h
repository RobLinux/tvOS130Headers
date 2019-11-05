/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:10 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/HeadBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, _UIStackedImageConfiguration;

@interface HBFolderAnimationView : UIView {

	NSArray* _images;
	long long _style;
	NSArray* _imageViews;
	unsigned long long _numberOfColumns;
	double _verticalSpacing;
	_UIStackedImageConfiguration* _configuration;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) NSArray * imageViews;                                      //@synthesize imageViews=_imageViews - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumns;                        //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                   //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) double verticalSpacing;                                    //@synthesize verticalSpacing=_verticalSpacing - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) _UIStackedImageConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSArray * images;                                            //@synthesize images=_images - In the implementation block
@property (assign,nonatomic) long long style;                                           //@synthesize style=_style - In the implementation block
-(_UIStackedImageConfiguration *)configuration;
-(void)setConfiguration:(_UIStackedImageConfiguration *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(CGSize)imageSize;
-(NSArray *)images;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImages:(NSArray *)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(unsigned long long)numberOfColumns;
-(void)layoutSubviews;
-(void)_updateImageViews;
-(double)verticalSpacing;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
-(void)_updateWithCurrentStyle;
-(void)setVerticalSpacing:(double)arg1 ;
@end

