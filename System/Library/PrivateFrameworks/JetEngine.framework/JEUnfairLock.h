/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JetEngine/JetEngine-Structs.h>
#import <JetEngine/NSLocking.h>

@interface JEUnfairLock : NSObject <NSLocking> {

	os_unfair_lock_s _unfairLock;

}
+(void)initialize;
-(id)init;
-(void)lock;
-(void)unlock;
@end

