/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/NSCopying.h>

@class NSString, NSMutableArray, TUSearchController, NSArray;

@interface TUSearchResults : NSObject <NSCopying> {

	NSString* _searchTerm;
	NSMutableArray* _resultGroups;
	TUSearchController* _searchController;
	NSMutableArray* _allSearchItemsCache;
	NSMutableArray* _allDataItemsCache;

}

@property (nonatomic,retain) NSString * searchTerm;                             //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultGroups;                     //@synthesize resultGroups=_resultGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * allSearchItemsCache;              //@synthesize allSearchItemsCache=_allSearchItemsCache - In the implementation block
@property (nonatomic,retain) NSMutableArray * allDataItemsCache;                //@synthesize allDataItemsCache=_allDataItemsCache - In the implementation block
@property (readonly) NSArray * allSearchItems; 
@property (readonly) NSArray * allDataItems; 
@property (readonly) long long numberOfSections; 
@property (readonly) long long numberOfResults; 
@property (__weak) TUSearchController * searchController;                       //@synthesize searchController=_searchController - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)numberOfResults;
-(void)addSearchResults:(id)arg1 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(long long)numberOfSections;
-(void)_clearCaches;
-(TUSearchController *)searchController;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(NSMutableArray *)resultGroups;
-(NSArray *)allSearchItems;
-(void)addResultGroup:(id)arg1 ;
-(void)addAdhocResultGroup;
-(void)setAllDataItemsCache:(NSMutableArray *)arg1 ;
-(void)setAllSearchItemsCache:(NSMutableArray *)arg1 ;
-(void)removeDuplicateResults;
-(void)removeSearchItem:(id)arg1 ;
-(void)setResultGroups:(NSMutableArray *)arg1 ;
-(id)resultGroupForSection:(long long)arg1 ;
-(NSMutableArray *)allSearchItemsCache;
-(NSMutableArray *)allDataItemsCache;
-(id)initWithSearchTerm:(id)arg1 ;
-(void)finalizeSearchResults;
-(long long)numberOfTableViewRows;
-(NSArray *)allDataItems;
@end

