/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {

	int _cd_rc;
	int _counter;
	NSEntityDescription* _entity;

}
+(void)initialize;
+(id)retain;
+(void)release;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(long long)version;
+(BOOL)accessInstanceVariablesDirectly;
+(id)_retain_1;
+(void)_release_1;
+(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(void)_storeDeallocated;
+(id)initWithEntity:(id)arg1 ;
+(unsigned)allocateBatch:(id*)arg1 forEntity:(id)arg2 count:(unsigned)arg3 ;
+(Class)classForStore:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(void)finalize;
-(id)entity;
-(id)URIRepresentation;
-(id)persistentStore;
-(id)_storeIdentifier;
-(BOOL)isTemporaryID;
-(id)_referenceData;
-(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
-(void)_setPersistentStore:(id)arg1 ;
-(id)_retainedURIString;
-(BOOL)_isPersistentStoreAlive;
-(id)initWithEntity:(id)arg1 ;
-(int)_temporaryIDCounter;
@end

