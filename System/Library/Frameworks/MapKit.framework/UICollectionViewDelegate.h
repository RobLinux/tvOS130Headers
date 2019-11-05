/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICollectionViewDelegate <UIScrollViewDelegate>
@optional
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
-(BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
-(void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
-(CGPoint*)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2;
-(BOOL)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
-(BOOL)collectionView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
-(void)collectionViewDidEndMultipleSelectionInteraction:(id)arg1;
-(id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(CGPoint)arg3;
-(id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
-(id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
-(void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;

@end

