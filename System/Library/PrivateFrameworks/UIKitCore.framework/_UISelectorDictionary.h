/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCopying.h>

@class NSMapTable, _UISelectorSet, NSArray;

@interface _UISelectorDictionary : NSObject <NSCopying> {

	NSMapTable* _map;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) _UISelectorSet * allSelectors; 
@property (nonatomic,readonly) NSArray * allObjects; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)initWithMap:(id)arg1 ;
-(void)enumerateSelectorsAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)setObject:(id)arg1 forSelector:(SEL)arg2 ;
-(void)removeObjectForSelector:(SEL)arg1 ;
-(id)initWithMapping:(/*^block*/id)arg1 objects:(id)arg2 ;
-(_UISelectorSet *)allSelectors;
-(id)objectForSelector:(SEL)arg1 ;
-(void)removeObjectsForSelectors:(id)arg1 ;
@end

