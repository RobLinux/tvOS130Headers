/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppStoreKit/AppStoreKit-Structs.h>
@class _ASKResourceCacheGroup, NSCache;

@interface ASKResourceCache : NSObject {

	_ASKResourceCacheGroup* _group;
	NSCache* _contents;

}

@property (nonatomic,readonly) _ASKResourceCacheGroup * group;                               //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSCache * contents;                                           //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) BOOL isGroupMember; 
@property (assign,nonatomic) BOOL evictsObjectsWhenApplicationEntersBackground; 
@property (assign,nonatomic) unsigned long long limit; 
-(id)init;
-(void)dealloc;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(_ASKResourceCacheGroup *)group;
-(NSCache *)contents;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)removeAllResources;
-(id)initWithGroupOfCache:(id)arg1 ;
-(BOOL)isGroupMember;
-(id)resourcesForKey:(id)arg1 ;
-(void)addResource:(id)arg1 forKey:(id)arg2 ;
-(void)replaceResourcesForKey:(id)arg1 withResource:(id)arg2 ;
@end

