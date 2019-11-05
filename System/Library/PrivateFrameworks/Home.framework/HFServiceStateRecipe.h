/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/NAIdentifiable.h>
#import <Home/NSCopying.h>

@protocol HFServiceTreeMatching;
@class NSSet, NSString;

@interface HFServiceStateRecipe : NSObject <NAIdentifiable, NSCopying> {

	id<HFServiceTreeMatching> _predicate;
	NSSet* _characteristicRecipes;

}

@property (nonatomic,readonly) id<HFServiceTreeMatching> predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) NSSet * characteristicRecipes;                    //@synthesize characteristicRecipes=_characteristicRecipes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id<HFServiceTreeMatching>)predicate;
-(id)matchResultForServices:(id)arg1 ;
-(NSSet *)characteristicRecipes;
-(id)initWithPredicate:(id)arg1 characteristicRecipes:(id)arg2 ;
@end

