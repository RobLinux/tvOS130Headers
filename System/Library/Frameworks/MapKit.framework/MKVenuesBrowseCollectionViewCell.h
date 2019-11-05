/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class MKPlaceVenueBrowseItem, UIFont, UIImageView, UILabel, NSLayoutConstraint;

@interface MKVenuesBrowseCollectionViewCell : UICollectionViewCell {

	MKPlaceVenueBrowseItem* _browseItem;
	UIFont* _preferredTitleLabelFont;
	UIImageView* _imageView;
	UIImageView* _highlightedImageView;
	UILabel* _titleLabel;
	NSLayoutConstraint* _titleLabelTopConstraint;
	CGSize _preferredSize;

}

@property (nonatomic,retain) UIImageView * imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * highlightedImageView;                        //@synthesize highlightedImageView=_highlightedImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelTopConstraint;              //@synthesize titleLabelTopConstraint=_titleLabelTopConstraint - In the implementation block
@property (nonatomic,retain) MKPlaceVenueBrowseItem * browseItem;                       //@synthesize browseItem=_browseItem - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                                      //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,retain) UIFont * preferredTitleLabelFont;                          //@synthesize preferredTitleLabelFont=_preferredTitleLabelFont - In the implementation block
+(id)reuseIdentifier;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)titleLabelTopConstraint;
-(void)setTitleLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setPreferredSize:(CGSize)arg1 ;
-(void)setPreferredTitleLabelFont:(UIFont *)arg1 ;
-(void)setTitleLabelTextColor:(id)arg1 ;
-(void)setBrowseItem:(MKPlaceVenueBrowseItem *)arg1 ;
-(CGSize)preferredSize;
-(UIFont *)preferredTitleLabelFont;
-(UIImageView *)highlightedImageView;
-(MKPlaceVenueBrowseItem *)browseItem;
-(void)setHighlightedImageView:(UIImageView *)arg1 ;
@end

