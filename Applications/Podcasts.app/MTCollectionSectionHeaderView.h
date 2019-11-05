/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTCollectionReusableView.h>

@class MTTVSectionHeaderView, UILabel;

@interface MTCollectionSectionHeaderView : MTCollectionReusableView {

	MTTVSectionHeaderView* _sectionHeaderView;

}

@property (nonatomic,retain) MTTVSectionHeaderView * sectionHeaderView;              //@synthesize sectionHeaderView=_sectionHeaderView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (assign,nonatomic) double maxWidth; 
+(double)height;
+(id)font;
-(void)prepareForReuse;
-(void)setNeedsLayout;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)textLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isFloating;
-(void)applyLayoutAttributes:(id)arg1 ;
-(MTTVSectionHeaderView *)sectionHeaderView;
-(void)setSectionHeaderView:(MTTVSectionHeaderView *)arg1 ;
@end

