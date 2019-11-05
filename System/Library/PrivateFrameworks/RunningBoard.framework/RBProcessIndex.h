/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/NSFastEnumeration.h>

@class NSMutableOrderedSet, NSMutableDictionary;

@interface RBProcessIndex : NSObject <NSFastEnumeration> {

	os_unfair_lock_s _lock;
	unsigned long long _capacity;
	NSMutableOrderedSet* _processes;
	NSMutableDictionary* _processByIdentity;
	NSMutableDictionary* _processByInstance;
	NSMutableDictionary* _processByIdentifier;

}
+(id)index;
+(id)indexWithCapacity:(unsigned long long)arg1 ;
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RB3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(BOOL)containsIdentifier:(id)arg1 ;
-(id)processForIdentity:(id)arg1 ;
-(id)allProcesses;
-(BOOL)removeProcess:(id)arg1 ;
-(BOOL)addProcess:(id)arg1 ;
-(BOOL)containsProcess:(id)arg1 ;
-(id)processForIdentifier:(id)arg1 ;
-(BOOL)containsIdentity:(id)arg1 ;
-(id)processForInstance:(id)arg1 ;
-(void)_lock_removeProcess:(id)arg1 ;
-(BOOL)containsInstance:(id)arg1 ;
@end

