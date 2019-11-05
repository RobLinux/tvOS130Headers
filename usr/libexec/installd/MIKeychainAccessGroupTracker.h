/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:42 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/installd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject;

@interface MIKeychainAccessGroupTracker : NSObject {

	NSCountedSet* _refs;
	NSObject*<OS_dispatch_queue> _q;

}

@property (nonatomic,retain) NSCountedSet * refs;                             //@synthesize refs=_refs - In the implementation block
@property (q,nonatomic,readonly) NSObject*<OS_dispatch_queue> q;              //@synthesize q=_q - In the implementation block
+(id)sharedTracker;
-(id)init;
-(NSObject*<OS_dispatch_queue>)q;
-(void)invalidateCache;
-(void)setRefs:(NSCountedSet *)arg1 ;
-(BOOL)_onQueue_addReferencesForBundle:(id)arg1 error:(id*)arg2 ;
-(NSCountedSet *)refs;
-(void)_onQueue_discoverReferences;
-(id)_keychainAccessGroupsForApp:(id)arg1 error:(id*)arg2 ;
-(BOOL)_removeGroupsWithError:(id)arg1 error:(id*)arg2 ;
-(id)_keychainAccessGroupsForBundle:(id)arg1 error:(id*)arg2 ;
-(void)reconcile;
-(BOOL)addReferencesForBundle:(id)arg1 error:(id*)arg2 ;
-(BOOL)_onQueue_updateReferencesWithOldBundle:(id)arg1 newBundle:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateReferencesWithOldBundle:(id)arg1 newBundle:(id)arg2 error:(id*)arg3 ;
-(BOOL)_onQueue_removeReferencesForBundle:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeReferencesForBundle:(id)arg1 error:(id*)arg2 ;
@end

