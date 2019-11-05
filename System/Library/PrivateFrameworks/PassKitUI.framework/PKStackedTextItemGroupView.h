/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, PKStackedTextItemGroup;

@interface PKStackedTextItemGroupView : UIView {

	double _intrinsicHeight;
	CGSize _boundsSize;
	BOOL _initialLayout[2];
	NSMutableArray* _itemViews;
	NSMutableArray* _snapshotsToRemove;
	BOOL _animated;
	long long _slideMode;
	long long _style;
	PKStackedTextItemGroup* _content;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) long long style;                             //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) PKStackedTextItemGroup * content;              //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                     //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) double headerPadding; 
-(id)initWithCoder:(id)arg1 ;
-(PKStackedTextItemGroup *)content;
-(long long)style;
-(void)setContent:(PKStackedTextItemGroup *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(double)headerPadding;
-(void)setContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateSubviewsAnimated:(BOOL)arg1 ;
@end

