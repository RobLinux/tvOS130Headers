/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/NSMutableCopying.h>
#import <PhotosUICore/NSCopying.h>

@class NSIndexSet;

@interface PXArrayChangeDetails : NSObject <NSMutableCopying, NSCopying> {

	NSIndexSet* _removedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _movesToIndexes;
	const CFArrayRef _movesFromIndexes;
	NSIndexSet* _changedIndexes;

}

@property (nonatomic,readonly) BOOL hasIncrementalChanges; 
@property (nonatomic,readonly) NSIndexSet * removedIndexes;                       //@synthesize removedIndexes=_removedIndexes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * insertedIndexes;                      //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (nonatomic,readonly) BOOL hasMoves; 
@property (nonatomic,readonly) NSIndexSet * movesToIndexes;                       //@synthesize movesToIndexes=_movesToIndexes - In the implementation block
@property (nonatomic,readonly) const CFArrayRef movesFromIndexes;                 //@synthesize movesFromIndexes=_movesFromIndexes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * changedIndexes;                       //@synthesize changedIndexes=_changedIndexes - In the implementation block
@property (nonatomic,readonly) BOOL hasAnyChanges; 
@property (nonatomic,readonly) BOOL hasAnyInsertionsRemovalsOrMoves; 
+(id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3 ;
+(id)changeDetailsFromFetchResultChangeDetails:(id)arg1 ;
+(id)changeDetailsWithNoChanges;
+(id)changeDetailsWithNoIncrementalChanges;
+(id)changeDetailsWithInsertedIndexRange:(NSRange)arg1 ;
+(id)changeDetailsWithRemovedIndexRange:(NSRange)arg1 ;
+(id)changeDetailsWithChangedIndexRange:(NSRange)arg1 ;
+(id)changeDetailsWithChangedIndexes:(id)arg1 ;
+(id)changeDetailsWithMovedFromIndexRange:(NSRange)arg1 toIndexRange:(NSRange)arg2 ;
+(id)changeDetailsWithOldKeyItemIndex:(long long)arg1 oldCount:(long long)arg2 newKeyItemIndex:(long long)arg3 newCount:(long long)arg4 ;
+(unsigned long long)indexAfterApplyingChanges:(id)arg1 toIndex:(unsigned long long)arg2 objectChanged:(out BOOL*)arg3 ;
+(unsigned long long)indexAfterRevertingChanges:(id)arg1 fromIndex:(unsigned long long)arg2 objectChanged:(out BOOL*)arg3 ;
+(BOOL)_mutableCopyInputs;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSIndexSet *)insertedIndexes;
-(BOOL)hasMoves;
-(NSIndexSet *)changedIndexes;
-(BOOL)hasIncrementalChanges;
-(NSIndexSet *)removedIndexes;
-(BOOL)hasAnyInsertionsRemovalsOrMoves;
-(unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1 ;
-(id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(const CFArrayRef)arg4 changedIndexes:(id)arg5 ;
-(id)changeDetailsShiftedBy:(long long)arg1 ;
-(id)changeDetailsByAddingChangedIndexes:(id)arg1 ;
-(void)enumerateMovedRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMovedIndexesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasAnyChanges;
-(id)indexSetAfterApplyingChangesToIndexSet:(id)arg1 ;
-(id)indexSetAfterRevertingChangesToIndexSet:(id)arg1 ;
-(void)applyToIndexSet:(id)arg1 ;
-(BOOL)canPreserveIncrementalChangesWhenAddingChangeDetails:(id)arg1 ;
-(id)changeDetailsByAddingChangeDetails:(id)arg1 ;
-(NSIndexSet *)movesToIndexes;
-(const CFArrayRef)movesFromIndexes;
-(id)changeDetailsShiftedBy:(long long)arg1 scaledBy:(long long)arg2 ;
@end

