/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/NSCopying.h>
#import <PhotosUICore/NSMutableCopying.h>

@class NSMutableDictionary;

@interface PXIndexPathSet : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* __sectionIndexesByDataSourceIdentifier;
	NSMutableDictionary* __indexesForSectionsWithItemsByDataSourceIdentifier;
	NSMutableDictionary* __itemIndexesBySectionByDataSourceIdentifier;
	NSMutableDictionary* __subitemIndexesByItemBySectionByDataSourceIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * _sectionIndexesByDataSourceIdentifier;                             //@synthesize _sectionIndexesByDataSourceIdentifier=__sectionIndexesByDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _indexesForSectionsWithItemsByDataSourceIdentifier;                //@synthesize _indexesForSectionsWithItemsByDataSourceIdentifier=__indexesForSectionsWithItemsByDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _itemIndexesBySectionByDataSourceIdentifier;                       //@synthesize _itemIndexesBySectionByDataSourceIdentifier=__itemIndexesBySectionByDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _subitemIndexesByItemBySectionByDataSourceIdentifier;              //@synthesize _subitemIndexesByItemBySectionByDataSourceIdentifier=__subitemIndexesByItemBySectionByDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) PXSimpleIndexPath anySectionIndexPath; 
@property (nonatomic,readonly) PXSimpleIndexPath anyItemIndexPath; 
+(id)indexPathSetWithIndexPath:(PXSimpleIndexPath)arg1 ;
+(id)indexPathSetWithSectionIndexes:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2 ;
+(id)indexPathSetWithItemIndexes:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2 section:(long long)arg3 ;
+(id)indexPathSetWithSubitemIndexes:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2 section:(long long)arg3 item:(long long)arg4 ;
+(id)indexPathSet;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)count;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(NSMutableDictionary *)_subitemIndexesByItemBySectionByDataSourceIdentifier;
-(NSMutableDictionary *)_indexesForSectionsWithItemsByDataSourceIdentifier;
-(NSMutableDictionary *)_itemIndexesBySectionByDataSourceIdentifier;
-(NSMutableDictionary *)_sectionIndexesByDataSourceIdentifier;
-(void)enumerateSubitemIndexSetsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemIndexSetsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSectionIndexSetsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)containsIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)anySectionIndexPath;
-(PXSimpleIndexPath)anyItemIndexPath;
-(id)sectionIndexSetForDataSourceIdentifier:(unsigned long long)arg1 ;
-(id)sectionsWithItemsForDataSourceIdentifier:(unsigned long long)arg1 ;
-(id)itemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 ;
-(void)enumerateSectionIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSubitemIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAllIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDataSourceIdentifiers:(/*^block*/id)arg1 ;
-(PXSimpleIndexPath)firstItemIndexPathForDataSourceIdentifier:(unsigned long long)arg1 ;
-(PXSimpleIndexPath)lastItemIndexPathForDataSourceIdentifier:(unsigned long long)arg1 ;
-(PXSimpleIndexPath)indexPathGreaterThanIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathLessThanIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)indexPathSetByReplacingDataSourceIdentifier:(unsigned long long)arg1 withDataSourceIdentifier:(unsigned long long)arg2 ;
@end

