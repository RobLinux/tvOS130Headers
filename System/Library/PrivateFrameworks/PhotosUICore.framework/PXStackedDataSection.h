/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXDataSection.h>

@protocol NSFastEnumeration;
@class NSArray, NSIndexSet, NSDictionary, NSEnumerator;

@interface PXStackedDataSection : PXDataSection {

	NSArray* _childDataSectionsStartIndexes;
	NSIndexSet* _nonEmptyChildDataSectionsStartIndexSet;
	NSDictionary* _nonEmptyChildDataSectionsIndexMap;
	NSEnumerator* _childDataSectionsEnumerator;
	id<NSFastEnumeration> _currentEnumerator;
	unsigned long long _enumerationMutations;
	unsigned long long* _currentEnumeratorMutationsPtr;
	long long _count;
	NSArray* _childDataSections;

}

@property (nonatomic,copy,readonly) NSArray * childDataSections;              //@synthesize childDataSections=_childDataSections - In the implementation block
+(id)dataSectionForAssetsInCollections:(id)arg1 ;
-(id)debugDescription;
-(long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PX43*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(long long)arg1 ;
-(id)initWithChildDataSections:(id)arg1 outlineObject:(id)arg2 ;
-(long long)indexOfChildDataSourceForObjectAtIndex:(long long)arg1 localIndex:(long long*)arg2 ;
-(long long)itemStartIndexForChildDataSourceAtIndex:(long long)arg1 ;
-(void)_resetEnumerationState:(SCD_Struct_PX43*)arg1 ;
-(id)_nextEnumerator;
-(NSArray *)childDataSections;
@end

