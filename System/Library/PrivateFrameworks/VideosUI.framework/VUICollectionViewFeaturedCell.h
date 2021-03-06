/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVUIKit/_TVRibbonCell.h>

@class VUICollectionViewFeaturedView, TVImageLayout, IKViewElement;

@interface VUICollectionViewFeaturedCell : _TVRibbonCell {

	VUICollectionViewFeaturedView* _featuredView;
	TVImageLayout* _imageLayout;
	IKViewElement* _viewElement;

}

@property (nonatomic,retain) VUICollectionViewFeaturedView * featuredView;              //@synthesize featuredView=_featuredView - In the implementation block
@property (nonatomic,retain) TVImageLayout * imageLayout;                               //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                               //@synthesize viewElement=_viewElement - In the implementation block
+(CGSize)lockupSizeForElement:(id)arg1 ;
+(id)featuredCellWithElement:(id)arg1 existingCell:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_updateMaskingModeForParameters:(id)arg1 ;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(TVImageLayout *)imageLayout;
-(VUICollectionViewFeaturedView *)featuredView;
-(void)setFeaturedView:(VUICollectionViewFeaturedView *)arg1 ;
@end

