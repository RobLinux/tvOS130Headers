/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>

@class NSString, NSDocInfo;

@interface NSLeafProxy : _UKNOWN_SUPERCLASS_ <NSCopying> {

	Class isa;
	NSString* dir;
	NSString* file;
	NSDocInfo* docInfo;
	long long refCount;
	id realObject;

}
+()initialize;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
-(id)retain;
-(void)release;
-(id)autorelease;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(BOOL)isProxy;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3 ;
-(void)reallyDealloc;
@end
