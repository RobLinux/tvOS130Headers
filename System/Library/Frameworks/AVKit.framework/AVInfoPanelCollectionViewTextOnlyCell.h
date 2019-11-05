/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UILabel, NSString;

@interface AVInfoPanelCollectionViewTextOnlyCell : UICollectionViewCell {

	UIImageView* _checkmarkImageView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) NSString * title; 
+(id)_checkmarkImage;
+(id)_labelFontForCellWithoutImage;
+(id)labelForTitle;
+(CGSize)sizeForTitle:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateAppearance;
@end

