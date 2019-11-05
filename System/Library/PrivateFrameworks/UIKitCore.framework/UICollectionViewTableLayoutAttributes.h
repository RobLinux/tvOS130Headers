/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>
#import <UIKit/UICollectionViewTableSectionHeaderFooterAttributes.h>
#import <UIKit/UICollectionViewTableAllRowAttributes.h>

@class UIColor, UIVisualEffect;

@interface UICollectionViewTableLayoutAttributes : UICollectionViewLayoutAttributes <UICollectionViewTableSectionHeaderFooterAttributes, UICollectionViewTableAllRowAttributes> {

	BOOL _separatorInsetIsRelativeToCellEdges;
	BOOL _shouldIndentWhileEditing;
	BOOL _showsReorderControl;
	BOOL _layoutMarginsFollowReadableWidth;
	BOOL _insetsContentViewsToSafeArea;
	BOOL _drawsSeparatorAtTopOfSection;
	BOOL _drawsSeparatorAtBottomOfSection;
	BOOL _preferredAttributesCached;
	BOOL _isHeader;
	BOOL _floating;
	int _sectionLocation;
	long long _separatorStyle;
	UIColor* _separatorColor;
	UIVisualEffect* _separatorEffect;
	UIColor* _backgroundColor;
	long long _accessoryType;
	long long _editingStyle;
	double _defaultLeadingCellMarginWidth;
	double _defaultTrailingCellMarginWidth;
	double _indexBarExtentFromEdge;
	long long _indentationLevel;
	double _maxTitleWidth;
	long long _textAlignment;
	UIEdgeInsets _separatorInset;
	UIEdgeInsets _backgroundInset;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) BOOL preferredAttributesCached;                        //@synthesize preferredAttributesCached=_preferredAttributesCached - In the implementation block
@property (assign,nonatomic) BOOL isHeader;                                         //@synthesize isHeader=_isHeader - In the implementation block
@property (assign,nonatomic) double maxTitleWidth;                                  //@synthesize maxTitleWidth=_maxTitleWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                                  //@synthesize margins=_margins - In the implementation block
@property (assign,nonatomic) long long textAlignment;                               //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) BOOL floating;                                         //@synthesize floating=_floating - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInset;                           //@synthesize separatorInset=_separatorInset - In the implementation block
@property (assign,nonatomic) BOOL separatorInsetIsRelativeToCellEdges;              //@synthesize separatorInsetIsRelativeToCellEdges=_separatorInsetIsRelativeToCellEdges - In the implementation block
@property (nonatomic,copy) UIColor * separatorColor;                                //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIVisualEffect * separatorEffect;                      //@synthesize separatorEffect=_separatorEffect - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) int sectionLocation;                                   //@synthesize sectionLocation=_sectionLocation - In the implementation block
@property (assign,nonatomic) BOOL layoutMarginsFollowReadableWidth;                 //@synthesize layoutMarginsFollowReadableWidth=_layoutMarginsFollowReadableWidth - In the implementation block
@property (assign,nonatomic) BOOL insetsContentViewsToSafeArea;                     //@synthesize insetsContentViewsToSafeArea=_insetsContentViewsToSafeArea - In the implementation block
@property (assign,nonatomic) double defaultLeadingCellMarginWidth;                  //@synthesize defaultLeadingCellMarginWidth=_defaultLeadingCellMarginWidth - In the implementation block
@property (assign,nonatomic) double defaultTrailingCellMarginWidth;                 //@synthesize defaultTrailingCellMarginWidth=_defaultTrailingCellMarginWidth - In the implementation block
@property (assign,nonatomic) double indexBarExtentFromEdge;                         //@synthesize indexBarExtentFromEdge=_indexBarExtentFromEdge - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundInset;                          //@synthesize backgroundInset=_backgroundInset - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                            //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (assign,nonatomic) BOOL drawsSeparatorAtTopOfSection;                     //@synthesize drawsSeparatorAtTopOfSection=_drawsSeparatorAtTopOfSection - In the implementation block
@property (assign,nonatomic) BOOL drawsSeparatorAtBottomOfSection;                  //@synthesize drawsSeparatorAtBottomOfSection=_drawsSeparatorAtBottomOfSection - In the implementation block
@property (assign,nonatomic) long long accessoryType;                               //@synthesize accessoryType=_accessoryType - In the implementation block
@property (assign,nonatomic) long long editingStyle;                                //@synthesize editingStyle=_editingStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldIndentWhileEditing;                         //@synthesize shouldIndentWhileEditing=_shouldIndentWhileEditing - In the implementation block
@property (assign,nonatomic) BOOL showsReorderControl;                              //@synthesize showsReorderControl=_showsReorderControl - In the implementation block
+(long long)automaticValueOptionsForRepresentedElementCategory:(unsigned long long)arg1 ;
+(void)applyValuesFromAttributes:(id)arg1 toAttributes:(id)arg2 valueOptions:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccessoryType:(long long)arg1 ;
-(long long)accessoryType;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(long long)separatorStyle;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setLayoutMarginsFollowReadableWidth:(BOOL)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)separatorInset;
-(long long)textAlignment;
-(int)sectionLocation;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(void)setIndentationLevel:(long long)arg1 ;
-(long long)indentationLevel;
-(void)setShouldIndentWhileEditing:(BOOL)arg1 ;
-(BOOL)floating;
-(BOOL)isHeader;
-(void)setIsHeader:(BOOL)arg1 ;
-(void)setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(BOOL)separatorInsetIsRelativeToCellEdges;
-(void)setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(void)setSectionLocation:(int)arg1 ;
-(BOOL)layoutMarginsFollowReadableWidth;
-(BOOL)insetsContentViewsToSafeArea;
-(double)defaultLeadingCellMarginWidth;
-(void)setDefaultLeadingCellMarginWidth:(double)arg1 ;
-(double)defaultTrailingCellMarginWidth;
-(void)setDefaultTrailingCellMarginWidth:(double)arg1 ;
-(double)indexBarExtentFromEdge;
-(void)setIndexBarExtentFromEdge:(double)arg1 ;
-(UIEdgeInsets)backgroundInset;
-(void)setBackgroundInset:(UIEdgeInsets)arg1 ;
-(BOOL)drawsSeparatorAtTopOfSection;
-(void)setDrawsSeparatorAtTopOfSection:(BOOL)arg1 ;
-(BOOL)drawsSeparatorAtBottomOfSection;
-(void)setDrawsSeparatorAtBottomOfSection:(BOOL)arg1 ;
-(long long)editingStyle;
-(void)setEditingStyle:(long long)arg1 ;
-(BOOL)shouldIndentWhileEditing;
-(BOOL)showsReorderControl;
-(void)setShowsReorderControl:(BOOL)arg1 ;
-(double)maxTitleWidth;
-(void)setMaxTitleWidth:(double)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(void)setPreferredAttributesCached:(BOOL)arg1 ;
-(BOOL)preferredAttributesCached;
@end

