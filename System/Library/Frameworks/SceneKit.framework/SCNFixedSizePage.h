/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
@class NSMutableIndexSet;

@interface SCNFixedSizePage : NSObject {

	id<MTLBuffer> _buffer;
	unsigned long long _elementSize;
	NSMutableIndexSet* _freeIndices;

}

@property (nonatomic,readonly) id<MTLBuffer> buffer;              //@synthesize buffer=_buffer - In the implementation block
-(void)dealloc;
-(id<MTLBuffer>)buffer;
-(BOOL)isFull;
-(void)deallocateElementAtOffset:(unsigned long long)arg1 ;
-(unsigned long long)_allocateElement;
-(id)initWithBuffer:(id)arg1 elementSize:(unsigned long long)arg2 ;
-(BOOL)hasFreeElementsLeft;
-(id)newSubBuffer;
@end

