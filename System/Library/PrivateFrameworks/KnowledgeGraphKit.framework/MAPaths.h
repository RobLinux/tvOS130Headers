/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MAPaths : NSObject {

	NSMutableArray* _paths;

}
+(id)paths;
+(id)pathsWithPaths:(id)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(void)addPath:(id)arg1 ;
-(void)setPaths:(id)arg1 ;
-(void)removeAllPaths;
-(id)graphRepresentationWithStrictNodes:(BOOL)arg1 strictEdges:(BOOL)arg2 ;
-(id)uniqueNodesForLabel:(id)arg1 ;
-(id)uniqueEdgesForLabel:(id)arg1 ;
@end
