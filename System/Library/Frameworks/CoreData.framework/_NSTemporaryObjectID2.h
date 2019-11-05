/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSTemporaryObjectID.h>

@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {

	id _store;
	_NS128bitWrapper* _uuid128;

}
+(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(void)finalize;
-(id)persistentStore;
-(id)_storeIdentifier;
-(id)_referenceData;
-(void)_setPersistentStore:(id)arg1 ;
-(BOOL)_isPersistentStoreAlive;
@end

