/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView, UIColor;

@interface MTTableViewCell : UITableViewCell {

	BOOL _enabled;
	UIView* _separator;
	BOOL _showsSeparator;
	BOOL _shouldHaveFullLengthSeparator;
	UIView* _leftAccessoryView;
	UIView* _leftEditingAccessoryView;
	/*^block*/id _deleteButtonBlock;
	UIColor* _swipeToDeleteButtonColor;

}

@property (nonatomic,retain) UIView * separator;                              //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIView * leftAccessoryView;                      //@synthesize leftAccessoryView=_leftAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * leftEditingAccessoryView;               //@synthesize leftEditingAccessoryView=_leftEditingAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL showsSeparator;                             //@synthesize showsSeparator=_showsSeparator - In the implementation block
@property (assign,nonatomic) BOOL shouldHaveFullLengthSeparator;              //@synthesize shouldHaveFullLengthSeparator=_shouldHaveFullLengthSeparator - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) id deleteButtonBlock;                              //@synthesize deleteButtonBlock=_deleteButtonBlock - In the implementation block
@property (nonatomic,retain) UIColor * swipeToDeleteButtonColor;              //@synthesize swipeToDeleteButtonColor=_swipeToDeleteButtonColor - In the implementation block
+(id)textColor;
+(double)rowHeight;
+(id)titleFont;
+(id)detailFont;
+(id)detailTextColor;
+(id)defaultCellBackgroundColor;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)separator;
-(void)setSeparator:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)separatorInset;
-(void)setLeftAccessoryView:(UIView *)arg1 ;
-(UIView *)leftAccessoryView;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(void)setupCell;
-(void)setDeleteButtonBlock:(id)arg1 ;
-(void)setSwipeToDeleteButtonColor:(UIColor *)arg1 ;
-(void)_clearCellEmphasis;
-(void)createSeparator;
-(BOOL)shouldHaveFullLengthSeparator;
-(UIView *)leftEditingAccessoryView;
-(void)updateCellShadows:(BOOL)arg1 ;
-(void)updateCellShadows:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLeftEditingAccessoryView:(UIView *)arg1 ;
-(BOOL)showsSeparator;
-(void)setShouldHaveFullLengthSeparator:(BOOL)arg1 ;
-(id)deleteButtonBlock;
-(UIColor *)swipeToDeleteButtonColor;
@end

