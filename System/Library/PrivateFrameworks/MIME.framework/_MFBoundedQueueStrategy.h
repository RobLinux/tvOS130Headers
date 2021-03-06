/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFQueueingStrategy.h>

@class NSString;

@interface _MFBoundedQueueStrategy : NSObject <MFQueueingStrategy> {

	/*^block*/id _overflowHandler;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) id overflowHandler;                       //@synthesize overflowHandler=_overflowHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * descriptionType; 
-(void)dealloc;
-(unsigned long long)capacity;
-(id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
-(NSString *)descriptionType;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2 ;
-(id)overflowHandler;
@end

