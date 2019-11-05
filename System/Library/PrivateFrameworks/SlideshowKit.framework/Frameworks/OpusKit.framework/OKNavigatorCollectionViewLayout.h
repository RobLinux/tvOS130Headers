/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OKNavigatorCollectionViewController, NSIndexPath, UIPanGestureRecognizer, NSString;

@interface OKNavigatorCollectionViewLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate> {

	OKNavigatorCollectionViewController* _collectionViewController;
	unsigned long long _transitionStyle;
	NSIndexPath* _sourceItemIndexPath;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CGRect _oldBounds;

}

@property (assign,nonatomic) OKNavigatorCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (assign,nonatomic) unsigned long long transitionStyle;                                          //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (nonatomic,retain) NSIndexPath * sourceItemIndexPath;                                           //@synthesize sourceItemIndexPath=_sourceItemIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)prepareLayout;
-(OKNavigatorCollectionViewController *)collectionViewController;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setCollectionViewController:(OKNavigatorCollectionViewController *)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(unsigned long long)transitionStyle;
-(void)setTransitionStyle:(unsigned long long)arg1 ;
-(void)setSourceItemIndexPath:(NSIndexPath *)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
-(NSIndexPath *)sourceItemIndexPath;
-(id)itemClosestToCenter;
@end

