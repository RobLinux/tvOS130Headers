/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSArray, PGGraphNode;

@interface PGPotentialPetMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	NSArray* _petAssets;
	PGGraphNode* _owner;
	long long _year;

}

@property (retain) NSArray * petAssets;                //@synthesize petAssets=_petAssets - In the implementation block
@property (readonly) PGGraphNode * owner;              //@synthesize owner=_owner - In the implementation block
@property (readonly) long long year;                   //@synthesize year=_year - In the implementation block
-(long long)year;
-(PGGraphNode *)owner;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithOwner:(id)arg1 year:(long long)arg2 ;
-(NSArray *)petAssets;
-(void)setPetAssets:(NSArray *)arg1 ;
@end

