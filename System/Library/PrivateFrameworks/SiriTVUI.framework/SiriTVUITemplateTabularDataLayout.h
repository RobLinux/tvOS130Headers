/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSDictionary, SiriTVUIViewStyleCollection, SiriTVUIRowStyle, NSIndexSet;

@interface SiriTVUITemplateTabularDataLayout : UICollectionViewLayout {

	NSDictionary* _itemLayoutAttributesByIndexPath;
	NSDictionary* _dividerLayoutAttributesByRow;
	CGSize _currentContentSize;
	BOOL _hasTitleColumn;
	BOOL _adjustLayoutForWidthChanges;
	SiriTVUIViewStyleCollection* _columnStyles;
	SiriTVUIViewStyleCollection* _rowStyles;
	SiriTVUIRowStyle* _titleStyle;
	SiriTVUIRowStyle* _footerStyle;
	NSIndexSet* _highlightedRowIndices;
	UIEdgeInsets _horizontalKeylineInsets;
	UIEdgeInsets _horizontalContentInsets;

}

@property (nonatomic,retain) SiriTVUIViewStyleCollection * columnStyles;              //@synthesize columnStyles=_columnStyles - In the implementation block
@property (nonatomic,retain) SiriTVUIViewStyleCollection * rowStyles;                 //@synthesize rowStyles=_rowStyles - In the implementation block
@property (nonatomic,copy) SiriTVUIRowStyle * titleStyle;                             //@synthesize titleStyle=_titleStyle - In the implementation block
@property (nonatomic,copy) SiriTVUIRowStyle * footerStyle;                            //@synthesize footerStyle=_footerStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets horizontalKeylineInsets;                    //@synthesize horizontalKeylineInsets=_horizontalKeylineInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets horizontalContentInsets;                    //@synthesize horizontalContentInsets=_horizontalContentInsets - In the implementation block
@property (assign,nonatomic) BOOL hasTitleColumn;                                     //@synthesize hasTitleColumn=_hasTitleColumn - In the implementation block
@property (assign,nonatomic) BOOL adjustLayoutForWidthChanges;                        //@synthesize adjustLayoutForWidthChanges=_adjustLayoutForWidthChanges - In the implementation block
@property (nonatomic,copy) NSIndexSet * highlightedRowIndices;                        //@synthesize highlightedRowIndices=_highlightedRowIndices - In the implementation block
-(id)init;
-(void)invalidateLayout;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(SiriTVUIRowStyle *)titleStyle;
-(void)setTitleStyle:(SiriTVUIRowStyle *)arg1 ;
-(SiriTVUIViewStyleCollection *)rowStyles;
-(void)_recalculateLayout;
-(BOOL)hasTitleColumn;
-(BOOL)adjustLayoutForWidthChanges;
-(SiriTVUIRowStyle *)footerStyle;
-(SiriTVUIViewStyleCollection *)columnStyles;
-(void)setColumnStyles:(SiriTVUIViewStyleCollection *)arg1 ;
-(void)setRowStyles:(SiriTVUIViewStyleCollection *)arg1 ;
-(void)setFooterStyle:(SiriTVUIRowStyle *)arg1 ;
-(UIEdgeInsets)horizontalKeylineInsets;
-(void)setHorizontalKeylineInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)horizontalContentInsets;
-(void)setHorizontalContentInsets:(UIEdgeInsets)arg1 ;
-(void)setHasTitleColumn:(BOOL)arg1 ;
-(void)setAdjustLayoutForWidthChanges:(BOOL)arg1 ;
-(NSIndexSet *)highlightedRowIndices;
-(void)setHighlightedRowIndices:(NSIndexSet *)arg1 ;
@end

