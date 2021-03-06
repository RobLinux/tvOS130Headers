/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:39 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKDispatchGroup.h>

@class GKClientProxy, NSManagedObjectContext, GKResourceManager;

@interface GKCacheTransactionGroup : GKDispatchGroup {

	GKClientProxy* _client;
	NSManagedObjectContext* _context;
	GKResourceManager* _weakResourceManager;

}

@property (nonatomic,retain) GKClientProxy * client;                           //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * context;                 //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) GKResourceManager * resourceManager;              //@synthesize weakResourceManager=_weakResourceManager - In the implementation block
+(id)dispatchGroup;
+(id)dispatchGroupWithName:(id)arg1 ;
+(id)transactionGroupWithContext:(id)arg1 resourceManager:(id)arg2 client:(id)arg3 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(GKClientProxy *)client;
-(NSManagedObjectContext *)context;
-(void)setClient:(GKClientProxy *)arg1 ;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(GKResourceManager *)resourceManager;
-(id)transactionGroup;
-(void)performOnManagedObjectContext:(/*^block*/id)arg1 ;
-(void)performAndJoinForResources:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)writeResources:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithName:(id)arg1 context:(id)arg2 resourceManager:(id)arg3 client:(id)arg4 ;
-(void)setResourceManager:(GKResourceManager *)arg1 ;
-(void)readResources:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end

