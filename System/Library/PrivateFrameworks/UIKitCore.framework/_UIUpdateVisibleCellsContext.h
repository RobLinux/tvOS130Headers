/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableIndexSet, NSArray, NSIndexSet;

@interface _UIUpdateVisibleCellsContext : NSObject {

	NSMutableArray* _sizes;
	NSMutableArray* _attributes;
	NSMutableArray* _indexPaths;
	NSMutableIndexSet* _sectionIndexes;
	long long _visibleCellsRefCount;

}

@property (nonatomic,readonly) NSArray * sizes;                           //@synthesize sizes=_sizes - In the implementation block
@property (nonatomic,readonly) NSArray * indexPaths;                      //@synthesize indexPaths=_indexPaths - In the implementation block
@property (nonatomic,readonly) NSIndexSet * sectionIndexes; 
@property (nonatomic,readonly) BOOL hasLeftVisibleCellsPass; 
@property (nonatomic,readonly) NSArray * attributes; 
-(id)description;
-(id)init;
-(NSArray *)attributes;
-(NSArray *)sizes;
-(NSArray *)indexPaths;
-(void)addPreferredAttributes:(id)arg1 ;
-(void)didEnterVisibleCellsPass;
-(void)didLeaveVisibleCellsPass;
-(BOOL)shouldInvalidate;
-(BOOL)hasLeftVisibleCellsPass;
-(NSIndexSet *)sectionIndexes;
@end

