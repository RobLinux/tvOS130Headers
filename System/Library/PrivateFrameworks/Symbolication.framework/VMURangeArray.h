/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/NSCopying.h>

@interface VMURangeArray : NSObject <NSCopying> {

	unsigned _count;
	VMURange* _ranges;
	unsigned _max;
	BOOL _sorted;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(VMURange)rangeAtIndex:(unsigned)arg1 ;
-(VMURange)range;
-(void)setCapacity:(unsigned)arg1 ;
-(void)sort;
-(VMURange*)ranges;
-(void)addRange:(VMURange)arg1 ;
-(BOOL)intersectsRange:(VMURange)arg1 ;
-(unsigned long long)indexForLocation:(unsigned long long)arg1 ;
-(void)removeRangeAtIndex:(unsigned)arg1 ;
-(void)removeAllRanges;
-(id)initWithRanges:(const VMURange*)arg1 count:(unsigned)arg2 ;
-(void)addRanges:(id)arg1 ;
-(VMURange)rangeForLocation:(unsigned long long)arg1 ;
-(void)insertRange:(VMURange)arg1 atIndex:(unsigned)arg2 ;
-(BOOL)intersectsLocation:(unsigned long long)arg1 ;
-(VMURange)subrangeNotExcludedBySelfForRange:(VMURange)arg1 ;
-(VMURange)largestRange;
-(unsigned long long)sumLengths;
@end

