/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/NSSecureCoding.h>

@class NSMutableArray;

@interface VMUNodeToStringMap : NSObject <NSSecureCoding> {

	NSMutableArray* _strings;
	void* _stringToIndexMapVoidPtr;
	void* _nodeToStringIndexMapVoidPtr;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_claimUnarchivingOfClass:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)uniquedStringCount;
-(unsigned)_indexForString:(id)arg1 ;
-(void)setString:(id)arg1 forNode:(unsigned)arg2 ;
-(id)stringForNode:(unsigned)arg1 ;
@end
