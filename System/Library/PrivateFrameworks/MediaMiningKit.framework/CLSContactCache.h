/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSContactCache : CLSDBCache {

	NSPredicate* _entryPredicateWithContactIdentifier;
	NSPredicate* _entryPredicateWithContactIdentifiers;
	NSPredicate* _entryPredicateWithUpdateTimestamp;

}

@property (nonatomic,retain) NSPredicate * entryPredicateWithContactIdentifier;               //@synthesize entryPredicateWithContactIdentifier=_entryPredicateWithContactIdentifier - In the implementation block
@property (nonatomic,retain) NSPredicate * entryPredicateWithContactIdentifiers;              //@synthesize entryPredicateWithContactIdentifiers=_entryPredicateWithContactIdentifiers - In the implementation block
@property (nonatomic,retain) NSPredicate * entryPredicateWithUpdateTimestamp;                 //@synthesize entryPredicateWithUpdateTimestamp=_entryPredicateWithUpdateTimestamp - In the implementation block
-(id)init;
-(id)lastHistoryToken;
-(BOOL)setLastHistoryToken:(id)arg1 ;
-(BOOL)insertFaceprintAnalysisResult:(id)arg1 forContactIdentifier:(id)arg2 ;
-(BOOL)insertContactWithNoProfilePicture:(id)arg1 ;
-(id)cachedContactForContactIdentifier:(id)arg1 ;
-(void)invalidateCacheItemsForContactIdentifiers:(id)arg1 ;
-(unsigned long long)numberOfCachedContacts;
-(id)dataModelName;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1 ;
-(void)invalidateCacheItemForContactIdentifier:(id)arg1 ;
-(void)enumerateCachedEntriesUsingBlock:(/*^block*/id)arg1 ;
-(NSPredicate *)entryPredicateWithContactIdentifier;
-(void)setEntryPredicateWithContactIdentifier:(NSPredicate *)arg1 ;
-(NSPredicate *)entryPredicateWithContactIdentifiers;
-(void)setEntryPredicateWithContactIdentifiers:(NSPredicate *)arg1 ;
-(NSPredicate *)entryPredicateWithUpdateTimestamp;
-(void)setEntryPredicateWithUpdateTimestamp:(NSPredicate *)arg1 ;
@end

