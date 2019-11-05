/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Espresso/Espresso-Structs.h>
@interface EspressoContext : NSObject {

	shared_ptr<Espresso::abstract_context>* _ctx;

}

@property (readonly) shared_ptr<Espresso::abstract_context>* ctx;              //@synthesize ctx=_ctx - In the implementation block
@property (readonly) int platform; 
-(shared_ptr<Espresso::abstract_context>*)ctx;
-(id)initWithContext:(shared_ptr<Espresso::abstract_context>*)arg1 ;
-(int)platform;
-(id)initWithPlatform:(int)arg1 ;
-(id)initWithDevice:(id)arg1 andWisdomParams:(id)arg2 ;
-(id)initWithNetworkContext:(id)arg1 ;
-(void)set_priority:(BOOL)arg1 low_priority_max_ms_per_command_buffer:(float)arg2 gpu_priority:(unsigned)arg3 ;
@end
