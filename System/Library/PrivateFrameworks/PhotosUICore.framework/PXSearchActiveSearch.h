/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSString, NSArray;

@interface PXSearchActiveSearch : NSObject {

	NSString* _searchText;
	NSArray* _searchTokens;
	NSArray* _representedObjects;
	NSString* _priorityAssetUUID;

}

@property (nonatomic,copy) NSString * searchText;                                //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) NSArray * searchTokens;                             //@synthesize searchTokens=_searchTokens - In the implementation block
@property (nonatomic,retain) NSArray * representedObjects;                       //@synthesize representedObjects=_representedObjects - In the implementation block
@property (nonatomic,retain) NSString * priorityAssetUUID;                       //@synthesize priorityAssetUUID=_priorityAssetUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchText; 
@property (nonatomic,readonly) BOOL hasSearchTokens; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned long long searchTokenCount; 
@property (nonatomic,readonly) unsigned long long searchTermCount; 
@property (nonatomic,readonly) NSString * searchTermsString; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSString *)searchText;
-(NSArray *)searchTokens;
-(NSArray *)representedObjects;
-(void)setRepresentedObjects:(NSArray *)arg1 ;
-(NSString *)priorityAssetUUID;
-(id)initWithSearchText:(id)arg1 searchTokens:(id)arg2 ;
-(BOOL)hasSearchText;
-(BOOL)hasSearchTokens;
-(unsigned long long)searchTokenCount;
-(unsigned long long)searchTermCount;
-(void)_generateRelatedSearchObjects;
-(NSString *)searchTermsString;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setSearchTokens:(NSArray *)arg1 ;
-(void)setPriorityAssetUUID:(NSString *)arg1 ;
@end

