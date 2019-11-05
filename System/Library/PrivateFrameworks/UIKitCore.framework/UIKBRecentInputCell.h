/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel;

@interface UIKBRecentInputCell : UICollectionViewCell {

	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
+(id)textColorForRenderConfig:(id)arg1 isSelected:(BOOL)arg2 ;
+(id)titleAttributesForRenderConfig:(id)arg1 ;
-(void)dealloc;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setInputText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isFocused;
-(void)layoutSubviews;
-(BOOL)_canFocusProgrammatically;
@end

