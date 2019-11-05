/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardEmojiKeyView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol UIKBEmojiHitTestResponder;
@class UIKeyboardEmojiCollectionView, UICollectionViewFlowLayout, UIKeyboardEmojiCategory, NSIndexPath, UIKeyboardEmojiGraphicsTraits, UIResponder, NSString;

@interface UIKeyboardEmojiCollectionInputView : UIKeyboardEmojiKeyView <UICollectionViewDataSource, UICollectionViewDelegate> {

	UIKeyboardEmojiCollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	UIKeyboardEmojiCategory* _category;
	NSIndexPath* _tappedSkinToneEmoji;
	UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
	BOOL _isDraggingInputView;
	unsigned long long _currentSection;
	BOOL _inputDelegateCanSupportAnimoji;
	BOOL _hasShownAnimojiFirstTimeExperience;
	BOOL _shouldRetryFetchingAnimojiRecents;
	BOOL _useWideAnimojiCell;
	BOOL _hasShownAnimojiCell;
	/*^block*/id _completionBlock;
	UIResponder*<UIKBEmojiHitTestResponder> _hitTestResponder;

}

@property (nonatomic,copy) id completionBlock;                                                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) UIKeyboardEmojiCategory * category;                                              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) UIResponder*<UIKBEmojiHitTestResponder> hitTestResponder;              //@synthesize hitTestResponder=_hitTestResponder - In the implementation block
@property (readonly) BOOL isDraggingInputView;                                                      //@synthesize isDraggingInputView=_isDraggingInputView - In the implementation block
@property (assign,nonatomic) NSIndexPath * tappedSkinToneEmoji;                                     //@synthesize tappedSkinToneEmoji=_tappedSkinToneEmoji - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldHighlightEmoji:(id)arg1 ;
-(void)dealloc;
-(void)setCompletionBlock:(id)arg1 ;
-(UIKeyboardEmojiCategory *)category;
-(void)setCategory:(UIKeyboardEmojiCategory *)arg1 ;
-(id)completionBlock;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(BOOL)_shouldReverseLayoutDirection;
-(void)didMoveToWindow;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)dimKeys:(id)arg1 ;
-(id)subTreeHitTest:(CGPoint)arg1 ;
-(long long)didInputSubTree:(id)arg1 ;
-(void)setHitTestResponder:(UIResponder*<UIKBEmojiHitTestResponder>)arg1 ;
-(UIResponder*<UIKBEmojiHitTestResponder>)hitTestResponder;
-(void)updateToCategory:(long long)arg1 ;
-(id)emojiBaseFirstCharacterString:(id)arg1 ;
-(BOOL)genderEmojiBaseStringNeedVariantSelector:(id)arg1 ;
-(void)setTappedSkinToneEmoji:(NSIndexPath *)arg1 ;
-(BOOL)skinToneWasUsedForEmoji:(id)arg1 ;
-(NSIndexPath *)tappedSkinToneEmoji;
-(BOOL)_userHasSelectedSkinToneEmoji;
-(id)selectedChildSkinToneEmoji:(id)arg1 ;
-(id)emojiBaseString:(id)arg1 ;
-(void)_setUserHasSelectedSkinToneEmoji:(BOOL)arg1 ;
-(void)shouldDismissModalDisplayView:(id)arg1 ;
-(id)firstFullyVisibleHeader;
-(double)snappedXOffsetForOffset:(double)arg1 ;
-(BOOL)_shouldShowRecentlyUsedMedia;
-(double)_recentlyUsedMediaRoundedOffset:(double)arg1 recentlyUsedMediaCellWidth:(double)arg2 ;
-(id)itemInRect:(CGRect)arg1 ;
-(long long)indexForPrettyCategoryDisplay:(id)arg1 ;
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1 ;
-(BOOL)isDraggingInputView;
@end

