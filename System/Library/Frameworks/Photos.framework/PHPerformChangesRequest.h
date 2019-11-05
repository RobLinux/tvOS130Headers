/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <AssetsLibraryServices/PLXPCObject.h>
#import <Photos/PHPerformChangesRequest.h>

@protocol PHPerformChangesRequest <NSObject>
@required
-(void)recordInsertRequest:(id)arg1;
-(void)recordUpdateRequest:(id)arg1;
-(void)recordDeleteRequest:(id)arg1;

@end

#import <Photos/PHPerformChangesRequestService.h>

@protocol PHPerformChangesRequestService;
@class NSMutableOrderedSet, NSMutableArray, NSOrderedSet, NSArray, NSString;

@interface PHPerformChangesRequest : PLXPCObject <PHPerformChangesRequest, PHPerformChangesRequestService> {

	BOOL _inService;
	id<PHPerformChangesRequestService> _service;
	NSMutableOrderedSet* _inserts;
	NSMutableOrderedSet* _updates;
	NSMutableOrderedSet* _deletes;
	NSMutableOrderedSet* _failedOnDemandRequests;
	NSMutableArray* _saveTokens;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSOrderedSet * inserts;                //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * updates;                //@synthesize updates=_updates - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * deletes;                //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,readonly) NSArray * saveTokens;                  //@synthesize saveTokens=_saveTokens - In the implementation block
@property (nonatomic,readonly) NSArray * requestSets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(xpc_type_sRef)type;
-(NSString *)description;
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)encodeWithCoder:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(NSOrderedSet *)updates;
-(NSOrderedSet *)deletes;
-(void)recordInsertRequest:(id)arg1 ;
-(void)recordUpdateRequest:(id)arg1 ;
-(void)recordDeleteRequest:(id)arg1 ;
-(id)uuidForSaveToken:(id)arg1 ;
-(NSArray *)requestSets;
-(void)recordSaveToken:(id)arg1 ;
-(void)recordFailedOnDemandRequest:(id)arg1 ;
-(void)notifyChangesTransactionFailedWithLibrary:(id)arg1 error:(id)arg2 ;
-(void)decodeWithService:(id)arg1 clientAuthorization:(id)arg2 ;
-(NSOrderedSet *)inserts;
-(NSArray *)saveTokens;
@end

