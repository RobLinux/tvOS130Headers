/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableCopying.h>

@interface __CFPrefsWeakObservers : NSObject <NSMutableCopying> {

	cfobservers_t* values;
	unsigned long long count;

}
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(unsigned char)addObject:(id)arg1 ;
-(unsigned char)removeObject:(id)arg1 ;
-(unsigned long long)approximateCount;
-(unsigned long long)borrowObjects:(id*)arg1 count:(unsigned long long)arg2 ;
@end

