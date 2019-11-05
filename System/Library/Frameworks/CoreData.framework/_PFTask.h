/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface _PFTask : NSObject {

	int _cd_rc;
	void* _task;
	void* arguments;
	opaque_pthread_mutex_t lock;
	opaque_pthread_cond_t condition;
	int isFinishedFlag;

}
+(int)getNumActiveProcessors;
+(double)getProcessorSpeed;
+(unsigned long long)getPhysicalMemory;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(void)dealloc;
-(void)finalize;
-(id)initWithFunction:(/*function pointer*/void*)arg1 withArgument:(void*)arg2 andPriority:(int)arg3 ;
@end

