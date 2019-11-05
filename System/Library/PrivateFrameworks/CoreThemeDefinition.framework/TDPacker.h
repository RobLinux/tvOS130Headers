/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class NSArray, _TDPackerNode;

@interface TDPacker : NSObject {

	/*^block*/id _sizeHandler;
	NSArray* _objectsToPack;
	_TDPackerNode* _root;
	NSArray* _packedObjects;

}

@property (retain) _TDPackerNode * root;                                          //@synthesize root=_root - In the implementation block
@property (retain) NSArray * packedObjects;                                       //@synthesize packedObjects=_packedObjects - In the implementation block
@property (nonatomic,retain) NSArray * objectsToPack; 
@property (nonatomic,readonly) unsigned long long countOfEmptyNodes; 
-(void)dealloc;
-(_TDPackerNode *)root;
-(void)setRoot:(_TDPackerNode *)arg1 ;
-(void)setPackedObjects:(NSArray *)arg1 ;
-(NSArray *)objectsToPack;
-(id)_findNode:(id)arg1 ofSize:(CGSize)arg2 ;
-(id)_splitNode:(id)arg1 toSize:(CGSize)arg2 ;
-(id)_growNodeToSize:(CGSize)arg1 ;
-(void)_countOfEmptyNodes:(id)arg1 count:(unsigned long long*)arg2 ;
-(id)_growRight:(CGSize)arg1 ;
-(id)_growDown:(CGSize)arg1 ;
-(void)setSizeHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)sizeHandler;
-(void)setObjectsToPack:(NSArray *)arg1 ;
-(void)pack;
-(CGSize)enclosingSize;
-(unsigned long long)countOfEmptyNodes;
-(BOOL)objectAtIndexFit:(long long)arg1 ;
-(CGPoint)fitPositionOfObjectAtIndex:(long long)arg1 ;
-(NSArray *)packedObjects;
@end

