/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate, NSString;

@interface PGMeaningfulEventMemoryGenerator : PGFeaturedMemoryGenerator {

	BOOL _skipsCollectionTitle;
	NSDate* _lowerBoundLocalDate;
	unsigned long long _eventType;
	unsigned long long _meaning;
	NSString* _meaningfulEventUUID;
	unsigned long long _memoryCategory;

}

@property (nonatomic,retain) NSDate * lowerBoundLocalDate;                   //@synthesize lowerBoundLocalDate=_lowerBoundLocalDate - In the implementation block
@property (assign,nonatomic) unsigned long long eventType;                   //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned long long meaning;                     //@synthesize meaning=_meaning - In the implementation block
@property (nonatomic,retain) NSString * meaningfulEventUUID;                 //@synthesize meaningfulEventUUID=_meaningfulEventUUID - In the implementation block
@property (assign,nonatomic) BOOL skipsCollectionTitle;                      //@synthesize skipsCollectionTitle=_skipsCollectionTitle - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCategory;              //@synthesize memoryCategory=_memoryCategory - In the implementation block
-(void)setEventType:(unsigned long long)arg1 ;
-(unsigned long long)eventType;
-(id)initWithController:(id)arg1 ;
-(void)setMemoryCategory:(unsigned long long)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(NSDate *)lowerBoundLocalDate;
-(void)setLowerBoundLocalDate:(NSDate *)arg1 ;
-(unsigned long long)meaning;
-(void)setMeaning:(unsigned long long)arg1 ;
-(unsigned long long)memoryCategory;
-(id)_additionalInfoKeywordsForPotentialMemory:(id)arg1 ;
-(NSString *)meaningfulEventUUID;
-(void)setMeaningfulEventUUID:(NSString *)arg1 ;
-(BOOL)skipsCollectionTitle;
-(void)setSkipsCollectionTitle:(BOOL)arg1 ;
@end

