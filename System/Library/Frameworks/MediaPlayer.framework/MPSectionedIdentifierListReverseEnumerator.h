/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class _MPSectionedIdentifierListProxyEntry, MPSectionedIdentifierList, NSMutableArray;

@interface MPSectionedIdentifierListReverseEnumerator : NSEnumerator {

	_MPSectionedIdentifierListProxyEntry* _startEntryProxy;
	MPSectionedIdentifierList* _sectionedIdentifierList;
	unsigned long long _options;
	NSMutableArray* _contexts;
	NSMutableArray* _entriesToEmit;
	NSMutableArray* _nextEmittableEnumerationResults;

}

@property (assign,nonatomic) unsigned long long options;                                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSMutableArray * contexts;                                          //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) NSMutableArray * entriesToEmit;                                     //@synthesize entriesToEmit=_entriesToEmit - In the implementation block
@property (nonatomic,retain) NSMutableArray * nextEmittableEnumerationResults;                   //@synthesize nextEmittableEnumerationResults=_nextEmittableEnumerationResults - In the implementation block
@property (nonatomic,readonly) MPSectionedIdentifierList * sectionedIdentifierList;              //@synthesize sectionedIdentifierList=_sectionedIdentifierList - In the implementation block
-(unsigned long long)options;
-(id)nextObject;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSMutableArray *)contexts;
-(void)setContexts:(NSMutableArray *)arg1 ;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 withExclusiveAccessToken:(id)arg3 ;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingAtItem:(id)arg3 inSection:(id)arg4 withExclusiveAccessToken:(id)arg5 ;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingAtTailOfSection:(id)arg3 withExclusiveAccessToken:(id)arg4 ;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingEntry:(id)arg3 withExclusiveAccessToken:(id)arg4 ;
-(id)nextObjectWithExclusiveAccessToken:(id)arg1 ;
-(MPSectionedIdentifierList *)sectionedIdentifierList;
-(NSMutableArray *)nextEmittableEnumerationResults;
-(void)setNextEmittableEnumerationResults:(NSMutableArray *)arg1 ;
-(id)_startEntryProxy;
-(NSMutableArray *)entriesToEmit;
-(void)setEntriesToEmit:(NSMutableArray *)arg1 ;
@end

