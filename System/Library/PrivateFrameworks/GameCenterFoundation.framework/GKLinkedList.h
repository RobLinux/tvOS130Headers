/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKListNode;

@interface GKLinkedList : NSObject {

	GKListNode* _headNode;
	GKListNode* _tailNode;

}

@property (assign,nonatomic) GKListNode * headNode;              //@synthesize headNode=_headNode - In the implementation block
@property (assign,nonatomic) GKListNode * tailNode;              //@synthesize tailNode=_tailNode - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(void)removeNode:(id)arg1 ;
-(void)removeAllNodes;
-(void)insertNode:(id)arg1 before:(id)arg2 ;
-(id)nodeForInsertionWithValue:(id)arg1 ;
-(void)insertNodeAtBeginning:(id)arg1 ;
-(id)insertNodeAtBeginningWithValue:(id)arg1 forKey:(id)arg2 ;
-(GKListNode *)tailNode;
-(GKListNode *)headNode;
-(void)setHeadNode:(GKListNode *)arg1 ;
-(void)setTailNode:(GKListNode *)arg1 ;
-(BOOL)hasCycle;
-(BOOL)isConsistent;
@end

