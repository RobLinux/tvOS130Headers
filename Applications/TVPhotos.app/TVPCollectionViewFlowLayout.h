/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotos/TVPhotos-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class TVPCollectionViewLayoutAttributes, NSMutableDictionary;

@interface TVPCollectionViewFlowLayout : UICollectionViewFlowLayout {

	BOOL _isFocusEnteringCollectionView;
	BOOL _isFocusLeavingCollectionView;
	BOOL _isFocusInsideCollectionView;
	TVPCollectionViewLayoutAttributes* _titleLayoutAttributes;
	NSMutableDictionary* _headerAttributes;
	unsigned long long _focusHeading;
	NSMutableDictionary* _focusContainerGuides;
	CGSize _titleSize;

}

@property (assign,setter=_setTitleSize:,getter=_titleSize,nonatomic) CGSize titleSize;                               //@synthesize titleSize=_titleSize - In the implementation block
@property (nonatomic,retain) TVPCollectionViewLayoutAttributes * titleLayoutAttributes;                              //@synthesize titleLayoutAttributes=_titleLayoutAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * headerAttributes;                                                 //@synthesize headerAttributes=_headerAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long focusHeading;                                                        //@synthesize focusHeading=_focusHeading - In the implementation block
@property (assign,setter=setFocusEnteringCollectionView:,nonatomic) BOOL isFocusEnteringCollectionView;              //@synthesize isFocusEnteringCollectionView=_isFocusEnteringCollectionView - In the implementation block
@property (assign,setter=setFocusLeavingCollectionView:,nonatomic) BOOL isFocusLeavingCollectionView;                //@synthesize isFocusLeavingCollectionView=_isFocusLeavingCollectionView - In the implementation block
@property (assign,nonatomic) BOOL isFocusInsideCollectionView;                                                       //@synthesize isFocusInsideCollectionView=_isFocusInsideCollectionView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * focusContainerGuides;                                             //@synthesize focusContainerGuides=_focusContainerGuides - In the implementation block
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(CGSize)_titleSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setHeaderAttributes:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)headerAttributes;
-(unsigned long long)focusHeading;
-(void)setFocusHeading:(unsigned long long)arg1 ;
-(BOOL)isFocusEnteringCollectionView;
-(void)setFocusEnteringCollectionView:(BOOL)arg1 ;
-(BOOL)isFocusLeavingCollectionView;
-(void)setFocusLeavingCollectionView:(BOOL)arg1 ;
-(void)_setTitleSize:(CGSize)arg1 ;
-(void)_updateFocusContainerGuides;
-(CGSize)_titleAdjustmentSize;
-(void)_applyCustomAttributesToAttributes:(id)arg1 ;
-(void)_adjustLayoutAttributes:(id)arg1 ;
-(CGRect)_titleFrame;
-(id)_layoutAttributesForTitle;
-(void)setIsFocusInsideCollectionView:(BOOL)arg1 ;
-(id)_focusContainerGuideForSection:(long long)arg1 ;
-(BOOL)isFocusInsideCollectionView;
-(NSMutableDictionary *)focusContainerGuides;
-(void)_removeFocusContainerGuideForSection:(long long)arg1 ;
-(TVPCollectionViewLayoutAttributes *)titleLayoutAttributes;
-(void)setTitleLayoutAttributes:(TVPCollectionViewLayoutAttributes *)arg1 ;
-(void)setFocusContainerGuides:(NSMutableDictionary *)arg1 ;
@end

