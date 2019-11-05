/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <VideoSubscriberAccount/NSCopying.h>

@class VSOptional, NSPredicate, NSArray;

@interface VSKeychainFetchRequest : NSObject <NSCopying> {

	BOOL _includesDataValues;
	VSOptional* _itemKind;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned long long _fetchLimit;

}

@property (nonatomic,retain) VSOptional * itemKind;                      //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy) NSPredicate * predicate;                      //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                    //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;              //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL includesDataValues;                    //@synthesize includesDataValues=_includesDataValues - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(unsigned long long)fetchLimit;
-(VSOptional *)itemKind;
-(void)setItemKind:(VSOptional *)arg1 ;
-(void)setIncludesDataValues:(BOOL)arg1 ;
-(BOOL)includesDataValues;
@end

