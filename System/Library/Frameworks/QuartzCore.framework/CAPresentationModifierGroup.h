/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@interface CAPresentationModifierGroup : NSObject {

	void* _shmem;
	unsigned long long _capacity;
	unsigned long long _count;

}

@property (readonly) unsigned long long capacity; 
@property (readonly) unsigned long long count; 
+(id)groupWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(Shmem*)shmem;
-(unsigned long long)capacity;
-(void)flush;
-(unsigned long long)nextSlot;
-(void)resetBitMask;
-(void)markWritten:(unsigned long long)arg1 ;
@end
