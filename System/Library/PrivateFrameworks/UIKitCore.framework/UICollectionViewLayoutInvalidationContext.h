/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableSet, NSMutableDictionary, NSArray, NSDictionary;

@interface UICollectionViewLayoutInvalidationContext : NSObject {

	NSMutableSet* _invalidatedItemIndexPaths;
	NSMutableDictionary* _invalidatedSupplementaryIndexPaths;
	NSMutableDictionary* _invalidatedDecorationIndexPaths;
	NSArray* _updateItems;
	NSArray* _previousIndexPathsForReorderedItems;
	NSArray* _targetIndexPathsForReorderedItems;
	CGPoint _reorderingTarget;
	CGPoint _contentOffsetAdjustment;
	CGSize _contentSizeAdjustment;
	SCD_Struct_UI27 _invalidationContextFlags;
	BOOL _retainExistingSizingInfoForEstimates;
	long long _intent;

}

@property (assign,setter=_setInvalidateDataSourceCounts:,nonatomic) BOOL invalidateDataSourceCounts; 
@property (assign,setter=_setInvalidateEverything:,nonatomic) BOOL invalidateEverything; 
@property (setter=_setUpdateItems:,getter=_updateItems,nonatomic,retain) NSArray * updateItems; 
@property (setter=_setPreviousIndexPathsForInteractivelyMovingItems:,nonatomic,copy) NSArray * previousIndexPathsForInteractivelyMovingItems; 
@property (setter=_setTargetIndexPathsForInteractivelyMovingItems:,nonatomic,copy) NSArray * targetIndexPathsForInteractivelyMovingItems; 
@property (assign,setter=_setInteractiveMovementTarget:,nonatomic) CGPoint interactiveMovementTarget; 
@property (assign,setter=_setRetainExistingSizingInfoForEstimates:,getter=_retainExistingSizingInfoForEstimates,nonatomic) BOOL retainExistingSizingInfoForEstimates;              //@synthesize retainExistingSizingInfoForEstimates=_retainExistingSizingInfoForEstimates - In the implementation block
@property (assign,setter=_setIntent:,getter=_intent,nonatomic) long long intent;                                                                                                   //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) NSArray * invalidatedItemIndexPaths; 
@property (nonatomic,readonly) NSDictionary * invalidatedSupplementaryIndexPaths; 
@property (nonatomic,readonly) NSDictionary * invalidatedDecorationIndexPaths; 
@property (assign,nonatomic) CGPoint contentOffsetAdjustment; 
@property (assign,nonatomic) CGSize contentSizeAdjustment; 
-(BOOL)invalidateEverything;
-(long long)_intent;
-(void)_setIntent:(long long)arg1 ;
-(id)_updateItems;
-(BOOL)invalidateDataSourceCounts;
-(NSArray *)invalidatedItemIndexPaths;
-(void)invalidateItemsAtIndexPaths:(id)arg1 ;
-(void)invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2 ;
-(void)setContentOffsetAdjustment:(CGPoint)arg1 ;
-(void)_setInvalidateEverything:(BOOL)arg1 ;
-(CGPoint)contentOffsetAdjustment;
-(CGSize)contentSizeAdjustment;
-(void)setContentSizeAdjustment:(CGSize)arg1 ;
-(void)invalidateDecorationElementsOfKind:(id)arg1 atIndexPaths:(id)arg2 ;
-(void)_setInvalidateDataSourceCounts:(BOOL)arg1 ;
-(NSDictionary *)invalidatedSupplementaryIndexPaths;
-(id)_invalidatedSupplementaryViews;
-(NSDictionary *)invalidatedDecorationIndexPaths;
-(void)_setUpdateItems:(id)arg1 ;
-(void)_setRetainExistingSizingInfoForEstimates:(BOOL)arg1 ;
-(BOOL)_retainExistingSizingInfoForEstimates;
-(void)_invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2 ;
-(void)_setInvalidatedSupplementaryViews:(id)arg1 ;
-(NSArray *)previousIndexPathsForInteractivelyMovingItems;
-(void)_setPreviousIndexPathsForInteractivelyMovingItems:(id)arg1 ;
-(NSArray *)targetIndexPathsForInteractivelyMovingItems;
-(void)_setTargetIndexPathsForInteractivelyMovingItems:(id)arg1 ;
-(CGPoint)interactiveMovementTarget;
-(void)_setInteractiveMovementTarget:(CGPoint)arg1 ;
@end

