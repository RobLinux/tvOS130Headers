/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLFunctionReflection.h>

@class NSArray;

@interface MTLFunctionReflectionInternal : MTLFunctionReflection {

	NSArray* _builtInArguments;
	NSArray* _arguments;

}
-(void)dealloc;
-(id)arguments;
-(id)initWithArguments:(id*)arg1 argumentCount:(unsigned)arg2 builtInArgumentCount:(unsigned)arg3 ;
-(id)initWithDevice:(id)arg1 reflectionData:(id)arg2 functionType:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(id)builtInArguments;
@end
