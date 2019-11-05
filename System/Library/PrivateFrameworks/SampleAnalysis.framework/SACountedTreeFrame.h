/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SACountedTreeNode.h>
#import <SampleAnalysis/SAJSONSerialization.h>

@class SAFrame, NSMutableArray, NSString;

@interface SACountedTreeFrame : SACountedTreeNode <SAJSONSerialization> {

	BOOL _isLeafFrame;
	SAFrame* _frame;
	NSMutableArray* _children;

}

@property (readonly) SAFrame * frame;                               //@synthesize frame=_frame - In the implementation block
@property (readonly) BOOL isLeafFrame;                              //@synthesize isLeafFrame=_isLeafFrame - In the implementation block
@property (readonly) NSMutableArray * children;                     //@synthesize children=_children - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)treeFrameWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 isLeafFrame:(BOOL)arg4 ;
+(void)enumerateTree:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSMutableArray *)children;
-(SAFrame *)frame;
-(BOOL)isLeafFrame;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(id)initWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 isLeafFrame:(BOOL)arg4 ;
@end

